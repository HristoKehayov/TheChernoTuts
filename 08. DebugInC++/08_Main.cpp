#include <iostream>
#include "08_Log.h"

int main()
{
	Log("Debug in C++");


	int a = 8;
	a++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}

	std::cin.get();
}