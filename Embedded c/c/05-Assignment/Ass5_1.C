#include <stdio.h>

int main() {
    int n;
    int sumOdd = 0, sumEven = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < n - 1; i++) {
        int flag = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
              
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) {
            break;
        }
    }

    printf("Max element = %d and Min element = %d\n", arr[n-1], arr[0]);

    return 0;
}
