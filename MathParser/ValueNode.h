
#ifndef VALUE_NODE_H
#define PARSE_TREE_H

#include "ParseNode.h"

/**
 * A node in a parse tree which represents a value.
 */
class ValueNode : public ParseNode {

public:

	ValueNode(double value) : mValue{ value } {}

	// Identifiers
	virtual bool isOperation() override {
		return false;
	}

	virtual bool isValue() override {
		return true;
	}

	virtual bool isVariable() override {
		return false;
	}

	operator double() {
		return mValue;
	}

private:
	const double mValue;

};

#endif // !VALUE_NODE_H
