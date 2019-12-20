
#include "BinOpNode.h"
#include <cmath>

BinOpNode::BinOpNode(char operation) {
	switch (operation) {
	case '+':
		mOperation = ADD;
		break;
	case '-':
		mOperation = SUB;
		break;
	case '*':
		mOperation = MUL;
		break;
	case '/':
		mOperation = DIV;
		break;
	case '^':
		mOperation = POW;
		break;
	}
}

BinOpNode::operator char() {
	switch (mOperation) {
	case ADD:
		return '+';
	case SUB:
		return '-';
	case MUL:
		return '*';
	case DIV:
		return '/';
	case POW:
		return '^';
	}
}

double BinOpNode::operator()(double a, double b) {
	switch (mOperation) {
	case ADD:
		return a + b;
	case SUB:
		return a - b;
	case MUL:
		return a * b;
	case DIV:
		return a / b;
	case POW:
		return std::pow(a, b);
	}
}
