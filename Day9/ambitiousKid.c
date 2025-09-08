#include<stdio.h>

int miniMumOperations(int arr[], int n){
    int mini = 1000000;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            return 0;
        }
        if(arr[i] < 0){
            arr[i] = -(arr[i]);
            if(arr[i] < mini){
                mini = arr[i];
            }
        }
        else{
            if(arr[i] < mini){
                mini = arr[i];
            }
        }
    }
    return mini;
}

int main(){
    //intput no. of integers
    int n;
    scanf("%d",&n);
    //input n intergs (-ve ,+ve)
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = miniMumOperations(arr,n);
    printf("%d",ans);
    return 0;
}