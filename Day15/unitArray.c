#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n],pos = 0,neg = 0,op = 0;
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i] == 1){
                pos++;
            }
            else{
                neg++;
            }
        }
        int half;
        if(n % 2 != 0 && n > 1){
            half = n/2 + 1;
        }
        else{
            half = n/2;
        }
        if(pos >= half){
            if(neg % 2 != 0){
                for(int i = 0;i<n;i++){
                    if(arr[i] == -1){
                        op++;
                        arr[i] = 1;
                        break;
                    }
                }
            }
        }
        else{
            for(int i = 0;i<n;i++){
                if(arr[i] == -1){
                    op++;
                    arr[i] = 1;
                    pos++;
                    neg--;
                }
                if(pos >= half){
                    break;
                }
            }
            if(neg % 2 != 0){
                for(int i = 0;i<n;i++){
                    if(arr[i] == -1){
                        op++;
                        arr[i] = 1;
                        break;
                    }
                }
            }
        }
        printf("%d\n",op);
    }
    return 0;
}