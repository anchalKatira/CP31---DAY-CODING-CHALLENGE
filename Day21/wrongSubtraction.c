#include<stdio.h>

int main(){
    //input the number and the no. of subtractions correspondingly

    int n,k;
    scanf("%d %d",&n,&k);
    while(k--){
        int l = n % 10;
        if(l == 0){
            //if last digit is 0 just remove it
            n = n/10;
        }else{
            //if last digit of the number is not zero minus one from it and continue until k = 0
            n = n/10;
            l--;
            n = n*10 + l; 
        }
    }
    printf("%d\n",n);
}