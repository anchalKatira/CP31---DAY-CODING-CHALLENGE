#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int op = 0;
        if(arr[0] % 2 == 0){
            int p = 0;
            int i  = 1;
            while(i < n){
                if(p == 0){
                    if(arr[i] % 2 == 0){
                        op++;
                    }
                    else{
                        p = 1;
                    }
                }
                else{
                    if(arr[i] % 2 != 0){
                        op++;
                    }
                    else{
                        p = 0;
                    }
                }
                i++;
            }
        }else{
            int parity = 1;
            int i = 1;
            while(i<n){
                if(parity == 1){
                    if(arr[i] % 2 != 0){
                        op++;
                    }
                    else{
                        parity = 0;
                    }
                }
                else{
                    if(arr[i] % 2 == 0){
                        op++;
                    }
                    else{
                        parity = 1;
                    }
                }
                i++;
            }
            
        }
        printf("%d\n",op);
    }
    return 0;
}