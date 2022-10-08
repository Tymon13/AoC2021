#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>

std::vector<int> getInput(const std::string& filename)
{
    std::vector<int> result;
    std::ifstream stream{filename};
    while (stream >> result.emplace_back())
    {
    }
    result.pop_back(); // last insertion failed
    return result;
}

int countIncreasing(const std::vector<int>& input)
{
    int result{};
    for (auto it = input.begin(); it != std::prev(input.end()); ++it)
    {
        if (*it < *std::next(it))
        {
            ++result;
        }
    }
    return result;
}

int main()
{
    auto input = getInput("../day1/input");
    std::cout << "Number of increasing values: " << countIncreasing(input);
}
