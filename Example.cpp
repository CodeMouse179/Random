#include "Random.hpp"
#include <iostream>

int main()
{
    //System::Random::random:
    for (int i = 0; i < 10; i++)
    {
        int random_value = System::Random::random(0, 10);
        std::cout << random_value << "\n";
    }
    //System::Random::shuffle:
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    //System::Random::shuffle(arr.begin(), arr.end());
    System::Random::shuffle(arr);
    return 0;
}