#include <stdio.h>

void get_details(int *total_users, int *staff_users)
{
    printf("Enter the total number of users: ");
    scanf("%d", total_users);
    printf("Enter the number of staff users: ");
    scanf("%d", staff_users);
}

int get_students(int total_users, int staff_users)
{
    int non_teaching_staff = staff_users/3;
    return total_users - staff_users - non_teaching_staff;
}

int main()
{
    int total_users, staff_users, student_users;
    get_details(&total_users, &staff_users);

    if(total_users < 0)
    {
        printf("Invalid input for total users\n");
        return 0;
    }
    if(staff_users < 0)
    {
        printf("Invalid input for staff users\n");
        return 0;
    }
    if(staff_users > total_users)
    {
        printf("Staff users cannot be greater than total users\n");
        return 0;
    }

    student_users = get_students(total_users, staff_users);
    printf("Student users: %d\n", student_users);

    return 0;
}

