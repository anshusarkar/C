#include<stdio.h>
int fun()
{
    if(1==1){
        return -1;
    }
    return 0;
}

void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("\ni : %d, j : %d\n",i,j);
            if(i == 2 && j== 3){
                goto exit_loop; // Jumps out of the loops
            }
        }
    }
    exit_loop: // This is where the control flow of the program would endup
        printf("\nThe control flow enededup here at the i : %d, j : %d\n", i,j);

    // Error handeling using goto keyword
    int var = fun();
    if (var == -1) {
        goto error_handler;
    }
    // ... continue normal execution

error_handler:
    printf("An error occurred.\n");
    // Clean up resources, close files, etc.
    return 1; // Indicate an error

    return 0;    

}

