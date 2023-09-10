#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "CommandHandler.hpp"
#include "Parser.hpp"

template<typename IOPolicy>
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

#include "Controller.impl.hpp"

#endif //CONTROLLER_HPP