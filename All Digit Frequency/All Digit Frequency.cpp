#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int FrequencyDigit(short Digit, int N)
{
	int Count = 0;
	int Reminder = 0;
	while (N > 0)
	{
		Reminder = N % 10;
		N = N / 10;
		if (Reminder == Digit)
		{
			Count++;
		}
	}
	return Count;
}

void PrintAllDigitFrequency(int N)
{	
	for (int i = 0; i <= 9; i++)
	{		
		if(FrequencyDigit(i,N)!=0)
		{
		cout << "Digit " << i << " frequency is " << FrequencyDigit(i, N) << " time(s)\n";

		}
		
	}
	
}

int main()
{
	
	PrintAllDigitFrequency(ReadPositiveNumber("enter a positive Number: "));

	return 0;
}