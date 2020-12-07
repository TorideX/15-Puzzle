#include <ctime>
#include <iostream>

int changer(int a[][4], int i)
{
	bool checker = true;
	int b;
	b = 0 + rand() % 16;
	for (int j = 0; j < 16; j++)
	{
		if (a[0][j] == b)
		{
			checker = false;
			break;
		}
	}
	if (checker)
	{
		a[0][i] = b;
		i++;
	}

	if (i == 16)
	{
		return 1;
	}
	changer(a, i);
}
void Random(int a[][4])
{
	int i = 0;
	changer(a, i);
}