#include <stdio.h>
 int main()
 {
    float N; //Number to be modified
    float N1; //Number to modify
    int mode = 1;

    printf("What do you want to do? (1: Add /2: Subtract /3: Multiply /4: Divide) \n");
    scanf("%d", &mode);
    switch(mode)
    {
        case 1:
        printf("Number to add to: \n"); //Prints message that prompts user to type the number to add to
        scanf("%f", &N); //Scans for user input and assigns to N

        printf("Add by: \n"); //Prints message that prompts user to type the number to add by
        scanf("%f", &N1); //Scans for user input and assigns to N1
        printf("%f", N+N1);
        break;

        case 2:
        printf("Number to subtract: \n");
        scanf("%f", &N); 

        printf("Subtract by: \n"); 
        scanf("%f", &N1); 
        printf("%f", N-N1);
        break;

        case 3:
        printf("Number to multiply: \n");
        scanf("%f", &N);

        printf("Multiply by: \n");
        scanf("%f", &N1);
        printf("%f", N*N1);
        break;

        case 4:
        printf("Number to divide: \n");
        scanf("%f", &N);

        printf("Divide by: \n");
        scanf("%f", &N1);
        if (N1 == 0)
        {
            printf("Can't divide by 0. \n");
            break;
        }
        
        printf("%f", N/N1);
        break;
    }
 printf("\n");
 }
