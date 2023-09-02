#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

#include "QuickSort.hpp"

template<typename InputIt>
void printRange(InputIt begin, InputIt end, std::string msg){
    std::cout<<msg;
    std::copy(begin,end,std::ostream_iterator<int>{std::cout," "});
    std::cout<<std::endl;
}

template<typename Container>
void printRange(Container c, std::string msg = ""){
    printRange(c.begin(), c.end(), msg);
}

#include <list>

int main(){
    std::list<int> arr{4,3,1,6,7,15,48,68,94,73,46};

    printRange(arr,"starting array is: ");

    quickSort(arr.begin(), arr.end());

    if(std::is_sorted(arr.begin(), arr.end())){
        printRange(arr, "array is sorted: ");
    }
    else{
        std::cout<<"array is not sorted: "<<std::endl;
    }

}