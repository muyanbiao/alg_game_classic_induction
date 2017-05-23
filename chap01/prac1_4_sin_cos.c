/* 输入正整数n(n < 360)，输出n度的正弦和余弦函数值。提示：使用数学函数 */
#include <stdio.h>
#include <math.h>

int main(){
	float n;
	scanf("%f", &n);
	printf("sin = %f, cos = %f\n", sin(n), cos(n));
	return 0;
}
