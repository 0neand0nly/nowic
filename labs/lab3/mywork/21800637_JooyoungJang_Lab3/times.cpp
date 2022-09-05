//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637
#include<iostream>
#include<vector>
using namespace std;
#if 1
//multiply even number elemts in the list by 10
// without using refernce variable

int main(int argc, char* argv[]){
    vector<int> list={0,1,2,2,4,5,6,7,8,8,10};
    for(size_t i=0; i<list.size(); i++){
        if(list[i]%2==0){
            list[i]=list[i]*10;
        }
       
    }

    for(auto x: list) cout << x <<" ";
    return 0;
}
#else
//muliply even number elements in the list by 10
//using reference variable

int main(int argc, char* argv[]){
    vector<int> list={0,1,2,2,4,5,6,7,8,8,10};
    vector<int> &z = list;
    //cout<<"your code here";
    for(size_t i=0; i<list.size();i++){
        if(z[i]%2==0){
            z[i]=z[i]*10;
        }
    }

    for(auto x: list) cout << x <<" ";
    return 0;
}




#endif