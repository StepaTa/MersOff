#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char firm1[15], firm2[15], firm3[15];
	unsigned short amount1, amount2, amount3;
	unsigned long int value1, value2, value3;
	float part1, part2, part3;
	
	cout << "���������: ����� - ������������� ���\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� �����: ";
	cin.getline(firm1, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ���������: ";
	while(!(cin>>amount1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ������� ����� ������� ($): ";
	while(!(cin>>value1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� ����� (%): ";
	while(!(cin>>part1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� �����: ";
	cin.getline(firm2, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ���������: ";
	while(!(cin>>amount2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ������� ����� ������� ($): ";
	while(!(cin>>value2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� ����� (%): ";
	while(!(cin>>part2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� �����: ";
	cin.getline(firm3, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ���������: ";
	while(!(cin>>amount3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ������� ����� ������� ($): ";
	while(!(cin>>value3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� ����� (%): ";
	while(!(cin>>part3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| ����� - ������������� ���                                                            |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "|      �����      | ���������� ��������� | ������� ����� ������� ($) | ����� ����� (%) |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| " << setw(15) << firm1 << " | " << setw(20) << amount1 << " | " << setw(25) << value1 << " | " << setw(15) << setprecision(1) << fixed << part1 << " |\n";
	cout << "| " << setw(15) << firm2 << " | " << setw(20) << amount2 << " | " << setw(25) << value2 << " | " << setw(15) << setprecision(1) << fixed << part2 << " |\n";
	cout << "| " << setw(15) << firm3 << " | " << setw(20) << amount3 << " | " << setw(25) << value3 << " | " << setw(15) << setprecision(1) << fixed << part3 << " |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| ����������: �� ������ Gartner Group �� 1999�                                         |\n";
	cout << "----------------------------------------------------------------------------------------\n";
}
