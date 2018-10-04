#include <stdlib.h>
#include "sum_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"


int sum_between_negative(int arr[], int arr_size){
    int sum = 0;
    int last_neg_idx = index_last_negative(arr, arr_size);
    if (last_neg_idx == -1){
        return sum;
    }
    for (int i = index_first_negative(arr, arr_size); i < last_neg_idx; ++i){
        sum += abs(arr[i]);
    }
    return sum;
}