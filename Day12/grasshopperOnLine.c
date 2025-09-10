#include<stdio.h>

int main(){
    //input no. of testcases
    int t;
    scanf("%d",&t);

    while(t--){
        int x,k;
        scanf("%d %d",&x,&k);
        int sum = 0;
        int arr[x];
        int j = 0;
        for(int i = x;i>=1;i--){
            if(i % k != 0 && sum < x){
                sum = sum + i;
                arr[j] = i;
                j++;
                if(sum > x){
                    sum = sum - i;
                    j--;
                }
            }
            if(sum == x){
                break;
            }
        }
        printf("%d\n",j);
        for(int i = 0;i<j;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}