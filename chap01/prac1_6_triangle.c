/* 输入三角形三条边的长度值（均为正整数），判断是否能为直角三角形的三条边长。如果可以，则输出yes，如果不能，则输出no。如果根本无法构成三角形，则输出not a triangle */
#include <stdio.h>

int main(){
	int a, b, c, t;
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
//	scanf("%d%d%d", &a, &b, &c);
		if (a > b) {t = a; a = b; b = t;}
		if (a > c) {t = a; a = c; c = t;}	
		if (b > c) {t = b; b = c; c = t;}

		if (a + b <= c) printf("not a triangle\n");
		else if (a * a + b * b == c*c) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
