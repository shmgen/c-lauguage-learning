#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void setting(int jojo[],int num,int ray);
//int main() {
//	int jojo[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int num=sizeof(jojo) / sizeof(jojo[4]);
//	for (int i = 0;i < 10;i++) {
//			printf("%d\t",jojo[i]);
//			
//	}
//	printf("\n");
//	setting(jojo, num,5 );
//}
//void setting(int xxs[],int num,int ray) {
//	for (int x = 0;x < num;x++) {
//		xxs[x] = ray;
//		printf("%d\t", xxs[x]);
//
//	}
//}
void mergx(int xxs[], int gzx[], int n, int m);
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int xxs[1000];
	int gzx[1000];
	for (int a = 0;a < n;a++) {
		scanf("%d", &xxs[a]);
	}
	for (int b = 0;b < m;b++) {
		scanf("%d", &gzx[b]);
	}
	mergx(xxs, gzx, n, m);
	return 0;
}	
void mergx(int arr1[], int arr2[], int x, int y) {
	int i = 0, j = 0;
	while (i < x && j < y) {
		if (arr1[i] < arr2[j])
		{
			printf("%d\n", arr1[i]);
			i++;
		}
		else if (arr1[i] == arr2[j])
		{
			printf("%d\n", arr1[i]);
			i++;
			j++;
		}
		else {
			printf("%d\n", arr2[j]);
			j++;
		}
	}
	while (i < x) {
		printf("%d\n", arr1[i]);
		i++;
	}
	while (j < y) {
		printf("%d\n", arr2[j]);
		j++;
	}
}

	
