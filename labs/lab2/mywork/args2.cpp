// C++ for C Coders & Data Structures
// Lecture note by idebtor@gmail.com
//
// Lab 2:
//	1. Using vector class in c++
//	2. ranged-for loop
//	3. function overloading
//	4. include file
//  5. not using `using namespace std;`

//On the honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
// Jooyoung Jang 21800637

#include<iostream>
#include<vector>
#include"printfunc.h"




int main(int argc, char *argv[]) {
	std::cout << "Print **argv using printfunc(**argv) except 1st one\n";
	std::cout << "your code here\n";

	printfunc(argc,argv);
	 
			



	std::cout << "Copy **argv using vector<string> except 1st one\n";
	

	// print names only using for-loop and names
	// do not use argc/argv and ranged-for loop
	std::cout << "Print names using for-loop, but not argc/argv, ranged-for\n";
	std::vector<std::string> str_arr;

	 for (int i = 0; i < argc; i++)
		str_arr.push_back(argv[i]);
	
	
	 for (int i = 0; i < str_arr.size()-1; i++)
		std::cout << "Hello " << str_arr[i+1] << "!" << std::endl;

	// print names using printfunc(vector<string>)
	// use ranged-for loop in printfunc(vector<string>)
	// do not use `using namespace std;` in printfunc.cpp 
	 std::cout << "Print names using printfunc(vector<string>)\n";
	 printfunc(str_arr);

	return 0;
}
