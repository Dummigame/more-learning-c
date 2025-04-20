#include <stdio.h>
int main()
{
    float rand = 94.3742;
    float rand2 = 134.4234;
    float rand3;
    int repititions = 0;
    scanf("%f",&rand2);

    while(repititions < 20)
    {
        if(rand < 100000)
        {
            rand3 = (rand*rand2 + rand);
            rand = rand3;
            if (rand3 != 0)
            {
                rand3 = (rand3/rand3);
            }
        }

        if(rand > 100000)
        {
            rand3 = (rand * rand2 / 2148);
            rand = rand3;
        }

        printf("%f", rand3);
        printf("\n");
        repititions++;
    }
}
