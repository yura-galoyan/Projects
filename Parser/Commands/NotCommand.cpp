#include "NotCommand.hpp"

#include <stdexcept> 

#include <iostream>

double NotCommand::execute(std::vector<double>& ops){

    if( ops.size() != 1){
        throw std::invalid_argument{"Wrong number of arguments"};
    }

    if(ops[0] != 0 && ops[0] != 1){
        throw std::invalid_argument{"Wrong argument"};
    }

    return !static_cast<bool>(ops[0]);
}