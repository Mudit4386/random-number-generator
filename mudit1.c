/* a random number generator is used with user input and check how much time you needed to guess
yes, ofcourse it is difficult to guess but try it */


#include <stdio.h>            // header file 
#include <stdlib.h>           // memory allocation , random thing it is used 
#include <time.h>             

int main() {
	// Seed the random number generator with the current time
	srand(time(NULL));

	// Generate a random number between 1 and 100
	int randomNumber = (rand() % 100) + 1;

	/*Print the random number
	if you want toalso the random number then use this print statement othwise
	for all thing random dont use this print statements*/

	printf("Random number between 1 and 100: %d\n", randomNumber);

	// declare the variable
	int number,randomnumber;

	// take input from the number
	printf("guess?? what the randomnumber between 1 to 100 is displayed:");
	scanf("%d",&number);


	// initalize the condition for the print statements

	if(randomnumber>number) {
		printf("yes it something but the number guess by you is small than the random number generated");
	}
	else if(randomnumber<number) {
		printf("yes it something but the number guess by you is large than the random number generated");

	}
	else
		printf("such a great gusser you are :");
	return 0;
}
