
/*
    This program demonstrates a few routines for processing binary
    sort trees.  It uses a binary sort tree of strings.  The user
    types in strings.  The user's string is converted to lower case, and --
    if it is not already in the tree -- it is inserted into the tree.
    Then the number of nodes in the tree and a list of items in the tree
    are output.  The program ends when the user enters an empty string.
*/

#include <iostream>
#include <string>

using namespace std;

struct TreeNode {
    // An object of type TreeNode represents one node
    // in a binary tree of strings.
    string item;       // The data in this node.
    TreeNode *left;    // Pointer to left subtree.
    TreeNode *right;   // Pointer to right subtree.
    TreeNode(string str = "") {
        // Constructor, defined for convenience.
        // Make a node containing the specified string.
        item = str;
        left = NULL;
        right = NULL;
    }
};  // end struct TreeNode


void treeInsert(TreeNode *&root, string newItem) {
    // Add the item to the binary sort tree to which the parameter
    // "root" refers.  Note that root is passed by reference since
    // its value can change in the case where the tree is empty.
    if (root == NULL) {
        // The tree is empty.  Set root to point to a new node containing
        // the new item.  This becomes the only node in the tree.
        root = new TreeNode(newItem);
        return;
    } else if (newItem < root->item) {
        treeInsert(root->left, newItem);
    } else {
        treeInsert(root->right, newItem);
    }
}  // end treeInsert()


bool treeContains(TreeNode *root, string item) {
    // Return true if item is one of the items in the binary
    // sort tree to which root points.   Return false if not.
    if (root == NULL) {
        // Tree is empty, so it certainly doesn't contain item.
        return false;
    } else if (item == root->item) {
        // Yes, the item has been found in the root node.
        return true;
    } else if (item < root->item) {
        // If the item occurs, it must be in the left subtree.
        return treeContains(root->left, item);
    } else {
        // If the item occurs, it must be in the right subtree.
        return treeContains(root->right, item);
    }
}  // end treeContains()


void treeList(TreeNode *node) {
    // Print the items in the tree in postorder, one item
    // to a line.  Since the tree is a sort tree, the output
    // will be in increasing order.
    if (node != NULL) {
        treeList(node->left);           // Print items in left subtree.
        cout << "  " << node->item << endl;  // Print item in the node.
        treeList(node->right);          // Print items in the right subtree.
    }
} // end treeList()


int countNodes(TreeNode *node) {
    // Count the nodes in the binary tree to which node
    // points.  Return the answer.
    if (node == NULL) {
        // Tree is empty, so it contains no nodes.
        return 0;
    } else {
        // Add up the root node and the nodes in its two subtrees.
        int leftCount = countNodes(node->left);
        int rightCount = countNodes(node->right);
        return 1 + leftCount + rightCount;
    }
} // end countNodes()

bool hasChilds(TreeNode *root, string item) {
    // Return true if item is one of the items in the binary
    // sort tree to which root points.   Return false if not.
    if (root == NULL) {
        // Tree is empty, so it certainly doesn't contain item.
        return false;
    } else if (item == root->item) {
        // Yes, the item has been found in the root node.
        if (root->left != NULL && root->right != NULL) {
            return true;
        } else {
            return false;
        }
    } else if (item < root->item) {
        // If the item occurs, it must be in the left subtree.
        return hasChilds(root->left, item);
    } else {
        // If the item occurs, it must be in the right subtree.
        return hasChilds(root->right, item);
    }
}  // end treeContains()


int main() {

    TreeNode *root;
    root = NULL;

    int stack;
    cin >> stack;
    while (stack--) {
        char query;
        string cadena;
        cin >> query >> cadena;
        if (query == 'A') {
            if (treeContains(root, cadena) != true) {
                treeInsert(root, cadena);
            }
        } else if (query == 'Q') {
            if (treeContains(root, cadena)) {
                if (hasChilds(root, cadena)) {
                    cout << "Query " << cadena << " True" << endl;
                } else {
                    cout << "Query " << cadena << " False" << endl;

                }
            } else {
                printf("ERROR\n");
            }
        }

    }


}
