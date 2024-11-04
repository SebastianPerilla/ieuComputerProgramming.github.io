#include <iostream>
#include <vector>
#include <cctype>   

int main(){
    std::vector<char> vec = {'a', ' ', '!'};
    
    for (auto & element : vec) {
        if (std::isalpha(element) || std::isspace(element)) {
            std::cout << element << std::endl;
        };
    };

    return 0;
}