//完成P510习题11.3+11.5，项目或源程序保存为Lab15_1。
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream file("test1.txt");
	file<<"已成功写入文件";
	file.close();
	
	file.open("test1.txt",ios_base::app);
	file<<"已成功添加字符";
	file.close(); 
	
	char c;
	ifstream file2("test1.txt");
	while(file2.get(c))
	{
		cout<<c;
	}	
	file2.close();
	return 0;
}
