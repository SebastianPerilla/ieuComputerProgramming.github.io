#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include "zipfs.h"


// void readBook(std::string filename) {

//     // open file for reading
//     std::ifstream istrm(filename);

//     if (!istrm.is_open()) {
//         std::cout << "failed to open " << filename << '\n';
//     }
    
//     else {
//         std::string line;
//         int line_count = 0;
//         while (std::getline(istrm, line)) 
//         {
//             line_count++;
//             std::istringstream iss(line);
//             std::string word;
//             while (iss >> word) {
                
//             }
            
//         }
//         std::cout << "there are: " << line_count << " lines in this file" <<  std::endl;
//     }
// };



#include "../include/zipfs.h"
#include <iostream>

int main() {
    auto book = readBook("moby_dick.txt");
    auto wordFrequency = computeWordFrequency(book);
    std::cout << "Unique words: " << countUniqueWords(book) << std::endl;
    return 0;
}
