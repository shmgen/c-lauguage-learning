#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int test() {
	static int i = 0;
	i++;
	i = 1;
	int ret = i;
	return  ret;
}
int main() {
	
	//for (int i = 0;i < 5;i++)
	//{
	//scanf("%d", &num[i]);
	//
	//}
	//for(int i=0;i<5;i++)
	//{
	//	printf("%d", num[i]);
	//}
	//int num[] = { 1,2,3,4,5,6,7,8,9,0,12,39,27,11,45,67,33,91,234,678,32,344,214,556,7664,3678,2112};
	//double john = sizeof(num) / sizeof(num[9]);
	//for (int i = 0;i < john;i++) {
	//	printf("%d\n", &num[i]);
	//}
	//int av[6] = { 1,2,3,4,5,6 };
	//int len = sizeof(av) / sizeof(av[3]);
	//int i = 0;
	//int j = len - 1;
	//for (int y = 0;y < len;y++)
	//{
	//	printf("%d", av[y]);
	//}
	//printf("\n");
	//while (i < j)
	//{
	//	int tmp = av[i];
	//	av[i] = av[j];
	//	av[j] = tmp;
	//	i++;
	//	j--;
	//}
	//for (int x = 0;x < len;x++)
	//{
	//	printf("%d", av[x]);
	//}
	//int num[5] = { 1,2,3,4,5 };
	//int john = sizeof(num) / sizeof(num[3]);
	//int i = 0;
	//int x = john;
	//while (i < x)
	//{
	//	int tmp = num[i]*=2;
	//	num[i] = tmp;
	//	i++;

	//}
	//for (int y = 0;y < john;y++)
	//{
	//	printf("%d\n", num[y]);
	//}
	//int john[3][2] = { {1,2},{4,5},{7,8} };
	//printf("%d\n", john[2][1]);
	//printf("%d\n", &john[2][1]);
	//printf("%d\n", &john[2][0]);
	//printf("%d", &john[1][1]);
	//int john[3][2] = { 0 };
	//for (int i = 0;i < 3;i++)
	//{
	//	for (int y = 0;y < 2;y++)
	//	{
	//		scanf("%d", &john[i][y]);
	//	}
	//}
	//int x = 0;
	//while (x < 3)
	//{
	//	for (int c = 0;c < 2;c++)
	//	{
	//		printf("%d\t", john[x][c]);
	//	}
	//	printf("\n");
	//	x++;
	//}
	//int john[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//for (int i = 0;i < 3;i++)
	//{
	//	for (int j = i+1;j < 3;j++)
	//	{
	//		int tmp = john[i][j];
	//		john[i][j] = john[j][i];
	//		john[j][i] = tmp;
	//		
	//	}

	//}
	//for (int x = 0;x < 3;x++)
	//{
	//	for (int y = 0;y < 3;y++)
	//	{
	//			printf("%d\t", john[x][y]);
	//	}
	//	printf("\n");
	//}
	//int i = 0;
	//scanf("%d", &i);


	//return 0;
	int i = 0;
	for (int i = 0;i < 5;i++) {
	int ret=	test();
	printf("%d\t", ret);
	 }

	return 0;
}