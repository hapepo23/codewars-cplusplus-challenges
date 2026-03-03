/*
6 kyu
Sum The Tree
https://www.codewars.com/kata/5800580f8f7ddaea13000025
*/

#include <cstdio>

struct node {
  int value;
  node* left;
  node* right;
};

int sumTheTreeValues(node* root);

static void do_test(node* root, int expected) {
  int actual = sumTheTreeValues(root);
  printf("Expected: %d, actual: %d --> %s\n", expected, actual,
         expected == actual ? "OK" : "FAIL");
}

static void free_tree(node* n) {
  if (n == nullptr)
    return;
  free_tree(n->left);
  free_tree(n->right);
  delete n;
}

int main() {
  node* easyNode = new node{10, new node{1, nullptr, nullptr},
                            new node{2, nullptr, nullptr}};
  do_test(easyNode, 13);
  free_tree(easyNode);
  node* unbalancedNode =
      new node{11, new node{0, nullptr, nullptr},
               new node{0, nullptr, new node{1, nullptr, nullptr}}};
  do_test(unbalancedNode, 12);
  free_tree(unbalancedNode);
  return 0;
}
