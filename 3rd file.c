//programming the days overdue

//preprocessor directive 

#include <stdio.h>
int main(){
	int bookID;
	int dueDate,returnDate;
	int overdueDays;
	int fine;
	
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
	
	//determining the fine on overdue days
	if(overdueDays > 0) if(overdueDays <=7){fine = 20;
	} else if (overdueDays <= 14){fine = 50;
	} else {fine = 100;
			
				
	//the results for output
	printf("BookID: %d\n", bookID);
	printf("OerdueDays: %d\n", overdueDays);
	printf("Totalfine: Ksh %d\n", fine);
	}else{printf("The book is returned on time. No fine.\n");
	}		
	return 0;
}