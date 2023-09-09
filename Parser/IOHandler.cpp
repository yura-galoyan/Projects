#include "IOHandler.hpp"

std::string IOHandler::getInput( ){

    std::string tmp;

    std::getline(std::cin,tmp);

    return tmp;
}
