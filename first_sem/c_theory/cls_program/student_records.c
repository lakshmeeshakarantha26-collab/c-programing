#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    int marks[3];
    int total;     // to store total marks
    float average; // to store average marks
};

struct student student_list[5];
int count = 5;
// method to initialize students
void initilize_student()
{

    printf("Enter marks for 3 subjects:\n");
    for (int i = 0; i < count; i++)
    {
        printf("enter %d student data:\n", i + 1);

        printf("Enter Roll Number:\n ");
        scanf("%d", &student_list[i].rollno);

        printf("Enter student Name :\n ");
        scanf("%s", &student_list[i].name);

        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("enter %d subject mark:\n", j + 1);
            scanf("%d", &student_list[i].marks[j]);
        }
    }
}
// to find total marks of 3 subjects
void get_total()
{

    for (int i = 0; i < count; i++)
    {
        student_list[i].total = 0;
        student_list[i].total = student_list[i].marks[0] + student_list[i].marks[1] + student_list[i].marks[2];
    }
}
void get_average()
{
    for (int i = 0; i < count; i++)
    {
        student_list[i].average = (float)student_list[i].total / 3.0;
    }
}
void display_student()
{
    for (int i = 0; i < count; i++)
    {
        printf("\nRoll No: %d ", student_list[i].rollno);
        printf("\nName: %s", student_list[i].name);
        printf("\nTotal Marks: %d", student_list[i].total);
        printf("\nAverage Marks: %.2f", student_list[i].average);
    }
}
int main()
{
    // struct student first;  // to store first student data
    // struct student second; // to store second student data

    // array of structure
    // struct student students[5];

    initilize_student();
    get_total();
    get_average();
    display_student();
}