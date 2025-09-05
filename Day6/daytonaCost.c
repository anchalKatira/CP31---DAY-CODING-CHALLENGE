#include<stdio.h>

int main(){
    //input the no. of test cases:
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++){
        //input no. of ele in the array and which ele must be the most common
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        int ans = 0;
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[j]);
            if(arr[j] == k){
                ans = 1;
            }
        }
        if(ans){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}