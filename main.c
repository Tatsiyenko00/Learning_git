#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char first[255], last[255];
	
	printf("Enter your first name: ");
	fgets(first, 255, stdin);
	first[strlen(first)-1] = '\0'; /* remove the newline at the end */
	
<<<<<<< HEAD
	print("Hello, %s!\n", name);
=======
	printf("Now enter your last name: ");
	gets(last); /* buffer overflow? what's that? */
	
	print("Hello %s %s!\n", first, last);
>>>>>>> 3e153e233d59679e875f8afd984722378fb107aa
	return 0;
}