#include <iostream>
#include <windows.h>

using namespace std;

struct Student {
	int math;
	int physics;
	int plotting;
	int sopromat;
	int chemistry;
	char surname[20];
	char name[20];
	char second_name[20];
};

int protection_n () {
	int value;
	while(!(cin>>value && value >= 1)) {
		cout<<"�� ������ ������! ���������� ������� ������ ������������� ����� ������ 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int protection_s () {
	int value;
	while(!(cin>>value && (value >= 2 && value <= 5) )) {
		cout<<"�� ������ ������! ���������� ������� ������ ����� �� 2 �� 5! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int N;
	cout << "������� ���������� ���������: ";
	N = protection_n();
	cin.clear();
	_flushall();
	Student students[N];
	for (int i = 0; i < N; i++) {
		cout << "[������� ����� " << i+1 << "]\n";

		cout << "�������: ";
		cin.getline(students[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "���: ";
		cin.getline(students[i].name, 20);
		cin.clear();
		_flushall();

		cout << "��������: ";
		cin.getline(students[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "������ �� ����������: ";
		students[i].math = protection_s();
		cin.clear();
		_flushall();

		cout << "������ �� ������: ";
		students[i].physics = protection_s();
		cin.clear();
		_flushall();

		cout << "������ �� ��������: ";
		students[i].plotting = protection_s();
		cin.clear();
		_flushall();

		cout << "������ �� ���������: ";
		students[i].sopromat = protection_s();
		cin.clear();
		_flushall();

		cout << "������ �� �����: ";
		students[i].chemistry = protection_s();
		cin.clear();
		_flushall();

		cout << "\n";
	}

	float average;
	int count = 0;
	for (int i = 0; i < N; i++) {
		average = (students[i].math+students[i].physics + students[i].plotting + students[i].sopromat + students[i].chemistry) / 5;
		if (average >= 4.0) {
			count++;
			cout << "������� " << students[i].surname << " " << students[i].name << " " << students[i].second_name << " ����� ������� ���� �� 4 �� 5 \n";
		}
	}

	cout << "����� ��������� � ������� ����� ������� ���� �� 4 �� 5 - " << count;
}
