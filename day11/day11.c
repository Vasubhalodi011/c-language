#include<stdio.h>

int main(){
	
	
	int a,b;
	
	printf("1.veg food :\n");
	printf("2.non-veg food :\n");
	
	printf("select your food :");
	scanf("%d",&a);
	
	switch(a){
	     case 1:
		     printf("\n\n1.paw bhaji 140rs only\n");	
		     printf("2.dhosa 110rs only \n\n");
		     
	    printf("enter your iteam sir :");
	    scanf("%d",&a);
    }
    
	switch(a){
		case 1:
			printf("butter\n");
			break;
		case 2:
		    printf("oil\n");
			break;
		
	}    
	
	 
	switch(b){
		case 1:
			printf("\n 1.butter chiken 390rs only\n");
			break;
		case 2:
		    printf(" 2.fish mamna 499rs only\n");
			break;
		
	switch(b){
		case 1:
			printf("with nan \n");
			break;
		case 2:
		    printf("with tanduri roti\n");
			break;
		
     }
		default:
		    printf("sorry sir this iteam is no available");			
		    break;		
		
}
	
	return 0;
 }
