#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "sum_between_negative.h"
#include "sum_before_and_after_negative.h"


#define MAX_SIZE 100

void menu()
{
    int op;
    char sep;
    int arr[MAX_SIZE] = {0};
    scanf("%d%c", &op, &sep);

    int arr_size = 0;
    //считываем массив
    do {
        scanf("%d%c", &arr[arr_size], &sep);
        ++arr_size;
    } while(sep!='\n');

    switch (op){
        case 0:
            if (index_first_negative(arr, arr_size) != -1){
                printf("%d\n", index_first_negative(arr, arr_size));
            }
            break;
        case 1:
            if (index_first_negative(arr, arr_size) != -1){
                printf("%d\n", index_last_negative(arr, arr_size));
            }
            break;
        case 2:
            printf("%d\n", sum_between_negative(arr, arr_size));
            break;
        case 3:
            printf("%d\n", sum_before_and_after_negative(arr, arr_size));
            break;
        default: {
            printf("Данные некорректны\n");
        }
    }
}
