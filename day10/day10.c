#include<stdio.h>

 int main(){
 	
	char a;
	
	 printf("enter value :");
	 scanf("%c",&a);
	  
	switch(a){
		
	  case 'j':
		printf("jan");
		break;	  
      case 'f':
		printf("fab");
		break;
	  case 'm':
		printf("mar");
		break;		
	  case 'x':
		printf("apr");
		break;	
	  case 'y':
		printf("may");
		break;		
	  case 'z':
		printf("jun");
		break;		
	  case 'l':
		printf("jul");
		break;		
	  case 'a':
		printf("aug");
		break;		
	  case 's':
		printf("sep");
		break;		
	  case 'o':
		printf("oct");
		break;	
	  case 'n':
		printf("nov");
		break;	
	  case 'd':
		printf("dec");
		break;	
	
	 default :
	 	printf("invalid month");
	
	
	} 
      return 0;	
 }
