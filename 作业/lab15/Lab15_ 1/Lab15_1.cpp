//���P510ϰ��11.3+11.5����Ŀ��Դ���򱣴�ΪLab15_1��
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream file("test1.txt");
	file<<"�ѳɹ�д���ļ�";
	file.close();
	
	file.open("test1.txt",ios_base::app);
	file<<"�ѳɹ�����ַ�";
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
