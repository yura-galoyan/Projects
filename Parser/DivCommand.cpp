#include "DivCommand.hpp"

#include <stdexcept>

#include <numeric>
#include <functional>

double DivCommand::execute(std::vector<double>& ops){
    if(ops.size() < 2){
        throw std::invalid_argument{"Not enough arguments"};
    }
    return std::accumulate(std::next(ops.begin()), ops.end(), *ops.begin(), std::divides<double>{} );
}