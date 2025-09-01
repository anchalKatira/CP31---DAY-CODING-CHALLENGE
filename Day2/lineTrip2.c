
#include<stdio.h>
 
int check(int gas[], int n, int mid, int x) {
    int fuel = mid;
    // forward
    if (gas[0] > fuel) return 0;
    for (int i = 1; i < n; i++) {
        if ((gas[i] - gas[i-1]) > fuel) return 0;
    }
    
    if(2 * (x - gas[n-1]) > fuel){
        return 0;
    }
 
    return 1;
}
 
 
int main(){
    //input no. of test cases:
    int t;
    scanf("%d",&t);
 
    for(int i = 0;i<t;i++){
        //input no. of gas stations and the destination
        int n,x;
        scanf("%d %d",&n,&x);
        //input the location of each gas station
        int gas[n];
        for(int j = 0;j<n;j++){
            scanf("%d",&gas[j]);
        }
       
        // now traverse from 0 to x
        int low = 0,high = 2*x,MinVol= x;
        while(low <= high){
            int mid = (low + high)/2;
 
            int ans = check(gas,n,mid,x);
            if(ans){
               MinVol = mid;
               high = mid-1;
            }
            else{
               low = mid+1;
            }
        }
        printf("%d\n",MinVol);
    }
    return 0;
}    