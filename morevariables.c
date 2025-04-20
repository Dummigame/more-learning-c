#include <stdio.h>

int main()
{
//To print different types in a single printf() function, you can use the following:
int myNum = 15;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);

//You can also just print a value without storing it in a variable, as long as you use the correct format specifier:
printf("My favorite number is: %d", 15);
printf("My favorite letter is: %c", 'D');

return 0;
}
