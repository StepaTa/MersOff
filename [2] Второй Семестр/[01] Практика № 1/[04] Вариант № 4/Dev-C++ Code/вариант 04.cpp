#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char author1[25], author2[25], author3[25];
	char name1[21], name2[21], name3[21];
	unsigned short year1, year2, year3;
	char group1, group2, group3;
	
	cout << "���������: ������� ����������\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(author1, 25);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(name1, 21);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>year1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>group1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(author2, 25);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(name2, 21);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>year2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>group2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ������������: ";
	cin.getline(author3, 25);
    cin.clear();
	_flushall();
	cout << "������� �������������: ";
	cin.getline(name3, 21);
    cin.clear();
	_flushall();
	cout << "������� ���������� ������������ ������: ";
	while(!(cin>>year3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ���� ($): ";
	while(!(cin>>group3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << "| ������� ����������                                                                           |\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << "|        ����� �����        |       ��������        |      ��� �������      |      ������      |\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << "| " << setw(25) << author1 << " | " << setw(21) << name1 << " | " << setw(21) << year1 << " | " << setw(16) << group1 << " |\n";
	cout << "| " << setw(25) << author2 << " | " << setw(21) << name2 << " | " << setw(21) << year2 << " | " << setw(16) << group2 << " |\n";
	cout << "| " << setw(25) << author3 << " | " << setw(21) << name3 << " | " << setw(21) << year3 << " | " << setw(16) << group3 << " |\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << "| ����������: � - �������������� ����������; � - ������� ����������; � - ���������� ���������� |\n";
	cout << "------------------------------------------------------------------------------------------------\n";
}
