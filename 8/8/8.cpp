// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


template <typename T>
class Data {
	T something;
public:
	Data() {
		something = 0;
	}
	Data(T a) {
		something = a;
	}
	T get() {
		return something;
	}
	void show() {
		cout << "Data: " << something << endl;
	}
	Data<T>& operator /(Data<T> &other) {
		Data<T> c(something / other.get());
		return c;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "For integers: " << endl;
	cout << "Enter first int: ";
	int d_1;
	cin >> d_1;
	cout << "Enter second one: ";
	int d_2;
	cin >> d_2;
	Data<int> a(d_1);
	Data<int> b(d_2);
	Data<int> c = b / a;
	cout << b.get() << " / " << a.get() << " = " << c.get() << endl;
	cout << "For floats: " << endl;
	cout << "Enter first float: ";
	float f_1;
	cin >> f_1;
	cout << "Enter second one: ";
	float f_2;
	cin >> f_2;
	Data<float> a_1(f_1);
	Data<float> b_1(f_2);
	Data<float> c_1(b_1 / a_1);
	cout << b_1.get() << " / " << a_1.get() << " = " << c_1.get() << endl;
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
