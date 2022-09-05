//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637

#include<iostream>
#include<string>

using namespace std;

int main(int argc,char * argv[]){
    string str;
    while(1){
    cout<<"Enter a name: ";
     getline(cin, str);
     if(str.length()>0)
    cout<<"Hello, "<< str<<"\n" ;
    else{
        cout<< "Hello World!"<<endl;
        break;
    }
    }
    
    
    return 0;
}