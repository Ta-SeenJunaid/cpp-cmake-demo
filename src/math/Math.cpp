#include "Math.hpp"
#include "Logger.hpp"

int Math::add(int a, int b)
{
    Logger::log("Adding numbers");
    return a + b;
}