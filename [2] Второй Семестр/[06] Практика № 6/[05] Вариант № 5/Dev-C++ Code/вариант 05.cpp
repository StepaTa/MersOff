#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	char val[11];
};

struct List {
	Data data;
	List* next;
};

List* _start = NULL;
List* _last = NULL;

int enter_int();
void CreateHead1SElement(List** start, List** last, char value[11]);
void AddAtEnd1SElement(List** last, char value[11]);
void Print1S(List** start);
bool Search1S(List** start, char value[11]);
void AddAfterValue1SElement(List** start, char after_value[11], char value[11]);
bool char_array_comparison (char *s1, char *s2);
void ClearAll1S(List** start);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool isFirst = true;
	while (true) {
		cout << "������ ������ ������? 1-�� 0-��� : ";
		int answer = enter_int();
		if (answer == 1) {
			if (isFirst) {
				isFirst = false;
				char data1[11]; cin.getline(data1, 11); cin.clear(); _flushall();
				CreateHead1SElement(&_start, &_last, data1);
			} else {
				char data2[11]; cin.getline(data2, 11); cin.clear(); _flushall();
				AddAtEnd1SElement(&_last, data2);
			}
		} else if (answer == 0) {
			break;
		}
	}
	cout << "�� �����: \n";
	Print1S(&_start);
	cout << "������� ������, ����� ������� ����� �������� ����� ��������: \n";
	char data3[11]; cin.getline(data3, 11); cin.clear(); _flushall();
	cout << "������� ������, ������� ����� ��������: \n";
	char data4[11]; cin.getline(data4, 11); cin.clear(); _flushall();
	AddAfterValue1SElement(&_start, data3, data4);
	cout << "������ ������� �������� � ������: \n";
	Print1S(&_start);
	ClearAll1S(&_start);
}

int enter_int () {
	int value;
	while(!(cin>>value)) {
		cout << "�� ������ ������! ���������� ������� ������ �����! \n";
		cout << "������ ������ ������? 1-�� 0-��� : ";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	return value;
}

void CreateHead1SElement(List** start, List** last, char value[11]) {
	*start = (List*)new List;
	(*start)->next = NULL;
	for (int i = 0; i < 11; i++) {
		(*start)->data.val[i] = value[i];
	}
	*last = *start;
}

void AddAtEnd1SElement(List** last, char value[11]) {
	List* q;
	q = (List*)new List;
	for (int i = 0; i < 11; i++) {
		q->data.val[i] = value[i];
	}
	q->next = NULL;
	(*last)->next = q;
	*last = q;
}

void Print1S(List** start) {
	List* p = *start;
	cout << "������: " << endl;
	while (p) {
		cout << " | " << p->data.val << endl;
		p = p->next;
	}
}

bool Search1S(List** start, char value[11]) {
	List* p = *start;
	while (p) {		
		if (char_array_comparison(p->data.val, value)) {
			return true;
		}
		p = p->next;
	}
	return false;
}

void AddAfterValue1SElement(List** start, char after_value[11], char value[11]) {
	for (List* p = *start; p != NULL; p = p->next) {
		if (char_array_comparison(p->data.val, after_value)) {
			List* q;
			q = (List*)new List;
			for (int i = 0; i < 11; i++) {
				q->data.val[i] = value[i];
			}
			q->next = p->next;
			p->next = q;	
		}
	}
	return;
}

bool char_array_comparison (char *s1, char *s2) {
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

void ClearAll1S(List** start) {
	if (*start == 0)
		return;
	List* p = *start;
	List* t;
	while (p) {
		t = p;
		p = p->next;
		delete t;
	}
	_start = NULL;
	_last = NULL;
}
