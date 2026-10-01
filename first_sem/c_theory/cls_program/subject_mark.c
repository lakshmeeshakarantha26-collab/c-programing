#include <stdio.h>

int main()
{
    int maths = 0, python = 0, dbms = 0;
    int total = 0, i;
    float per;
    
    // printf("SNO\tmaths\tpython\tdbms\ttotal\t%%\tresult\n");

    for (int i = 0; i < 5; i++)
    {
        printf("enter %d student details:\n", i + 1);

        printf("maths subject mark:");
        scanf("%d", &maths);

        printf("python subject mark:");
        scanf("%d", &python);

        printf("dbms subject mark:");
        scanf("%d", &dbms);

        total = maths + python + dbms;
        per = total / 300 * 100;
    }
    // printf("%d\t%d\t%d\t%d\t%d\t%.1f\t", i, maths, python, dbms, total, per);
    printf("SNO\tmaths\tpython\tdbms\ttotal\t%%\tresult\n");
    for (int i = 0; i < 5; i++)
    {
        if (total < 100)
        {
            printf("fail");
        }
        else if (total < 150)
        {
            printf("second");
        }
        else if (total < 200)
        {
            printf("first");
        }
        else
        {
            printf("destition");
        }


      //  printf("total:\n ",total);
      //  printf("per:\n",per);
        printf("%d\t%d\t%d\t%d\t%d\t%.1f\t", i+1, maths, python, dbms, total, per);
    }
    return 0;
}     