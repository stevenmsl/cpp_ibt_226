#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol226;
using namespace std;

/*takeaways
  - swap left and right recursively
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