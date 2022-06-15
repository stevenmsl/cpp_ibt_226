#include "solution.h"
#include "util.h"

using namespace sol226;
using namespace std;

/*takeaways
  - swap left and right recursively
  - time complexity O(n)
*/
Node *Solution::invertTree(Node *root)
{
  if (root == nullptr)
    return nullptr;

  auto temp = invertTree(root->right);
  root->right = invertTree(root->left);
  root->left = temp;

  return root;
}