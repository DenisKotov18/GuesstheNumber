#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "Введи минимальное число" << endl;
	cin >> a;
	cout << "Введи максимальное число" << endl;
	int b;
	cin >> b;
	srand(time(NULL));
	int number_hide;
	number_hide = rand() % (b - a + 1) + a;
	cout << " Якубович, крутите барабан" << endl << "Число загадно!" << endl << " ИГРА НАЧИНАЕТСЯ!" << endl;
	int number;
	int gl;
	gl = 0;
	bool miss = false;
	do
	{
		if (miss == true)
		{
			cout << "Не верно!" << endl;
			if (number > number_hide) cout << " Загаданное число меньше вашего." << endl;
			else cout << " Загаданное число больше вашего." << endl;
		}
		cin >> number;
		gl++;
		miss = true;
	} while (number != number_hide);
	cout << "Вы победили! С " << gl << " попытки.";
}