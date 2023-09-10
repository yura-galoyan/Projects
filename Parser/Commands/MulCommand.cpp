#include "MulCommand.hpp"

#include <numeric>
#include <functional>
#include <stdexcept>

double MulCommand::execute(std::vector<double>& ops){
    if(ops.size() < 2 ) {
        throw std::invalid_argument{"Not enough arguments"};
    }
    return std::accumulate( ops.begin(), ops.end(), 1, std::multiplies<double>{});
}