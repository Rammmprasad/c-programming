#include <stdio.h>

struct employee {
    int eno;
    char ename[20];
    float salary;
};

int main() {
    int n, i;
    float max_salary = -1.0;
    int index = -1;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct employee emp[n];
    
    for(i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &emp[i].salary);
        
        if(emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
            index = i;
        }
    }
    
    printf("\nEmployee with highest salary:\n");
    printf("Employee Number: %d\n", emp[index].eno);
    printf("Employee Name: %s\n", emp[index].ename);
    printf("Employee Salary: %0.2f\n", emp[index].salary);
    
    return 0;
}

