#include<stdio.h>
double calc_euler(int n);
int factorial(int n);

int main() {
    int n;

    printf("정수 n을 입력하세요.\n");
    scanf_s("%d", &n);

    printf("%lf", calc_euler(n));

    return 0;
}

double calc_euler(int n) {
    double sum = 1.0;
    for (int i = 1; i <= n; i++) {
        sum += (1 / (double)factorial(i));
    }
    return sum;
}

int factorial(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}