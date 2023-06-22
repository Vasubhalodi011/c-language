#include<stdio.h>
#include<string.h>

int main(){
	
	char email[50];
	char password[50];
	char email1[] = "Meetakoliya@gmail.com" ;
	char password1[] = "Meet@1234" ;
	
	printf ("enter your email :");
	scanf ("%s",email);
	
	printf ("enter your password :");
	scanf ("%s",password);	
	
	if(strcmp (email,email1) == 0 && strcmp (password,password1) == 0) {
		
		 printf("login successful !");
	}

    else{
    	
    	printf("invalid email or password. ");
	}
	
	return 0;
}
