#include "Parser.hpp"

Parser::Parser(std::string input_)
    :input(input_)
    {  }

void Parser::setInput(std::string input_){
    input.clear();
    input << input_;
}

std::string Parser::getCommand(){
    std::string tmp;
    input >> tmp;
    return tmp; 
}

#include <iostream>

std::vector<double> Parser::getOperands(){
    
    std::vector<std::string> tokens;
    std::string token;
    while(  input >> token ) tokens.push_back(token );

    std::vector<double> operands;

    for(int i = 0; i < tokens.size(); ++i){
        if( tokens[i] == "-op" ){
            try{
                if(i + 1 > tokens.size() - 1){
                    throw std::invalid_argument{""};
                }
                operands.push_back(std::stod(tokens[i + 1]));
                ++i;
            }
            
            catch(...){
                throw std::invalid_argument{"Wrong argument"};
            }
        }
        else if( tokens[i][0] == '-'){
            throw std::invalid_argument{"Incorrect option"};
        }
    }
    return operands;

}
