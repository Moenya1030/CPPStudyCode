#include <iostream>
#include <cstring>

using namespace std;

class Person
{
	public:
		void SetName(char *name)
		{
			strcpy(this->name,name);
		}
		
		char *GetName()
		{
			return name;
		}
		
		void PrintInfo()
		const{
			cout<<name<<endl;
		}
		
	private:
		char name[20];
};

class Student:public Person
{
	public:
		void SetNum(int num)
		{
			number=num;
		}
		
		int GetNum()
		{
			return number;
		}
		
		void PrintInfo()
		const{
			Person::PrintInfo();
			cout<<number<<endl;
		}
		
	private:
		int number;
};

int main()
{
	Student s1,s2;
	s1.SetName("zhangsan");
	s1.SetNum("201920");
	s2.SetName("lisi");
	s2.SetNum("201920");
	s1.PrintInfo();
	s2.PrintInfo();
	return 0;
}
