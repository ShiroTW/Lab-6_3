#include <iostream>
#include <stdlib.h>
using namespace std;

int SumOfNegativeElements(const int* a, const int size, int i) {
    if (i >= size) { 
        return 0;
    }
    if (a[i] < 0) { 
        return a[i] + SumOfNegativeElements(a, size, i + 1);
    }
    else { 
        return SumOfNegativeElements(a, size, i + 1);
    }
}

void FillArrayWithRandomValues(int* a, const int size, int lowerBound, int upperBound, int i)
{
    if (i >= size) { 
        return;
    }
    a[i] = lowerBound + rand() % (upperBound - lowerBound + 1);
    FillArrayWithRandomValues(a, size, lowerBound, upperBound, i + 1);
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    srand((unsigned)time(0));
    const int n = 10;
    int a[n];

    FillArrayWithRandomValues(a, n, -10, 10, 0);

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        cout << "| " << a[i] << " |" << " ";
    }
    cout << endl;

    int negativeSum = SumOfNegativeElements(a, n, 0);
    cout << "Сума вiд'ємних елементiв масиву: " << "| " << negativeSum << " |" << endl;

    return 0;
}