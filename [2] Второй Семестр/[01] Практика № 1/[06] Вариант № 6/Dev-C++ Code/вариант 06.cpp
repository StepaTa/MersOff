#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[12], name2[12], name3[12];
	char type1, type2, type3;
	int area1, area2, area3;
	unsigned short yield1, yield2, yield3;
	
	cout << "���������: �������������������� ��������\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name1, 12);
    cin.clear();
	_flushall();
	cout << "������� ���: ";
	while(!(cin>>type1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �������� ������� (��): ";
	while(!(cin>>area1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����������� (�/��): ";
	while(!(cin>>yield1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name2, 12);
    cin.clear();
	_flushall();
	cout << "������� ���: ";
	while(!(cin>>type2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �������� ������� (��): ";
	while(!(cin>>area2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����������� (�/��): ";
	while(!(cin>>yield2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(name3, 12);
    cin.clear();
	_flushall();
	cout << "������� ���: ";
	while(!(cin>>type3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �������� ������� (��): ";
	while(!(cin>>area3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����������� (�/��): ";
	while(!(cin>>yield3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "-------------------------------------------------------------------\n";
	cout << "| �������������������� ��������                                   |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| ������������ | ��� | �������� ������� (��) | ����������� (�/��) |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| " << setw(12) << name1 << " | " << setw(3) << type1 << " | " << setw(21) << area1 << " | " << setw(18) << yield1 << " |\n";
	cout << "| " << setw(12) << name2 << " | " << setw(3) << type2 << " | " << setw(21) << area2 << " | " << setw(18) << yield2 << " |\n";
	cout << "| " << setw(12) << name3 << " | " << setw(3) << type3 << " | " << setw(21) << area3 << " | " << setw(18) << yield3 << " |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| ����������: � - ��������, � - �������                           |\n";
	cout << "-------------------------------------------------------------------\n";
}
