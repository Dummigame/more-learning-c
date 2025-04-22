#include <stdio.h>
int main()
{
    int x = 5, y = 6, z = 50; //Declares multiple variables of the type int (x, y, z) and assigns integer values to them
printf("%d", x + y + z); //Adds the variables together and prints the result
printf("\n"); //Just a newline


x = y = z = 50; //Sets multiple variables (x, y, z) to 50
printf("%d", x + y + z);
printf("\n"); //Just a newline


//Btw, var names are case sensitive!
int X = 5;
printf("%d", x+X); //Prints 55 since x = 50 and X = 5
printf("\n"); //Just a newline

double const Pi = 3.141592653589793;
printf("%.15f", Pi); //This is how you can print more decimal places

printf("\n"); //Just a newline
return 1;

}