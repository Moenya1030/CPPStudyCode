//���һ��Exam�࣬���а���һ����̬���ݳ�Աcount�����ڼ�¼���ڵ�Exam����ĸ�����һ����Ա����ID���ڼ�¼��ǰ�ı�š�
//���ù��졢������������count++��--������ʾ��IDΪ?�Ķ��󴴽��������٣���Ŀǰ����?�����󡱡�
//����һ������test�����ڽ���Exam��Ķ���A1��A2��
//��main�е���test������Ȼ����Exam��Ķ���A3��A4��
//ͨ�����ϳ���۲�4���Ķ����������ٵĹ���
#include <bits/stdc++.h>

using namespace std;

class Exam
{
	private:
		static int count;
		long ID;
	public:
		Exam(long id):ID(id)
		{
			count ++;
			cout<<"idΪ"<<ID<<"�Ķ��󱻴�����Ŀǰ����"<<count<<"������"<<endl;
		}
		~Exam()
		{
			Exam::count--;
			cout<<"idΪ"<<ID<<"�Ķ������٣�Ŀǰ����"<<count<<"������"<<endl;
		}
}; 

int Exam::count=0;

void test(long id)
{
	Exam t1(id+1);
	Exam t2(id+2);
}

int main ()
{
	test (1111);
	Exam A0(2222);
	Exam A1(3333);
	
	return 0;
}
