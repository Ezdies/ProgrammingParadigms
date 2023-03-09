#include <iostream>

int usilnia(int n, int k)
{
    if (n > 0)
    {
        return n * usilnia(n - k, k);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n = 21;
    int k = 5;

    std::cout << usilnia(n, k);
}