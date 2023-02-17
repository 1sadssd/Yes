#include <iostream>
#include<Windows.h>
#include<time.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    /*Завдання 1. Написати програму, яка виводить на екран
лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально
і повільно. Спілкування з користувачем організувати
через меню.*/

    /*int action,leng,i;
    char symbol,speed;

    cout << "Введіть символ : ";
    cin >> symbol;
    cout << "Виберіть якою має бути лінія :\n" << "1 - горизонтальна \n" << "2 - вертикальна \n";
    cin >> action;
    cout << "Введіть довжину лінії : ";
    cin >> leng;
    cout << "Введіть швидкість друкування лінії : \n" << "f - Швидко \n" << "a - середньо \n" << "s - повільно ";
    cin >> speed;
    switch (action)
    {
    case 1:
    {

        for (int i = 0; i < leng; i++)
        {
            if (speed == 'f')
            {
                Sleep(20);
                cout << symbol;
            }

            else if (speed == 'a')
            {
                Sleep(400);
                cout << symbol;
            }

            else if (speed == 's')
            {
                Sleep(1000);
                cout << symbol;
            }


        }
    }break;
    case 2:
    {
        for (int j = 0; j < leng; j++)
        {
            if (speed == 'f')
            {
                Sleep(20);
                cout << symbol << "\n";
            }

            else if (speed == 'a')
            {
                Sleep(400);
                cout << symbol << "\n";
            }

            else if (speed == 's')
            {
                Sleep(1000);
                cout << symbol << "\n";
            }
        }

    }break;
    }

    system("pause");*/



    /*Завдання 2. Написати гру «Кубики». Користувач і комп'ютер по черзі кидають 2 кубики. Переможець той, у кого
за результатами 3х кидків сума більше. Передбачити
красивий інтерфейс гри.
*/
    


    /*Завдання 1. В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний
елементи.*/


    /*Завдання 2. Користувач вводить прибуток фірми за рік (12
місяців). Потім користувач вводить діапазон (наприклад,
3 і 6 — пошук між третім і шостим місяцем). Необхідно
визначити місяць, у якому прибуток був максимальним, і
місяць, у якому прибуток був мінімальним, з урахуванням
обраного діапазону.*/

    /*int i;

    int r1 = 1, r2 = 1;
    const int size = 12;
    int arr[size];

    cout << "Enter the income:" << endl;
    for (int i = 0; i < size; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Січень: ";
            break;
        case 1:
            cout << "Лютий: ";
            break;
        case 2:
            cout << "Березень : ";
            break;
        case 3:
            cout << "Квітень : ";
            break;
        case 4:
            cout << "Травень : ";
            break;
        case 5:
            cout << "Червень : ";
            break;
        case 6:
            cout << "Липень : ";
            break;
        case 7:
            cout << "Серпень : ";
            break;
        case 8:
            cout << "Вересень : ";
            break;
        case 9:
            cout << "Жовтень : ";
            break;
        case 10:
            cout << "Листопад : ";
            break;
        case 11:
            cout << "Грудень : ";
            break;
        }
        cin >> arr[i];
    }
    cout << "Введіть діапазон:" << endl;
    do
    {
        cout << "Перший: ";
        cin >> r1;
        cout << "Другий: ";
        cin >> r2;
        if (r2 <= r1)
        {
            cout << "помилка!!!" << endl;
            cout << "Введіть діапазон:" << endl;
        }
    } while (r2 <= r1);
    int max = arr[r1 - 1];
    int min = arr[r1 - 1];

    for (int j = r1 - 1; j <= r2 - 1; j++)
    {
        if (min > arr[j])
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
    }
    cout << "Мінімум : " << min << endl;
    cout << "Максимум : " << max << endl;

    

    return 0;*/
}
