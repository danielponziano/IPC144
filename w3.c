#include <stdio.h>

int main (){
int pStrength=10, pDefense=20, pIntelligence=40, pHP=10;
int eStrength=30, eDefense=40, eIntelligence=25, eHP=10;
int attackPower;
int select;
	printf ("Battle Start!\n");
	printf ("Your HP is %d, your enemy's HP is %d", pHP, eHP);
	printf ("\n1. Attack Power\n");
	printf ("2. Magic Power\n");
	printf ("Your selection: ");
	scanf ("%i", &select);
if (select==1){
	attackPower= pStrength/eDefense;
	attackPower= attackPower*5;
	eHP= eHP-attackPower;
if (eHP<=0){
	printf ("You have lost");}
	printf ("The enemy's HP is %d", eHP);
}
}
	
