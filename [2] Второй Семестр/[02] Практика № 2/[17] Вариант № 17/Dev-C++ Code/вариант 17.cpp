#include <iostream>
#include <windows.h>

using namespace std;

struct Transport {
	int luggage_items;
	int luggage_weight;
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

float protection_t () {
	float value;
	while(!(cin>>value && value > 0)) {
		cout<<"�� ������ ������! ���������� ������� ������ ������������� ����� ������ 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int N;
	cout << "������� ���������� ����������: ";
	N = protection_n();
	cin.clear();
	_flushall();
	Transport transports[N];
	for (int i = 0; i < N; i++) {
		cout << "[�������� ����� " << i+1 << "]\n";

		cout << "�������: ";
		cin.getline(transports[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "���: ";
		cin.getline(transports[i].name, 20);
		cin.clear();
		_flushall();

		cout << "��������: ";
		cin.getline(transports[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "���������� �����: ";
		transports[i].luggage_items = protection_n();
		cin.clear();
		_flushall();

		cout << "��� � �����������: ";
		transports[i].luggage_weight = protection_t();
		cin.clear();
		_flushall();

		cout << "\n";
	}

	for (int i = 0; i < N; i++) {
		if (transports[i].luggage_weight == 20.0 && transports[i].luggage_items == 1) {
			cout << "�������� " << transports[i].surname << " " << transports[i].name << " " << transports[i].second_name << " ����� �����, ������� ������� �� ����� ���� ����� � 20 �� \n";
		}
	}
}
