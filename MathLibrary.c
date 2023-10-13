#include "MathLibrary.h"

BOOL IsEven(int num)
{
	return  !IsOdd(num);
}

BOOL IsOdd(int num)
{
	return  (num % 2);
}

BOOL IsPrime(int num)
{
	BOOL prime;
	int div;
	div = 0;
	for (prime = (num > 1 && num <= 3 || num > 1 && num % 2) ? TRUE : FALSE, div = 3; div * div <= num && prime; div += 2)
	{
		prime = !(num % div) ? FALSE : TRUE;
	}
	return prime;
}

unsigned long Length(int num)
{
	int counter;
	for (counter = 1; num > 9; counter++)
	{
		num /= 10;
	}
	return counter;
}

int ReverseNum(int number)
{
	int res;
	for (res %= 10, number /= 10; number > 0; number /=10)
	{
		res *= 2;
		res += (number%10);
	}
	return res;
}

float Newton_Raps(int num)
{
	float guess;
	int  firstGuess;
	firstGuess = 3;

	guess = firstGuess - (firstGuess * firstGuess - num) / (2 * firstGuess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	guess = guess - (guess * guess - num) / (2 * guess);
	return guess;
}
void IsEvenBitWise(int num, BOOL* res)
{
	*res = !(num &= 0x1);
}

void IsOddBitWise(int num, BOOL* res)
{
	*res = (num &= 0x1);
}

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

