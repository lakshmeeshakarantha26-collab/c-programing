#include <stdio.h>

// Function Prototypes (declaration so main knows they exist)
int read_array_size();
int validation_array_size(int array_size);

int main() {
    int arraysize;
    int isvalid = 0;
    while (isvalid == 0) {
        arraysize = read_array_size();
        isvalid = validation_array_size(arraysize);

        if (isvalid == 0) {
            printf("array size is not valid:plz try again\n");
        } else {
            printf("array size is valid\n");
        }
    }
    int num[arraysize];

    for (int i = 0; i < arraysize; i++) {
        printf("enter the array element %d: ", i + 1);
        scanf("%d", &num[i]);
    
    }

    return 0;
    
}


int read_array_size() {
    int size; 
    printf("enter the array size [>4]: ");
    scanf("%d", &size);
    return size;
}

int validation_array_size(int array_size) {
    if (array_size > 4) {
        return 1;
    }
    return 0;
}




