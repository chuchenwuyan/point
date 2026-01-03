//指针的第三个作用
//函数的结果和计算状态分开
#include <stdio.h>

int getremainder(int num1, int num2, int* res);


int main()
{
	//练习：定义一个函数，将两数相除，获取他们的余数
	int a = 10;
	int b = 3;
	int res = 0;
	//调用函数
	int flag = getremainder(a, b, &res);
	if (!flag)
	{
		printf("获取的余数是：%d\n",res);
	}
	return 0;
}

//返回值，0正常，1不正常
int getremainder(int num1, int num2, int* res)
{
	if (num2 == 0)		//如果num2 = 0，那么return多少合适？	这时候就需要指针
	{
		return 1;
	}
	else
	{
		*res = num1 % num2;

		return 0;
	}

}
//说实话，目前我不明白为什么要用指针，为什么用这样的题演示
//现在我要想一下这段代码的思路。为了两个数相乘，就写了一个获得余数的代码。
//想到除数不能为0，就写了一个if判断，如果用户给的数字是0。
//那么直接在函数环节就返回了1（不正常），反之记录正确的余数，返回0。
//那么在else环节直接return res不行吗？或者static return res。
//然后开始给出数字，那这里res为什么要是0？为了初始化吗？
//之后用int flag接收了函数获得的余数，这一步“！flag“其实没看懂啊，直接照抄的
//我还不不明白为什么要用指针，就算是为了返回0 / 1的状态，也有return res可以代替


//后期思考
//其实这里的指针是为了操纵内容物呗，我一直以为是有指针才能返回状态。
//而返回状态也就是所谓的防御性变成
//对应的返回状态显示到前端也就是所谓的”取款成功，余额不足，ATM机没钱了“
//！flag不是取flag反的意思吗，比如flag是0，就取1
//因为0对于计算机是假，虽然这里规定了0就是返回成功，但想让计算机识别到成功了，就得用！0