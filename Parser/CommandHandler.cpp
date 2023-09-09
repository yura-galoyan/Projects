#include "CommandHandler.hpp"

#include <stdexcept>

void CommandHandler::addCommand(std::string key, std::unique_ptr<Command> command){
    commands[key] = std::move(command);
}

double CommandHandler::execute(std::string key, std::vector<double>& operands){
    if(commands.find(key) == commands.end()){
        throw std::invalid_argument{"Wrong command"};
    }
    return commands[key]->execute(operands);
}
