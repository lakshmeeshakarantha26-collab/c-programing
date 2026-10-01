#include<stdio.h>

int main(){   
    int arraysize=read_array_size();   //calling methid & stores returned value
    int isvalid=validate_array_size(arraysize) ;    // passing 'arraysize' ; int array_size=arraysize
    if(isvalid == 0){

    }
    int size=1;
    while(size>=5){
        
        size++;
    }
}
//read array size from kb
int read_array_size(){
    int size;           //local variable
    printf("enter the array size[>4]");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    if(array_size >= 4){
        return 1;
    }
    
    return 0;
}

