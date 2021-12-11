#include <iostream>
#include "11_Log.h"

int main()
{
	InitializeLog();

	Log("Control Flow in C++");

	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0)
			return 0;
		Log("For Loop: Hello World");
	}

	Log("==================");

	int i = 0;
	while (i < 5)
	{
		Log("While Loop: Hello World");
		i++;
	}

	Log("==================");

	do
	{
		// al least will execute once no matter what
		Log("Executed do while loop");
	} while (i < 5);

	std::cin.get();
	return 0;
}