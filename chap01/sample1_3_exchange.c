/* 输入两个整数a和b，交换二者的值，然后输出 */
#include <stdio.h>

int main(){
	int a, b, t;
	scanf("%d %d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}
