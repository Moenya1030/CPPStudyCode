//建立一个简单的字符对换加密程序，实现其加密及解密过程。
//要求如下:
//a、使用N行2列的二维数组存储一个字符对换表
//b、读取键盘输入的一段明文
//c、调用自己的加密函数进行加密，输出密文
//d、调用自己的解密函数对密文进行解密，输出结果应和明文一致。

#include <bits/stdc++.h> 

using namespace std;

string s1="31241242341231231231231231232jijijijijijijijiij";
string s2="sdfwer234123532rtwefsef23423rdwef234fdr312423rf";

string encrypt(string a)
{
	for (int i=0;i<a.length();i++)
	{
		if (a[i]>='0' && a[i]<='9')
		{
			a[i]=s2[a[i]-'0'];
		}
		else if (a[i]>'a' && a[i]<='z')
		{
			a[i]=s2[a[i]-'a'+10];
		}
		else if (a[i]>'A' && a[i]<'Z')
		{
			a[i]=s2[a[i]-'A'+36];
		}
		return a;
	}
}

string decrypt(string a)
{
	for (int i=0;i<a.length();i++)
	{
		for (int j=0;j<62;j++)
		{
			if (a[i]==s2[j])
			{
				a[i]=s1[j];
				break;
			}
		}
	}
}

int main()
{
	encrypt(s1);
	decrypt(s1);
	encrypt(s2);
	decrypt(s2);
	return 0;
}	

