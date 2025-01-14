﻿// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class B1 {
	int a;
public:
	B1(int x) {
		a = x;
	}
	void show_b1() {
		cout << a;
	}
};

class B2 {
	int b;
public:
	B2(int x) {
		b = x;
	}
	void show_b2() {
		cout << b;
	}
};

class D1 : public B1, private B2 {
	int c;
public:
	D1(int x, int y, int z) : B1(y), B2(z) {
		c = x;
	};
	void show_d1() {
		cout << c;
	}
};

class D2 : private D1{
	int d;
public:

	D2(int x, int y, int z, int t) : D1(y,z,t) {
		d = x;
	}
	void show_d2() {
		cout << d;
	}
};

class B3 {
	int e;
public:
	B3(int x) {
		e = x;
	}
	void show_b3() {
		cout << e;
	}
};

class D3 : public D2, private B3{
	int f;
public:
	D3(int x, int y, int z, int t, int w, int u) : D2(y,z,t,w) , B3(u) {
		f = x;
	}
	void show_d3() {
		cout << f;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	D2 temp(100, 200, 300, 400);
	D3 temp2(1, 2, 3, 4, 5, 6);
	cout << "D3 temp(100,200,300,400,500);\n";
	cout << "D4 temp2(1,2,3,4,5,6);\n";
	cout << "\nСледуя иерархии класса D2: \n";
	temp.show_d2();
	cout << "\nСледуя иерархии класса D3\n";
	temp2.show_d3();
	return 0;
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
