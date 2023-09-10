#ifndef MOD_COMMAND_HPP
#define MOD_COMMAND_HPP

#include "Command.hpp"


class ModCommand : public Command
{
public:
    double execute(std::vector<double>&) override;

};


#endif //MOD_COMMAND_HPP