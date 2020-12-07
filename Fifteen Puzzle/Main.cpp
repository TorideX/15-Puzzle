#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#include <Windows.h> 
using namespace std;

string Identification();
void Random(int a[][4]);
bool GameChecker(int arr[][4]);
int Movement(int arr[4][4], int counter);
int time_M_S(time_t start, time_t end, int Time[]);
void printArray(int massiv[4][4], int counter, string name, bool winner);

int main()
{
	int massiv[4][4], counter = 0;

	srand(time(NULL));
	Random(massiv);
	string name = Identification();
	int Time[3];
	time_t start, end;
	time(&start);
	int i = 0;
	while (!GameChecker(massiv))
	{
		printArray(massiv, counter, name, false);
		counter = Movement(massiv, counter);
	}
	time(&end);
	cout << endl;
	printArray(massiv, counter, name, true);
	time_M_S(start, end, Time);
	system("pause");
}