#include <iostream>
#include <map>
#include <algorithm>

int main(int argc, char const *argv[])
{
    int x = 3;
    std::map<int, int> myMap;
    std::pair<int, int> pair1 = {2, 1};
    std::pair<int, int> pair2 = {3, 4};
    std::pair<int, int> pair3 = {3, 5};

    myMap.insert(pair1);
    myMap.insert(pair2);
    myMap.insert(pair3);

    for(const auto &[first, second] : myMap){
        if(x == first){
            std::cout << second << '\n';
            break;
        }
    }

    return 0;
}
