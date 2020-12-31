#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Stack.h"

class Calculator
{
	private:
		Stack<double> s;
		void enter(double num);
		bool getTwoOperands(double &opnd1,double &opnd2);
		void compute(char op);
		
	public:
		void run();
		void clear();
};

#endif
