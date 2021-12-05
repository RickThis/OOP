// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Airport {
	string place;
	int throughput;
	int capacity;
public:
	Airport();
	void change(string&, int&, int&);

	friend ostream& operator <<(ostream& os, Airport& other);
};

ostream& operator << (ostream& os, Airport& other) {
	os << other.place << " " << other.throughput <<
		" " << other.capacity << endl;
	return os;
}

void Airport::change(string& p, int& t, int& c) {
	this->place = p;
	this->throughput = t;
	this->capacity = c;
}

Airport::Airport() {
	throughput = 0;
	capacity = 0;
}



int main()
{
	Airport* a[7];
	
	

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
