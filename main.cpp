#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol226;

/*
Input:
     4
   /   \
  2     7
 / \   / \
1   3 6   9

Output:
     4
   /   \
  7     2
 / \   / \
9   6 3   1

*/

tuple<Node *>
testFixture1()
{
  auto root = new Node(4);
  root->left = new Node(2);
  root->left->left = new Node(1);
  root->left->right = new Node(3);

  root->right = new Node(7);
  root->right->left = new Node(6);
  root->right->right = new Node(9);

  return make_tuple(root);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  auto root = sol.invertTree(get<0>(f));
  cout << "Expect to see : 9" << endl;
  cout << root->left->left->val << endl;
  cout << "Expect to see : 1" << endl;
  cout << root->right->right->val << endl;
}

main()
{
  test1();

  return 0;
}