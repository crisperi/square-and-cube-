#include <stdio.h>

int number;

int main (){

int number;

int i;

printf("number  square  cube\n");

for(i=0;i<=10;i++){
	

int	the2nd = square(i);
int	the3rd = numberCube(i);
printf("%d  %d  %d \n",i,the2nd,the3rd);
	
};

}

int square(number){
	int sqNumber= number*number;

}

int numberCube(number){
	
int cubeNumber = number*number*number;

}
