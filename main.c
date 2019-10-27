#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Hello this is an array program.\n");


    int i;
      int array[100];



for(i = 0; i<3; i = i + 1){
    int indexNum;
    int value;



    int j;

    for(j = 0; j<100; j=j+1){
        printf("\nArray at %d = %d",j,array[j]);
        //printf("\n%d",array[j]);

    }//for


    //Prompt the use for input.
    printf("\nPlease enter the array index you wish to edit.");
    scanf("%d",&indexNum);

    printf("Please enter the value you wish to enter into this index.");
    scanf("%d",&value);

    array[indexNum] = value;

    printf("The array index %d now contains the value %d.",indexNum , value);

}//outer for

    return 0;
}
