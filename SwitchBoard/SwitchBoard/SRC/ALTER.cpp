
#include "SWITCHALTER.h" 

void Gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);


}

class Switch
{
private:
	string Switchname;
	int Status;

	int* CORD;

public:
	Switch() : Switchname("Unknown"), Status(0), CORD(nullptr)
	{

	}

	Switch(const int* a, const string& Name)
	{
		this->Switchname = Name;
		this->CORD = (int*)a;
		Status = 0;
	}

	int GetStatus()
	{

		return  Status;
	}

	int ChangeStatus()
	{
		Status = (Status == 0) ? 1 : 0;


		return (Status);
	}

	string ReturnName()
	{
		return Switchname;
	}

	int RETCORD()
	{

		return (*(CORD));
	}



};

class Devices
{
private:
	int D_Status;
	string D_Name;
	int* D_CORD;

public:
	Devices() :D_Status(0), D_Name("Unknown"), D_CORD(nullptr)
	{


	}


	Devices(const  int* a, const string& name)
	{
		this->D_Name = name;
		this->D_CORD = (int*)a;
		D_Status = 0;

	}

	int GetD_Status()
	{

		return D_Status;
	}
	int ChangeD_Status()
	{
		D_Status = (D_Status == 0) ? 1 : 0;
		return	(D_Status);
	}



	string D_ReturnName()
	{
		return D_Name;
	}


	int D_RETCORD()
	{

		return (*(D_CORD));
	}
};

Switch S1(&X1, "Switch1");
Switch S2(&X2, "Switch2");
Switch S3(&X3, "Switch3");
Switch S4(&X4, "Switch4");

Devices FAN(&X1, "FAN");
Devices AC(&X2, "AC");
Devices HEATER(&X3, "HEATER");
Devices BULB(&X4, "BULB");



void Mechanism(Switch& M_Switch, Devices& M_Device)
{
	Gotoxy(M_Switch.RETCORD(), Y1);
	cout << M_Switch.ReturnName();
	Gotoxy(M_Device.D_RETCORD(), Y2);
	cout << M_Device.D_ReturnName();
	if (M_Switch.GetStatus() == 0 && M_Device.GetD_Status() == 0)
	{
		Gotoxy(M_Switch.RETCORD(), Y3);
		cout << "OFF";


	}
	else
	{

		Gotoxy(M_Switch.RETCORD(), Y3);
		cout << "ON";
	}



}
void ChangeBoard(Switch& M_S, Devices& N_D)
{

	M_S.ChangeStatus();
	N_D.ChangeD_Status();


}
void SwitchBoard()
{
	static int Count = 0;
	while (true)
	{

		char K;
		Gotoxy(0, 0);
		cout << "TO CHANGE STATUS PRESS  1 2 3 4 " << endl;
		cout << "EXITING ESC";

		Mechanism(S1, FAN);
		Mechanism(S2, AC);
		Mechanism(S3, HEATER);
		Mechanism(S4, BULB);

		Gotoxy(20, 30);
		K = _getch();
		Count++;
		if (K == '1')
			ChangeBoard(S1, FAN);
		else if (K == '2')
			ChangeBoard(S2, AC);
		else if (K == '4')
			ChangeBoard(S3, HEATER);
		else if (K == '3')
			ChangeBoard(S4, BULB);
		else if (K == '5')
		{
			Count--;
			break;
		}

		else
		{
			K--;
			Gotoxy(40, 10);
			cout << "Invalid Input";
			Sleep(500);
		}
		system("CLS");

		K = 0;

	}
	system("CLS");
	cout << "TOTAL CLICKS IS " << Count << endl;


}

//int main(int argc , char* argv[])
int main()
{
	system("CLS");
	SwitchBoard();
	_getch();


	return 0;

}