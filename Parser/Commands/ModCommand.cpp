#include "ModCommand.hpp"

#include <stdexcept>
#include <functional>

double ModCommand::execute(std::vector<double> & ops){
    if(ops.size() != 2){
        throw std::invalid_argument{"Wrong number of arguments"};
    }

    if(!std::all_of(ops.begin(), ops.end(),[](const auto& op){ return op - static_cast<int>(op) == 0; } )){
        throw std::invalid_argument{"Wrong arguments"};
    }

    return static_cast<int>(ops[0]) % static_cast<int>(ops[1]);
}