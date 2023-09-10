#ifndef AND_COMMAND_HPP
#define AND_COMMAND_HPP

#include "Command.hpp"

class AndCommand : public Command
{
public:
    double execute(std::vector<double>&) override ;
};


#endif //AND_COMMAND_HPP