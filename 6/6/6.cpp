// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#define N 7

using namespace std;

class Airport {
public:
    string place;
    int throughput;
    int capacity;
	friend ostream& operator <<(ostream& os, Airport& other);
    void change(string &p, int &t, int &c) {
        this->capacity = c;
        this->place = p;
        this->throughput = t;
    }
    Airport();
    Airport(string p, int t, int c);
};

Airport::Airport(string p, int t, int c) {
    this->place = p;
    this->throughput = t;
    this->capacity = c;
}

Airport::Airport() {
    place = "";
    throughput = 0;
    capacity = 0;
}

void clrscr() {
    system("CLS");
}


Airport obj[N];


ostream& operator << (ostream& os, Airport& other) {
	os << other.place << " " << other.throughput <<
		" " << other.capacity << endl;
	return os;
}

void sort()
{
    int i, j;
    Airport temp;
    for (i = 0; i < 7; i++)
        for (j = i + 1; j < 7; j++)
            if (obj[i].capacity > obj[j].capacity) {
                temp = obj[i];
                obj[i] = obj[j];
                obj[j] = temp;
            }
}

void show()
{
    int i, j;
    cout << "                            Airport: \n";
    cout << "----------------------------------------------------------------\n";
    cout << "      Capacity        Throughput       Place     \n";
    cout << "----------------------------------------------------------------\n";

    string s = "";
    for (size_t i = 0; i < N; i++)
    {
        cout << "\t" << obj[i].capacity << "\t\t" << obj[i].throughput << "\t\t" << obj[i].place << endl;
    }
}


int main(void) {

    setlocale(LC_ALL, "rus");
    int r = 0;

    for (int a = 0; !a;) {
        clrscr();
        cout << "1. Добавить записи\n";
        cout << "2. Сортировать базу\n";
        cout << "3. Вывести базу\n";
        cout << "4. Выход\n";
        cout << "> ";
        int p;
        cin >> p;
        switch (p) {
        case 1: {
            obj[0] = Airport("Sharimetevo", 123, 123);
            obj[1] = Airport("KR", 456779, 456779);
            obj[2] = Airport("Brovary", 12443, 12443);
            obj[3] = Airport("OAE", 13, 13);
            obj[4] = Airport("Dublin", 1267853, 1267853);
            obj[5] = Airport("Kyiv", 12113, 12113);
            obj[6] = Airport("Pulkovo", 12113, 12113);

            r = 1;
            break;
        }

        case 2: {
            if (r == 0) {
                cout << "В базе нет записей.";
                _getch();
            }
            else if (r == 1) sort();
            break;
        }

        case 3: {
            if (r == 0) {
                cout << "В базе нет записей.";
                _getch();
            }
            else if (r == 1)
                show();
            _getch();
            break;
        }

        case 4: {
            a = 1;
            break;
        }

        default: {
            cout << "Неверный вызов";
            _getch();
            break;
        }
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
