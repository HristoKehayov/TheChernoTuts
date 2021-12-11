#include <iostream>
#include "20_Log.h"


enum Example : unsigned char
{
	// A = 0 , not specified
	// B = 5 even though C is not specified it increments by 1 if the previous is specified
	// C = 7
	A, B=5, C, D
};

int main()
{
	Example value = Example::B;

	int intValue = Example::B;

	if (value == Example::B)
	{
		// Do something here
	}


	Log log;
	// Default is Error => 0
	log.SetLevel(Log::Level::LevelInfo);
	log.Warn("I am 1 in Level Enum Index!");
	log.Info("I am 2 in Level Enum Index!");
	log.Error("I am 0 in Level Enum Index!");
	log.GetLevel();

	std::cin.get();
}