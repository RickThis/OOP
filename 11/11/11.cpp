// 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Prop{
	string name;
	string kindof;
	int sq;
	int amount;
public:
	string get_name() {
		return this->name;
	};
	string get_kind() {
		return this->kindof;
	}
	int get_sq() {
		return this->sq;
	}
	int get_amount() {
		return this->amount;
	}

	void show();
	void set();
};
void Prop::set() {
	string n;
	cout << "enter name: ";
	cin >> n;
	string k;
	cout << "enter kind of property: ";
	cin >> k;
	int s;
	cout << "enter square: ";
	cin >> s;
	int a;
	cout << "enter amount of staff: ";
	cin >> a;
	this->name = n;
	this->kindof = k;
	this->sq = s;
	this->amount = a;
}
void Prop::show() {
	cout << this->name << "\t"
		<< this->kindof << "\t"
		<< this->sq << "\t"
		<< this->amount
		<< endl;
}

int main()
{
	Prop a;
	a.set();
	a.show();
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
