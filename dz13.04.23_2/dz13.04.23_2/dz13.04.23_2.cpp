// dz13.04.23_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Subscriber.h"
#include "TelBook.h"
#include "windows.h"

using namespace std;
int main()
{
    //comment for test gitHub
    setlocale(LC_ALL, "RUS");
    //SetConsoleCP(65001);
    //SetConsoleOutputCP(65001);
    TelBook telbook;
    FILE* file;
    int i = 0;
    char name[50], info[50], telNum[20], homeNum[20], mobNum[20];
    if (fopen_s(&file, "save1.txt", "r") != NULL) {
        cout << "Файл не удалось открыть" << endl;
    }
    else {
        while (!feof(file)) {
            fscanf_s(file, "%s", name, sizeof(name));
            fscanf_s(file, "%s", info, sizeof(info));
            fscanf_s(file, "%s", telNum, sizeof(telNum));
            fscanf_s(file, "%s", homeNum, sizeof(homeNum));
            fscanf_s(file, "%s", mobNum, sizeof(mobNum));
            telbook.addAccount(telNum, homeNum, mobNum, name, info);
            i++;
        }
        if (fclose(file) == EOF) {
            cout << "Файл закрыть не удалось" << endl;
        }
    }
    while (true) {
        system("cls");
        cout << "Приложение телефонная книга" << endl;
        cout << "1. Просмотреть список контактов" << endl;
        cout << "2. Добавить новый контакт" << endl;
        cout << "3. Поиск абонента" << endl;
        cout << "4. Записать изменения" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            telbook.getAccaunts();
            system("pause");
        }
        break;
        case 2: {
            char* telNum = new char[13];
            char* homeNum = new char[13];
            char* mobNum = new char[13];
            char* name = new char[50];
            char* info = new char[100];
            cout << "Введите имя: ";         
            cin >> name;
            cout << "Введите информацию: ";
            cin >> info;           
            cout << "Введите рабочий номер телефона: ";
            cin >> telNum;
            cout << "Введите домашний номер телефона: ";
            cin >> homeNum;
            cout << "Введите мобильный номер телефона: ";
            cin >> mobNum;
            telbook.addAccount(telNum, homeNum, mobNum, name, info);
        } 
        break;
        case 3: {
            cout << "Введите имя абонента: ";
            char* search = new char[20];
            cin >> search;
            for (int i = 0; i < telbook.getCount(); i++) {
                if (strstr(telbook.getAccaunt(i).getName(), search)) {
                    telbook.getAccaunt(i).getInfoFull();
                    cout << endl;
                }
            }
            system("pause");
        }
        break;
        case 4: {
            if (fopen_s(&file, "save1.txt", "w") != NULL) {
                cout << "Файл не удалось открыть" << endl;
            }
            else {
                for (int i = 0; i < telbook.getCount(); i++) {
                    fprintf(file, telbook.getAccaunt(i).getName());
                    fprintf(file, "\n");
                    fprintf(file, telbook.getAccaunt(i).getInfo());
                    fprintf(file, "\n");
                    fprintf(file, telbook.getAccaunt(i).getTelNum());
                    fprintf(file, "\n");
                    fprintf(file, telbook.getAccaunt(i).getHomeNum());
                    fprintf(file, "\n");
                    fprintf(file, telbook.getAccaunt(i).getMobNum());
                    if (!(i == telbook.getCount() - 1)) {
                        fprintf(file, "\n");
                    }
                }
                if (fclose(file) == EOF) {
                    cout << "Файл закрыть не удалось" << endl;
                }
            }
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
