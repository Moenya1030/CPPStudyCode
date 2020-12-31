#include <iostream>
using namespace std;

template<class T>
struct Node
{
	T data;
	Node<T> *next;
};

template<class T>
class LinkList
{
public:
	LinkList();
	LinkList(T a[], int n);
	~LinkList();
	void PrintList();
	T Get(int i);
	void Insert(int i, T x); 
	void Delete(int i);
public:
	Node<T> *first;
};

template<class T>
Node<T>* Rerverse(Node<T>* first)
{
	Node<T> *pre=NULL;
	Node<T> *cur=first->next;
	while (cur)
	{
		Node<T> *nextTemp=cur->next;
		cur->next=pre;
		pre=cur;
		cur=nextTemp;
	}
	return pre;
}

template<typename T>
Node<T>* Copy(Node<T> *first)
{
	Node<T> *p=new Node<T>;
	Node<T> *q2=p;
	Node<T> *q1=first->next;
	while(q1!=NULL)
	{
		Node<T> *r=new Node<T>;
		r->data=q1->data;
		q1=q1->next;
		q2->next=r;
		q2=r;
	}
	q2->next=NULL;
	return p;
}

template<class T>
LinkList<T>::LinkList()
{
	first=new Node<T>;
	first->next=NULL;
}

template<class T>
LinkList<T>::LinkList(T a[], int n)
{
	first=new Node<T>;
	Node<T> *r=first;
	for(int i=0;i<n;i++)
	{
		Node<T> *s=new Node<T>;
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}

template<class T>
LinkList<T>::~LinkList()
{
	while(first!=NULL)
	{
		Node<T> *q=first;
		first=first->next;
		delete q;
	}
}

template<class T>
void LinkList<T>::PrintList()
{
	Node<T> *p=new Node<T>;
	p=first->next;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

template<class T>
T LinkList<T>::Get(int i)
{
	Node<T> *p=first->next;
	int count=1;
	while(p!=NULL&&count<i)
	{
		p=p->next;
		count++;
	}
	if(p==NULL) throw "查找位置异常";
	else return p->data;
}

template<class T>
void LinkList<T>::Insert(int i, T x)
{
	Node<T> *p=first;
	int count=0;
	while(p!=NULL&&count<i-1)
	{
		p=p->next;
		count++;
	}
	if(p==NULL) throw "插入位置异常";
	else
	{
		Node<T> *s=new Node<T>;
		s->data=x;
		s->next=p->next;
		p->next=s;
	}
}

template<class T>
void LinkList<T>::Delete(int i)
{ 
  Node<T> *p;
  int j;
  p=first ; j=0;  //工作指针p初始化
  while (p!=NULL && j<i-1)  //查找第i-1个结点
  {
    p=p->next;
    j++;
  }
  if (p==NULL || p->next==NULL) throw "删除位置异常";  //结点p不存在或结点p的后继结点不存在
  else {
    Node<T> *q; 
	T x;
    q=p->next; x=q->data;  //暂存被删结点
    p->next=q->next;  //摘链
    delete q; 
  }
}


int main()
{
	int a[]={1,2,3,4,5};
    LinkList<int> test(a,5);
	cout<<"线性表a的初始状态："<<endl;
	test.PrintList();

	cout<<endl<<"复制线性表a到线性表p,再逆置线性表a。"<<endl;
	Node<int> *p=new Node<int>;
	p=Copy(test.first)->next;
    test.first=Rerverse(test.first);

	cout<<"线性表a的状态："<<endl;
	test.PrintList();

	cout<<endl<<"线性表p的状态："<<endl;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	getchar();
}
