#include <stdio.h> 

int main () {
	  int a, b, c;
	  printf("nhap a, b, c :");
	  scanf("%d%d%d",&a, &b, &c);
	  int max = a;
	  max = (max >= b) ?max : b;
	  max = (max >= c) ?max : c;
	  printf("gia tri lon nhat trong 3 so la : %d",max);
	return 0; 
}
