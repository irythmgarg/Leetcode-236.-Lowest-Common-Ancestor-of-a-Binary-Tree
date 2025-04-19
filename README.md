# Leetcode-236.-Lowest-Common-Ancestor-of-a-Binary-Tree
Lowest Common Ancestor of a Binary Tree
This repository contains a C++ implementation for finding the Lowest Common Ancestor (LCA) of two given nodes in a binary tree. The approach is recursive and does not require any parent pointers.

🧠 Problem Statement
Given a binary tree and two nodes p and q, find their lowest common ancestor (LCA). The LCA is defined as:

The lowest node in the tree that has both p and q as descendants (a node can be a descendant of itself).

🧩 Key Concepts
Recursion: Used to traverse the tree in a post-order style.

LCA Logic:

If current node is p or q, return it.

If one node is found in the left subtree and one in the right, the current node is the LCA.

If both are in one subtree, return that subtree’s result.

🚀 Approach
Base Case: If root is NULL, return NULL.

Check Match: If root is equal to either p or q, return root.

Recursive Search:

Traverse left and right subtrees.

Decision:

If both sides return non-null, current root is the LCA.

Otherwise, return the non-null result from left or right.

📂 Code Structure
lowestCommonAncestor():

Public function initiating the recursive LCA search.

findy():

Recursive helper that traverses the tree and returns the LCA node.

⏱️ Time and Space Complexity
Time Complexity: O(N), where N is the number of nodes in the tree.

Space Complexity: O(H), where H is the height of the tree (due to recursion stack).

🧪 Example
cpp

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.

Input: p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5 (as 5 is an ancestor of 4).
📦 Applications
File system tree navigation

Version control branching

XML or DOM tree operations

Genealogy or organizational charts

