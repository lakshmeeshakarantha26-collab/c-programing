// pgm to store and diplay 5 subjects mark
// for student
#include <stdio.h>
int main()
{
    int my_marks[5];
    int sub_marks[5]; // declares an array "sub_marks"
    // with size 5 of 'int' type
    // storing data /array initailazation - array_name[index]=data/value;
    sub_marks[0] = 80; // stores '80' in an array position whose index is '0'
    sub_marks[1] = 78;
    sub_marks[2] = 68;
    sub_marks[3] = 58;
    sub_marks[4] = 88; // static array initilization+3
    

        // fetch first array element from 'sub_marks'
        // printf("first subject mark:%d", sub_marks[0]);
        // printf("second subject mark:%d", sub_marks[1]);
        // printf("third subject mark:%d", sub_marks[2]);
        // printf("fourth subject mark:%d", sub_marks[3]);
        // dynamic initialization of 'my_marks'
        for (int i = 0; i < 5; i++)
    {
        printf("enter %d subject mark:[int data]\n", i + 1);
        scanf("%d", &my_marks[i]);
    }
    // printf("my sub1 mark:%d\n",my_marks[0]);
    // printf("enter second subject mark:[int data]\n");
    // scanf("%d",&my_marks[1]);
    // printf("my sub1 mark:%d\n",my_marks[1]);
    // printf("enter third subject mark:[int data]\n");
    // scanf("%d",&my_marks[2]);
    // printf("my sub1 mark:%d\n",my_marks[2]);
    // printf("enter fourth subject mark:[int data]\n");
    // scanf("%d",&my_marks[3]);
    // printf("my sub1 mark:%d\n",my_marks[3]);
    // printf("enter fifth subject mark:[int data]\n");
    // scanf("%d",&my_marks[4]);
    // printf("my sub1 mark:%d\n",my_marks[4]);
}