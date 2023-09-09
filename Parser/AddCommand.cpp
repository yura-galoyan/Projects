#include "AddCommand.hpp"

#include <numeric>
#include <stdexcept>

double AddCommand::execute(std::vector<double>& operands){
    if(operands.size() < 2 ) {
        throw std::invalid_argument{"Not enough arguments"};
    }
    return std::accumulate(operands.begin(), operands.end(), 0);
}