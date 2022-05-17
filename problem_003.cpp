/******************************************************************
 *                 Serialize and Deserialize Binary Tree
 * 
 * This problem was asked by Google.
 * 
 * Given the root to a binary tree, implement serialize(root), which 
 * serializes the tree into a string, and deserialize(s), which 
 * deserializes the string back into the tree.
 * 
 * Given the root to a binary tree, implement serialize(root), which 
 * serializes the tree into a string, and deserialize(s), which 
 * deserializes the string back into the tree.
 * 
 * For example, given the following Node class
 * 
 * class Node:
 *     def __init__(self, val, left=None, right=None):
 *         self.val = val
 *         self.left = left
 *         self.right = right
 * 
 * The following test should pass:
 * 
 * node = Node('root', Node('left', Node('left.left')), Node('right'))
 * assert deserialize(serialize(node)).left.left.val == 'left.left'
 * 
 *                              Medium
******************************************************************/


/******************************************************************
 *                  Graph Search / Traversal
 * 
 * Tree is also a graph
 *      Visiting Vertex:    go to that node
 *      Exploring Vertex:   if I'm on a node, I go to all of its 
 *                              descendant nodes
 *          5    4     7     6
 *           \  /       \   / 
 * Ex1:        1--------- 2 ---3
 *          
 *              1
 *             / \
 *            /   \ 
 *           2     3
 *          / \   / \
 * Ex2:    4   5 6   7
 * 
******************************************************************/

/******************************************************************
 *              Breadth First Search / Traversal (BFS)
 * 
 * Visit a node >> Visit all descendant nodes related to it >> 
 * Then explore each descendant node
 * Ex1:     [1, 2, 4, 5, 3, 6, 7]
 * Ex2:     [1, 2, 3, 4, 5, 6, 7]    (level-order of Binary Tree)
 * 
******************************************************************/


/******************************************************************
 *              Depth First Search / Traversal (DFS)
 * Reach a node >> Explore that node until nothing left >> 
 * Then go to other node
 * Ex1:     [1, 2, 3, 6, 7, 4, 5]
 * Ex2:     [1, 2, 4, 5, 3, 6, 7]   (preorder of Binary Tree)
 * 
 * 
******************************************************************/
#include <string>
#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

TreeNode *buildTree()
{
    int d;
    std::cin >> d;

    TreeNode *root;
    if (d == -1)
        return NULL;
    root = new TreeNode(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void print(TreeNode *root, int space)
{
    int COUNT = 10;

    if (root == NULL)
        return ;
    space += COUNT;

    print(root->right, space);

    std::cout << std::endl;
    for (int i = COUNT; i < space; i++)
        std::cout << " ";
    std::cout << root->val << std::endl;

    print(root->left, space);
}

class Codec
{
    public:
        // Encode a tree to a single string
        std::string serialize(TreeNode* root)
        {


        }

        // Decode your encoded data to tree
        TreeNode* deserialize(std::string data)
        {

        }
};

int main()
{
    Codec ser, deser;
    TreeNode *root = buildTree();
    std::cout << "Original tree:\n";
    print(root, 0);
    TreeNode* ans = deser.deserialize(ser.serialize(root));
    std::cout << "Tree after serialize and deserialize (should be the same):\n";
    print(ans, 0);
}