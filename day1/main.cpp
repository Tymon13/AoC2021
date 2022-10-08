#include <fstream>
#include <vector>
#include <string>
#include <iostream>

std::vector<int> getInput(const std::string& filename)
{
    std::vector<int> result;
    std::ifstream stream{filename};
    while(stream >> result.emplace_back())
        ;
    result.pop_back(); // last insertion failed
    return result;
}

int main()
{
    auto input = getInput("../day1/input");
    for(int i: input)
        std::cout << i << "\n";
}
