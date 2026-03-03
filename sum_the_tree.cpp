/*
6 kyu
Sum The Tree
https://www.codewars.com/kata/5800580f8f7ddaea13000025
*/

struct node {
  int value;
  node* left;
  node* right;
};

static int sum;

static void traverseTree(node* n) {
  if (n == nullptr)
    return;
  sum += n->value;
  traverseTree(n->left);
  traverseTree(n->right);
}

int sumTheTreeValues(node* root) {
  sum = 0;
  traverseTree(root);
  return sum;
}
