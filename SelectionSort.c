#include<stdio.h>

void print(int* A,int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selection(int* A,int n){
    int temp,indexofmin;
    printf("Working on Selection Sort...\n");
    for(int i=0;i<n-1;i++){
        indexofmin=i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[indexofmin]){
                indexofmin=j;
            }
        }
        temp=A[i];
        A[i]=A[indexofmin];
        A[indexofmin]=temp;
    }
}

int main(){
    int A[]={100,50,40,20,90};
    int n=5;
    print(A,n);
    selection(A,n);
    print(A,n);
}