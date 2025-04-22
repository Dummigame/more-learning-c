#include <stdio.h>
 int main(void)
 {
    double N; //Number to be modified
    double N1; //Number to modify
    int mode = 1;

    printf("What do you want to do? (1: Add /2: Subtract /3: Multiply /4: Divide) \n");

    userisidiot: //Puts pointer back here if user didn't select a valid option.
    scanf("%d", &mode);



    switch(mode)
    {
        case 1:
        printf("Number to add to: \n"); //Prints message that prompts user to type the number to add to
        scanf("%lf", &N); //Scans for user input and assigns to N

        printf("Add by: \n"); //Prints message that prompts user to type the number to add by
        scanf("%lf", &N1); //Scans for user input and assigns to N1
        printf("%.15f", N+N1);
        break;

        case 2:
        printf("Number to subtract: \n");
        scanf("%lf", &N); 

        printf("Subtract by: \n"); 
        scanf("%lf", &N1); 
        printf("%.15f", N-N1);
        break;

        case 3:
        printf("Number to multiply: \n");
        scanf("%lf", &N);

        printf("Multiply by: \n");
        scanf("%lf", &N1);
        printf("%.15f", N*N1);
        break;

        case 4:
        printf("Number to divide: \n");
        scanf("%lf", &N);

        printf("Divide by: \n");
        scanf("%lf", &N1);
        if (N1 == 0)
        {
            printf("Can't divide by 0. \n");
            break;
        }
        
        printf("%.15f", N/N1);
        break;

        default:
        printf("You didn't select one of the options. Try again. \n (1: Add /2: Subtract /3: Multiply /4: Divide)\n");
        goto userisidiot; //Puts pointer back to the switch statement if user didn't select a valid option.
    }
 printf("\n");
 printf("\n");
 return 0;
}
 /*Should be 15 decimals of precision, but isn't. Maybe I'm being silly. Note: fixed by making printf print more decimal places.
 Also, typing a letter always results in 0. It used to cause some crazy output.*/
