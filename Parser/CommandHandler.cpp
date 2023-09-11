#include "CommandHandler.hpp"

#include <stdexcept>

void CommandHandler::addCommand(std::string key, std::unique_ptr<Command> command){
    commands[key] = std::move(command);
}

double CommandHandler::execute(std::string key, std::vector<double>& operands){
    auto command = findCommand(key);
    return command->execute(operands);
}

Command* CommandHandler::findCommand(const std::string &key) {
    auto command = commands.find(key);
    if(command == commands.end()){
        throw std::invalid_argument{"Wrong command"};
    }
    return command->second.get();   
}
