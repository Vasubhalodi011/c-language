#include<stdio.h>

void sum(int a , int b){
	
	printf("sum : %d\n\n",a+b);
}

void minus(int a , int b){
	
	printf("sum : %d\n\n",a-b);
}

void multiply(int a , int b){
	
	printf("sum : %d\n\n",a*b);
}

void divide(int a , int b){
	
	printf("sum : %d\n\n",a/b);
}
int main(){
	
	int a,b;
	char sign;
	
	while(1){
		
		printf("enter first value : ");
		scanf("%d",&a);
		
	    printf("enter first value : ");
		scanf("%d",&b);
		
		printf("+ , - , * , /\n\n");
		
	    printf("make your selection : ");
		scanf(" %c",&sign);
		
		switch(sign){
			
			case '+':
				sum(a,b);
				break;
				
			case '-':
				minus(a,b);
				break;
				
			case '*':
				multiply(a,b);
				break;								
				
			case '/':
				divide(a,b);
				break;			  
		}
		
		
	}
}
