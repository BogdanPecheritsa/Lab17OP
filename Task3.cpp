#include <stdio.h>
#include <windows.h>

double Calc(double A, double B, int Op);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B;
    int N1, N2, N3;

    printf("������ �������� A: ");
    scanf_s("%lf", &A);

    printf("������ �������� B: ");
    scanf_s("%lf", &B);

    printf("������ ���� �������� N1: ");
    scanf_s("%d", &N1);

    printf("������ ���� �������� N2: ");
    scanf_s("%d", &N2);

    printf("������ ���� �������� N3: ");
    scanf_s("%d", &N3);

    double result1 = Calc(A, B, N1);
    double result2 = Calc(A, B, N2);
    double result3 = Calc(A, B, N3);

    printf("��������� �������� N1: %.2f\n", result1);
    printf("��������� �������� N2: %.2f\n", result2);
    printf("��������� �������� N3: %.2f\n", result3);

    return 0;
}

double Calc(double A, double B, int Op) {
    double result;

    switch (Op) {
    case 1:
        result = A - B;
        break;
    case 2:
        result = A * B;
        break;
    case 3:
        result = A / B;
        break;
    default:
        result = A + B;
        break;
    }

    return result;
}