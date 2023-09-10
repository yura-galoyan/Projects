#include "Controller.hpp"
#include "IostreamPolicy.hpp"

int main(){
    Controller<IostreamPolicy> c;
    c.run();
}