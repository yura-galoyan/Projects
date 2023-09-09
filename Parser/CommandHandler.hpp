#ifndef COMMAND_HANDLER_HPP
#define COMMAND_HANDLER_HPP

#include <unordered_map>
#include <memory>
#include <string>
#include <vector>

#include "Command.hpp"

class CommandHandler
{
public:
    void addCommand(std::string, std::unique_ptr<Command>);
    double execute(std::string key, std::vector<double>&);

private:
    std::unordered_map<std::string, std::unique_ptr<Command> > commands; 

};




#endif //COMMAND_HANDLER_HPP