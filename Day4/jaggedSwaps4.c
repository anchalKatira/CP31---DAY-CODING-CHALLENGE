#include<stdio.h>

void jaggedSwaps(int arr[], int n){
    for(int j = 1;j<n;j++){
        int cnt = 0;
        for(int i = 1;i<n-1;i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            //swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            }
            else{
                cnt++;
            }
        }
        if(cnt == n-2){
            break;
        }
    }
}

int checkSorted(int arr[], int n){
    for(int i = 1;i<n;i++){
        if(arr[i-1] > arr[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    //input no. of testcases
    int t;
    scanf("%d\n",&t);
    for(int i = 0;i<t;i++){
        int n;
        scanf("%d\n",&n);
        int arr[n];
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[j]);
        }

        //could be sorted or not -- with finite no. of swaps
        jaggedSwaps(arr,n);

        int ans = checkSorted(arr,n);
        if(ans){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
