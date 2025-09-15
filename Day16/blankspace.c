#include<stdio.h>

int max(int a,int b){
    return (a > b)? a : b;
}

int main(){
    //input the no. of test cases
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int maxZero = 0,zero = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] == 0){
                zero++;
            }
            else{
                zero = 0;
            }
            maxZero = max(maxZero,zero);
        }
        printf("%d\n",maxZero);
    }
    return 0;
}