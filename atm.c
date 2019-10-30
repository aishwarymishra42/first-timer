#include<stdio.h>
#include<conio.h>
int main(){
int a=0;
	while(a<=5){
	printf("\n enter the amount in multiples of 100\n");
	int n;
	scanf("%d",&n);
	if(n%100==0){
		if(n/100>9){
			printf("no. of thousand notes %d\n",n/1000);
			printf("no. of five hundred notes %d\n",(n%1000)/500);
           	 	int m=(n%1000)%500;
			printf("no. of hundred notes %d\n",m/100);
		}else{
			printf("no. of five hundred notes %d\n",n/500);
			m=n%500;
			printf("no.of hundred notes %d\n",m/100);
		}
	}a++;
}
	return 0;
}
