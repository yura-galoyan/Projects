#include "QuitCommand.hpp"

#include <cstdlib>

double QuitCommand::execute(std::vector<double>&){
    std::exit(0);
}