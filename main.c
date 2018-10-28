//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that inputs n number of integer values and return how many of that numbers are duplicate.For example, if the user
 * decides to enter the following 5 numbers: [5, 2, 4, 2, 3], the program shoud inform the user that there is one duplicated number.
 */

#include <stdio.h>

int main() {
    //Variables that are used in the program.
    unsigned int n;
    unsigned int count = 0;

    //State the purpose of the program to the user.
    printf("This program will request you to form an array, and then it will tell the amount of repeated numbers in it.\n");

    //Request the array length to the user.
    printf("State the size of the array: \n");
    scanf("%d", &n);

    double list[n];

    //Form the array.
    for (int i = 0; i < n ; ++i) {
        printf("Give me integer number %i: ",i+1);
        scanf("%lf", &list[i]);
    }

    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++){
            if (list[x] == list[y]){
                count++;
                //break;
            }
        }
    }

    printf("%d duplicated numbers found.", count);

    return 0;
}