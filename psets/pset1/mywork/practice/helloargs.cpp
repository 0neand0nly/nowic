//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637

#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv){
    string str;
    if(argc>1){
        for(int i=1;i<argc;++i){
         cout << "Hello: "<< argv[i]<<"\n";

    }
    }
    else{
        while(1){
    cout<<"Enter a name: ";
     getline(cin, str);
     if(str.length()>0)
    cout<<"Hello, "<< str<<"\n" ;
    else{ 
        break;
    }
    }
    
    }
    cout<< "Hello World!"<<endl;
    return 0;

   
} 