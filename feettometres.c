#include <stdio.h>
#include <string.h>

//use of Function:1//
float convertToMeters(float feet) {
    return feet * 0.3048;
}

//use of Function :2//
void printResult(float feet, float meters) {
    printf("%.2f feet is equal to %.4f meters.\n", feet, meters);
}


//use of function: 3//
int getChoice() {
    char choice[4];//use of array//

    printf("Do you want to perform another conversion (y/n)? ");
    scanf("%s", choice);


    //use o stringcompare funcion as a string manupulation//
    if (strcmp(choice, "y") == 0 || strcmp(choice, "Y") == 0) {
        return 1; //use of decision making function//
    }
    return 0;
}

int main() {
    float feet, meters;
    
    //use of loop//

    do {
        printf("Enter the number of feet: ");
        scanf("%f", &feet);

        meters = convertToMeters(feet);
        printResult(feet, meters);
    } while (getChoice());//use of decision making function//

    return 0;
}