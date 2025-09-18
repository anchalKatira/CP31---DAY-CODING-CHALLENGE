#include <stdio.h>
#include<math.h>

int main(){
    //input the number
    int n;
    scanf("%d",&n);
    int size = (int)(log10(n)+1);
    char str[size+1];
    int j = size-1;
    while(n > 0){
        int l = n % 10;
        char c = l + '0';
        str[j] = c;
        j--;
        n /= 10;
    }
    str[size] = '\0';
    if(str[0] != '1'){
        printf("NO\n");
        return 0;
    }
    for(int i = 1;i<size;i++){
        if(str[i] != '4' && str[i] != '1'){
            printf("NO\n");
            return 0;
        }
        if (str[i] == '4' && i + 2 < size) {
            if (str[i + 1] == '4' && str[i + 2] == '4') {
                printf("NO\n");
                return 0;
            }
        }
    }
    //only have - 1,14,144
    printf("YES\n");
}