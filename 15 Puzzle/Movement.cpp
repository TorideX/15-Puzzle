#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void swap(int*i, int*j)
{
	int n = *i;
	*i = *j;
	*j = n;
}

int Movement(int arr[4][4], int counter)
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				int key;

				key = _getch();

				switch (key)
				{
				case KEY_UP:
					if (i != 3)
					{
						counter++;
						swap(&arr[i][j], &arr[i + 1][j]);
					}
					break;
				case KEY_DOWN:
					if (i != 0)
					{
						counter++;
						swap(&arr[i][j], &arr[i - 1][j]);

					}
					break;
				case KEY_LEFT:
					if (j != 3)
					{
						counter++;
						swap(&arr[i][j], &arr[i][j + 1]);
					}
					break;
				case KEY_RIGHT:
					if (j != 0)
					{
						counter++;
						swap(&arr[i][j], &arr[i][j - 1]);
					}
					break;
				}

				goto end;
			}

		}
	}
end:
	return counter;
}