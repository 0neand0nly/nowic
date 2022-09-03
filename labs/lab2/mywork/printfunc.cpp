//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637

#include <iostream>
#include <vector>


void printfunc(int n, char *names[]) {
	for (int i = 0; i < n; i++)
		std::cout << "Hello " << names[i] << "!" << std::endl;
}

void printfunc(std::vector<std::string> names){
	for(int i =0; i<names.size();i++){
		std::cout<<"Hello "<< names[i] <<"!\n";

	}
}

