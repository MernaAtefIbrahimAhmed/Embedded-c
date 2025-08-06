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

    printf("\nElements of array with even/odd classification:\n");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d is even\n", arr[i]);
            sumEven += arr[i];
        } else {
            printf("%d is odd\n", arr[i]);
            sumOdd += arr[i];
        }
    }

    printf("\nSum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    return 0;
}