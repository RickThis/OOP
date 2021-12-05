// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;

class household {
	string name;
	string  school;
	unsigned int count;
	unsigned short square;
	bool printed = false;
	friend ostream& operator<<(ostream& stream, household& o1);
	friend void shapka(void);
	friend void linebuild(void);
public:
	household() { count = 0; square = 0; }
	household(string , string , unsigned int& c, float& d);
	void set(string , string, unsigned int, float);
	void get(string& a, string& b, unsigned int& c, float& d);
	string ret_name() { return name;}
};

household::household(string a, string b, unsigned int& c, float& d) {
	name = a;
	school = b;
	count = c;
	square = d;
}

class DB {
public:
	string title;
	household* rows[12];
	int col;
	int sorted;
	DB(string title) {
		this->title = title;
		this->col = 0;
		this->sorted = 0;
	}
	~DB() {
		if (col)
			for (int i = 0; i < col; i++) 
				delete rows[i];
	}
	void add_rec(string a, string b, unsigned int c, float d);
	void del_rec();
	void sort_DB();
};
void shapka(void)
{
	cout << "_______________________________________________________________\n";
	cout << "|         Буддистские монастыри Японии периода Нара           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|  Название  | Школа | Количество монахов | Площадь земли(га) |\n";
	cout << "|-------------------------------------------------------------|\n";
}


void linebuild(void) {
	cout << "\n|-------------------------------------------------------------|\n";
}


ostream& operator<<(ostream& stream, household& o1) {
	
	stream << "|" << setw(10) << o1.name << "  |  ";
	stream << setw(5) << o1.school << "|";
	stream << setw(18) << o1.count << "  |";
	stream << setw(17) << o1.square << "  |";
	linebuild();
	return stream;
}

void DB::sort_DB() {
	string s1;
	string s2;
	if (col < 2) return;
	household* temp;

	for (int i = 0; i < col; i++)
		for (int j = i + 1; j < col; j++) {
			s1 = rows[i]->ret_name();
			s2 = rows[j]->ret_name();
			if (s1 > s2) {
				temp = rows[i];
				rows[i] = rows[j];
				rows[j] = temp;
			}
		}
	sorted = 1;
}

void DB::del_rec() {
	if (col <= 0) return;
	delete  rows[col - 1];
	col--;
}

void household::set(string a, string b, unsigned int c, float d) {
	name = a;
	school = b;
	count = c;
	square = d;
}

void household::get(string& a, string& b, unsigned int& c, float& d)
{
	a = name;
	b = school;
	c = count;
	d = square;
}

void DB::add_rec(string a, string b, unsigned int c, float d) {
	if (col >= 12) return;
	else col++;
	rows[col - 1] = new household(a, b, c, d);
	sorted = 0;
}
void clrscr()
{
	system("CLS");
}


ostream& operator<<(ostream& stream, DB& o1) {
	stream << o1.title << endl;
	if (o1.sorted == 0) stream << "Таблица не отсортирована.\n";
	else stream << "Таблица отсортирована.\n";
	shapka();
	if (!o1.col) stream << "Таблица пуста.";
	else {
		for (int i = 0; i < o1.col; i++) {
			stream << *o1.rows[i];
		}
	}
	return stream;
}

int main() {
	setlocale(LC_ALL, "rus");
	string n;
	string t;
	unsigned int s;
	float h;
	short i;
	short q, q1;
	clrscr();
	DB* tmp = new DB("\nБАЗА ДАННЫХ ╧1\n");

	for (int a = 0; !a;) {
		clrscr();
		cout << "1. Добавить запись\n";
		cout << "2. Удалить запись\n";
		cout << "3. Сортировать базу\n";
		cout << "4. Вывести базу\n";
		cout << "5. Выход\n";
		cout << "> ";
		int p;
		cin >> p;
		switch (p) {
		case 1: {
			cout << "Наименование, Тип, Посевная площадь, Урожайность \n";

			cin>>n;  
			cin>>t;   
			cin>>s;   
			cin>>h;   
			tmp->add_rec(n,t,s,h);
			
			tmp->add_rec("Тотайдзи", "Т", 220, 368.8);
			tmp->add_rec("Якусидзи", "С", 50, 54.7);
			tmp->add_rec("Дайандзи", "L", 10, 12.2);
			break;
		}

		case 2: {
			tmp->del_rec();
			break;
		}

		case 3: {
			tmp->sort_DB();
			break;
		}

		case 4: {
			cout << *tmp;
			cout << "\nНажмите клавишу для продолжения...";
			_getch();
			break;
		}

		case 5: {
			a = 1;
			break;
		}

		default: {
			cout << "Неверный вызов";
			break;
		}
		}
	}
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
