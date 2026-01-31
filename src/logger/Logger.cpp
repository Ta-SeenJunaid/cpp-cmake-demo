#include "Logger.hpp"
#include <iostream>

void Logger::log(const std::string &message, Level level)
{
    switch (level)
    {
    case Level::Info:
        std::cout << "[INFO] ";
        break;
    case Level::Warning:
        std::cout << "[WARN] ";
        break;
    case Level::Error:
        std::cout << "[ERROR] ";
        break;
    }
    std::cout << message << std::endl;
}