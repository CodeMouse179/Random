//      +--------------------------------------------------------------------------------+
//      |                                  Random v0.2.0                                 |
//      |  Modified Date : 2023/3/25                                                     |
//      |  Introduction : System.Random in C++                                           |
//      |  License : MIT                                                                 |
//      |  Platform : Windows, Linux, macOS                                              |
//      |  C++ Required Version : C++ 11                                                 |
//      |  API Family : https://github.com/CodeMouse179/System                           |
//      |  Repository : https://github.com/CodeMouse179/Random                           |
//      |                                                                                |
//      |                             Designer : CodeMouse179                            |
//      |  Email : codemouse179@gmail.com                                                |
//      |  Github : https://github.com/CodeMouse179                                      |
//      |  Bilibili : https://space.bilibili.com/3461577785215838                        |
//      +--------------------------------------------------------------------------------+

#ifndef SYSTEM_RANDOM_HPP
#define SYSTEM_RANDOM_HPP

#define SYSTEM_RANDOM_VERSION_MAJOR 0
#define SYSTEM_RANDOM_VERSION_MINOR 2
#define SYSTEM_RANDOM_VERSION_PATCH 0
#define SYSTEM_RANDOM_VERSION (SYSTEM_RANDOM_VERSION_MAJOR << 16 | SYSTEM_RANDOM_VERSION_MINOR << 8 | SYSTEM_RANDOM_VERSION_PATCH)
#define SYSTEM_RANDOM_VERSION_STRING "0.2.0"

#include <random>
#include <vector>

namespace System
{
    class Random
    {
    public:
        template<typename T>
        static T random(T range_from, T range_to)
        {
            std::random_device                  rand_dev;
            std::mt19937                        generator(rand_dev());
            std::uniform_int_distribution<T>    distr(range_from, range_to);
            return distr(generator);
        }

        template<typename T>
        static void shuffle(T first, T last)
        {
            std::random_device                  rand_dev;
            std::mt19937                        generator(rand_dev());
            std::shuffle(first, last, generator);
        }

        template<typename T>
        static void shuffle(std::vector<T>& container)
        {
            std::random_device                  rand_dev;
            std::mt19937                        generator(rand_dev());
            std::shuffle(container.begin(), container.end(), generator);
        }
    };
}

#endif