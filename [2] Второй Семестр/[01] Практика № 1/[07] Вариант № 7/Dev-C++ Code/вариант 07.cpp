#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[17], name2[17], name3[17];
    char team_code1, team_code2, team_code3;
    float point1, point2, point3;
    unsigned short place1, place2, place3;
    
    cout << "���������: ��������� ���������� ����������\n";
    
    cout << "\n������ ������ � �������\n";
    cout << "������� ���: ";
    cin.getline(name1, 17);
    cin.clear();
	_flushall();
	cout << "������� ��� �������: ";
	cin.get(team_code1);
	cin.clear();
	_flushall();
	cout << "������� ���������� ������: ";
	while(!(cin>>point1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � �����: ";
	while(!(cin>>place1)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
    cout << "\n������ ������ � �������\n";
    cout << "������� ���: ";
    cin.getline(name2, 17);
    cin.clear();
	_flushall();
	cout << "������� ��� �������: ";
	cin.get(team_code2);
	cin.clear();
	_flushall();
	cout << "������� ���������� ������: ";
	while(!(cin>>point2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � �����: ";
	while(!(cin>>place2)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n������ ������ � �������\n";
    cout << "������� ���: ";
    cin.getline(name3, 17);
    cin.clear();
	_flushall();
	cout << "������� ��� �������: ";
	cin.get(team_code3);
	cin.clear();
	_flushall();
	cout << "������� ���������� ������: ";
	while(!(cin>>point3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� ����� � �����: ";
	while(!(cin>>place3)) {
		cout<<"�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\n\n\n";
	
	cout << "----------------------------------------------------------------------\n";
	cout << "| ��������� ���������� ����������                                    |\n";
	cout << "----------------------------------------------------------------------\n";
	cout << "| ������� ��������� | ��� ������� | ���������� ����� | ����� � ����� |\n";
	cout << "----------------------------------------------------------------------\n";
    cout << "| " << setw(17) << name1 << " | " << setw(11) << team_code1 << " | " << setw(16) << point1 << " | " << setw(13) << place1 << " |\n";
    cout << "| " << setw(17) << name2 << " | " << setw(11) << team_code2 << " | " << setw(16) << point2 << " | " << setw(13) << place2 << " |\n";
    cout << "| " << setw(17) << name3 << " | " << setw(11) << team_code3 << " | " << setw(16) << point3 << " | " << setw(13) << place3 << " |\n";
    cout << "----------------------------------------------------------------------\n";
    cout << "| ����������: � - \"������\", � - \"�������\", � - \"������\"              |\n";
    cout << "----------------------------------------------------------------------\n";
}
