#include <stdio.h>
#include <math.h>
/*
Cyrus Mahugu
BCS-05-0551/2026
structured programming and algorithims
Surface area and volume of a cylinder*/
int main()
{
	float height ;
	float radius ;
	float surface_area;
	float volume;
	const PI = 3.142;
	
	printf("The following program calculates the surface are and volume of cylinders.\n");
	printf("Enter the height of the cylinder: ");
	scanf("%f",&height);
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&radius);
	
	volume = PI * radius * radius * height;
	
    surface_area = 2 * PI * radius * (radius+height);
	
	printf ("Volume of the cylinder: %f \n",volume)	;
	printf("Total surface area of the cylinder: %f",surface_area);
	
	return 0;
}
