#include<stdio.h>

//to define x and y outside the function

int x;
int y;

int autorun(void){


	extern int x;
	extern int y;

	x=1;
	y=2;
	return x+y;
}

int main(){

   int result;
   result=autorun();

 printf("result is %d\n",result);
   return 0;


}

