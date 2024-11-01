#include <stdio.h>
#include <ctype.h>
int main ()
{
	char ch;
		
		printf("Enter charcter: ");
		scanf("%c", &ch);
		
 		if (isalpha(ch)) //alphabet
 		{
		 	printf("%c is an alphabet. \n", ch);
		 } else {
		 	printf("%c is not an alphabet. \n", ch);
		 }
		
		if (islower(ch)) //lowercase
 		{
		 	printf("%c is a lowercase alphabet. \n", ch);
		 } else {
		 	printf("%c is not a lowercase alphabet. \n", ch);
		 } 
		 
		if (isupper(ch)) //uppercase
 		{
		 	printf("%c is an uppercase alphabet. \n", ch);
		 } else {
		 	printf("%c is not an uppercase alphabet. \n", ch);
		 }
		 
 			char lowwer=tolower(ch), uppper=toupper(ch);
 		
 		if (islower(ch)) //covert to uppercase and lowercase
 		{
		 	printf("%c converted to uppercase alphabet is", ch);
			printf(" %c. \n", uppper);
		 } else if (isupper(ch)){
		 	printf("%c converted to lower alphabet is", ch);
			printf(" %c. \n", lowwer);
		 }
				
		if (isdigit(ch)) //digit
 		{
		 	printf("%c is a digit. \n", ch);
		 } else {
		 	printf("%c is not a digit. \n", ch);
		 }
		
		if (isalnum(ch)) //identifies if ch is a digit/letter or no.
 		{
		 	printf("%c is a digit/letter. \n", ch);
		 } else {
		 	printf("%c is not a digit/letter. \n", ch);
		 }
		 
		if (isxdigit(ch)) //hexadecimal digit
 		{
		 	printf("%c is a hexadecimal. \n", ch);
		 } else {
		 	printf("%c is not a hexadecimal. \n", ch);
		 }
		 
		if (isspace(ch)) //whitespace character
 		{
		 	printf("%c is a whitespace character. \n", ch);
		 } else {
		 	printf("%c is not a whitespace character. \n", ch);
		 }
		
		if (isblank(ch)) //blank
 		{
		 	printf("%c is blank. \n", ch);
		 } else {
		 	printf("%c is not blank. \n", ch);
		 }
		
		if (isgraph(ch)) //Identifies if ch is printing character other than a space or no
 		{
		 	printf("%c is a printing character (graph). \n", ch);
		 } else {
		 	printf("%c is not a printing character (graph). \n", ch);
		 }
		
		if (iscntrl(ch)) //control
 		{
		 	printf("%c is a control character. \n", ch);
		 } else {
		 	printf("%c is not a control character. \n", ch);
		 }
		
		if (isprint(ch)) //printing character (character)
 		{
		 	printf("%c is a printing character. \n", ch);
		 } else {
		 	printf("%c is not a printing character. \n", ch);
		 }
		
		if (ispunct(ch)) //printing character (digits)
 		{
		 	printf("%c is a printing character(digits). \n", ch);
		 } else {
		 	printf("%c is not a printing character(digits). \n", ch);
		 }
		
		
		 return 0;
		 
}
