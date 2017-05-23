/* 输入一个三位数，分离出它的百位、十位和个位，反转后输出  */
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%d%d%d\n", (n%100)%10, (n/10)%10, n/100);
	return 0;
}
