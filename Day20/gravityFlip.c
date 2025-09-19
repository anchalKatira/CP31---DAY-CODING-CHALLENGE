#include <stdio.h>

void final_merge(int a[], int low, int mid, int high) {
    int i = low; // for the first subarray
    int j = mid+1; // for the second subarray
    int k = 0; // for index of temp array
    int temp[high-low+1]; // high-low+1= size of array
    
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            temp[k] = a[i];
            i++;
        }
        else{
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k] = a[j];
        j++;
        k++;
    }
    for(int l = 0;l<high-low+1;l++){
        a[low + l] = temp[l];
    }
}

void merge(int a[], int low, int high) {
   if(low<high){
    int mid = (low+high)/2;
    merge(a,low,mid);
    merge(a,mid+1,high);
    final_merge(a,low,mid,high);
   }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    merge(arr,0,n-1);
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}