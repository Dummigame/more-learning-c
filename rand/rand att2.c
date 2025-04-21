#include <stdio.h>
#include <math.h>
int main()
{
    //Too many fucking variables
    float rand = 94.3742;
    float rand3 = 42;
    float rand4;
    float seed = 234;
    float randresult;

    int repititions = 0; //Makes it so the while loop doesn't run forever, do not delete repititions++ unless you want your memory to die a slow, leaky death.


    printf("Type a value between around 220.55 and 242.95 as a seed. \n");
    scanf("%f",&seed); //seed based on user input

    while(repititions <= 1000) //Loops for 1000 times. Change number or turn into a variable to change.
    {
        randresult = 4.21235*seed/rand+randresult-rand4; //Math fuckery
        randresult = randresult-9.844; //Makes it so randresult stays in bounds longer without the if statement band-aid
        if(randresult > 1)
        {
            randresult = randresult - 1; //Makes randresult stay in bounds 0<randresult<1 if 220.55<seed<242.95
        }
        printf("%f", randresult); //Displays randresult as a float in the terminal
        printf("\n");
        repititions++;
    }
}


// Outputs a pseudo-random number 0<rrandresult<1 if 220.55<seed<242.95
// Results vary most in the median between the two ends. I think.