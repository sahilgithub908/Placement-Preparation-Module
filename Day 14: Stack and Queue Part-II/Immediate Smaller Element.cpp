#include <bits/stdc++.h> 

int* immediateSmaller(int* arr, int n) 

{

    // WRITE YOUR CODE HERE

    for(int i=0; i<n; i++){

        if(arr[i]>arr[i+1]){

            arr[i]=arr[i+1];

        }

        else{

            arr[i]=-1;

        }

    }

    arr[n-1]=-1;

    return arr;

}
