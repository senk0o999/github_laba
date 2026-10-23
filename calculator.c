#include <stdio.h>
int add(int a, int b) {
    return a + b
}

int subtract(int a, int b) {
    return a - b 
}

int multiply(int a, int b) {
    return a * b
}

int divide(int a, int b) { 
    if (b == 0) {
        printf("Деление на 0!\n");
        return 0;
    }
    return a / b;
}

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

