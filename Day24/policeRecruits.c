#include<stdio.h>

int  main(){
  //no. of events
  int n;
  scanf("%d",&n);
  int arr[n];
  int untreated = 0;
  int crime = 0;
  for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
    if(crime == 0 && arr[i] == -1){
      //no. of crime untreated
      untreated++;
    }
    else{
      //no. of crimes treated
      crime = crime + arr[i];
    }
  }
  printf("%d\n",untreated);    
  return 0;
}