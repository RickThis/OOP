// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cctype>
#include <conio.h>


using namespace std;


class MyClass {
	string str = "";
	string path = "";
	
public:
	
	void check();
	MyClass(string a, string p);
	MyClass();
	void setPath(string p);
	void setStr(string s);
	void showString();
	void showPath();
	bool is_empty();
	friend ostream& operator<< (ostream& f, MyClass& other) {
		try
		{
			ofstream obj;
			obj.open(other.path);
			other.check();
			obj << other.str;
			obj.close();
		}
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
		}

		return f;
	};
};

bool MyClass::is_empty() {
	if (str.empty()) {
		return true;
	}
	return false;
}

void MyClass::showPath() {
	cout << this->path << endl;
}

void MyClass::showString() {
	cout << this->str << endl;
}


void MyClass::setStr(string s) {
	this->str = s;
}


MyClass::MyClass(string a, string p) {
	this->str = a;
	this->path = p;
}

MyClass::MyClass() {
	this->str = "kldfRRRjkldsJF:sHfif14lHG5961JF12";
	this->path = "floats.txt";
}

void MyClass::setPath(string p) {
	this->path = p;
}

void MyClass::check() {
	int *index = new int[100];
	int last = 0;
	int deleted = 0;
	for (size_t i = 0; i < 100; i++)
	{
		index[i] = 0;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i])) {
			index[last] += i;
			last++;
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (i >= last) break;
		str.erase((index[i]-deleted), 1);
		deleted++;
	}
	last = 0;
	deleted = 0;
	for (size_t i = 0; i < 100; i++)
	{
		index[i] = 0;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i])) {
			index[last] += i;
			last++;
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (i >= last) break;
		str.erase(index[i]-deleted, 1);
		deleted++;
	}
	delete[]index;
}



int main()
{
	setlocale(LC_ALL, "rus");
	MyClass a;
	int check = 1;
	while (check) {
		system("CLS");
		cout << "1. Show string" << endl
			<< "2. Show path" << endl
			<< "3. Set string" << endl
			<< "4. Set path" << endl
			<< "5. Write the string down into a txt file" << endl
			<< "6. Exit" << endl;
		;

		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			if (a.is_empty()) {
				cout << "String is empty..." << endl;
			}
			else {
				a.showString();
			}
			_getch();
			continue;
		}
		case 2:
		{
			a.showPath();
			_getch();
			continue;

		}
		case 3:
		{
			cout << "Enter string: ";
			string own;
			cin >> own;
			a.setStr(own);
			continue;

		}
		case 4:
		{
			cout << "Enter path: ";
			string ownpath;
			cin >> ownpath;
			a.setPath(ownpath);
			continue;
		}
		case 5:
		{
			cout << a;
			continue;
		}
		case 6:
		{
			check = 0;
		}
		default:
			break;
		}
	}
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
