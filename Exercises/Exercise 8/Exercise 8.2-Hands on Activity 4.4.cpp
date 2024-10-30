#include <stdio.h>
#include <ctype.h>
//int main ()
//{
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:", //Determines if ch is a lowercase letter or no.
//
//        islower('p') ? "p is a ": "p is not a ", "lowercase letter",
//        islower('P') ? "P is a ": "P is not a ", "lowercase letter",
//        islower('5') ? "5 is a ": "5 is not a ", "lowercase letter",
//        islower('!') ? "! is a ": "! is not a ", "lowercase letter");
//        
//    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper:", //Determines if ch is an uppercase letter or no.
//        isupper('D') ? "D is an ": "D is not an ", "uppercase letter",
//        isupper('d') ? "d is an ": "d is not an ", "uppercase letter",
//        isupper('8') ? "8 is an ": "8 is not an ", "uppercase letter",
//        isupper('&') ? "& is an ": "& is not an ", "uppercase letter");
//        
//char ch1=toupper('u'), ch2=toupper('7'), ch3=toupper('$'), ch4=tolower('L'); //Converts ch to its said function.
//
//     	printf("Converting: \n");
//     	printf("u converted to uppercase is %c\n", ch1);
//		printf("7 converted to uppercase is %c\n", ch2);
//		printf("$ converted to uppercase is %c\n", ch3);
//		printf("L converted to lowercase is %c\n", ch4);
//        
//        return 0;
//}

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
		 
 		char upper=tolower(ch), lower=toupper(ch);
 		if (islower(ch)) //covert to uppercase
 		{
		 	printf("%c converted to lowercase alphabet is", ch);
			printf(" %c. \n", upper);
		 } else {
		 	printf("%c is already in uppercase. \n", ch);
		 }
		
		
//		 	printf("%c converted to lowercase alphabet is %c. \n", ch, ch1);
//			printf("%c converted to uppercase alphabet is %c. \n", ch, ch2);
		
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
		 	printf("%c is a digit. \n", ch);
		 } else {
		 	printf("%c is not a digit. \n", ch);
		 }
		
		
		 return 0;
		 
}
