#include <iostream>
#include "07_Log.h"
#include "07_Common.h"

void InitLog()
{
	Log("Initializing Log ...");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}