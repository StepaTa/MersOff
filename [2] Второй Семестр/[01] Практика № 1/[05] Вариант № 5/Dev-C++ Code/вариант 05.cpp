#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[14], name2[14], name3[14];
	char manufacturer1[15], manufacturer2[15], manufacturer3[15];
	unsigned short amount1, amount2, amount3;
	int price1, price2, price3;
	
	cout << "���������: ������� ������\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name1, 14);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(manufacturer1, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>amount1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>price1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name2, 14);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(manufacturer2, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>amount2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>price2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name3, 14);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(manufacturer3, 15);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>amount3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>price3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "-----------------------------------------------------------------------------\n";
	cout << "| ������� ������                                                            |\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "|  ������������  |  �������������  |  ���������� ����. ������  |  ���� ($)  |\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "| " << setw(14) << name1 << " | " << setw(15) << manufacturer1 << " | " << setw(25) << amount1 << " | " << setw(10) << price1 << " |\n";
	cout << "| " << setw(14) << name2 << " | " << setw(15) << manufacturer2 << " | " << setw(25) << amount2 << " | " << setw(10) << price2 << " |\n";
	cout << "| " << setw(14) << name3 << " | " << setw(15) << manufacturer3 << " | " << setw(25) << amount3 << " | " << setw(10) << price3 << " |\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "| ����������: �������� ��������� �������� ������� StarOffice ����� Internet |\n";
	cout << "-----------------------------------------------------------------------------\n";
}
