#include<stdio.h>
 
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int indx = 0,i;
    for(i = 1;i<n-1;i++){
      if(arr[i] != arr[i-1]){
        if(arr[i] != arr[i+1]){
          indx = i;
          break;
        }
        else if(i == 1 && arr[i] == arr[i+1]){
            break;
        }
      }
    }
    //spy: which is diff from all others
    if(indx){
      printf("%d\n",indx+1);
    }
    else if(i == n-1){
      indx = n-1;
      printf("%d\n",indx+1);
    }
    else{
        printf("%d\n",indx+1);
    }
  }
  return 0;
}
