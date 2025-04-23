#include <stdio.h>
int main(void)
{

    printf("This is a calculator. Type your equation piece by piece, press enter after each.\n Go in the order of Number, Operator, repeat \n Use * for multiplication, / for divsion. \n Operators: + - * /\n If you want to get the result, type 'r'.\n You can use up to 10 elements. \n");
   
    double element;
    char ElementC = '+';

    char element1 = 1;

    double element2 = 1;
    char ElementC2 = 1;

    char element3 = 1;

    double element4 = 1;
    char ElementC4 = 1;

    char element5 = 1;
    
    double element6 = 1;
    char ElementC6 = 1;
    
    char element7 = 1;

    double element8 = 1;
    char ElementC8 = 1;

    char element9 = 1;

    int elementcount = 0;
    double result = 0;
    newelement:

    switch(elementcount)
    {
    case 0:
    scanf("%lf %c", &element, &ElementC);
    if(ElementC == 'r')
    {goto calculation;}
    break;

    case 1:
    scanf("%c", &element1);
    if(element1 == 'r')
    {goto calculation;}
    break;
    
    case 2:
    scanf("%lf %c", &element2, &ElementC2);
    if(ElementC2 == 'r')
    {goto calculation;}
    break;

    case 3:
    scanf("%c", &element3);
    if(element3 == 'r')
    {goto calculation;}
    break;
    
    case 4:
    scanf("%lf %c", &element4, &ElementC4);
    if(ElementC4 == 'r')
    {goto calculation;}
    break;
    
    case 5:
    scanf("%c", &element5);
    if(element5 == 'r')
    {goto calculation;}
    break;
    
    case 6:
    scanf("%lf %c", &element6, &ElementC6);
    if(ElementC6 == 'r')
    {goto calculation;}
    break;
    
    case 7:
    scanf("%c", &element7);
    if(element7 == 'r')
    {goto calculation;}
    break;
    
    case 8:
    scanf("%lf %c", &element8, &ElementC8);
    if(ElementC8 == 'r')
    {goto calculation;}
    break;
    
    case 9:
    scanf("%c", &element9);
    if(element9 == 'r')
    {goto calculation;}
    break;
    
    }

    if (element == 'r')
    {
        printf("\nresultstuff\n");
        goto calculation;
    }

    elementcount++;
    goto newelement;

    calculation:
    if(elementcount > 0)
    {
        printf("%lf %c %lf %c %lf %c %lf %c %lf %c", element, element1, element2, element3, element4, element5, element6, element7, element8, element9); //Tried to make the variables build the equation for printf, but doesn't work.
        result = (element, element1, element2, element3, element4, element5, element6, element7, element8, element9);
    }


}
// Doesn't work. Mad
//Variables can't be interpreted as operators. Extra mad

//Should've looked this up before, but still.
