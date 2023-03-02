#include <iostream>

struct Number
{
    int m_num;
    Number() = default;
    Number(int num) : m_num(num) {}

    bool operator==(Number num) const{
        return m_num == num.m_num;
    }

    Number operator-(const int num) const{
        return Number{m_num - num};
    }

    Number operator+(const int num) const{
        return Number{m_num + num};
    }
};

Number suma (Number a, Number b){
    if(b == Number(0)){
        return Number(0);
    }
    return suma(a + 1, b - 1) + a.m_num;
}

int main(int argc, char const *argv[])
{
    auto a = Number(1); //licznik początkowy
    auto b = Number(3); //ile razy ma się wykonać

    auto sum = suma(a, b);
    std::cout << sum.m_num << "\n";

    return 0;
}
