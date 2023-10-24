#include<stdio.h>
int leedato(){
	int n;
	scanf("%d", &n);
	return n;
}
void fibonacci(){
	int n, i=0, a=1, b=1, c=0;
	do{
		printf("Ingrese el numero de la serie: ");
		n= leedato();
	}while(n<2);
	printf("%d\n%d\n",a,b);
	
	while(i<n-2){
		c=a + b;
		if(c>=0){
			printf("%d\n", c);
		}
			a=b;
            b=c;
            i++;
	}
}
int main(){
	fibonacci();
	getchar();
	
return 0;	
}
	


































