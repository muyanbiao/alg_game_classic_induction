/* double型浮点数能精确到多少位小数？或者，这个问题本身值得商榷？ */
#include <stdio.h>
int main(){
	double n;
	scanf("%lf", &n);
	printf("%.100lf\n", n);
	return 0;
}
