#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char type1[14], type2[14], type3[14];
	char route1[7], route2[7], route3[7];
	float length1, length2, length3;
	unsigned int time1, time2, time3;
	
	cout << "���������: ��������� ������������� ����������\n";
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ��� ����������: ";
	cin.getline(type1, 14);
    cin.clear();
	_flushall();
	cout << "������� �������: ";
	cin.getline(route1, 7);
    cin.clear();
	_flushall();
	cout << "������� ������������� �������� (��): ";
	while(!(cin>>length1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � ������ (���): ";
	while(!(cin>>time1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ��� ����������: ";
	cin.getline(type2, 14);
    cin.clear();
	_flushall();
	cout << "������� �������: ";
	cin.getline(route2, 7);
    cin.clear();
	_flushall();
	cout << "������� ������������� �������� (��): ";
	while(!(cin>>length2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � ������ (���): ";
	while(!(cin>>time2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
	cout << "������� ��� ����������: ";
	cin.getline(type3, 14);
    cin.clear();
	_flushall();
	cout << "������� �������: ";
	cin.getline(route3, 7);
    cin.clear();
	_flushall();
	cout << "������� ������������� �������� (��): ";
	while(!(cin>>length3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � ������ (���): ";
	while(!(cin>>time3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| ��������� ������������� ����������                                            |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| ��� ���������� | ������� | ������������� �������� (��) | ����� � ������ (���) |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| " << setw(14) << type1 << " | " << setw(7) << route1 << " | " << setw(27) << length1 << " | " << setw(20) << time1 << " |\n";
	cout << "| " << setw(14) << type2 << " | " << setw(7) << route2 << " | " << setw(27) << length2 << " | " << setw(20) << time2 << " |\n";
	cout << "| " << setw(14) << type3 << " | " << setw(7) << route3 << " | " << setw(27) << length3 << " | " << setw(20) << time3 << " |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| ����������: �� - �������, �� - ����������, � - �������                        |\n";
	cout << "---------------------------------------------------------------------------------\n";
}
