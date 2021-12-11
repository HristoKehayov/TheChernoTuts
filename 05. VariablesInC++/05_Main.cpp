#include <iostream>

int main() 
{
	/*
	* 
	* | ADDRESSING MEMORY |
	* we can only address BYTES!
	* we can NOT address bits
	* 
	* 
	* bit -> 0 or 1
	* 
	* 1 byte = 8 bits
	* 4 byte = 32 bits
	* 
	* (unsigned) char = 1 byte
	* (unsigned) short = 4 byte
	* (unsigned) int = 4 byte
	* (unsigned) long = 4 byte
	* (unsigned) long long = 8 byte
	* 
	* float = 4 byte
	* double = 8 byte
	* 
	* bool = 0(False) or 1(True)
	*/

	int variable = 8; // -2b -> 2b (billions)

	float test = 5.5f;

	std::cout << "Variables in C++" << std::endl;
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;

	std::cout << sizeof(double) << std::endl;


	std::cin.get();
}