#include <iostream>
using namespace std;

bool GameChecker(int arr[][4])
{
	for (int i = 0; i < 15; i++)
	{
		if (arr[0][i] != i + 1)
			return 0;
	}
	return 1;
}