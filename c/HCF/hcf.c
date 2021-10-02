#include<stdio.h>
int main(){
	int a,b,i,hcf;
	
	printf("Enter the two values: ");
	scanf("%d \n %d",&a,&b);
	
	for(i=1;i<=a || i<=b;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	printf("HCF IS = %d",hcf);
	return 0 ;
}
