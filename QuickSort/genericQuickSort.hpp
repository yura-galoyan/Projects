#ifndef GEN_QUICK_SORT
#define GEN_QUICK_SORT


inline namespace gen {

template <typename RandomIt>
void quickSort(RandomIt begin, RandomIt end);

}

#include "genericQuickSort.impl.hpp"

#endif //GEN_QUICK_SORT