/*
#include"SwItch.h"


void Gotoxy(int x, int y)
	{
		COORD c = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	}



class Switch
{
protected:
	int Status;

public:
	Switch():Status(0)
{
		//initial State
	}


	int GetStatus()
	{

		return  Status;
	}

	int ChangeStatus()
	{
		if (Status==0)
		{
			Status = 1;
		}
		else
		{
			Status = 0;
		}

		return (Status) ;



	}






};

class Devices
{
protected:
	int D_Status;

public:
	Devices() :D_Status(0)
	{

	}

	int GetD_Status()
	{

		return D_Status;
}
	int ChangeD_Status()
	{
		if (D_Status == 0)
		{
			D_Status = 1;
		}
		else
			D_Status = 0;
		return	(D_Status);


	}



};




Switch S_1, S_2, S_3, S_4;
Devices FAN, BULB, HEATER, AC;
void ChangeBoard(Switch& M, Devices& N)
{
	int D1, D2;
	D1=M.ChangeStatus();
	D2=N.ChangeD_Status();


}


void SwitchBoard()
{

	F1(S_1,FAN);
	S2(S_2,BULB);
	T3(S_3,HEATER);
	F4(S_4,AC);



}


void F1(Switch &M_First, Devices &M_FAN)
{
	Gotoxy(X1, Y1);
	cout << "Switch1";
	Gotoxy(X1, Y2);
	cout << "FAN";
	if (M_First.GetStatus() == 0 && M_FAN.GetD_Status() == 0)
	{
		Gotoxy(X1, Y3);
		cout << "OFF";


	}
	else
	{

		Gotoxy(X1, Y3);
		cout << "ON";
	}



}
void S2(Switch &M_Second, Devices &M_BULB)
{
	Gotoxy(X2, Y1);
	cout << "Switch 2";
	Gotoxy(X2, Y2);
	cout << "BULB";
	if (M_Second.GetStatus() == 0 && M_BULB.GetD_Status() == 0)
	{
		Gotoxy(X2, Y3);
		cout << "OFF";


	}
	else
	{

		Gotoxy(X2, Y3);
		cout << "ON";
	}


}
void T3(Switch &M_Third, Devices& M_HEATER)
{
	Gotoxy(X3, Y1);
	cout << "Switch 3";
	Gotoxy(X3, Y2);
	cout << "HEATER";
	if (M_Third.GetStatus() == 0 && M_HEATER.GetD_Status() == 0)
	{
		Gotoxy(X3, Y3);
		cout << "OFF";


	}
	else
	{

		Gotoxy(X3, Y3);
		cout << "ON";
	}


}
void F4( Switch &M_Fourth, Devices &M_AC)
{
	Gotoxy(X4, Y1);
	cout << "Switch 4";
	Gotoxy(X4, Y2);
	cout << "AC";
	if (M_Fourth.GetStatus() == 0 && M_AC.GetD_Status() == 0)
	{
		Gotoxy(X4, Y3);
		cout << "OFF";


	}
	else
	{

		Gotoxy(X4, Y3);
		cout << "ON";
	}

}
int main()
{
	int j;
	static	int k=0;
	while (true)
	{

		system("CLS");
		cout << "TO CHANGE STATUS PRESS  1 2 3 4 ";
		cout << "EXITING ESC";
		SwitchBoard();
		Gotoxy(20, 30);

		cin >> j;

		k++;
		if (j == 1)
			ChangeBoard(S_1, FAN);
		else if (j == 2)
			ChangeBoard(S_2, BULB);
		else if (j == 3)
			ChangeBoard(S_3, HEATER);
		else if (j == 4)
			ChangeBoard(S_4, AC);
		else if (j == 5)
		{
			k--;
			break;
		}
		else
		{
			k--;
			Gotoxy(40, 10);
			cout << "Invalid Input";
			Sleep(100);
		}

		j = 0;



	}
	system("CLS");
	cout << "TOTAL CLICKS IS " << k << endl;
	_getch();


	return 0;
}
*/