#include <math.h>
#include <stdio.h>

// int pic[] ={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
//             0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
//             0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 
//             0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 
//             0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 
//             1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 
//             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
//             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
//             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
//             0, 0, 0, 0, 0, 0, 0, 0, 0, 0
//             };
// int size = 100;
// int num_loop = 0;

// int find_l(int* arr, int size, int start_i, int start_j){
//     int size_1 = rint(sqrt(size)) - 1;
//     int s_i = start_i, s_j = start_j;
//     int flag = 0;
//     int k = 0;

//     while(flag == 0){
//         if(arr[s_i * size_1 + s_j - size_1 + 1] == 1){
//             s_i = s_i - 1;
//             s_j = s_j + 1;
//             k+=1;
//             printf("\n1");
//         }

//         else if(arr[s_i * size_1 + s_j - size_1 - 1] == 1){
//             s_i = s_i - 1;
//             s_j = s_j - 1;
//             k+=1;
//             printf("\n2");
//         }

//         else if(arr[s_i * size_1 + s_j + size_1 + 1] == 1){
//             s_i = s_i + 1;
//             s_j = s_j + 1;
//             k+=1;
//             printf("\n3");
//         }

//         else if(arr[s_i * size_1 + s_j + size_1 - 1] == 1){
//             s_i = s_i + 1;
//             s_j = s_j - 1;
//             k+=1;
//             printf("\n4");
//         }

//         //123

//         else if(arr[s_i * size_1 + s_j + 1] == 1){
//             s_j = s_j + 1;
//             k+=1;
//             printf("\n5");
//         }

//         else if(arr[s_i * size_1 + s_j - 1] == 1){
//             s_j = s_j - 1;
//             k+=1;
//             printf("\n6");
//         }

//         else if(arr[s_i * size_1 + s_j - size_1] == 1){
//             s_i = s_i - 1;
//             k+=1;
//             printf("\n7");
//         }

//         else if(arr[s_i * size_1 + s_j + size_1] == 1){
//             s_i = s_i + 1;
//             k+=1;
//             printf("\n8");
//         } 
//         if((s_i == start_i) && (s_j == start_j) && (k != 0)){
//             printf("\npobeda!!!!!!!!!!!!!!");
//             return 1;
//         }
//         if(k >= 50) return 0;
//     }
// }




// int find_loop(int* arr, int size, int num_loop){
//     int size_1 = rint(sqrt(size));
//     for(int i = 0; i < size_1; i++){
//         for(int j = 0; j < size_1; j++){
//             if (arr[i * size_1 + j] == 1){
//                 printf("\n0 i = %d j = %d arr_ij = %d", i, j, arr[i * size_1 + j]);
//                 int start_i = i, start_j = j;
//                 if(find_l(arr, size, start_i, start_j) == 1){
//                     num_loop += 1;
//                 }
//             }
//         }
//     }
//     return num_loop;
// }

// void find_loops(int *pic, int size, int num_loop){

//     num_loop = find_loop(pic, size, num_loop);

//     printf("\nloop %d", num_loop);
// }

// int main(){
//     find_loops(pic, size, num_loop);
// }

double func(int n, int k){
    if (k == 1){
        return 1.0;
        }
    else if (n + 1 == k){
        return 1.0 / k;
    }
    else {
        return 1.0 / k + func(n, k - 1);
    }
}


double main(){
    int n = pow(2, 30);
    if(n < 1) return -1.0;
    double s = 0.0;
    if (n > 10000){
        int k = 1;
        while(k < n/10000){
            s += func((k-1) * 10000, k * 10000);
            k++;
        }
    printf("\n%lf\n", s);
    printf("\n%lf\n", func(n / 10000 * 10000, n));
    s += func(n / 10000 * 10000, n);
    printf("\n%d\n", k);
    }
    else {
        s += func(0, n);
    }
    printf("%lf", s);
    return s;
}