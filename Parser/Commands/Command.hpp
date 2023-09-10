#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <vector>

class Command
{
public:
    virtual double execute(std::vector<double>&) = 0;
    virtual ~Command() { };
};


#endif //COMMAND_HPP