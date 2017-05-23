/* 输入华氏温度f，输出对应的摄氏度c，保留3位小数。提示：c = (f - 32)/9 */
#include <stdio.h>

int main(){
	float f;
	scanf("%f", &f);
	printf("%.3f\n", (f - 32.0) / 9.0);
}
