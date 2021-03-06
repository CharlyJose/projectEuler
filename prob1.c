/*
Multiples of 3 and 5
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include <stdio.h>

int main(){

int i; 
long int sum=0;

for(i=3; i<1000; i++)
	if(i%3==0 && 0<=(sum+=i));			/* Multiple of 3 */	/* NOTE: && is a short-circuit form of AND*/
	else if(i%5==0 && 0<=(sum+=i));		/* Muiltiple of 5 *//* NOTE: & is the logical AND */

printf("\n\n%ld\n\n", sum);

return 0;
}