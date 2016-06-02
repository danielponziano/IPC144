//This program will ask the user to input the stats for their video game character
#include <stdio.h>

int main (void){	
	printf ("+-----------------------+\n");
	printf ("|                       |\n");
	printf ("|       CODE QUEST      |\n");
	printf ("|                       |\n");
	printf ("+-----------------------|\n");
	int strength, speed, defense, intelligence;
	float strengthRatio, speedRatio, defenseRatio, intelligenceRatio;
	int luck, sum;
	printf ("Character Creation\n");
	//User will imput the stats for their character
	printf ("Please enter your desired stats for your character:\n\n");
	printf ("Enter strength: ");
	scanf ("%d", &strength);
	printf ("Enter speed: ");
	scanf ("%d", &speed);
	printf ("Enter defense: ");
	scanf ("%d", &defense);
	printf ("Enter intelligence: ");
	scanf ("%d", &intelligence);
	//Calculates the sum of the stats
	sum=strength+speed+defense+intelligence;
	strengthRatio=(strength/(float)sum);
	speedRatio= (speed/(float)sum);
	defenseRatio= (defense/(float)sum);
	intelligenceRatio= (intelligence/(float)sum);
	//Coverts stats to whole numbers
	strength=strengthRatio*100;
	speed=speedRatio*100;
	defense=defenseRatio*100;
	intelligence=intelligenceRatio*100;
	luck=sum%30;
	//Displays the final stats for the users character
	printf ("\nYour player's final states are:\n ");
	printf ("\nStrength:%d", strength);
	printf ("\nSpeed:%d", speed);
	printf ("\nDefense:%d", defense);
	printf ("\nIntelligence: %d", intelligence);
	printf ("\nLuck: %d\n", luck);
return 0;
}
