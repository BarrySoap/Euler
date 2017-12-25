#include "stdafx.h"

void EulerProblemOne() 
{
	int sum = 0;

	for (int i = 0; i < 1000; i++) 
	{
		if (i % 3 == 0 || i % 5 == 0) 
		{
			sum += i;
		}
	}

	printf("Euler Problem One: %d \n", sum);
}

void EulerProblemTwo() 
{
	int previousNumber = 1;
	int fibonacci = 2;
	int temp = 0;
	int sum = 0;

	while (sum <= 4000000) 
	{
		if (fibonacci % 2 == 0) 
		{
			sum += fibonacci;
		}

		temp = fibonacci;
		fibonacci = fibonacci + previousNumber;
		previousNumber = temp;
	}

	printf("Euler Problem Two: %d \n", sum);
}

bool IsPrime(int number) 
{
	int multiples = 0;

	if (number == 0 || number == 1) 
	{
		return false;
	}

	for (int i = 0; i < number; i++) 
	{
		for (int j = 0; j < number; j++) 
		{
			if (i != 1 && i != number) 
			{
				if (i * j == number) 
				{
					multiples++;
				}
			}
		}
	}

	if (multiples == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int PrimeFactor(double number) 
{
	while (IsPrime(number) == false) 
	{

	}
}

void EulerProblemThree() 
{
	int largestNumber = 600851475143;
	int largestPrimeFactor = 0;

	
}

int main()
{
	//EulerProblemOne();
	//EulerProblemTwo();
	EulerProblemThree();

    return 0;
}

