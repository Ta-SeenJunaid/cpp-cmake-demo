#include "Math.hpp"
#include "Logger.hpp"

int main()
{
    Logger::log("Application started");

    int result = Math::add(2, 3);
    Logger::log("Result: " + std::to_string(result));

    return 0;
}