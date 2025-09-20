#include<stdio.h>

//hit the lottery
int main(){
    int n;
    scanf("%d",&n);
    int bill = 0;
    while(n > 0){
        if(n >= 100){
          n = n - 100;
        }
        else if(n >= 20 && n < 100){
          n = n - 20;
        }
        else if(n >= 10 && n < 20){
          n = n - 10;
        }
        else if(n >= 5 && n < 10){
          n = n - 5;
        }
        else{
          n = n - 1;
        }
        bill++;
    }
    //minimum no. of bills Allen could receive after withdrawing his entire balance
    printf("%d\n",bill);
    return 0;
}