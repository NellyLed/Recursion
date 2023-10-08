#include <iostream>
#include <cmath>
using namespace std;
float Factorial(int x, int N)
{
    static int k = 0;
    if (N == 1)
    {
        k = k + 1;
        cout << "Порядковый номер вызова рекурсивной функции=\t" << k << endl;
        cout << "Возвращаемое значение=\t\t\t\t" << N << endl;
        return sqrt(x + N) * sqrt(x) * sqrt(x + 1);
    }
    if (x < 0)
    {
        return 0;
    }
    if (N < 1)
    {
        return 0;
    }
    k = k + 1;
    cout << "Порядковый номер вызова рекурсивной функции=\t" << k << endl;
    cout << "Возвращаемое значение=\t\t\t\t" << N << endl;
    return sqrt(x + N) * sqrt(x + Factorial(x, N - 1)) * sqrt(x + 1);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int x, N;
    cout << "Введите числовое значение x=\t\t\t";
    cin >> x;
    cout << "Введите числовое значение N=\t\t\t";
    cin >> N;
    float z = 0.00;
    try {
        float z = Factorial(x, N);
        cout << "Результат вычисления рекурсивной функции=\t" << z << endl;
        if (z <= 0)
            throw "Ошибка!";
    }
    catch (...)
    {
        cout << "Произвести вычисление рекурсивной функции невозможно\t\t" << endl;
    }
    system("pause");
    return 0;
}
