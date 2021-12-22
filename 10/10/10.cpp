// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <conio.h>
#include <assert.h>
using namespace std;
template<typename T>
class Sum {
	vector<T> arr;
	T res;
public:
	Sum() {
		res = 0;
	}
	T sum() {
		res = 0;
		for (auto el : this->arr) {
			if (el > 0) {
				this->res += el;
			}
		}
		return res;
	}
	void push_back(T dat) {
		this->arr.push_back(dat);
	}
	void show() {
		for (auto el : arr) {
			cout << el << " ";
		}
		cout << endl;
	}
};

void query() {
	cout << "1. push back" << endl
		<< "2. show" << endl
		<< "3. sum" << endl
		<< "4. main menu" << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	bool check = true;
	while (check) {
		cout << "What type you wanna work with?" << endl;
		cout << "1. int" << endl
			<< "2. float" << endl
			<< "3. double" << endl
			<< "4. exit" << endl;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1: 
		{
			bool check = true;
			Sum<int> arr;
			while (check) {
				query();
				int choose1;
				cin >> choose1;
				switch (choose1)
				{
				case 1: {
					cout << "Enter int you wanna push: ";
					int it1;
					cin >> it1;
					arr.push_back(it1);
					continue;
				}
				case 2:
				{
					arr.show();
					continue;
				}
				case 3:
				{
					int wanted;
					cout << "Enter waiting result: ";
					cin >> wanted;
					assert(wanted == arr.sum());
					cout << "Res: " << arr.sum() << endl;
					continue;
				}
				case 4:
				{
					check = false;
				}
				default:
					break;
				}

			}continue;
		}
		case 2:
		{
			bool check = true;
			Sum<float> arr;
			while (check) {

				query();
				int choose1;
				cin >> choose1;
				switch (choose1)
				{
				case 1: {
					cout << "Enter float you wanna push: ";
					float it2;
					cin >> it2;
					arr.push_back(it2);
					continue;
				}
				case 2:
				{
					arr.show();
					continue;
				}
				case 3:
				{
					float wanted;
					cout << "Enter waiting result: ";
					cin >> wanted;
					assert(wanted == arr.sum());
					cout << "Res: " << arr.sum() << endl;
					continue;
				}
				case 4:
				{
					check = false;
				}
				default:
					break;
				}
			}
			continue;
		}
		case 3:
		{
			bool check = true;
			Sum<double> arr;
			while (check) {

				query();
				int choose1;
				cin >> choose1;
				switch (choose1)
				{
				case 1: {
					cout << "Enter int you wanna push: ";
					double it3;
					cin >> it3;
					arr.push_back(it3);
					continue;
				}
				case 2:
				{
					arr.show();
					continue;
				}
				case 3:
				{
					double wanted;
					cout << "Enter waiting result: ";
					cin >> wanted;
					assert(wanted == arr.sum());
					cout << "Res: " << arr.sum() << endl;
					continue;
				}
				case 4:
				{
					check = false;
				}
				default:
					break;
				}
			}
			continue;
		}
		case 4:
		{
			check = false;
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
