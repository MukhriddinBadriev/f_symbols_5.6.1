#include <iostream>

#include <string>
#include <map>
#include <set>
#include <vector>

#include <utility>
#include <algorithm>

bool predicate(std::pair<char, int> &a, std::pair<char, int> &b) {
    return a.second > b.second;
}

int main()
{

    std::map<char, int> text;
    std::string a;

    std::cout << "[IN]: ";
    std::getline(std::cin, a);

    for (const auto& elem : a) {
        ++text[elem];
    }

    std::vector<std::pair<char, int>> symb_freq(text.begin(),text.end());

    std::sort(symb_freq.begin(), symb_freq.end(), predicate);

    std::cout << "[OUT]:\n";
    for (const auto& [symbol, freq] : symb_freq) {
        std::cout << symbol << ": " << freq << '\n';
    }
    
    return 0;
}