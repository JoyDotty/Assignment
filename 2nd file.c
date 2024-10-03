//programmin the library charges

//preprocessor directive

#include <stdio.h>
int mainr(){
	int bookID;
	int dueDate, returnDate;
	int overdueDays;
	int fine;
	
	//user for book ID
	printf("Enter the Book ID (integer): ");
	scanf("%d", &bookID);
	
	//user due date
	printf("Enter the due date (integer): ");
	scanf("%d", &dueDate);
	
	//user return date
	printf("Enter the return date (integer): ");
	scanf("%d", &returnDate);
	
	//calculaton of overdue dates
	if (returnDate > dueDate){overdueDays = returnDate - dueDate; 
	
	//determining the fine on overdue days 
     if(overdueDays <= 7){ fine = 20;}
	 else if(overdueDays <= 14){ fine = 50;}
	 	else{ fine = 100;}
	 		
	 		printf("Book ID: %d\n", bookID);
	 	    printf("Overdue Days: %d\n", overdueDays);
	 	    printf("Total Fine:Ksh %d\n", fine);
	} else { printf("The book is return on time. No fine.\n");
	}
	return 0; 		
}