//programming qualification of a loan

//preprocessor directive
#include <stdio.h>
int main(){
	int age;
	int income;
	
	//users age
	printf("Welcome to the loan Eligibility checker\n");
	printf("please enter your age: ");
	scanf("%d", &age);
	
	//users annual income
	printf("Enter your annual income (in sh): ");
	scanf("%f", &income);
	
	//user meets the loan requirement 
	if (age >= 21 & income >= 21000){ printf("Congratulation! You quaified for a loan.\n");}
		else { printf("Unfrtunately, we are unable to offer you a loan at this time.\n");}
			return 0;
}