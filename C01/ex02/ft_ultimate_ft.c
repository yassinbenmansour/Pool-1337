#include <unistd.h>
#include <stdio.h>
void ft_ultimate_ft(int *********nbr);


void ft_ultimate_ft(int *********nbr){

    	*********nbr = 42;

}


int main(){

    int a;
	int *nbr;
	int **nbr1;
	int ***nbr2;
	int ****nbr3;
	int *****nbr4;
	int ******nbr5;
	int *******nbr6;
	int ********nbr7;
	int *********nbr8;

	nbr=&a;
	nbr1=&nbr;
	nbr2=&nbr1;
	nbr3=&nbr2;
	nbr4=&nbr3;
	nbr5=&nbr4;
	nbr6=&nbr5;
	nbr7=&nbr6;
	nbr8=&nbr7;

	ft_ultimate_ft(nbr8);

	printf("la valeur est : %d ", a);

}


