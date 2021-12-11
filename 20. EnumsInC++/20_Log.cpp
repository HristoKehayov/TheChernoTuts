#include <iostream>
#include "20_Log.h"

// instructing what the functions does
// by subtracting from the class Log we defined in Log header

void Log::GetLevel()
{
	if (m_LogLevel == Log::Level::LevelError)
		std::cout << "[CURRENT LEVEL]: Error" << std::endl;
	else if (m_LogLevel == Log::Level::LevelWarning)
		std::cout << "[CURRENT LEVEL]: Warning" << std::endl;
	else
		std::cout << "[CURRENT LEVEL]: Info" << std::endl;
}
void Log::SetLevel(Log::Level level)
{
	std::cout << "Log Level Changed!" << std::endl;
	m_LogLevel = level;
}
void Log::Error(const char* message)
{
	if (m_LogLevel == Log::Level::LevelError)
		std::cout << "[Error]: " << message << std::endl;
}
void Log::Warn(const char* message)
{
	if (m_LogLevel == Log::Level::LevelWarning)
		std::cout << "[Warning]: " << message << std::endl;
}
void Log::Info(const char* message)
{
	if (m_LogLevel == Log::Level::LevelInfo)
		std::cout << "[INFO]: " << message << std::endl;
}

