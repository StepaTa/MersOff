#include <iostream>
#include <windows.h>

using namespace std;

int protection_n () {
	int value;
	while(!(cin>>value)) {
		cout<<"�� ������ ������! ���������� ������� ������ �����! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int *max = new int;
	int *pos = new int;

	int *array_A = new int[5];
	int *array_B = new int[4];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
	}

	for (int i = 0; i < 4; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
	}

	*max = *array_A;

	for (int i = 0; i < 5; i++) {
		if (*max < *(array_A + i)) {
			*max = *(array_A + i);
			*pos = i;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (*max < *(array_B + i)) {
			*max = *(array_B + i);
			*pos = i+5;
		}
	}

	if (*pos >= 5) {
		cout << "\n������ array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
		cout << "\n������ array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "������������ �������� = " << *max << " ��������� � ������� B �� " << *pos-5 << " �������";
	} else {
		cout << "\n������ array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\n������ array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
		cout << "������������ �������� = " << *max << " ��������� � ������� A �� " << *pos << " �������";
	}

	delete[] array_A;
	delete[] array_B;
	delete max;
	delete pos;
}
