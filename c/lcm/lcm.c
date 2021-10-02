#include<stdio.h>
void lcm(int,int);
int main(){
int n1,n2;

printf("Enter two Numbers:");
scanf("%d \n %d",&n1,&n2);

lcm(n1,n2);
return 0;
	
}
void lcm(n1,n2){
	int l1,l2;
	
	l1=n1;
	l2=n2;
	
	while(l1!=l2){
		if(l1<l2)
		l1=l1+n1;
		else
		l2=l2+n2;
	}
	printf("L.C.M of %d and %d is = %d",n1,n2,l1);
}
