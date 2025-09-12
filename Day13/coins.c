#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        if(n % 2 == 0){
            printf("YES\n");
        }
        else{
            if(k % 2 != 0){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}