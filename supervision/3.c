#include<stdio.h>

int main(){
	
	FILE *p;
	
	char name[20];
	
	p = fopen("Demo.txt","a");
	
	if(p == NULL){
		
		printf("Error");
    }
		
	else{
		
		printf("Enter Text : ");
		gets(name);
		
		fputs(name,p);
		
		fputs("\n",p);
		
		fclose(p);
	}  
	
	
}
