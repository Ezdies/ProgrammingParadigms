#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int a = 20;
    long long int b = 1;

    for(long long int i = 1; i <= a; i++){
        b = b * i;
    }

    printf("%lld\n", b);

    return 0;
}
