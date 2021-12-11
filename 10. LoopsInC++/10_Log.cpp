#include "10_Log.h"
#include <iostream>

void InitializeLog()
{
	Log("Log has been Initialized!");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}