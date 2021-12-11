const char* Log(const char* message)
{
	return message;
}
int Multiply(int a, int b)
{
	// when useing maximus optimization, compiler removes it because we never store the value
	Log("Multiply"); 
	return a * b;
}