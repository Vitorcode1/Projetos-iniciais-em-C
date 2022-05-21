#include <stdio.h>
#include <stdlib.h>

 main()
{
    float kms=0, horas=0, media=0;
        printf ("digite o valor em kms:");
    scanf ("%f",&kms);
    fflush(stdin);
        printf ("digite o valor em horas:");
    scanf ("%f",&horas);
    fflush(stdin);
    media=(kms/horas);
        printf("a media foi:%2.2f",media);



}
