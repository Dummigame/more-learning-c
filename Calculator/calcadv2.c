#include <stdio.h>

 int main(void)
 {
    char calcarray[1000];
    int iterations = 0;


    printf("Type your calculation 1 character at a time. ._. \n Use + for addition, - for subtraction, * for multiplication and / for division.\n Type r to receive your result.\n");

    for(iterations = 0; iterations<100; iterations++)
    {
        scanf("%s\n", &calcarray[iterations]);
        if(calcarray[iterations] == 'r')
        {
            goto calculation;
        }
    }

    calculation:
    printf("%s\n", calcarray);
 }

 //Yeah no, can't do this right now.
