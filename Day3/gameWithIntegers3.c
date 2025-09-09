#include<stdio.h>
 
int main(){
    int t;
    scanf("%d",&t);
 
    for(int i = 0;i<t;i++){
        int n;
        scanf("%d",&n);
        int code = 0;
        for(int j = 0;j<10;j++){
            if(j % 2 == 0){
                if((n+1) % 3 == 0 || (n-1) % 3 == 0){
                   code = 1; 
                   printf("First\n");
                   break;
                }
                else{
                  n = n+1;
                }
            }
            else{
                if((n+1) % 3 == 0 || (n-1) % 3 == 0){
                  code = 1;
                  printf("Second\n");
                  break;
                }
                else{
                  n = n+1;
                }
            }
        }
        if(code == 0){
            printf("Second\n");
        }
    }
    return 0;
}