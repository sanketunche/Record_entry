#include <stdio.h>
#include <string.h>
#include <ctype.h>

void enterData();

void main()
{
	int cancelOption,entryOption,exitOption;
	int userChoice;
	char choice[1];
	char selectOption[1];
	cancelOption=0;
        while (cancelOption==0)
	{
		clrscr();
		printf("Please Select an Action-->");
		printf("Daily Time Record [1] ");
		printf("Data Entry        [2] ");
		printf("Close             [3] ");
		printf("Please Enter Your Choice (1/2/3): ");
		scanf("%s",&choice);
		entryOption=strcmp(choice,"2");
		exitOption=strcmp(choice,"3");
		printf("DAILY EMPLOYEE TIME RECORDING SYSTEM");
		printf("[1] Employee Log In ");
		printf("Please Enter Your Option: ");
		scanf("%s",&selectOption);
		if (strcmp(selectOption,"1")==0)
		{
		 
		}
		if (strcmp(selectOption,"2")==0)
		{
		   
		}
		}
		if (entryOption==0)
		{
			enterData();
		}
		if (exitOption==0)
		{
			exit();
		}

		if (!(exitOption==0))
		{
		   printf("Invalid Option. ");
		   cancelOption=0;
		}

	}
	printf("Exiting");
	
}


void enterData()
{

char adminName[10], passwd[5],buffer[1];
char tempo[6],sel[1];
int validUserNameOption,validUserPwdOption,returnOption,UserName,inc,tmp;
char plus;
	clrscr();
	validUserNameOption=0;
	validUserPwdOption=0;
	while (validUserPwdOption==0)
	{
		clrscr();
		while (validUserNameOption==0)
		{
			printf("ADMIN INTERFACE");
			printf("Info: Type return to go back to the main screen.");
			printf("Enter Administrator Name: ");
			scanf("%s",&adminName);
			returnOption=strcmp(adminName,"return");
			UserName=strcmp(adminName,"admin")
			if (returnOption==0)
			{
			goto stream;
			}
			if (!(UserName==0 || returnOption==0))
			{

			 (32,11);
			printf("Administrator Name is Invalid.");
			getch();
			validUserNameOption=0;
			}
			else
			validUserNameOption=1;

		}

		printf("You Have Successfully Logged In.");
			printf("Press Any Key to Continue.");
			validUserPwdOption=1;
			validUserNameOption=1;
			showAdminMenu=0;

		     while (showAdminMenu==0)
		     {
			printf("ADMIN OPTIONS");
			printf("Add New Employee       [1]");
			printf("Show Daily Entries     [2]");
			printf("Search Employee Record [3]");
			printf("Remove Employee        [4]");
			printf("Close                  [5]");
			printf("Please enter your choice: ");
			
		   }
		

}
void selectAdmin(){
	//Here the access to the Data is provided
}


