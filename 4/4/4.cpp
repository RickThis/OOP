// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

class household {
	string name;
	string  school;
	unsigned int count;
	unsigned short square;
	friend ostream& operator<<(ostream& stream, household& o1);
	friend istream& operator>>(istream& stream, household& o1);
	friend void shapka(void);
	friend void linebuild(void);
public:
	household() { count = 0; square = 0; }
	household(string a, string b, unsigned int& c, float& d);
	void set(string a, string, unsigned int, float);
	void get(string a, string& b, unsigned int& c, float& d);
	void show(void);
	string  ret_name() { return name;}
};

household::household(string a, string b, unsigned int& c, float& d) {
	name = a;
	school = b;
	count = c;
	square = d;
}

class DB {
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

void DB::add_rec(string a, string b, unsigned int c, float d) {
	if (col >= 12) return;
	else col++;
	rows[col - 1] = new household(a, b, c, d);
	sorted = 0;
}
int main() {

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
