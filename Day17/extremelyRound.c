#include<stdio.h>

int check(int x){
    int nonzero = 0;
    while(x > 0){
        int lastdigit = x % 10;
        if(lastdigit != 0){
           nonzero++;
            if(nonzero > 1){
               return 0;
            }
        }
        x  = x/10;
    }
    return 1;
}

int oneNonZero(int n){
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        if(check(i)){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    //input the no. of test cases
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ans = oneNonZero(n);
        printf("%d\n",ans);
    }
    return 0;
}