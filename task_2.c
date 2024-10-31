#include<stdio.h>
 int main()
{
	int grade;
		printf("Please Enter The grade:\n");
		scanf("%d",&grade);
		       
		if(grade >= 73)
		 {
			 printf("Congrats! You got an A grade\n");
		 }

               else if (grade >= 68)
	       {
	       printf(" You got an B+ grade\n");
	       } 

	        else if (grade >= 63)
               {
               printf(" You got an B grade\n");
               }

		 else if (grade >= 58)
               {
               printf(" You got an c+ grade\n");
               }

		  else if (grade >= 52)
               {
               printf(" You got an c grade\n");
               }

		   else if (grade >= 47)
               {
               printf(" You got an D+ grade\n");
               }

		    else if (grade >= 41)
               {
               printf(" You got an D grade\n");
               }
 
		 else
		 {
			 printf("You Filed");
		 }

return 0;
}
