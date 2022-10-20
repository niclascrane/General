/*
Task 1:

Given an array (or string), the task is to reverse the array/string.
Examples : 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include <stdio.h>

int main (){

//  Create array
    int ar1[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int a = 0;
    int b = 0;
    int length = sizeof(ar1)/sizeof(a);
    printf("length/2 : %d \n", length/2);
//  algorithm to reverse
    for (int j =0; j<length; j++){
        printf("%d,",ar1[j]);
        }
    printf("\n");
    for (int i=0; i<length/2; i++){
        b = ar1[i];
        printf("i: %d\n",i);
        ar1[i] = ar1[length-i-1];
        ar1[length-i-1] = b;
        for (int j =0; j<length; j++){
            printf("%d,",ar1[j]);
        }
        printf("\n");
    }
    return 0;
}

/* 
Task2:


