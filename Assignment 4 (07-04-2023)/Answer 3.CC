#include <stdio.h>
#include <time.h>

struct Student {
    char name[50];
    int rollNo;
    int birthDay;
    int birthMonth;
    int birthYear;
    int admissionDay;
    int admissionMonth;
    int admissionYear;
};

int calculateAge(int birthYear, int birthMonth, int birthDay, int admissionYear, int admissionMonth, int admissionDay) {
    int age;
    
    age = admissionYear - birthYear;
    
    if(admissionMonth < birthMonth) {
        age--;
    }
    else if(admissionMonth == birthMonth && admissionDay < birthDay) {
        age--;
    }
    
    return age;
}

int main() {
    struct Student student;
    
    // Accepting student details
    printf("Enter student name: ");
    scanf("%s", student.name);
    
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    
    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &student.birthDay, &student.birthMonth, &student.birthYear);
    
    printf("Enter admission date (DD MM YYYY): ");
    scanf("%d %d %d", &student.admissionDay, &student.admissionMonth, &student.admissionYear);
    
    // Calculating age of student at the time of admission
    int age = calculateAge(student.birthYear, student.birthMonth, student.birthDay, student.admissionYear, student.admissionMonth, student.admissionDay);
    
    // Displaying student details and age at the time of admission
    printf("\nStudent Details\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Date of Birth: %d/%d/%d\n", student.birthDay, student.birthMonth, student.birthYear);
    printf("Admission Date: %d/%d/%d\n", student.admissionDay, student.admissionMonth, student.admissionYear);
    printf("Age at the time of admission: %d\n", age);
    
    return 0;
}

