// 10a.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>

using namespace std;

class Square {
public:
	void get(int a = 10, int b = 5) {
		cout << "1. Rectangle\n2. Sqaure\n";
		int shape;
		cin >> shape;
		if (shape == 1) {
			cout << "Wanna enter a length(1-yes; 2-no): ";
			int choice = 0;
			cin >> choice;
			if (choice == 1) {
				cout << "Enter a length: ";
				cin >> a;
				cout << "Wanna enter length(1-yes; 2-no): ";
				int choice2 = 0;
				cin >> choice2;
				if (choice2 == 1) {
					cout << "Enter b length: ";
					cin >> b;
				}
			}
		}
		else {
			cout << "Wanna enter a length(1-yes; 2-no): ";
			int choice = 0;
			cin >> choice;
			if (choice == 1) {
				cout << "Enter a length: ";
				cin >> a;
				b = a;
			}
			else {
				a = b;
			}
		}
		cout << a * b;
	}
};

int main()
{
	Square first;
	first.get();
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
