/*
Main Menu Project
Author: Matthew Anthony
Date: 6/29/22
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int choice = 0;
    float x,y;
    int a, b;

    //Main Menu, loops back to this unless user enters option 4
    while (true)
    {
        printf("MAIN MENU\n");
        printf("1) Info on the 2 programs\n");
        printf("2) Point on Cartesian plane locater program\n");
        printf("3) Multiplication table program\n");
        printf("4) Exit\n");
        printf("Enter your selection: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Welcome to Assignment 5! There are 2 programs to choose from:\n");
            printf("The Cartesian plane locater program takes user's inputted x-y coordinates and prints a message telling either an axis on which the point lies or the quadrant in which it is found.\n");
            printf("The multiplication table uses nested loops to display a 10x10 multiplication table.\n");
            break;

        case 2:
    //Cartesian plane locater program
            printf("Cartesian Plane Locater Program\n");
            printf("Enter the point (x,y)\n");
            scanf("%f,%f", &x, &y);

            if (x == 0 && y == 0)
            {
                printf("The point is on the origin.\n");
            }
            else if (y == 0 && x > 0)
            {
                printf("The point is on the positive x-axis.\n");
            }
            else if (x == 0 && y > 0)
            {
                printf("The point is on the positive y-axis.\n");
            }
            else if (y == 0 && x < 0)
            {
                printf("The point is on the negative x-axis.\n");
            }
            else if (x == 0 && y < 0)
            {
                printf("The point is on the negative y-axis.\n");
            }
            else if (x > 0 && y > 0)
            {
                printf("The point is in quadrant I.\n");
            }
            else if (x < 0 && y > 0)
            {
                printf("The point is in quadrant II.\n");
            }
            else if (x < 0 && y < 0)
            {
                printf("The point is in quadrant III.\n");
            }
            else if (x > 0 && y < 0)
            {
                printf("The point is in quadrant IV.\n");
            }
            break;


        case 3:
    //Multiplication Table - uses nested loops to display a 10x10 multiplication table
        printf("Multiplication Table Program\n");
        //Outer
        for (a = 1; a <= 10; a++)
        {
            //Inner
            for (b = 1; b <= 10; b++)
            {
                printf("%d\t", a * b);
            }
            
            printf("\n");
        }
        break;


        case 4:
        //Exit option
            printf("Goodbye.");
            exit(0);

        }
    }

return 0;
}
