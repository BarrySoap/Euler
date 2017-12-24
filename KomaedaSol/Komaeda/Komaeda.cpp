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

int main()
{
	//EulerProblemOne();
	EulerProblemTwo();

    return 0;
}

