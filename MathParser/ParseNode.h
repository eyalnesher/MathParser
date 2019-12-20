
#ifndef PARSE_NODE_H
#define PARSE_NODE_H

/**
 * A node in a parse tree.
 */
class ParseNode {

public:
	// Identifiers
	
	/**
	 * Return if the node is an operation node.
	 */
	virtual bool isOperation() = 0;
	
	/**
	 * Return if the node is a value node.
	 */
	virtual bool isValue() = 0;

	/**
	 * Return if the node is a variable node.
	 */
	virtual bool isVariable() = 0;

};

#endif // !PARSE_NODE_H

