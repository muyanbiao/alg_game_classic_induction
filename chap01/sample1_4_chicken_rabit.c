/* 已知鸡和兔的总数量为n，总腿数为m，依次输出鸡的数目和兔的数目，如误解，则输出 No answer */

#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	if ((m % 2 != 0) || (n < m/4) || (n > m/2))
		printf("No answer\n");
	else
		printf("%d %d\n", 2*n - m/2, m/2 - n);

	return 0;
}
