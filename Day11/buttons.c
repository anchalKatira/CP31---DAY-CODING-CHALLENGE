#include<stdio.h>

int main(){
    //input no. of test cases
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        
        if(c % 2 != 0){
            a = a + (1 + c/2);
            b = b + (c/2);
        }
        else{
            a = a + c/2;
            b = b + c/2;
        }
        if(a > b){
            printf("First\n");
        }
        else{
            printf("Second\n");
        }
    }
    return 0;
}