// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <assert.h>
using namespace std;
template<typename T>
class Test {
	int size = 20;
	T* arr = new T[size];
public:
	
	template <typename T>
	T min() {
		T min = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		return min;
	}
	void fill();
	void sort();
	T sum();
	void show();
	void setSize(int s);
	~Test(){
		delete []arr;
	}
};


template<typename T>
void Test<T>::fill(){
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (rand() % 20)-10;
	}
}

template<typename T>
void Test<T>::sort()
{
	for (int j = 0; j < this->size-1; j++)
	{
		for (size_t i = 0; i < this->size - 1; i++)
		{
			if (arr[i + 1] < arr[i]) {
				T buff = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = buff;
			}
		}
	}
	
	
}

template<typename T>
T Test<T>::sum()
{
	T summa = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			summa += arr[i];
		}
	}
	return summa;
}

template<typename T>
void Test<T>::show()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

template<typename T>
void Test<T>::setSize(int s)
{
	this->size = s;
}


int main()
{
	setlocale(LC_ALL, "rus");
	string five = "-5";
	string three = "3";
	assert(five > three);
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
