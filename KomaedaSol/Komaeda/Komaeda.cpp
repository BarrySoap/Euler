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

int main()
{
	EulerProblemOne();

    return 0;
}

