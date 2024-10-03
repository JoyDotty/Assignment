//programming the days overdue

//preprocessor directive 

#include <stdio.h>
int main(){
	int bookID;
	int dueDate,returnDate;
	int overdueDays;
	int fineamount;
	

		//user book ID
	printf("Enter the book ID(integer): ");
	scanf("%d", &bookID);
	
	//user due date
	printf("Enter the due date(integer): ");
	scanf("%d", &dueDate);
	
	//user return date
	printf("Enter the return date(integer): ");
	scanf("%d", &returnDate);
	
	//calculation of the overdue days
	overdueDays = returnDate - dueDate;
	
	//determining the fine amount and rate on overdue days 
	if(overdueDays >0){if(overdueDays <=7){ fine = 20;
	} else if ( overdueDays <=14 ){ fine = 50;
     
     //results for output
     printf("Book ID: %d\n",bookID);
     printf("overdue Days: %d\n",overdueDays);
     printf("Total fine: Ksh %d\n",fine);
	} else{print f("The book is returned on time. No fine.\n");
	
	return 0;
	 }