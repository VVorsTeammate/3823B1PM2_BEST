#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int find_start(int* arr, int size, int* start_row ,int* start_col){
    int size_1 = round(sqrt(size));
    for(int i = 0; i < size_1; i++){
        for(int j = 0; j < size_1; j++){
            if (arr[j * size_1 + i] == 1){
                *start_row = j;
                *start_col = i;
                return 0;
            }
        }
    }
}

void find_finish(int* arr, int size, int* finish_row, int* finish_col){
    int size_1 = rint(sqrt(size));
    for(int i = 0; i < size_1; i++){
        for(int j = 0; j < size_1; j++){
            if (arr[i * size_1 + j] == 1){
                *finish_row = i;
                *finish_col = j;
            }
        }
    }
}

void perezapis(int* arr, int size, int s_i, int s_j){

}

int find_l(int* arr, int size, int start_i, int start_j){
    int size_1 = rint(sqrt(size)) - 1;
    int s_i = start_i, s_j = start_j;
    int flag = 0;
    int k = 0;

    while(flag == 0){
        if(arr[s_i * size_1 + s_j - size_1 + 1] == 1){
            s_i = s_i - 1;
            s_j = s_j + 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j - size_1 - 1] == 1){
            s_i = s_i - 1;
            s_j = s_j - 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j + size_1 + 1] == 1){
            s_i = s_i + 1;
            s_j = s_j + 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j + size_1 - 1] == 1){
            s_i = s_i + 1;
            s_j = s_j - 1;
            k+=1;
        }

        //123

        else if(arr[s_i * size_1 + s_j + 1] == 1){
            s_j = s_j + 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j - 1] == 1){
            s_j = s_j - 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j - size_1] == 1){
            s_i = s_i - 1;
            k+=1;
        }

        else if(arr[s_i * size_1 + s_j + size_1] == 1){
            s_i = s_i + 1;
            k+=1;
        } 
        if((s_i == start_i) && (s_j == start_j)) return 1;
        if(k >= size) return 0;
    }
}




int find_loop(int* arr, int size, int* num_loop){
    int size_1 = rint(sqrt(size)) - 1;
    for(int i = 1; i < size_1; i++){
        for(int j = 1; j < size_1; j++){
            if (arr[i * size_1 + j] == 1){
                int start_i = i, start_j = j;
                if(find_l(arr, size, start_i, start_j) == 1){
                    *num_loop += 1;
                }
            }
        }
    }
}

void find_loops(int* pic, int size, int* num_loop, int* start_row, int* start_col, int* finish_row, int* finish_col){
    find_start(pic, size, start_row, start_col);
    find_finish(pic, size, finish_row, finish_col);
    find_loop(pic, size, num_loop);
    printf("\n%d %d %d %d %d", *num_loop,*start_row, *start_col, *finish_row, *finish_col);
    return;
}
