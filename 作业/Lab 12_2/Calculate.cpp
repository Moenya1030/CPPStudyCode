#include "Calculator.h"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

void Calculator::enter(double num)
{
	s.push(num);
}

bool getTwoOperands(double &opnd1,double &opnd2)
{
	if (s.isEmpty())
	{
		cerr<<"Missing operand"<<endl;
		return false;
	}
	opnd1=s.pop();
	
	if (s.isEmpty())
	{
		cerr<<"Missing operand"<<endl;
		return false;
	}
	opnd2=s.pop();
	
	return true;
}

void Calculator::compute(char op)
{
	double operand1,operand2;
	bool result=getTwoOperands(operand1,operand2);
	
	if (result)
	{
		switch(op)
		{
			case '+':
				s.push(operand2+operand1);
				break;
			case '-':
				s.push(operand2-operand1);
				break;
			case '*':
				s.push(operand2*operand1);
				break;
			case '/':
				if (operand1==0)
				{
					cerr<<"Divided by 0"<<endl;
				}
				else
				{
					s.push(operand2/operand1);
					break;
				}
			case '^':
				s.push(pow(operand2+operand1));
				break;	
			default:
				cerr<<"Unrecognized operator"<<endl;
				break;
		}
	}
	else
	{
		s.clear();
	}
}

inline double stringToDouble(const string &str)
{
	istringstream stream(str);
	double result;
	stream>>result;
	return result;
}
