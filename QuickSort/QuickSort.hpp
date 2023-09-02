#include <vector>
#include <utility>



namespace reg{

void quickSort(std::vector<int>& vector );
void doQuickSort(std::vector<int>& arr, int p, int r);
int partition(std::vector<int>& arr, int p, int r );


// Vector variant
void quickSort(std::vector<int>& vector ){
    doQuickSort(vector, 0, vector.size() - 1);
}

void doQuickSort(std::vector<int>& arr, int p, int r){
    if( p < r){
        int q = partition(arr,p,r);
        doQuickSort(arr, p, q - 1);
        doQuickSort(arr, q + 1, r);
    }
}

int partition(std::vector<int>& arr, int p, int r ){
    int pivot = arr[r];
    int i = p - 1;
    for(int j = p; j <= r - 1; ++j){
        if( arr[j] < pivot   ){
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[r]);
    return i + 1;
}

}

#include "genericQuickSort.hpp"




