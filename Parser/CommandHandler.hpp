#ifndef COMMAND_HANDLER_HPP
#define COMMAND_HANDLER_HPP

#include <unordered_map>
#include <memory>
#include <string>
#include <vector>

#include "Commands/Command.hpp"

class CommandHandler
{
public:
    void addCommand(std::string, std::unique_ptr<Command>);
    double execute(std::string key, std::vector<double>&);

private:
    Command* findCommand(const std::string& key);

private:
    std::unordered_map<std::string, std::unique_ptr<Command> > commands; 

};




#endif //COMMAND_HANDLER_HPP