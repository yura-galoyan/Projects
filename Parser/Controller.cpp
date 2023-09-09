#include "Controller.hpp"

#include "AddCommand.hpp"
#include "SubCommand.hpp"
#include "QuitCommand.hpp"
#include "MulCommand.hpp"
#include "DivCommand.hpp"

Controller::Controller(){    
    commandHandler.addCommand("add", std::make_unique<AddCommand>());
    commandHandler.addCommand("sub", std::make_unique<SubCommand>());
    commandHandler.addCommand("mul", std::make_unique<MulCommand>());
    commandHandler.addCommand("div", std::make_unique<DivCommand>());
    commandHandler.addCommand("quit", std::make_unique<QuitCommand>());
};

void Controller::run(){
    IOHandler::output("Enter Command. \"quit\" for exit ");
    while(!isDone){
        parser.setInput(IOHandler::getInput());
        try{
            auto command = parser.getCommand();
            auto operands = parser.getOperands();
            auto result = commandHandler.execute(command, operands);
            IOHandler::output("Result is: ", result);
        }
        catch(const std::invalid_argument& msg){
            std::cerr << msg.what() << ". try again" << std::endl;
        }
    }
}