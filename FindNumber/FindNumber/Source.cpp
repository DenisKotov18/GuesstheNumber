#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "����� ����������� �����" << endl;
	cin >> a;
	cout << "����� ������������ �����" << endl;
	int b;
	cin >> b;
	srand(time(NULL));
	int number_hide;
	number_hide = rand() % (b - a + 1) + a;
	cout << " ��������, ������� �������" << endl << "����� �������!" << endl << " ���� ����������!" << endl;
	int number;
	int gl;
	gl = 0;
	bool miss = false;
	do
	{
		if (miss == true)
		{
			cout << "�� �����!" << endl;
			if (number > number_hide) cout << " ���������� ����� ������ ������." << endl;
			else cout << " ���������� ����� ������ ������." << endl;
		}
		cin >> number;
		gl++;
		miss = true;
	} while (number != number_hide);
	cout << "�� ��������! � " << gl << " �������.";
}