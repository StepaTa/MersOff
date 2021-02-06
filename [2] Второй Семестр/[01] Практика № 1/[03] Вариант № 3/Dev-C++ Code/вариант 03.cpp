#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char cpu1[15], cpu2[15], cpu3[15];
	unsigned short frequency1, frequency2, frequency3;
	int ram1, ram2, ram3;
	char type1, type2, type3;
	
	cout << "���������: �������������� ����\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ���������: ";
	cin.getline(cpu1, 15);
    cin.clear();
	_flushall();
	cout << "������� ������� (Mgz): ";
	while(!(cin>>frequency1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� RAM (Mb): ";
	while(!(cin>>ram1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ���������: ";
	cin.getline(cpu2, 15);
    cin.clear();
	_flushall();
	cout << "������� ������� (Mgz): ";
	while(!(cin>>frequency2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� RAM (Mb): ";
	while(!(cin>>ram2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ���������: ";
	cin.getline(cpu3, 15);
    cin.clear();
	_flushall();
	cout << "������� ������� (Mgz): ";
	while(!(cin>>frequency3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� RAM (Mb): ";
	while(!(cin>>ram3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "------------------------------------------------------\n";
	cout << "| �������������� ����                                |\n";
	cout << "------------------------------------------------------\n";
	cout << "|    ���������    | ������� (Mgz) |  RAM (Mb)  | ��� |\n";
	cout << "------------------------------------------------------\n";
	cout << "| " << setw(15) << cpu1 << " | " << setw(13) << frequency1 << " | " << setw(10) << ram1 << " | " << setw(3) << type1 << " |\n";
	cout << "| " << setw(15) << cpu2 << " | " << setw(13) << frequency2 << " | " << setw(10) << ram2 << " | " << setw(3) << type2 << " |\n";
	cout << "| " << setw(15) << cpu3 << " | " << setw(13) << frequency3 << " | " << setw(10) << ram3 << " | " << setw(3) << type3 << " |\n";
	cout << "------------------------------------------------------\n";
	cout << "| ���: C - CISC-���������, R - RISC-���������        |\n";
	cout << "------------------------------------------------------\n";
}
