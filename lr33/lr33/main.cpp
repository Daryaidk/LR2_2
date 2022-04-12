// lr33.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Gabariti.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z, q;
    int D;
    cout << "Введите ширину: ";
    cin >> x;
    cout << "\nВведите высоту:";
    cin >> y;
    cout << "\nВведите глубину:";
    cin >> z;

    cout << "\nДействия: ";
    cout << "\n1 +";
    cout << "\n2 –";
    cout << "\n3 /";
    cout << "\n4 *";
    cout << "\n5 +=";
    cout << "\n6 –=";
    cout << "\n7 /=";
    cout << "\n8 *=";
    cout << "\n9 – Выход из программы\n";

    Gabariti A(x, y, z);
    Gabariti B;

    while (true) // бесконечный цикл
    {
        cout << "\nВыберите действие: ";
        cin >> D;
        switch (D) {
        case 1:
            cout << "Введите число: ";
            cin >> q;
            B = A + q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 2:
            cout << "Введите число: ";
            cin >> q;
            B = B - q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 3:
            cout << "Введите число: ";
            cin >> q;
            B = B / q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 4:
            cout << "Введите число: ";
            cin >> q;
            B = B * q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 5:
            cout << "Введите число: ";
            cin >> q;
            B = B += q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 6:
            cout << "Введите число: ";
            cin >> q;
            B = B -= q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 7:
            cout << "Введите число: ";
            cin >> q;
            B = B /= q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;

        case 8:
            cout << "Введите число: ";
            cin >> q;
            B = B *= q;
            cout << "\nШирина: " << B.getShowA();
            cout << "\nВысота: " << B.getShowB();
            cout << "\nГлубина: " << B.getShowC();
            break;
        }
        if (D == 9)
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
