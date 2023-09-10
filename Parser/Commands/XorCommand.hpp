#ifndef XOR_COMMAND_HPP
#define XOR_COMMAND_HPP

#include "Command.hpp"

class XorCommand : public Command
{
public:
    double execute(std::vector<double>& ) override ;
};


#endif //XOR_COMMAND_HPP