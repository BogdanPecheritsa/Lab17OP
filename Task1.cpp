#include <stdio.h>
#include <windows.h>
#include <math.h>

double calculateDepositIncome(double principal, double rate, int days) {
    double interestRate = rate / 100.0;
    double dailyRate = interestRate / 365.0;
    double amount = principal * pow(1 + dailyRate, days);
    double income = amount - principal;

    return income;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double principal, rate;
    int days;

    printf("������ �������� ������: ");
    scanf_s("%lf", &principal);

    printf("������ ��������� ������ (����): ");
    scanf_s("%lf", &rate);

    printf("������ ����� ������ � ����: ");
    scanf_s("%d", &days);

    double income = calculateDepositIncome(principal, rate, days);

    printf("����� �� �������: %.2f\n", income);

    return 0;
}