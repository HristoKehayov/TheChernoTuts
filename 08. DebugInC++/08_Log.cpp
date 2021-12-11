#include <iostream>
#include "08_Log.h"

void InitLog()
{
	Log("Initializing Log ...");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}