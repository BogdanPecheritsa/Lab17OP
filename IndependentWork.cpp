#include <stdio.h>
#include <math.h>
#include <windows.h>

double Leng(double xA, double yA, double xB, double yB) {
    return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

double Perim(double xA, double yA, double xB, double yB, double xC, double yC) {
    return Leng(xA, yA, xB, yB) + Leng(xB, yB, xC, yC) + Leng(xC, yC, xA, yA);
}

double Area(double xA, double yA, double xB, double yB, double xC, double yC) {
    double p = Perim(xA, yA, xB, yB, xC, yC) / 2;
    return sqrt(p * (p - Leng(xA, yA, xB, yB)) * (p - Leng(xA, yA, xC, yC)) * (p - Leng(xB, yB, xC, yC)));
}

double Dist(double xP, double yP, double xA, double yA, double xB, double yB) {
    return 2 * Area(xP, yP, xA, yA, xB, yB) / Leng(xA, yA, xB, yB);
}

void Altitudes(double xA, double yA, double xB, double yB, double xC, double yC, double& hA, double& hB, double& hC) {
    hA = Dist(xA, yA, xB, yB, xC, yC);
    hB = Dist(xB, yB, xA, yA, xC, yC);
    hC = Dist(xC, yC, xA, yA, xB, yB);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double xA, yA, xB, yB, xC, yC, xD, yD;
    double hAB, hBD, hCD;

    printf("Введіть координати точки A (xA yA): ");
    scanf_s("%lf %lf", &xA, &yA);

    printf("Введіть координати точки B (xB yB): ");
    scanf_s("%lf %lf", &xB, &yB);

    printf("Введіть координати точки C (xC yC): ");
    scanf_s("%lf %lf", &xC, &yC);

    printf("Введіть координати точки D (xD yD): ");
    scanf_s("%lf %lf", &xD, &yD);

    printf("Довжина відрізка AB: %.2f\n", Leng(xA, yA, xB, yB));
    printf("Довжина відрізка AC: %.2f\n", Leng(xA, yA, xC, yC));
    printf("Довжина відрізка AD: %.2f\n", Leng(xA, yA, xD, yD));

    printf("Периметр трикутника ABC: %.2f\n", Perim(xA, yA, xB, yB, xC, yC));
    printf("Периметр трикутника ABD: %.2f\n", Perim(xA, yA, xB, yB, xD, yD));
    printf("Периметр трикутника ACD: %.2f\n", Perim(xA, yA, xC, yC, xD, yD));

    printf("Площа трикутника ABC: %.2f\n", Area(xA, yA, xB, yB, xC, yC));
    printf("Площа трикутника ABD: %.2f\n", Area(xA, yA, xB, yB, xD, yD));
    printf("Площа трикутника ACD: %.2f\n", Area(xA, yA, xC, yC, xD, yD));

    printf("Відстань від точки D до прямої AB: %.2f\n", Dist(xD, yD, xA, yA, xB, yB));
    printf("Відстань від точки D до прямої AC: %.2f\n", Dist(xD, yD, xA, yA, xC, yC));
    printf("Відстань від точки D до прямої BC: %.2f\n", Dist(xD, yD, xB, yB, xC, yC));

    Altitudes(xA, yA, xB, yB, xC, yC, hAB, hBD, hCD);

    printf("Висота трикутника ABC з вершини A: %.2f\n", hAB);
    printf("Висота трикутника ABC з вершини B: %.2f\n", hBD);
    printf("Висота трикутника ABC з вершини C: %.2f\n", hCD);

    return 0;
}