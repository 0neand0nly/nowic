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
        cout<< "Hello World!";
        break;
    }
    }
    }
    
    return 0;

   
} 