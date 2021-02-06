#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class task4 {
private: 
	double *x;
	double *y;
	double *z;
	double *w;
public:
	task4() {
		x = new double; 
		y = new double; 
		z = new double; 
		w = new double; 
	}
	~task4() {
		delete x; 
		delete y; 
		delete z; 
		delete w; 
	}
	void set (double &_x, double &_y, double &_z) { 
		*x = _x;
		*y = _y;
		*z = _z;
	}
	void print () { 
		cout << *x << " | " << *y << " | " << *z << " | " << *w << endl;
	}
	void run () { 
		*w = pow(fabs(cos(*x)-cos(*y)),1.0+2.0*pow(sin(*y),2.0))*(1.0+*z+pow(*z,2.0)/2.0+pow(*z,3.0)/3.0 + pow(*z,3.0)/3.0);
	}	
};

float protection () {
	float value;
	while(!(cin>>value)) {
		cout<<"�� ������ ������! ���������� ������� ������ �����! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double *x = new double; 
	double *y = new double; 
	double *z = new double; 
	
	cout << "������� �������� x: ";
	*x = protection();
	cout << "������� �������� y: ";
	*y = protection();
	cout << "������� �������� z: ";
	*z = protection();
	
	cout << "1. ������ �����" << endl;
	task4 obj1; 							
	obj1.set(*x, *y, *z); 					
	obj1.run(); 							
	obj1.print(); 							
	
	cout << "2. ��������� �����" << endl;
	task4 obj2;								
	task4 *pointer2 = &obj2;				
	pointer2->set(*x, *y, *z); 				
	pointer2->run();						
	pointer2->print();						
	
	cout << "3. ������ ������������ �����" << endl;
	task4 *pointer3 = new task4;			
	(*pointer3).set(*x, *y, *z); 			
	(*pointer3).run();						
	(*pointer3).print();					
	
	cout << "4. ��������� ������������ �����" << endl;
	task4 *pointer4 = new task4;			
	pointer4->set(*x, *y, *z); 				
	pointer4->run();						
	pointer4->print();						
	
	delete pointer2;
	delete pointer3;
	delete pointer4;
	delete x;
	delete y;
	delete z;
}
