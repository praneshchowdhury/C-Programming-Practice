#include <stdio.h>

union Quiz1 {
    char a;
    int b;
    double c;
};

struct Quiz2 {
    char x;
    int y;
    char z;
};

union Quiz3 {
    char name[13];
    int id;
};

struct Quiz4 {
    double d;
    char c;
    int i;
};

int main() {
    printf("1: %d\n", sizeof(union Quiz1));
    printf("2: %d\n", sizeof(struct Quiz2));
    printf("3: %d\n", sizeof(union Quiz3));
    printf("4: %d\n", sizeof(struct Quiz4));
    return 0;
}