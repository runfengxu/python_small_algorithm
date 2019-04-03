#include<stdio.h>

void hanoi(int,char,char,char);

	
int main(){
	char a='A';
	char b='B';
	char c='C';
	hanoi(5,a,b,c);
	return 0;
}

void hanoi(int n, char a, char b, char c){
	if(n==1){
		printf("%c moves to %c\n",a,c);
	}
	else{
		hanoi(n-1,a,c,b);
		hanoi(1,a,b,c);
		hanoi(n-1,b,a,c);
	}
	
}
	
