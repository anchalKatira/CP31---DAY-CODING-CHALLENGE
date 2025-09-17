#include<stdio.h>

int main(){
    //input no. of test cases:
    int t;
    scanf("%d",&t);
    while(t--){
        int n ,k;
        scanf("%d %d",&n,&k);
        char str[n+1];
        scanf("%s",str);
        //hashmap
        char hash[26] = {0};
        for(int i = 0;i<n;i++){
            int indx = str[i] - 'a';
            hash[indx]++;
        }
        int cnt = 0;
        for(int i = 0;i<26;i++){
            if(hash[i] % 2 != 0){
                cnt++;
            }
        }
        if(cnt <= k){
            printf("YES\n");
        }
        else if(cnt == k+1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}