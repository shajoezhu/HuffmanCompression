#include "HuffmanNode.h"

HuffmanNode::HuffmanNode(int character, int count, HuffmanNode* zero, HuffmanNode* one){
	this->character=character;
	this->count=count;
	this->zero=zero;
	this->one=one;
}
