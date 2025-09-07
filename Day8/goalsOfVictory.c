#include<stdio.h>

int main(){
    //input the no. of test cases
    int t;
    scanf("%d",&t);
    //input the no. of teams
    while(t--){
        int n;
        scanf("%d",&n);
        //input the efficiency of n-1 teams
        int arr[n-1];
        //the sum of the efficiencies of all teams in a tournament is always zero
        int ans = 0;
        for(int i = 0;i<n-1;i++){
           scanf("%d",&arr[i]);
           ans = ans + arr[i];
        }
        ans = -(ans);
        printf("%d\n",ans);
    }
    return 0;
}