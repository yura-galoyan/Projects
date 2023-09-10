#include "XorCommand.hpp"

#include <stdexcept>
#include <numeric>
#include <functional>

double XorCommand::execute(std::vector<double>& ops){
    if(ops.size() < 2){
        throw std::invalid_argument{"Not enought arguments"};
    }

    if(!std::all_of(ops.begin(), ops.end(),[](const auto& op){ return op == 0 || op == 1; } )){
        throw std::invalid_argument{"Wrong arguments"};
    };

    return std::accumulate(ops.begin(), ops.end(), 0) % 2;
}