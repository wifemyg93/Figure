#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");

    int size, num, length1, length2;
    string symbol;
    char prob = ' ';

    cout << "Выберите фигуру для вашего восторга:\n [1]Линия\n [2]Прямоугольник\n [3]Квадрат\n [4]Треугольник\n";
    cin >> num;
    system("cls");

    switch (num)
    {
    case 1:

        cout << "Какую линию вы хоите провести:\n [1]Вертикальную \n [2]Горизонтальную \n";
        cin >> num;
        system("cls");
        if (num == 1)
        {
            system("cls");

            cout << "Выберите длину линии:\n";
            cin >> size;
            cout << "Из какого символа будет линия:\n";
            cin >> symbol;

            system("cls");

            for (int i = 0; i <= size; i++)
            {
                cout << symbol << endl;
            }

        }
        else if (num == 2)
        {
            system("cls");

            cout << "Выберите длину линии:\n";
            cin >> size;
            cout << "Из какого символа будет линия:\n";
            cin >> symbol;

            system("cls");

            for (int i = 1; i <= size; i++)
            {
                cout << symbol;
            }

        }
        else
        {
            cout << "Что-то ввели не так. Попробуйте ещё раз понажимать кнопочки" << endl;
        }
        break;


    case 2:
        cout << "Выберите тип прямоугольника:\n [1]Заполненный\n [2]Пустой\n";
        cin >> num;
        system("cls");

        if (num == 1)
        {
            cout << "Введите первую длину прямоугольника:\n";
            cin >> length1;
            system("cls");

            cout << "Введите вторую длину прямогульника:\n";
            cin >> length2;

            system("cls");

            cout << "Из какого симводла будет прямоугольник:\n";
            cin >> symbol;

            system("cls");

            for (int i = 1; i <= length2; i++)
            {
                for (int i = 1; i <= length1; i++)
                {
                    cout << symbol << " ";
                }
                cout << endl;
            }
        }
        else if (num == 2)
        {
            cout << "Введите первую длину прямоугольника:\n";
            cin >> length1;
            system("cls");

            cout << "Введите вторую длину прямогульника:\n";
            cin >> length2;
            system("cls");

            cout << "Из какого симводла будет прямоугольник:\n";
            cin >> symbol;
            system("cls");

            for (int i = 1; i <= length1; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;


            for (int i = 1; i <= (length2 - 2); i++)
            {
                cout << symbol;

                for (int i = 1; i <= (length1 - 2); i++)
                {
                    cout << prob << " ";
                }
                cout << " " << symbol << endl;
            }


            for (int i = 1; i <= length1; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;
        }
        break;


    case 3:
        cout << "Выберите тип квадрата:\n [1]Заполненный\n [2]Пустой\n";
        cin >> num;
        system("cls");

        if (num == 1)
        {
            cout << "Введите размер стороны квадрата:\n";
            cin >> size;
            system("cls");

            cout << "Из какого симводла будет квадрат:\n";
            cin >> symbol;
            system("cls");

            for (int i = 1; i <= size; i++)
            {
                for (int i = 1; i <= size; i++)
                {
                    cout << symbol << " ";
                }
                cout << endl;
            }
        }
        else if (num == 2)
        {
            cout << "Введите размер стороны квадрата\n";
            cin >> size;
            system("cls");

            cout << "Из какого симводла будет квадрат\n";
            cin >> symbol;
            system("cls");

            for (int i = 1; i <= size; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;


            for (int i = 1; i <= (size - 2); i++)
            {
                cout << symbol;
                for (int i = 1; i <= (size - 2); i++)
                {
                    cout << prob << " ";
                }
                cout << " " << symbol;
                cout << endl;
            }

            for (int i = 1; i <= size; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Что-то ввели не так. Попробуйте ещё раз понажимать кнопочки" << endl;
        }
        break;

    case 4:
        cout << "Выберите тип треугольника:\n [1]Заполненный\n [2]Пустой\n";
        cin >> num;

        if (num == 2)
        {
            cout << "Выберите высоту треугольника:\n ";
            cin >> size;
            system("cls");

            cout << "Из какого симводла будет треугольник:\n";
            cin >> symbol;
            system("cls");

            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size * 2; j++)
                {
                    if (j == ((size + 1) - (i - 1)) || j == ((size + 1) + (i - 1))) // || - или, && - и
                    {
                        cout << symbol;
                    }
                    else
                        if (i == size && j > 1)
                        {
                            cout << symbol;
                        }
                        else
                        {
                            cout << prob;
                        }
                }
                cout << endl;
            }
        }
        else if (num == 1)
        {
            cout << "Выберите высоту треугольника:\n";
            cin >> size;

            cout << "Из какого симводла будет треугольник:\n";
            cin >> symbol;
            system("cls");

            for (int i = 0; i < size; i++)
            {
                for (int j = 1; j < size - i; j++)
                {
                    cout << prob;
                }

                for (int j = size - 2 * i; j <= size; j++)
                {
                    cout << symbol;
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Что-то ввели не так. Попробуйте ещё раз понажимать кнопочки" << endl;
        }
        break;

    default:
        cout << "Что-то ввели не так. Попробуйте ещё раз понажимать кнопочки" << endl;
        break;
    }
    return 0;
}