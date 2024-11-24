#include <iostream>
#include <stdlib.h>
using namespace std;

int SumOfNegativeElements(const int* a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            sum += a[i];
        }
    }
    return sum;
}

void FillArrayWithRandomValues(int* a, const int size, int lowerBound, int upperBound)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = lowerBound + rand() % (upperBound - lowerBound + 1);
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    srand((unsigned)time(0));
    const int n = 10;
    int a[n];

    FillArrayWithRandomValues(a, n, -10, 10);

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        cout << "| " << a[i] << " |" << " ";
    }
    cout << endl;

    int negativeSum = SumOfNegativeElements(a, n);
    cout << "Сума вiд'ємних елементiв масиву: " << "| " << negativeSum << " |" << endl;

    return 0;
}