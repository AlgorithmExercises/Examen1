#include "BinaryNode.h"

BinaryNode::BinaryNode()
{
  this->value = 0;
  left_child = NULL;
  right_child = NULL;
}

BinaryNode::BinaryNode(int value)
{
  this->value = value;
  left_child = NULL;
  right_child = NULL;
}


void BinaryNode::addLeft(BinaryNode*node){
  this->left_child = node;
}
void BinaryNode:: addRight(BinaryNode*node){
  this->right_child = node;

}