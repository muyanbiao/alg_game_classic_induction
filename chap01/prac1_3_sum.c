/* 输入正整数n，输出1+2.....+n的值。提示：目标是解决问题，而不是练习编程 */
#include <stdio.h>

int main(){
	int sum = 0;
	int n;
	scanf("%d", &n);
	while (n > 0){
		sum += n--;
	}
	printf("%d\n", sum);
	return 0;
}


