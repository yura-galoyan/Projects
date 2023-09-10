#include "AndCommand.hpp"

#include <stdexcept>
#include <functional>
#include <numeric>

double AndCommand::execute(std::vector<double>& ops){
    if( ops.size() < 2){
        throw std::invalid_argument{"Not enough arguments"};
    }

    if(!std::all_of(ops.begin(), ops.end(),[](const auto& op){ return op == 0 || op == 1; } )){
        throw std::invalid_argument{"Wrong arguments"};
    };

    return std::accumulate(ops.begin(), ops.end(), 1, std::logical_and<double>{});
}