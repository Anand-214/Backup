#include<stdio.h>
int main()
{
    float grade;
    printf("Please enter the percentage scored:");
    scanf("%f", &grade);
    if ( grade > 0 & grade <= 100 )
    {
	if ( grade>80 )
	    printf("You are passed with destiction.\n");
	else if ( grade>60 )
	    printf("1st class\n");
	else if ( grade>50 ) 
	    printf("2nd class\n");
	else if ( grade>35 )
	    printf ( "PASS\n" );
	else
	    printf ( "Failed\n" );
    }
    else
	printf("Student did not appear for the exams.\n");
}
