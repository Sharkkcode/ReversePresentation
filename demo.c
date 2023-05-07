#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float grade;
} Student;

int main() {

    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);
    setvbuf(stderr,0,2,0);

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student *students = (Student*)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++) {
        printf("Enter student %d's ID: ", i+1);
        scanf("%d", &(students[i].id));
        printf("Enter student %d's name: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter student %d's grade: ", i+1);
        scanf("%f", &(students[i].grade));
    }
    printf("Student information:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
    }
    free(students);
    return 0;
}