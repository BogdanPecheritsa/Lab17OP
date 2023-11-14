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

    printf("Введіть величину вкладу: ");
    scanf_s("%lf", &principal);

    printf("Введіть процентну ставку (річна): ");
    scanf_s("%lf", &rate);

    printf("Введіть термін вкладу в днях: ");
    scanf_s("%d", &days);

    double income = calculateDepositIncome(principal, rate, days);

    printf("Дохід за вкладом: %.2f\n", income);

    return 0;
}