#include "Random.hpp"
#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int random_value = System::Random::random(0, 10);
        std::cout << random_value << "\n";
    }
    return 0;
}