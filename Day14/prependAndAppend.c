#include<stdio.h>

int main(){
    //input the no. of test cases
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        str[n] = '\0';
        int len = 0;
        for(int i = 0;i<n/2;i++){
            if((str[i] == '0' && str[n-i-1] == '0') || (str[i] == '1' && str[n-i-1] == '1')){
                len = n-2*i;
                break;
            }
        }
        if(len == 0 && n % 2 != 0){
            len = len+1;
        }
        printf("%d\n",len);
    }
    return 0;
}