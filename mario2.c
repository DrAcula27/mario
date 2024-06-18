#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h; //initialize "h" as user input for height.

    do //do while loop prompts user for a positive height between 1 & 8 inclusive for the pyramids.
    {
        h = get_int("Height (as positive integer from 1 to 8): ");
    }
    while (h < 1 || h > 8);

    for (int r = 1; r <= h; r++) //for loops iterate through the user given input for height to generate pyramids.
  //for (int a = h - r; a > 0; a--) //this does the same as the line above.
    {
       for (int a = r; h > a; a++) //prints the spaces to right-justify the left pyramid.
	    {
			printf(" ");
		}
	   for (int b = 1; b <= r; b++)
	    {
			printf("#");
		}
	   printf("  ");
	   for (int c = 1; c <= r; c++)
	    {
			printf("#");
		}
		printf("\n");
	}
}