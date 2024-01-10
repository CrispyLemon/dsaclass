#include <cstdlib>
#include <iostream>
#include <cstdio>
int main(){
    int A[10], B[10], C[20];
    int i, j, k;
    i = j = k = 0;
    for (int a = 0; a<10; a++){
        
    }
    while((i < 10) && (j < 10)){
        if (A[i] < B[j]){
            C[k] = A[i];
            i++;
        }
        else{
            C[k] = B[j];
            j++;
        }
        k++;
    }
    while(i < 10){
        C[k] = A[i];
        i++; k++;
    }
    while (j < 10){
        C[k] = B[j];
        j++;
        k++;
    }
    
}