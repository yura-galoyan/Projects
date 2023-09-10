#ifndef OR_COMMAND_HPP
#define OR_COMMAND_HPP

#include "Command.hpp"

class OrCommand : public Command
{
public:
    double execute(std::vector<double>&) override;

};


#endif //OR_COMMAND_HPP