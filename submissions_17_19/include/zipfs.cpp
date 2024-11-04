#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>


// std::vector<char> readBook(std::string fileName);

void readBook(std::string file) {

    std::ifstream input_file_stream(file);

    std::vector<char> book;

    if (!input_file_stream.is_open()) {
        std::cout << "File is not open" << std::endl;
    } else {
        std::cout << "File is OPEN" << std::endl;
    }

    char words;
    int wordCounter = 0;
    int spaceCounter = 0;

    // supposedly this syntax skips over whitespace (so my space counter is useles :( )
    while (input_file_stream >> words) {
        if (std::isalpha(words) && !std::isspace(words)) {
            book.push_back(words);
            std::cout << words << std::endl;
            wordCounter++;
        }

        spaceCounter++;
    };

    spaceCounter = spaceCounter - wordCounter;

    std::cout << "Space Counter: " << spaceCounter << std::endl;
    std::cout << "Word Counter: " << wordCounter << std::endl;

};

int main(){
    std::string fileName = "moby_dick.txt";

    readBook(fileName);
    return 0;
}
