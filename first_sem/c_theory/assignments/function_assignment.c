#include <stdio.h>

#define students 5
#define subjects 5


void inputDetails(int roll[], char name[][50], int marks[][subjects])
{
    for (int i = 0; i < students; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%49s", name[i]);

        printf("Enter marks in 5 subjects:\n");
        for (int j = 0; j < subjects; j++)
        {
            do
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > 100)
                    printf("Invalid marks! Enter 0 to 100.\n");

            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }
}


int calculateTotal(int marks[])
{
    int total = 0;

    for (int i = 0; i < subjects; i++)
    {
        total += marks[i];
    }

    return total;
}


int checkPass(int marks[])
{
    for (int i = 0; i < subjects; i++)
    {
        if (marks[i] < 35)
            return 0;
    }

    return 1;
}


void displayResult(int roll[], char name[][50],
                   int marks[][subjects])
{
    printf("\n---------------- STUDENT RESULT  ----------------\n");

    printf("%-8s %-12s", "Roll No", "Name");

    for (int j = 0; j < subjects; j++)
        printf(" S%d", j + 1);

    printf("  %-6s %-8s %-10s %-6s\n",
           "Total", "Average", "Percent", "Result");

    for (int i = 0; i < students; i++)
    {
        int total = calculateTotal(marks[i]);
        float average = total / 5.0;
        float percentage = (total / 500.0) * 100;

        int passed = checkPass(marks[i]);

        printf("%-8d %-12s", roll[i], name[i]);

        for (int j = 0; j < subjects; j++)
            printf(" %2d", marks[i][j]);

        printf("  %-6d %-8.2f %-10.2f %-6s\n",
               total, average, percentage,
               passed ? "PASS" : "FAIL");
    }
}

int main()
{
    int roll[students];
    char name[students][50];
    int marks[students][subjects];

    inputDetails(roll, name, marks);
    displayResult(roll, name, marks);

    return 0;
}