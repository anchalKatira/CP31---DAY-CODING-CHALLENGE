#include<stdio.h>

//two players Akshat and Malvika
int main(){
  //grid of n horizontal and m vertical sticks.
  int n,m;
  scanf("%d %d",&n,&m);
  int cnt = 0;
  // a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point
  while(n > 0 && m > 0){
    n--;
    m--;
    cnt++;
  }
  //A player will lose if there are no intersection points remaining on the grid at his/her move
  if(cnt % 2 != 0){
    printf("Akshat\n");
  }
  else{
    printf("Malvika\n");
  }
  return 0;
}

