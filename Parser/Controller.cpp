#include "Controller.hpp"

#include "Commands/AddCommand.hpp"
#include "Commands/SubCommand.hpp"
#include "Commands/QuitCommand.hpp"
#include "Commands/MulCommand.hpp"
#include "Commands/DivCommand.hpp"
#include "Commands/ModCommand.hpp"
#include "Commands/AndCommand.hpp"
#include "Commands/OrCommand.hpp"

Controller::Controller(){    
    commandHandler.addCommand("add", std::make_unique<AddCommand>());
    commandHandler.addCommand("sub", std::make_unique<SubCommand>());
    commandHandler.addCommand("mul", std::make_unique<MulCommand>());
    commandHandler.addCommand("div", std::make_unique<DivCommand>());
    commandHandler.addCommand("mod", std::make_unique<ModCommand>());
    commandHandler.addCommand("and", std::make_unique<AndCommand>());
    commandHandler.addCommand("or", std::make_unique<OrCommand>());
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