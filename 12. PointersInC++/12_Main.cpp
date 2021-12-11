#include <iostream>


#define LOG(x) std::cout << x << std::endl;

int main()
{
	/*
	*	nullptr = NULL = 0
	*	
	*	pointer = just memory address holder ONLY HOLDER, TYPE DOES NOT MATTER
	*	
	*	* -> defines pointer address
	*	& -> gets / retrieves the memory address defined somewhere earlier
	*/ 

	// define var
	int var = 8;

	// only get pointer (the memory address where var is stored) by using key: &
	int* ptr = &var;

	// get access to read/write pointer values with * at beginning
	*ptr = 10;

	LOG(var);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	// double pointer is just pointer that holds another pointer memory addresss
	char** doubleptr = &buffer;

	delete[] buffer;
	std::cin.get();
	return 0;
}