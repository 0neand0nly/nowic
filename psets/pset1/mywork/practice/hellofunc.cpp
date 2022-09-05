//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637

#include<iostream>
#include<string>
#include"printfunc.cpp"
using namespace std;

int main(int argc, char** argv){
    string str;
    if(argc>1){
       printfunc(argc-1,argv);
    }
    else{
        while(1){
        cout<<"Enter a name: ";
        getline(cin, str);
        if(str.length()>0){
             cout<<"Hello, "<< str<<"\n" ;
            if(str=="Peter"){
        
                break;
            } 
        }
       
        else{
       
        break;
    }
    }
    }
     cout<< "Enter a name: Hello World!"<<endl;
    return 0;

   
} 