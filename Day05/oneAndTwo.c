#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int total_twos = 0;

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if (arr[j] == 2) {
                total_twos++;
            }
        }
        

        if (total_twos % 2 != 0) {
            printf("-1\n");
            continue;
        }

        int current_twos = 0;
        int ans = -1;
        
      
        for (int k = 0; k < n - 1; k++) {
            if (arr[k] == 2) {
                current_twos++;
            }
            if (current_twos == total_twos / 2) {
                ans = k + 1;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}