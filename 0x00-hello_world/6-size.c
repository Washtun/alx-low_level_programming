#include<stdio.h>

int main() {
    int a;
    float flt;
    long lng;
    char ch;
    long long lng_2;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte(s)\n", sizeof(ch));
    printf("Size of an int: %zu byte(s)\n", sizeof(a));
    printf("Size of a long int: %zu byte(s)\n", sizeof(lng));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(lng_2));
    printf("Size of a float: %zu byte(s)\n", sizeof(flt));
    
    

    return 0;
}

