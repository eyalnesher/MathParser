
#ifndef VAR_NODE_H
#define VAR_NODE_H

#include "ParseNode.h"

/**
 * A node in a parse tree which represents a variable.
 * The variable has a name, which is represented by a character.
 */
class VarNode : public ParseNode {

public:

	VarNode(char name) : mName{ name } {}

	// Identifiers
	virtual bool isOperation() override {
		return false;
	}

	virtual bool isValue() override {
		return false;
	}

	virtual bool isVariable() override {
		return true;
	}

	operator char() {
		return mName;
	}

private:
	const char mName;

};

#endif // !VAR_NODE_H

