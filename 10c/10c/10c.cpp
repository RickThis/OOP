﻿// 10c.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>

using namespace std;

class Sum {
	int x;
	int y;
	int s = x + y;
public:
	Sum() {
		x = 10;
		y = 20;
		s = x + y;
	}
	Sum(int x, int y) {
		this->x = x;
		this->y = y;
		this->s = this->x + this->y;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void get() {
		cout << "X - " << x << endl;
		cout << "Y - " << y << endl;
		cout << "Their sum - " << s << endl;
	}
	void countSum() {
		this->s = x + y;
		cout << "Sum is " << s << endl;
	}

};

int main()
{
	Sum* a;
	a = new Sum;
	a->get();
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
