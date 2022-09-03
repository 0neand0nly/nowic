// This is start of the header guard.  
// PRINTFUNC_H can be any unique name.  
// By convention, we use the name of the header file.
#ifndef PRINTFUNC_H
#define PRINTFUNC_H

#include <vector>
#include <string>

// declare the function prototypes
void printfunc(int n, char *args[]){
    for (int i = 0; i < n-1; i++)
		std::cout << "Hello " << args[i+1] << "!" << std::endl;
}
void printfunc(std::vector<std::string> names){
    for(int i =0; i<names.size()-1;i++){
		std::cout<<"Hello "<< names[i+1] <<"!\n";

	}
}

// This is the end of the header guard
#endif