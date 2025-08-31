#include<stdio.h>

int ifsort(int a[], int n){
    for(int i = 0;i<n-1;i++){
        if(a[i] > a[i+1]){
            return 0;
        }
    }
    return 1;
}


int main(){
    //input no. of test cases 
    int t;
    scanf("%d",&t);
    for(int j = 0;j<t;j++){
        //input no. of boxes and max len of subarray what can be reversed
        int n,k;
       
        scanf("%d %d",&n,&k);
        //input the array
        int arr[n];
     
        for(int i = 0;i<n;i++){
           scanf("%d",&arr[i]);
        }

        //check if already sorted
        int s = ifsort(arr,n);
        if(s){
          printf("YES\n");
        }
        else{  
          if(k >= 2){
            printf("YES\n");
          }
          else{
            printf("NO\n");
          }
        }
    }
    return 0;
}