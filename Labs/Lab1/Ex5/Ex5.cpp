#include <iostream>

// poprawiony ciąg artmetyczny, aby korzystał ze wzoru, gdzie m to jest ilość elementów ciągu, a n alement początkowy

int main(int argc, char const *argv[])
{
    int n = 1;
    int m = 3;

    std::cout << ((m * (m + 1)) - (n * (n + 1))) / 2 + n << '\n';

    return 0;
}
