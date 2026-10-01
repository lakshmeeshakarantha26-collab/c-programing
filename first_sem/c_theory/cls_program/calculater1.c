#include <stdio.h>
int main()
{
    int firstnumber, choice;
    int secondnumber;
    int i = 1;

    printf("------welcome to my calculator------\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.didvision\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    printf("enter first number:");
    scanf("%d", &firstnumber);
    printf("enter secondnumber:");
    scanf("%d", &secondnumber);
    do
    {

        if (choice == 1)
            printf("The sum is %d\n", firstnumber + secondnumber);
        else if (choice == 2)
            printf("The difference is %d\n", firstnumber - secondnumber);
        else if (choice == 3)
            printf("The product is %d\n", firstnumber * secondnumber);
        else if (choice == 4)
            printf("the product is%d\n", firstnumber / secondnumber);
        else
            printf("invalid");
            break;
         return 0;
    } while (choice > 4);

        
}