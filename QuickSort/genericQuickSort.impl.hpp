#include "genericQuickSort.hpp"

inline namespace gen{

template <typename RandomIt>
auto partition(RandomIt begin, RandomIt end){
    auto pivot = end;
    auto i_it = begin;
    for(auto j_it = begin; j_it != end; std::advance(j_it, 1) ){
        if(*j_it < *pivot){
            std::iter_swap(j_it, i_it);
            std::advance(i_it, 1 );
        }
    }
    std::iter_swap(i_it, end);
    return i_it;
}

template< typename RandomIt>
void doQuickSort(RandomIt begin, RandomIt end){
    if(std::distance(begin, std::next(end)) > 0 ){
        auto pivot = partition(begin, end);
        doQuickSort(begin, std::prev(pivot));
        doQuickSort(std::next(pivot), end);
    }
}

template<typename RandomIt>
void quickSort(RandomIt begin, RandomIt end){
    doQuickSort(begin,std::prev(end));
}



}   // gen