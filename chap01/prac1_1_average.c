/* 输入3个整数，输出它们的平均数，保留3位小数 */
#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d",&a, &b, &c);
	float res = (a + b + c) / 3.0;
	printf("%.3f\n", res);
	return 0;
}

