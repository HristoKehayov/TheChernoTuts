#include <iostream>
#include "10_Log.h"

int main ()
{
	InitializeLog();

	Log("Loops in C++");


	// for (init once at beginning; comparison; executed at the end of loop)


	for (int i = 0; i < 5; i++)
	{
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
	} while (i < 5);

	std::cin.get();
	return 0;
}