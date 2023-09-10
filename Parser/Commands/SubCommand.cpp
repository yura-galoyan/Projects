#include "SubCommand.hpp"

#include <numeric>
#include <functional>

#include <iostream>
#include <stdexcept>

double SubCommand::execute(std::vector<double>& ops){
    if(ops.size() < 2 ) {
        throw std::invalid_argument{"Not enough arguments"};
    }
    return std::accumulate( std::next(ops.begin()), ops.end(), *ops.begin(),  std::minus<double>{});
}