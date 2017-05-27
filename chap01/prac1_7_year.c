/* 输入年份，判断是否为闰年。如果是，则输出yes，否则输出no。提示：简单的判断除以4的余数是不够的
if ((西元年分是400的倍數)或(西元年分是4的倍數但不是100的倍數)){
2     閏年
3 }else{
4     平年
5 }
 */
#include <stdio.h>
int main(){
	int year;
	scanf("%d", &year);
	if ((!(year % 4) && year % 100) || !(year % 400))
		printf("yes\n");
	else printf("no\n");
	return 0;
}
