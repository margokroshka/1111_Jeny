// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class player // создали класс Player 
{              // поля класса(privat)
    int hp;
    int magic_power;
    int stamina;
    double magic_damage;
    double physical_damage;
public:         //методы класса(public)
    void show();    // метод просмотра 
    void stats(int i, int j, int h);    // метод заполнения данных stats
    void result();      // метод вычисления крутости
    void stats2(double k, double m); // метод заполнения данных stats
    void result2(); // метод вычисления маг. и физ. урона
};
    void player::stats(int i, int j, int h) {   
    hp = i; magic_power = j; stamina = h;       // метод установки первоначальных значений
   
}
    void player::show() {                       // метод просмотра состояние персонажа
        cout << "HP персонажа: " << hp << endl;;
        cout << "Магический урон персонажа:	" << magic_power << endl;
        cout << "Станима героя: " << stamina;
    }
    void player::result() {                 // метод вычисляющий крутость 
        int s;
        s = (hp * magic_power) / stamina + (hp * stamina) / magic_power - (stamina * magic_power) / hp;
        cout << "result:" << s;
    }
    void player::result2(double k, double m) {  // реализация метода вычисления маг. и физ. урона
        double s1;
        s1 = (magic_damage * magic_power) - stamina;
        double s2;
        s2 = (physical_damage * stamina + hp) - magic_power;
        cout << "магический урон:" << s1 << endl;
        cout << "физичесикй урон" << s2 << endl;
    }
    



    int main()
    {
        setlocale(LC_ALL, "Russian"); // Русский язык

        player first; // создание объекта класса player
        player* f_first;
        cout << "Заполним стату персонажа:" << endl;
        cout << "HP персонажа: ";
        int i;
        cin >> i;
        cout << "Магическая сила: ";                     // Внесение данных персонажа
        int j;
        cin >> j;
        cout << "Стамина:";
        int h;
        cin >> h;

        if (i == 0 || h == 0 || j == 0)
        {
            cout << "Деление на 0";     // проверка на 0
        }
        else
        {
            first.stats(i, j, h); // вызов метода установки начальных значений

            cout << "-----------" << endl;
            first.result(); // вызов метода,вычисляющего крутость 
            cout << endl;
            cout << "-----------" << endl;
            first.show(); //вызов метода просмотра
            cout << endl;
            f_first = &first;
            f_first->result2(50, 75);

        }
    };
    

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
