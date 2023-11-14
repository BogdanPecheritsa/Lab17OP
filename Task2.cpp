#include <stdio.h>
#include <windows.h>

void fillArrayWithMultiplesOfSeven(double array[], int size);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double myArray[10];

    fillArrayWithMultiplesOfSeven(myArray, 10);

    printf("ћасив, заповнений дес€тьма елементами, кратними 7:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", myArray[i]);
    }

    return 0;
}

void fillArrayWithMultiplesOfSeven(double array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = (i + 1) * 7.0;
    }
}