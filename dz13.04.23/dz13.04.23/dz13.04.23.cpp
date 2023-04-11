// dz13.04.23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    Fraction firstFract;
    Fraction secondFract;
    
    while (true) {
        system("cls");
        std::cout << "Первая дробь" << std::endl;
        firstFract.showFraction();
        std::cout << "Вторая дробь" << std::endl;
        secondFract.showFraction();
        cout << "1. Задать прервую дробь" << endl;
        cout << "2. Задать вторую дробь" << endl;
        cout << "3. Сложить превую и вторую дробь" << endl;
        cout << "4. Вычесть из первой вторую дробь" << endl;
        cout << "5. Умножить первую на вторую дробь" << endl;
        cout << "6. Разделить первую на вторую дробь" << endl;
        int choice = 0;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            cout << "Введите числитель: ";
            int a;
            cin >> a;
            firstFract.setNumerator(a);
            cout << "Введите знаменатель: ";
            int b;
            cin >> b;
            firstFract.setDenominator(b);
        }
            break;
        case 2: {
            cout << "Введите числитель: ";
            int a;
            cin >> a;
            secondFract.setNumerator(a);
            cout << "Введите знаменатель: ";
            int b;
            cin >> b;
            secondFract.setDenominator(b);
        }
            break;
        case 3: {
            Fraction summ = firstFract.summFraction(secondFract);
            summ.showFraction();
            system("pause");
        }
            break;
        case 4: {
            Fraction substraction = firstFract.substractionFraction(secondFract);
            substraction.showFraction();
            system("pause");
        }
            break;
        case 5: {
            Fraction mult = firstFract.multFraction(secondFract);
            mult.showFraction();
            system("pause");
        }
            break;
        case 6: {
            Fraction devide = firstFract.devideFraction(secondFract);
            devide.showFraction();
            system("pause");
        }
            break;
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
