#ifndef DIV_COMMAND_HPP
#define DIV_COMMAND_HPP

#include "Command.hpp"

class DivCommand : public Command
{
public:
    double execute(std::vector<double>&) override;
};


#endif //DIV_COMMAND_HPP