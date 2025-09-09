#include<stdio.h>

int main(){
    //input no. of test cases
    int t;
    scanf("%d",&t);
    while(t--){
        //input length of subsequence
        int n;
        scanf("%d",&n);
        int arr[n],size = 0;
        for(int i = 0;i<n;i++){
           scanf("%d",&arr[i]);
        }
    
        for(int j = 1;j<n;j++){
            if(arr[j-1] > arr[j]){
              size++;
            }
        }
        int N = n+size;
        int ans[N];
        ans[0] = arr[0];
        int l = 1;
        for(int k = 1;k<n;k++){
            if(arr[k-1] > arr[k]){
               ans[l] = arr[k];
               l++;
               ans[l] = arr[k];
               l++;
            }
            else{
               ans[l] = arr[k];
               l++;
            }
        }
        printf("%d\n",N);
        for(l = 0;l<N;l++){
           printf("%d ",ans[l]);
        }    
    }
    return 0;
}