/*
Smallest multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <stdio.h>

int main(void){

	int i=2, flag;
	int num=20;

	while(1){
		num++;
		for(i=2; i<=20; i++){
			if(num%i!=0){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
		}

		if(flag==1)
			break;
	}
	printf("\n\n%d\n\n", num);

	return 0;
}