#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char surname1[17], surname2[17], surname3[17];
	char initials1[12], initials2[12], initials3[12];
	unsigned short year1, year2, year3;
	float salary1, salary2, salary3;

	cout << "���������: ����� ������\n";

	cout << "\n������ ������ � �������\n";
	cout << "������� �������: ";
	cin.getline(surname1, 17);
	cin.clear();
	_flushall();
	cout << "������� ��������: ";
	cin.getline(initials1, 12);
	cin.clear();
	_flushall();
	cout << "������� ��� ��������: ";
	while (!(cin >> year1)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �����: ";
	while (!(cin >> salary1)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();

	cout << "\n������ ������ � �������\n";
	cout << "������� �������: ";
	cin.getline(surname2, 17);
	cin.clear();
	_flushall();
	cout << "������� ��������: ";
	cin.getline(initials2, 12);
	cin.clear();
	_flushall();
	cout << "������� ��� ��������: ";
	while (!(cin >> year2)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �����: ";
	while (!(cin >> salary2)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();

	cout << "\n������ ������ � �������\n";
	cout << "������� �������: ";
	cin.getline(surname3, 17);
	cin.clear();
	_flushall();
	cout << "������� ��������: ";
	cin.getline(initials3, 12);
	cin.clear();
	_flushall();
	cout << "������� ��� ��������: ";
	while (!(cin >> year3)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "������� �����: ";
	while (!(cin >> salary3)) {
		cout << "�� ������ ������! ���������� ������� ��� ���!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();

	cout << "---------------------------------------------------------------------\n";
	cout << "| ����� ������                                                      |\n";
	cout << "---------------------------------------------------------------------\n";
	cout << "|      �������      |   ��������   |   ��� ��������   |    �����    |\n";
	cout << "---------------------------------------------------------------------\n";
	cout << "| " << setw(17) << surname1 << " | " << setw(12) << initials1 << " | " << setw(16) << year1 << " | " << setw(11) << setprecision(2) << fixed << salary1 << " |\n";
	cout << "| " << setw(17) << surname2 << " | " << setw(12) << initials2 << " | " << setw(16) << year2 << " | " << setw(11) << setprecision(2) << fixed << salary2 << " |\n";
	cout << "| " << setw(17) << surname3 << " | " << setw(12) << initials3 << " | " << setw(16) << year3 << " | " << setw(11) << setprecision(2) << fixed << salary3 << " |\n";
	cout << "---------------------------------------------------------------------\n";
	cout << "| ����������: ����� ���������� �� ��������� �� 1 ������ 2000 ����   |\n";
	cout << "---------------------------------------------------------------------\n";
}
