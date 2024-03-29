#ifndef NODE_H
#define NODE_H


#include <iostream>
#include <cstdlib>

class Node
{
public:
	Node();
	~Node();
	Node* getLeftChild();
	Node* getRightChild();
	int getPriority();
	int getCode();
	void setLeftChild(Node * left_child);
	void setRightChild(Node * right_child);
	void setPriority(int priority);
	void setCode(int code);

private:
	int priority;
	int code;
	Node * left_child;
	Node * right_child;
	
};

#endif // NODE_H