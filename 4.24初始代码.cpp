//写代码
//写出主函数main函数（）
//如何执行？c语言代码是从代码第一行开始执行的
//所以c语言代码里面要有main函数-入口

#include<stdio.h>
//int main() {
//	printf("sdasda");
//	return 0;
//}
//编译+链接+运行代码
//CTRL+f5
//一个项目里面有且只有一个main函数
//
//int main() {
//		//char  数据字符类型
//		char ch = 'a';
//		//short     短整型
//		short num = 30;
//		//int    整形
//		int age = 20;
//		//long      长整型
//		
//		//long long更长的整形
//		//float              单精度浮点型
//		float a = 55.5;
//		//double              双精度浮点型
//		double b = 0.0;
//
//
//	return 0;
//
//}
//int main() {
//	//printf("比特\n");
//	//printf("%d\n",100);//打印一个整数100-%d
//	//sizeof -关键字- 操作符-用于计算类型或者变量所占空间大小
//	/*printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(short));*/
//
//	/*return 0;*/

int main()
{
	//创建的一个变量
	//类型 -一个变量的名字=0； 推荐
	//类型  变量的名字不推荐；
	int age = 18;
	double weight = 65;
	age = age + 2;
	printf("%d",age);
	return 0;
}