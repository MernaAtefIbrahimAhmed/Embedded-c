#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;
    int math;
    int language;
    int physics;
    int chemistry;
} Student;

int main() {
    Student students[10];
    int studentID;

    for (int i = 0; i < 10; i++) {
        students[i].id = i;
        students[i].math = 50 + rand() % 51;     
        students[i].language = 50 + rand() % 51;
        students[i].physics = 50 + rand() % 51;
        students[i].chemistry = 50 + rand() % 51;
    }

    printf("Enter student ID (0 to 9): ");
    scanf("%d", &studentID);


    if (studentID >= 0 && studentID < 10) {
        Student s = students[studentID];
        printf("\nGrades for student ID %d:\n", s.id);
        printf("Math: %d\n", s.math);
        printf("Language: %d\n", s.language);
        printf("Physics: %d\n", s.physics);
        printf("Chemistry: %d\n", s.chemistry);
    } else {
        printf("Wrong ID! Please enter a value between 0 and 9.\n");
    }

    return 0;
}
