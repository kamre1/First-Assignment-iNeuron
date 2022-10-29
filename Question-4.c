/* 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in
below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius. */

#include<stdio.h>
int main()
{

    int Area,r;

    printf("Enter Area of Radius: ");

    scanf("%d",&r);

    Area= (3.14*r*r);

    printf("Area Of Circle is : %d", Area);

    return 0;
}
