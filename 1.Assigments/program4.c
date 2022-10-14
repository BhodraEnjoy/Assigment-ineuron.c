#include <stdio.h>
int main()
{

    float Radius,area;

    printf("Enter Radius\n");
    scanf("%f",&Radius);

    area = 3.1415 * Radius * Radius;

    printf("%f %f",area,Radius);

   getch();
    return 0;

}
