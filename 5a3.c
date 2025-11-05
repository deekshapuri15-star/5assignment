#include<stdio.h>
 int swap(int *a ,int *b ){ 
 	*a=*a+*b;
 	*b=*a-*b;
 	*a=*a-*b;
 	
}
int main(){
	int x,y;
	printf("enter no");
	scanf("%d%d",&x,&y);
	printf("before swap x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("enter after x=%d,y=%d",x,y);
	return 0;
	
}
 
