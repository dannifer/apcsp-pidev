#include<stdio.h>

int main(int argc, char* argv[1])
{
   float input;
   if (sscanf(argv[1], "%f", &input) != 1) {
        printf("Please enter a valid input");
        return 1;
   }

    float inches,centimeters,feet,millimeters,meters,AsianElephantEars,ElephantTuskGrowthperYear,ManateeLungWidth;

    inches = input;

    printf("\n\n Inches Conversion : ");

    centimeters=inches*2.54;
    feet=inches/12;
    millimeters=centimeters*25.4;
    meters=inches*.0254;
    AsianElephantEars=inches*.04064;
    ElephantTuskGrowthperYear=inches*.127;
    ManateeLungWidth=inches*.127;

    printf("\n\n Feet: %.083f \' Feet",feet);
    printf("\n\n Millimeters : %25.4f \' millimeters",millimeters,inches);
    printf("\n\n Meters : %.0254f \' meters", meters,inches);
    printf("\n\n Asian ElephantEars: %.04064f \' Asian Elephant Ears", AsianElephantEars,inches);
    printf("\n\n Elephant Tusk Growth per Year: %.127f \' Elephant Tusk Growth per Year", ElephantTuskGrowthperYear, inches);
    printf("\n\n Manatee Lung Width: %.127f \' Manatee Lung Width",ManateeLungWidth,inches);

    printf("\n\n");
    return 0;

}

