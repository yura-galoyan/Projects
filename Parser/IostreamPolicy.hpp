#ifndef IOSTREAM_POLICY_HPP
#define IOSTREAM_POLICY_HPP

#include <iostream>
#include <string>

class IostreamPolicy{
public:
    template<typename... Args>
    static void output(const Args&...);
    static std::string getInput( );

};


template <typename... Args>
inline void IostreamPolicy::output(const Args &... args){
    ((std::cout<<args), ...);
    std::cout << std::endl;
}

#endif //IOSTREAM_POLICY_HPP