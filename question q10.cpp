#include <stdio.h>
 
int main(){
    int inputArray[100], elementCount, counter;
     
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
    
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
       
    printf("Negative Elements in Array\n");
    for(counter = 0; counter < elementCount; counter++){
        if(inputArray[counter] < 0) {
            printf("%d ", inputArray[counter]);
        }
    }
         
    return 0;
}
