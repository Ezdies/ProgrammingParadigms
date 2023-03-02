#include <stdio.h>

//ciąg arytmetyczny 1 + 2 + 3 + ... + n w postaci imperatywnej

int main(int argc, char const *argv[])
{
    int a = 1; //licznik początkowy
    int b = 3; //ile razy ma się wykonać

    int sum = 0;

    for(int i = a; i <= b; i++){
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}