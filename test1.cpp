#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("inter to n1");
	scanf("%d",&n1);
	printf("inter to n2");
	scanf("%d",&n2);
	if ( n2 > n1 ) {
		printf("n2 > n1");
		printf("\n%d",(n2-n1));
		//diff of n2 > n1
	} else{
		printf("n1 > n2");
		printf("\n%d",(n1-n2));
		//diff of n1 > n2
	}
	return 0;
}


