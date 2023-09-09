#ifndef MUL_COMMAND_HPP
#define MUL_COMMAND_HPP

#include "Command.hpp"

class MulCommand : public Command
{
public:
    double execute(std::vector<double>&) override; 
};


#endif //MUL_COMMAND_HPP