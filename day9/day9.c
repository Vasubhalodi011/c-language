#include<stdio.h>

 int main (){
 	
 	int a,b,c;
 	 
 	printf("enter value a :");
 	scanf("%d",&a);
 	
 	printf("enter value b :");
 	scanf("%d",&b);
 	
 	printf("enter value c :");
 	scanf("%d",&c);
 	
 	
 	if (a>b){
 	   if(a>c){
 	   	 printf("a is max \n");
		}	
 		
       else{
       	  printf("c is max \n");
	   } 		
 		
}
 	
 	else {
 		
 		if (b>c){
 			printf("a is max \n");
		 }
 		
 		else{
 		   printf("c is max \n");
		 }
 		
}
 	
 	return 0;
 	
 }
