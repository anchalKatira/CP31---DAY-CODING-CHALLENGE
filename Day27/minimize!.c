#include<stdio.h>
 
int min(int a , int b){
    return (a > b)? b:a;
}
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int mini;
        int ans = (a - a)+(b-a);
        mini = ans;
        for(int i = a+1;i<=b;i++){
            ans = (i - a) + (b - i);
            mini = min(mini,ans);
        }
        printf("%d\n",mini);
    }
    return 0;
}