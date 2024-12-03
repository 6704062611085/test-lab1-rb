#include <stdio.h>

int main(){
	int n1;
	int n2;
	printf("enter to number");
	scanf("%d",&n1);
	printf("enter to number");
	scanf("%d",&n2);
	if (n1 > n2){
		printf("n1 > n2");
		printf("\n%d",(n1 - n2));
	}else{
		printf("n2 > n1");
		printf("\n%d",(n2 - n1));
	}
	
	return 0;
}
