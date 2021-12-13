#include <iostream>

int main()
{
	// By definition int is a pointer
	int example[5];
	int* ptr = example;

	//example[0] = 2;
	//example[4] = 4;


	for (int i = 0; i < 5; i++)
		example[i] = 2;

	example[2] = 5;
	*(ptr + 2) = 6;

	// exist till the end of the "}" or end of function
	// it is also STACK allocation array
	int example_StackArray[5];

	// exist till our program dies (lifetime)
	// it is also HEAP allocation array
	int* example_HeapArray = new int[5];

	delete[] example_HeapArray;

	std::cin.get();
}