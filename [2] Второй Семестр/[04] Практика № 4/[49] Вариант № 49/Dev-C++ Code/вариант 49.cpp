#include <iostream>
#include <windows.h>

using namespace std;

int protection_arr () {
	int value;
	while(!(cin>>value && value >= 1)) {
		cout<<"�� ������ ������! ���������� ������� ������ ������������� ����� ������ 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

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
	
	int *N = new int;
	int *M = new int;
	int *min = new int;
	
	int *pos_i = new int;
	int *pos_j = new int;
	int *temp = new int;

	cout << "N : ";
	*N = protection_arr();
	cout << "M : ";
	*M = protection_arr();

	int **array_A = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_A + i) = new int[*M];
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			cout << "array_A[" << i << "][" << j << "] : ";
			*(*(array_A + i) + j) = protection_n();
		}
	}

	*min = *(*(array_A));

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			if ( *min > *(*(array_A + i) + j) ) {
				*min = *(*(array_A + i) + j);
			}
		}
	}

	*temp = *min;
	*(*(array_A + *pos_i) + *pos_j) = *(*(array_A + 1) + 1);
	*(*(array_A + 1) + 1) = *temp;

	cout << "\n������ array_A \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			cout << *(*(array_A + i) + j) << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete N;
	delete M;
	delete pos_i;
	delete pos_j;
	delete temp;
	delete min;
}
