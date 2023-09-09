#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <string>
#include <sstream>

class Parser
{
public:
    Parser() = default;
    Parser(std::string command);
    void setInput(std::string);
    std::string getCommand();
    std::vector<double> getOperands(); 

private:
    std::stringstream input;
};



#endif //PARSER_HPP