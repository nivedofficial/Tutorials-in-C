#include <stdio.h>
#include <math.h>  

void quadratic_roots(int a,int b,int c);

void main() {
    int a, b, c;
    
    printf("Enter coefficients a, b and c for ax^2 + bx + c = 0\n");
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    quadratic_roots(a,b,c);
}

// Function to find the roots of the quadratic equation
void quadratic_roots(int a,int b,int c){

    double discriminant, root1, root2, real, imaginary;

    discriminant = (b*b)-(4*a*c);

    if (discriminant == 0) {                                      // One real root
        
        root1 = -b/(2*a);

        printf("\nRoots are:\n");
        printf("Root = %.2lf\n", root1);
    } 

    else if (discriminant > 0) {                                 // Two real roots
       
        root1 = (-b+sqrt(discriminant))/(2*a);            // calculating roots using the mathematical formula
        root2 = (-b-sqrt(discriminant))/(2*a);

        printf("\nRoots are :\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    

    
    else {                                                             // Complex roots of the form (x + iy)

        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("\nRoots are complex:\n");
        printf("Root 1 = %.2lf + i%.2lf\n", real, imaginary);
        printf("Root 2 = %.2lf - i%.2lf\n", real, imaginary);
    }
}