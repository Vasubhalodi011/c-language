#include<stdio.h>

sum(int v[], int n){
	
	int c=0,i;
	
	for (i=0 ; i<n ; i++){
		c += v[i];
	}
	
	printf("sum : %d" , c);
}

int main(){
	
	int n;
	
	printf("enter value : ");
	scanf("%d", &n );
	
	int arr[n],i;
	
	for(i=0 ; i<n ; i++){
		
	printf("enter value : ");
	scanf("%d", &arr[i]);
			
	}
	
	sum(arr,n);
	
	return 0;
}
