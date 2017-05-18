#include "Test.h"
#include <iostream>
#include <map>
using namespace std;


bool checkIfExist(vector<int> avl_tree, int number, int current){
  int left = current *2 +1;
  int right = current *2 +2;
  while(current<avl_tree.size()){
    if(avl_tree[current] == number){
      return true;
    }
    bool left_look=false, right_look=false;
    if(left < avl_tree.size() && number<avl_tree[current]){
      left_look = checkIfExist(avl_tree,number, left);
    }else{
      if(!left_look && right < avl_tree.size()){
        right_look = checkIfExist(avl_tree,number,right);
      }
    }
    return left_look || right_look;
  }
}
bool exists(vector<int> avl_tree, int number)
{
  return checkIfExist(avl_tree,number,0);
}

void addLeftChild(BinaryNode *root,int value){
  root->addLeft(new BinaryNode(value));
}
void addRoghtChild(BinaryNode *root, int value){
  root->addRight(new BinaryNode(value));
}

void checkForChilds(vector<int> max_heap, int index, BinaryNode * root){
  int left = index *2 +1;
  int right = index *2 +2;

  if(left < max_heap.size()){
    addLeftChild(root,max_heap[left]);
    checkForChilds(max_heap, left,root->left_child);
  }
  if(right < max_heap.size()){
    addRoghtChild(root, max_heap[right]);
    checkForChilds(max_heap, right,root->right_child);
  }
  
}
BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  int index_current =0;
  int current = max_heap[index_current];
  BinaryNode* root = new BinaryNode(current);
  checkForChilds(max_heap, 0,root);
  /*
  int left = index_current *2 +1;
  int right = index_current *2 +2;

  if(left < max_heap.size()){
    addLeftChild(root,max_heap[left]);
  }
  if(right < max_heap.size){
    addRoghtChild(root, max_heap[right]);
  }*/
  
  return root;
}

int main ()
{
  test();
  return 0;
}






