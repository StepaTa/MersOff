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
	float average[5];
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
		average[0] = students[i].math;

		cout << "������ �� ������: ";
		students[i].physics = protection_s();
		cin.clear();
		_flushall();
		average[1] = students[i].physics;

		cout << "������ �� ��������: ";
		students[i].plotting = protection_s();
		cin.clear();
		_flushall();
		average[2] = students[i].plotting;

		cout << "������ �� ���������: ";
		students[i].sopromat = protection_s();
		cin.clear();
		_flushall();
		average[3] = students[i].sopromat;

		cout << "������ �� �����: ";
		students[i].chemistry = protection_s();
		cin.clear();
		_flushall();
		average[4] = students[i].chemistry;

		cout << "\n";
	}

	int max_value_index = 0;
	int max = average[0];
	for (int i = 1; i < N; i++) {
		if (max < average[i]) {
			max_value_index = i;
			max = average[i];
		}
	}

	switch(max_value_index) {
		case 0:
			cout << "����� ����� ������ ����� ����������";
			break;
		case 1:
			cout << "����� ����� ������ ����� ������";
			break;
		case 2:
			cout << "����� ����� ������ ����� ��������";
			break;
		case 3:
			cout << "����� ����� ������ ����� ��������";
			break;
		case 4:
			cout << "����� ����� ������ ����� �����";
			break;
	}
}
