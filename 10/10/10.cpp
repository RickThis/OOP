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
	int len(){
		return size;
	}
	T get(int index) { return arr[index]; };
};


template<typename T>
void Test<T>::fill(){
	if(sizeof(T)!=28){
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = ((rand() % 30) - 10) / 0.23;
		}
	}
	else {
		for (size_t i = 0; i < size; i++)
		{
			string a = "123";
			int b = atoi(a.c_str())
			arr[i] = b;
		}
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
		cout << i << ") " << arr[i] << endl;
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
	

	cout
		<< "1. create array of ints" << endl
		<< "2. create array of floats" << endl
		<< "3. create array of chars" << endl;
	int var1;
	cin >> var1;
	switch (var1)
	{
	case 1:
	{
		Test<int> obj;
		obj.fill();
		cout << "test min() function: " << endl;
		obj.show();
		cout << "\nenter indexes of samples you wanna compare: ";
		int i_1;
		int i_2;
		cin >> i_1 >> i_2;
		cout << "checking if object with index " << i_1 << " is greater than with " << i_2 << endl;
		assert(obj.get(i_1) != obj.get(i_2));
		cout << "they are not equal" << endl;
		assert(obj.get(i_1) > obj.get(i_2), "object with index " << i_1 << " is less");
		cout << "object with index " << i_1 << " is greater" << endl;
		break;
	}
	case 2:
	{
		Test<float> obj;
		obj.fill();
		cout << "test min() function: " << endl;
		obj.show();
		cout << "\nenter indexes of samples you wanna compare: ";
		int j_1;
		int j_2;
		cin >> j_1 >> j_2;
		cout << "checking if object with index " << j_1 << " is greater than with " << j_2 << endl;
		assert(obj.get(j_1) != obj.get(j_2));
		cout << "they are not equal" << endl;
		assert(obj.get(j_1) > obj.get(j_2), "object with index " << i_1 << " is less");
		cout << "object with index " << j_1 << " is greater" << endl;
		break;
	}
	case 3:
	{
		Test<string> obj;
		obj.fill();
		cout << "test min() function: " << endl;
		obj.show();
		cout << "\nenter indexes of samples you wanna compare: ";
		int k_1;
		int k_2;
		cin >> k_1 >> k_2;
		cout << "checking if object with index " << k_1 << " is greater than with " << k_2 << endl;
		assert(obj.get(k_1) != obj.get(k_2));
		cout << "they are not equal" << endl;
		assert(obj.get(k_1) > obj.get(k_2), "object with index " << k_1 << " is less");
		cout << "object with index " << k_1 << " is greater" << endl;
		break;

	}
	default:
		break;
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
