#include "Node.h"

Node::Node()
{
	info = 0;
	prev = nullptr;
	next = nullptr;
}

Node::Node(int x)
{
	info = x;
	prev = nullptr;
	next = nullptr;
}
