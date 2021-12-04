// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <fstream>
#include <istream>

using namespace std;

class Prop {
	string name;
	string kindof;
	int sq;
	int amount;
public:
	friend ostream& operator << (ostream& os, const Prop& p)
	{
		return os << p.name << " " << p.kindof
			<< " " << p.sq << " " << p.amount << endl;
	}
	friend istream& operator >> (istream& os, Prop& p)
	{
		os >> p.name >> p.kindof >> p.sq >> p.amount;
		return os;
	}
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
	void set(string n, string k, int s, int a);
	Prop(string name, string kind, int sq, int amount) {
		this->name = name;
		this->kindof = kind;
		this->sq = sq;
		this->amount = amount;
	}
	Prop(){
		
	}
	Prop(const Prop &other) {
		this->amount = other.amount;
		this->sq = other.sq;
		this->name = other.name;
		this->kindof = other.kindof;
	}

	void operator = (const Prop &other) {
		this->amount = other.amount;
		this->sq = other.sq;
		this->name = other.name;
		this->kindof = other.kindof;
	}
	Prop operator +(const Prop& other) {
		Prop* a = new Prop(this->name + other.name, this->kindof + other.kindof, this->sq+other.sq, this->amount + other.amount);
		return *a;
	}
	bool operator ==(const Prop& other) {
		if (this->name == other.name && this->kindof == other.kindof && this->sq == other.sq && this->amount == other.amount) {
			return true;
		}
		else {
			return false;
		}
	}
	


};

void Prop::set(string n, string k, int s, int a) {
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
	cin >> a;
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
