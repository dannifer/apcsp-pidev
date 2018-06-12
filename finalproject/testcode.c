#include<stdio.h>

int main(int argc, char* argv[1])
{
   float input;
   if (sscanf(argv[1], "%f", &input) != 1) {
	printf("Please enter a valid input");
	return 1;
   }

    float centimeters,inches,millimeters,meters,AsianElephantEars,ElephantTuskGrowthperYear,ManateeLungWidth;
    int feet;

    centimeters = input;

    printf("\n\n Centimeter Conversion : "); 
    inches=centimeters / 2.54;
    feet=inches/12;
    inches=inches-(feet*12);
    millimeters=centimeters*10;
    meters=centimeters*.01;
    AsianElephantEars=centimeters*.016;
    ElephantTuskGrowthperYear=centimeters*.05;
    ManateeLungWidth=centimeters*.05;
 
    printf("\n\n Feet and Inches : %d \' Feet and %.1f \" Inches",feet,inches,centimeters);
    printf("\n\n Millimeters : %10f \' millimeters",millimeters,centimeters);
    printf("\n\n Meters : %.01f \' meters", meters,centimeters);
    printf("\n\n Asian ElephantEars: %.016f \' Asian Elephant Ears", AsianElephantEars,centimeters);
    printf("\n\n Elephant Tusk Growth per Year: %.05f \' Elephant Tusk Growth per Year", ElephantTuskGrowthperYear, centimeters);
    printf("\n\n Manatee Lung Width: %.05f \' Manatee Lung Width",ManateeLungWidth,centimeters);

    printf("\n\n");
    return 0;
}
