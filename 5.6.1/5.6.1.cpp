#include <iostream>

#include <string>
#include <map>
#include <utility>
#include <set>
#include <algorithm>

int main()
{    
    std::map<char,int> text ;
    std::string a;

    std::cout << "[IN]: ";
    std::getline(std::cin, a);
    
    for (const auto& elem : a) {
        ++text[elem];
    }
    
    std::map<int, char> reverse_text;
    for (std::pair<char, int> pair : text) {
        reverse_text[pair.second] = pair.first;
    }
    
    auto r_i = reverse_text.rbegin();
    
    std::cout << "[OUT]:\n";
    while (r_i!= reverse_text.rend())    {
        std::cout << r_i->second << ": " << r_i->first << '\n';
        r_i++;
    }
    
    return 0;
}