#pragma once
#ifndef __BOOL
#define BOOL char
#define TRUE 1
#define FALSE 0
#define __BOOL
#endif // !__BOOL

#define ABS(x)\
(((TWO*(x))+1)%2)*x
#define SIGN(x)\
(((TWO*(x))+1)%2)
#define MAX(x,y)\
(x+y+ABS((x-y)))/2
#define MIN(x,y)\
(x+y-ABS((x-y)))/2

//retruns if the num even
BOOL IsEven(int);
//retruns if the num odd
BOOL IsOdd(int);
//retruns if the number is prime
BOOL IsPrime(int);
//retrunes the num of digits that a number as
unsigned long Length(int);
//retrun the number reversed
int ReverseNum(int);
//retruns the sqrt of a num
float Newton_Raps(int);
//retruns if even by bit calc, gets the data as a pointer and retruns the answer in pointer
void IsEvenBitWise(int, BOOL*);
// retruns if odd by bit calc, gets the data as a pointerand retruns the answer in pointer
void IsOddBitWise(int, BOOL*);
// swaiping to vals
void Swap(int*, int*);
