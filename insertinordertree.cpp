#include<iostream>
#include<queue>
struct Node{
  int data;
  Node* left;
  Node* right;
};
Node* CreateNode(int data){
  Node* newNode=new Node();
  if(!newNode){
    std::cout<<"memory error!";
    return NULL;
  }
  newNode->data=data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
Node* insertNode(Node* root,int data){
  if(root==NULL){
    root=CreateNode(data);
    return root;
  }
  std::queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    if(temp->left !=NULL)
    q.push(temp->left);
    else{
      temp->left=CreateNode(data);
      return root;
    }
    if(temp->right!=NULL)
    q.push(temp->right);
    else{
      temp->right=CreateNode(data);
      return root;
    }

  }
}
void inorder(Node* temp){
  if(temp==NULL)
  return;
  inorder(temp->left);
  std::cout<<temp->data<<' ';
  inorder(temp->right);

}
int main(){
  Node* root=CreateNode(10);
  root->left =CreateNode(11);
  root->left->left=CreateNode(7);
  root->right=CreateNode(9);
  root->right->left=CreateNode(15);
  root->right->right=CreateNode(18);
  std::cout<<"Inorder traversal befor insertions:";
  inorder(root);
  std::cout<<std::endl;
  int key=12;
  root=insertNode(root,key);
  std::cout<<"Inorder traversal after insertion :";
  inorder(root);
  std::cout<<std::endl;
  return 0;




}