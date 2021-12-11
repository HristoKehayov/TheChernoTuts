#pragma once

// defining the class and all of the bodies
// for the functions
class Log
{
public:
	enum class Level : unsigned int { LevelError = 0, LevelWarning, LevelInfo };
private:
	Level m_LogLevel = Level::LevelError;

public:
	void GetLevel();
	void SetLevel(Level level);
	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);
};