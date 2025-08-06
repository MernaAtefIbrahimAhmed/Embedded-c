#include <stdio.h>

int main() {
    int correct_answer = 2 + 3;
    int user_answer;

    while (1) {
        printf("What is 2 + 3?\n");
        scanf("%d", &user_answer);

        if (user_answer == correct_answer) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong answer. Try again!\n");
        }
    }

    return 0;
}
