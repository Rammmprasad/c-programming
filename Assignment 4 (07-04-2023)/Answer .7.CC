#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3, total_marks, avg_marks;
};

void calculateMarks(struct student *s) {
    s->total_marks = s->mark1 + s->mark2 + s->mark3;
    s->avg_marks = s->total_marks / 3;
}

void sortStudents(struct student *students, int n) {
    int i, j;
    struct student temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(students[j].total_marks < students[j+1].total_marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    struct student students[MAX_STUDENTS];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Marks in three subjects (separated by spaces): ");
        scanf("%f %f %f", &students[i].mark1, &students[i].mark2, &students[i].mark3);
        calculateMarks(&students[i]);
    }

    sortStudents(students, n);

    printf("\nStudent Details (sorted by total marks):\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s\n", "Roll No", "Name", "Mark 1", "Mark 2", "Mark 3", "Total", "Average");
    for(i=0; i<n; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n", students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }

    return 0;
}

