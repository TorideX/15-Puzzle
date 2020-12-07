#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#include <Windows.h> 
using namespace std;

void ZeroOrNot(int massiv[][4], int i, int j, int digit) {
	if (!digit)
	{
		cout << " ";
	}
	else
	{
		cout << massiv[i][j];
	}
}
void printArray(int massiv[4][4], int counter, string name, bool winner) {
	system("cls");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //consolda text-in rengini deyiwmek ucun
	SetConsoleTextAttribute(hConsole, 11);//rengi deyiwir
	cout << "#########################################################################\n";
	cout << "Rules:\n";
	cout << "\t\tYou have to play with alphabets.";
	
	cout << "\n\t\t[/\\] for Up"; // char ile yazanda sual iwaresi kimi gorunur
	cout << "\n\t\t[\\/] for Down";
	cout << "\n\t\t[" << (char)174 << "] for Left";

	cout << "\n\t\t[" << (char)175 << "] for Right\n";
	cout << "#########################################################################\n";
	SetConsoleTextAttribute(hConsole, 7);//rengi deyiwir
	cout << "--------------------------------------------------------------------\n";
	cout << "Name: " << name << endl;
	cout << "Number of Movement: " << counter << endl; //gediwlerin sayi
	SetConsoleTextAttribute(hConsole, 7);//rengi deyiwir
	cout << "--------------------------------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 9);//rengi deyiwir
	cout << "\t\t\t\t\t*********************\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "\t\t\t\t\t* ";
		for (int j = 0; j < 4; j++)
		{
			(winner) ? SetConsoleTextAttribute(hConsole, 10) : SetConsoleTextAttribute(hConsole, 6); //udsa eger text-in rengi yawil olacaq udmasa qehveyi
			if (massiv[i][j] <= 9) // eger eded bir reqemlidise bowluq qoyulur. Bu sirf qewey gorunsun deyedi
			{
				cout << " ";
			}
			ZeroOrNot(massiv, i, j, massiv[i][j]); // eger 0 olsa onda bowluq qoyulacaq eks halda hemin eded yazilacaq
			SetConsoleTextAttribute(hConsole, 9);//rengi deyiwir
			cout << " * ";
		}
		SetConsoleTextAttribute(hConsole, 9);
		cout << endl << "\t\t\t\t\t*********************" << endl;
	}
	if (winner) // eger qalib varsa tebrikler yazisi, qalibin adi ve gediwlerin sayi ekrana cixacaq
	{
		SetConsoleTextAttribute(hConsole, 14);
		cout << "\n\t\t\t\t\t   CONGRATULATIONS\n";
		cout << "\t\t\t\tWinner: " << name << endl;
		cout << "\t\t\t\tCounter of Movement: " << counter << endl;
	}
}