#ifndef NOT_COMMAND_HPP
#define NOT_COMMAND_HPP

#include "Command.hpp"

class NotCommand : public Command
{
public:
    double execute(std::vector<double>& ) override;
};


#endif //NOT_COMMAND_HPP