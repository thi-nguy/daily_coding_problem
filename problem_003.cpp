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
