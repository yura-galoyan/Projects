#ifndef IO_HANDLER_HPP
#define IO_HANDLER_HPP

#include <iostream>
#include <string>

class IOHandler{
public:
    template<typename... Args>
    static void output(const Args&...);
    static std::string getInput( );

};


template <typename... Args>
inline void IOHandler::output(const Args &... args){
    ((std::cout<<args), ...);
    std::cout << std::endl;
}

#endif //IO_HANDLER_HPP