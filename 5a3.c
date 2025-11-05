#include<stdio.h>
 int swap(int *a ,int *b ){
 	int temp;
 	temp=*a;
 	*a=*b;
 	*b=temp;
 	
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
 
