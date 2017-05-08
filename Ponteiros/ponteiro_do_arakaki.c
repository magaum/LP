#include <stdio.h>

int main(){

	int num,*pnum;

	num = 10;
	
	pnum = &num;

	if (num==*pnum){
		printf("verdade: %d %d",num,*pnum);
	}

}
