#include<stdio.h>
int main(){
    //char name[10];
    // char name[5] = "laksh";
    // printf("laksh:%s",name);

    // printf("enter your name:");
    // scanf("%19s",name);
    // printf("hello,%10s!\n",name);
    // return 0;

// printf("enter your name:");
//     fgets(name,sizeof(name),stdin);
//     printf("hello,%s!\n",name);
//     return 0;
// }

//printf("[%s]",name)        // [hello]
//printf("[%10s]",name)      // [hello        ]
//printf("[%-10s]",name)     // [        hello] 
//printf("[%.3s]",name)      //[hel]

char name[]="program";
for(int i=0;name[i]!='\0';i++){
    printf("name[%d] = %c\n", i,name[i]);
}
}