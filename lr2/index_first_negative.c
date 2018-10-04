#include "index_first_negative.h"


int index_first_negative(int arr[], int arr_size){
    for (int i = 0; i < arr_size; ++i){
        if (arr[i] < 0){
            return i;
        }
    }
    return -1;
}
