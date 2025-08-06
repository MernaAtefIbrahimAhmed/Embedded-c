#include <stdio.h>
int main() {
    int num, i;
    
    printf("Enter number to get its multiplication table:\n");
    scanf("%d", &num);
    
    printf("Multiplication table:\n");
    for(i = 1; i <= num; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
