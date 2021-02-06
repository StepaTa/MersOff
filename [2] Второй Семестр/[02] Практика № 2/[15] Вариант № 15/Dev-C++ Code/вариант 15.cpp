#include <iostream>
#include <windows.h>

using namespace std;

struct Profile {
	int apartment_number;
	int house_number;
	int age;
	char street_name[40];
	char surname[20];
	char name[20];
	char second_name[20];
	char gender;
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

char protection_gender () {
	char value;
	while(true) {
		cin>>value;
		if (value == 'M' || value == 'F') {
			return value;
		}
		cout<<"�� ������ ������! ���������� ������� ������ M ��� Male ��� F ��� Female! \n";
		cin.clear();
		_flushall();
	}
}

bool character_array_comparison (char *s1, char *s2) {
	int n1, n2;
	for (n1 = 0; s1[n1] != '\0'; n1++) { }
	for (n2 = 0; s2[n2] != '\0'; n2++) { }
	if (n1 != n2) {
		return false;
	} else {
		for (int i = 0; i < n1; i++) {
			if (s1[i] != s2[i]) {
				return false;
			}
		}
		return true;
	}
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int N;
	cout << "������� ���������� �����: ";
	N = protection_n();
	cin.clear();
	_flushall();
	Profile profiles[N];
	for (int i = 0; i < N; i++) {
		cout << "[������ ����� " << i+1 << "]\n";

		cout << "�������: ";
		cin.getline(profiles[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "���: ";
		cin.getline(profiles[i].name, 20);
		cin.clear();
		_flushall();

		cout << "��������: ";
		cin.getline(profiles[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "�����: ";
		cin.getline(profiles[i].street_name, 40);
		cin.clear();
		_flushall();

		cout << "����� ����: ";
		profiles[i].house_number = protection_n();
		cin.clear();
		_flushall();

		cout << "����� ��������: ";
		profiles[i].apartment_number = protection_n();
		cin.clear();
		_flushall();

		cout << "���: ";
		profiles[i].gender = protection_gender();
		cin.clear();
		_flushall();

		cout << "�������: ";
		profiles[i].age = protection_n();
		cin.clear();
		_flushall();

		cout << "\n";
	}

	bool b[N];
	for (int i = 0; i < N; i++) {
		b[i] = true;
	}

	int child = 0;

	for (int i = 0; i < N; i++) {
		if (b[i]) {
			b[i] = false;
			if (profiles[i].age >= 1 && profiles[i].age <= 5 ) {
				child++;
			}

			for (int j = i+1; j < N; j++) {
				if (character_array_comparison(profiles[i].street_name, profiles[j].street_name) && profiles[i].house_number == profiles[j].house_number) {
					b[j] = false;
					if (profiles[j].age >= 1 && profiles[j].age <= 5) {
						child++;
					}
				}
			}
			if (child >= 1) {
				cout << "�� ����� " << profiles[i].street_name << " � ���� " << profiles[i].house_number << " ��������� " << child << " ����� \n";
			}
			child = 0;
		}
	}
}
