#include <stdio.h>

int main(){
	int n1 = 10;
	int n2 = 20;
	if (n1 > n2){
		printf("n1 > n2");
		printf("\n%d",(n1 - n2));
	}if( n2 > n1){
		printf("n2 > n1");
		printf("\n%d",(n2 - n1));
	}
	
	return 0;
}
