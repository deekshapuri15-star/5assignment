#include<stdio.h>
 int prime(int n){
 int i;
 if(n<=2)
 return 0;
 for(i=2;i<n;i++){
 	if(n%i==0) 
 	return 0;
	 }
	 return 1;
	 }
	 
 	
 	
 	

	int main(){
	 	int num,count =0,n=2;
	 	printf("enter no how many prime ");
	 	scanf("%d",&num);
	 	while(count<num){
		 
		 if( prime(n)){
		 	printf("%d",n);
		 	count++;
		 } 
		 n++;
		 }
		 return 0;
		 }
	 	
	
			 
		
			 
