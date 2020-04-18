#include<stdio.h>

enum Numbers{
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
};

enum Values {
    VALUE1 = 10,
    VALUE2 = 25,
    VALUE3 = 23,
    VALUE4 = 17,
    VALUE5 = 49,
};

int main() {
    printf("%d\n", (ONE + VALUE1));
    printf("%d\n", (THREE ^ VaLUE1));
    printf("%d\n", (VALUE5 - FOUR));
    printf("%d\n", (VALUE5 & FOUR));
    printf("%d\n", (VALUE4 / THREE));
    printf("%d\n", (VALUE4 | THREE));
    printf("%d\n", (TWO * VALUE3));
    printf("%d\n", (TWO >> VALUE3));
    printf("%d\n\n", (VALUE2 % FIVE));
    printf("%d\n", (VALUE2 << FIVE));
    return 0;
}