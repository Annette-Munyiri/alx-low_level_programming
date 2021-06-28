#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates random valid passwords
 * Return: Always 0.
 */
int main(void)
{
	char pword[84];
	int index = 0, sum = 0, dhalf1, dhalf2;

	srand(time(0));

	while (sum < 2772)
	{
		pword[index] = 33 + rand() % 94;
		sum += pword[index++];
	}

	pword[index] = '\0';

	if (sum != 2772)
	{
		dhalf1 = (sum - 2772) / 2;
		dhalf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dhalf1++;

		for (index = 0; pword[index]; index++)
		{
			if (pword[index] >= (33 + dhalf1))
			{
				pword[index] -= dhalf1;
				break;
			}
		}
		for (index = 0; pword[index]; index++)
		{
			if (pword[index] >= (33 + dhalf2))
			{
				pword[index] -= dhalf2;
				break;
			}
		}
	}
	printf("%s", pword);
	return (0);
}
