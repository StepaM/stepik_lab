#include <stdlib.h>
#include "sum_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"



int sum_before_and_after_negative(int arr[], int arr_size){
    int sum = 0;
    int first_neg_idx = index_first_negative(arr, arr_size);
    int last_neg_idx = index_last_negative(arr, arr_size);

    if (first_neg_idx == -1){
        return sum;
    }
    for (int i = 0; i < first_neg_idx; ++i){
        sum += abs(arr[i]);
    }
    for (int i = last_neg_idx; i < arr_size; ++i){
        sum += abs(arr[i]);
    }
    return sum;
}