#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

struct Student s[100];
int count = 0;


void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student Added Successfully!\n");
}


void searchStudent()
{
    int roll, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nRoll: %d", s[i].roll);
            printf("\nName: %s", s[i].name);
            printf("\nMarks: %.2f\n", s[i].marks);
            found = 1;
        }
    }

    if (found == 0)
        printf("Student Not Found!\n");
}


void updateStudent()
{
    int roll, found = 0;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf("%s", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record Updated Successfully!\n");
            found = 1;
        }
    }

    if (found == 0)
        printf("Student Not Found!\n");
}


void deleteStudent()
{
    int roll, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;
            found = 1;
            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if (found == 0)
        printf("Student Not Found!\n");
}


void displayTopper()
{
    if (count == 0)
    {
        printf("No Student Record!\n");
        return;
    }

    int topper = 0;

    for (int i = 1; i < count; i++)
    {
        if (s[i].marks > s[topper].marks)
            topper = i;
    }

    printf("\nTopper Details\n");
    printf("Roll Number: %d\n", s[topper].roll);
    printf("Name: %s\n", s[topper].name);
    printf("Marks: %.2f\n", s[topper].marks);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Display Topper\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                updateStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                displayTopper();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}