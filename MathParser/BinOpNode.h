
#ifndef BIN_OP_NODE_H
#define BIN_OP_NODE_H

#include "ParseNode.h"
#include <memory>

class BinOpNode : public ParseNode {

public:
	enum Operation {
		ADD,
		SUB,
		MUL,
		DIV,
		POW,
	};

	std::shared_ptr<ParseNode> parent = nullptr;
	std::shared_ptr<ParseNode> mLeft = nullptr;
	std::shared_ptr<ParseNode> mRight = nullptr;
	
	BinOpNode(char operation);

	operator char();

	// Identifiers
	virtual bool isOperation() override {
		return true;
	}

	virtual bool isValue() override {
		return false;
	}

	virtual bool isVariable() override {
		return false;
	}

	double operator()(double a, double b);

private:
	Operation mOperation;

};

#endif // !BIN_OP_NODE_H

