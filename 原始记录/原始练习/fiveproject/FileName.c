#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main() {
 int a=0,b=0,c=0;
	char waq[] = { '2','3','a','A',5,'B','o'};
	int len = sizeof(waq) / sizeof(waq[3]);
	for (int i = 0;i < len;i++) {
		if (isdigit(waq[i])) {
			a++;
		}
		else if (islower(waq[i])) {
			b++;
		}
		else if (isupper(waq[i])) {
			c++;
		}
	}
	printf("数组中:数字数量为%d\n：小写字母数量为%d\n：大写字母数量为%d",a,b,c);
		return 0;
	
}
//}#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//int main() {
//			char a;
//			scanf("%c", &a);
//			//int r = isdigit(a);
//			//printf("%d", r)
//			if (isupper(a)) {
//				printf("%c是大写字�?, a);
//			}
//			else {
//				printf("%c是小写字�?, a);
//			}
//			return 0;
//		}//char c;
	//scanf("%c", &c);
	//if (isalnum(c)){
	//	printf("%c是字母或数字", c);
	//}
	//else {
	//	printf("%c不是字母也不是数字", c);
	//}