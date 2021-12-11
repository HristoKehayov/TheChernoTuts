#include <iostream>

int main()
{
	int x = 5;
	bool comparisonResult = x == 5;

	const char* ptr = "Hello";

	if (comparisonResult)
		std::cout << "Comparison is True" << std::endl;

	if (ptr)
		std::cout << "Pointer is True" << std::endl;
	else if (ptr == "Hello")
		std::cout << "Pointer is Hello" << std::endl;
	else
		std::cout << "Pointer is False" << std::endl;

	return 0;
}