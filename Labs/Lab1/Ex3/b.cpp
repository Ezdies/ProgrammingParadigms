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

    Number operator*(const Number& num) const {
        return Number{m_num * num.m_num};
    }
};

Number silnia (Number num){
    if(num == Number(0)){
        return Number(1);
    }
    return num * silnia(num - 1);
}


int main(int argc, char const *argv[])
{
    auto n = Number(5);
    auto res = silnia(n);
    std::cout << res.m_num << "\n";

    return 0;
}
