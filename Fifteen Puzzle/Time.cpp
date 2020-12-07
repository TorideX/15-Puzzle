#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#include <Windows.h> 

using namespace std;

int time_M_S(time_t start, time_t end, int Time[])
{
	/*
		Eger Compaler auto Tipini Gotururse Deyishmek Daha yaxshi olar :))
	*/

	/*
	Time[0] ==  1ci Element Saatdi

	Time[1] ==  2ci Element Deqiqedi

	Time[2] ==  3cu Element Sanyedi
	*/

	time_t minute = 0;

	Time[1] = difftime(end, start) / 60;
	Time[0] = Time[1] / 60;
	cout << "\t\t\t\tTime : ";

	//Time[0] Saati Gosterir

	if (Time[0] < 10) { cout << minute << Time[0] << ":"; }
	/*
	Normal Cout Ucun Minute Arxasina Bir 0 Elave Edir
	Eger 10luq sisteme kecdikde asaqdaki if icine girir ve munute olmadan Saatadi Gosterir
	*/
	//=================================================
	if (Time[0] > 10) { cout << Time[0] << ":"; }
	//Time[0] Saati Gosteri
//=====================================================
//======================="Munuts"======================
//=====================================================
	if (Time[1] < 10) { cout << minute << Time[1] << ":"; }

	/*
				Time[1] --->>>> Deqiqeni Gosterir
	*/

	if (Time[1] > 10) { cout << Time[1] << ":"; }
	//=====================================================
	//======================="Secund"======================
	//=====================================================
		//Time[2] Sanyeni Yaddasda Saxliyir
	Time[2] = difftime(end, start) - Time[1] * 60;
	cout << Time[2] << endl;
	//==========================================
	return 0;

}