#ifndef ADDC_COMMAND_HPP
#define ADDC_COMMAND_HPP

#include "Command.hpp"

#include <vector>

class AddCommand : public Command
{
public:
    double execute(std::vector<double>&) override ;
};


#endif //ADDC_COMMAND_HPP