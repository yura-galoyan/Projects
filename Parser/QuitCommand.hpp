#ifndef QUIT_COMMAND_HPP
#define QUIT_COMMAND_HPP

#include "Command.hpp"

class QuitCommand : public Command
{
public:
    double execute(std::vector<double>&) override;
};


#endif //QUIT_COMMAND_HPP