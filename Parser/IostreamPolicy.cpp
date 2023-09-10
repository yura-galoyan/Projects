#include "IostreamPolicy.hpp"

std::string IostreamPolicy::getInput( ){

    std::string tmp;

    std::getline(std::cin,tmp);

    return tmp;
}
