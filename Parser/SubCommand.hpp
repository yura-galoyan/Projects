#ifndef SUB_COMMAND_HPP
#define SUB_COMMAND_HPP

#include "Command.hpp"


class SubCommand : public Command
{
public:
    double execute(std::vector<double>& ) override ;
};


#endif //SUB_COMMAND_HPP