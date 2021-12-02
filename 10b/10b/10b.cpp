// 10b.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Change {

	int* biggest;
	int* average;
	int* min;
	int big;
	int ave;
	int m;
public:
	void pointer(int* a, int* b, int* c) {
		if (*a > *b) {
			if (*a > *c) {
				biggest = a;
				if (*b > *c) {
					average = b;
					min = c;
				}
				else {
					average = c;
					min = b;
				}
			}
			else {
				min = b;
				average = a;
				biggest = c;
			}
		}
		else {
			if (*b > *c) {
				biggest = b;
				if (*a > *c) {
					min = c;
					average = a;
				}
				else {
					average = c;
					min = a;
				}
			}
			else {
				min = a;
				biggest = c;
				average = b;
			}
		}
		cout << "a - " << *biggest << endl
			<< "b - " << *average << endl
			<< "c - " << *min << endl;
		cout << "Changing..." << endl;
		b = biggest;
		biggest = min;
		min = b;
		cout << "a - " << *biggest << endl
			<< "b - " << *average << endl
			<< "c - " << *min << endl;
	};
	void reference(int& a, int& b, int& c) {

		if (a > b) {
			if (a > c) {
				big = a;
				if (b > c) {
					ave = b;
					m = c;
				}
				else {
					ave = c;
					m = b;
				}
			}
			else {
				m = b;
				ave = a;
				big = c;
			}
		}
		else {
			if (b > c) {
				big = b;
				if (a > c) {
					m = c;
					ave = a;
				}
				else {
					ave = c;
					m = a;
				}
			}
			else {
				m = a;
				big = c;
				ave = b;
			}
		}
		cout << "a - " << big << endl
			<< "b - " << ave << endl
			<< "c - " << m << endl;
		cout << "Changing..." << endl;
		b = big;
		big = m;
		m = b;
		cout << "a - " << big << endl
			<< "b - " << ave << endl
			<< "c - " << m << endl;
	};
};

int main()
{
	Change a;

	int b = 345;
	int c = 15;
	int d = 621;

	a.pointer(&b, &c, &d);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
