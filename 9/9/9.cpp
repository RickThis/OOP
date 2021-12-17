// 9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
class ints{
	int a;
	int b;
	int res;
public:
	ints();
	ints(int a, int b);
	int get() { 
		return res;
	}
	bool operator ==(ints& other);
	bool operator <(ints& other);
	bool operator >(ints& other);
};

ints::ints() {
	this->a = 0;
	this->b = 0;
	this->res = 0;
}

ints::ints(int a, int b) {
	this->a = a;
	this->b = b;
	this->res = a + b;
}

bool ints::operator==(ints& other) {
	if (this->res == other.res)
		return true;
	return false;
}
bool ints::operator>(ints& other) {
	if (this->res > other.res)
		return true;
	return false;
}
bool ints::operator <(ints& other) {
	if (this->res < other.res)
		return true;
	return false;
};



int main()
{
	vector<ints> obj;
	bool check = true;
	while (check) {
		system("CLS");
		cout <<
			"0. Exit" << endl <<
			"1. Create array of objects\n" <<
			"2. Show array\n";
		if (!obj.empty())
			cout << "3. Compare results\n";
		int check_1;
		cin >> check_1;
		switch (check_1)
		{
		case 0: {
			check = false;
			break;
		}
		case 1: {
			system("CLS");
			cout << "Enter size: ";
			int size;
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				obj.push_back(ints(rand() % 10, rand() % 10));
			}
			continue;
		}
		case 2: {
			system("CLS");
			for (size_t i = 0; i < obj.size(); i++)
			{
				cout << i+1 << "\t" << "-------" << obj[i].get() << endl;
			}
			_getch();
			continue;
		}
		case 3: {
			system("CLS");
			cout << "Enter index 1: ";
			int index_1;
			cin >> index_1;
			cout << "Enter index 2: ";
			int index_2;
			cin >> index_2;
			if (obj[index_1] == obj[index_2]) {
				cout << "They are equal";
				_getch();
			}
			else if(obj[index_1] > obj[index_2]){
				cout << "Object at index " << index_1 << " is greater" << endl;
				_getch();

			}
			else{
				cout << "Object at index " << index_2 << " is less" << endl;
				_getch();

			}
			continue;
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
