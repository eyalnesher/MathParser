
#ifndef PARSE_TREE_H
#define PARSE_TREE_H

#include "ParseNode.h"
#include "BinOpNode.h"
#include "ValueNode.h"
#include "VarNode.h"

#include <string>

/**
 * A tree which represents a mathematical expression.
 * The tree has three main types of nodes: an operation, a value (number), and a variable.
 */
class ParseTree : public ParseNode {

	// Identifiers
	virtual bool isOperation() override {
		return false;
	}

	virtual bool isValue() override {
		return false;
	}

	virtual bool isVariable() override {
		return false;
	}

	/**
	 * Create a ParseTree which represents a mathematical exoression equivilant to `expression`
	 */
	ParseTree(std::string exoression);

	/**
	 * Return a string op the expression the tree represents
	 */
	operator std::string();

};

#endif // !PARSE_TREE_H

