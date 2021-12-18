// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <fstream>
#include <conio.h>

#define N 3
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
	string get_name();
	string get_kind();
	int get_sq();
	int get_amount();

	void show();
	void set(string n, string k, int s, int a);
	void getall(string& a, string& b, unsigned int& c, float& d);
	Prop(string n, string kind, int sq, int amount);
	Prop();
	Prop(const Prop& other);

	void operator = (const Prop& other);
	Prop operator +(const Prop& other);
	bool operator ==(const Prop& other);
	


};

string Prop::get_name() {
	return this->name;
};
string Prop::get_kind() {
	return this->kindof;
}
int Prop::get_sq() {
	return this->sq;
}
int Prop::get_amount() {
	return this->amount;
}
Prop::Prop(string n, string kind, int sq, int amount) {
	this->name = n;
	this->kindof = kind;
	this->sq = sq;
	this->amount = amount;
}
Prop::Prop() {
	this->name = "";
	this->kindof = "";
	this->sq = 0;
	this->amount = 0;
}
Prop::Prop(const Prop &other) {
	this->amount = other.amount;
	this->sq = other.sq;
	this->name = other.name;
	this->kindof = other.kindof;
}
bool Prop::operator==(const Prop&other) {
	if (this->name == other.name && this->kindof == other.kindof && this->sq == other.sq && this->amount == other.amount) {
		return true;
	}
	else {
		return false;
	}
}
void Prop::operator=(const Prop&other) {
	this->amount = other.amount;
	this->sq = other.sq;
	this->name = other.name;
	this->kindof = other.kindof;
}
Prop Prop::operator+(const Prop& other) {
	Prop* a = new Prop(this->name + other.name, this->kindof + other.kindof, this->sq + other.sq, this->amount + other.amount);
	return *a;
}
void Prop::set(string n, string k, int s, int a) {
	this->name = n;
	this->kindof = k;
	this->sq = s;
	this->amount = a;
}
void Prop::show() {
	cout << " " << this->name << "\t"
		<< this->kindof << "\t\t"
		<< this->sq << "\t\t" 
		<< this->amount <<"\t" <<endl;
}
void Prop::getall(string& a, string& b, unsigned int& c, float& d)
{
	a = name;
	b = kindof;
	c = sq;
	d = amount;
	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	cout << d << " ";
	cout << "\n";
}
void shapka()
{
	cout << "_______________________________________________________________\n";
	cout << "|         Буддистские монастыри Японии периода Нара           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|  Название  | Школа | Количество монахов | Площадь земли(га) |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void linebuild(void) {
	cout << "|-------------------------------------------------------------|\n";
}

int main()
{
	setlocale(LC_ALL, "ru");
	Prop obj[N] = {
		Prop("Anything","T", 123, 123),
		Prop("Everything", "R" , 764, 765),
		Prop("Nothing", "Y" , 222, 222)

	};
	shapka();
	for (size_t i = 0; i < N; i++)
	{
		obj[i].show();
	}
	linebuild();

	cout << "Checking '=' out(Enter indexes of samples you wanna be equal): \n";
	int j_1;
	int j_2;
	cin >> j_1 >> j_2;
	obj[j_1] = obj[j_2];
	shapka();
	for (size_t i = 0; i < N; i++)
	{
		obj[i].show();
	}
	linebuild();


	cout << "Checking '==' out(Enter indexes of samples you wanna check on equlity): \n";
	int i_1;
	int i_2;
	cin >> i_1 >> i_2;
	if (obj[i_1] == obj[i_2]) {
		cout << "They are equal!" << endl;
	}
	else{
		cout << "They are not equal!" << endl;
	}



	cout << "Checking '+' out(Enter indexes of samples you apply to): \n";
	int k_1;
	int k_2;
	cin >> k_1 >> k_2;
	
	Prop(obj[k_1] + obj[k_2]).show();

	cout << "Checking '<<' out(Enter indexes of sample you wanna withdraw): \n";
	int l_1;

	cin >> l_1;
	cout << obj[l_1];


	cout << "Checking '>>' out(Enter indexes of sample you wanna set): \n";
	int f_1;

	cin >> f_1;
	cin >> obj[f_1];

	shapka();
	for (size_t i = 0; i < N; i++)
	{
		obj[i].show();
	}
	linebuild();


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
