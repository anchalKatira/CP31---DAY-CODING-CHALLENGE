#include<stdio.h>

//candies and two sisters
int  main(){
  // no. of test cases
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    if(n == 1 || n == 2){
      printf("%d\n",0);
    }else{
      //distribution of candies
      int ans = (n-n/2-1);
      printf("%d\n",ans);
    }
  }
  return 0;
}
