#include <stdio.h>


double mean(int arr[], const int n) {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum / n;
}
int getMax(int arr[]){
    int max = 0;
    for (int i = 0; i < 5; ++i) {
        if(max < *(arr + i)) max = *(arr+i);
    }
    return max;
}
int getMin(int arr[]){
    int min = *arr;
    for (int i = 0; i < 5; ++i) {
        if(min > *(arr + i)) min = *(arr+i);
    }
    return min;
}


void problem1(){
    printf("[Problem 1] : sizeof function\n");
    int arr1[] = {1,2,3,4,5,6,7};
    float arr2[] = {1,2,3,4,5,6,7};
    double arr3[] ={1,2,3,4,5,6,7};

    printf("%d, %d, %d\n", sizeof(arr1)/4, sizeof(arr2)/4, sizeof(arr3)/8);

}
void problem2(){
    printf("[Problem 2] : mean function\n");
    int arr[] = {1,2,3,4,5,6,7};

    printf("%f\n",mean(arr, sizeof(arr)/4));
}
void problem3(){
    printf("[Problem 3] : pointer \n");
    double arr[] = {1,2,3,4,5,6,7};
    double *ptr = NULL;
    ptr = &arr[0];
    printf("%p||%p||%p\n", ptr, arr, &arr[0]);
    printf("%p||%p||%p\n", ptr+2, arr+2, &arr[2]);
    printf("%f||%f||%f\n", *ptr, *arr, arr[0]);
    printf("%f||%f||%f\n", *(ptr+2), *(arr+2), arr[2]);


}
void problem4(){
    printf("[Problem 4] : pointer\n");
    int m = 7;
    int* ptr = &m;
    printf("%p||%d\n",ptr, *ptr);
    *ptr = 10;
    printf("%d||%d\n",*ptr, m);

}
void problem5(){
    printf("[Problem 5] : pointer\n");
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for (int i = 0; i < sizeof(arr)/4; ++i) {
        sum += *(arr+i);
    }
    printf("sum : %d\n",sum);
    for (int j = sizeof(arr)/4 -1; j >= 0; --j) {
        printf("%d ", *(arr + j));
    }
    printf("\n");
}
void problem6(){
    printf("[Problem 6] : pointer\n");
    int arr[5] ;
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Max : %d\n",getMax(arr));
    printf("Min : %d\n",getMin(arr));
}
void problem7(){
    printf("[Problem 7] : pointer\n");
    int arr_1d[] = {10,20,30,40,50,60,70,80,90,100,110,120};
    for (int i = 0; i < 12; ++i) {
        printf("%d ", arr_1d[i]);
    }
    printf("\n");
    int arr_2d[3][4];
    int k = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr_2d[i][j] = arr_1d[k++];
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }
    k=12;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr_1d[--k] = arr_2d[i][j];
        }
    }

    for (k = 0; k< 12; k++) {
        printf("%d ",arr_1d[k]);
    }
}
int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    problem7();

    return 0;
}
