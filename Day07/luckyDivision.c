#include<stdio.h>

int lucky(int n){
    while(n > 0){
        int lastdigit = n % 10;
        if(lastdigit != 4 && lastdigit != 7){
            return 0;
        }
        n = n/10;
    }
    return 1;
}

int main(){
    //input the number
    int n;
    scanf("%d",&n);
    for(int i = 4;i<=n;i++){
        if(n % i == 0){
            if(lucky(i)){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
