#include <iostream>
#include <string>
#include <vector>

struct Relation {
    std::string father;
    std::string son;
};


int main(int argc, char const *argv[])
{
    std::vector<Relation> relations = {{"jan", "jerzy"}, {"jerzy", "janusz"}, {"jerzy", "jozef"}};

    for(int i = 0; i < relations.size(); i++){
        if(relations[i].son == "janusz"){
            std::cout << relations[i - 1].father << std::endl;
            break;
        }
    }
    
    return 0;
}
