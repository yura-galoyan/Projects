#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "CommandHandler.hpp"
#include "IOHandler.hpp"
#include "Parser.hpp"

class Controller
{
public:
    Controller();
    void run();
    
private:
    CommandHandler commandHandler;
    Parser parser;

private:
    bool isDone{};
};


#endif //CONTROLLER_HPP