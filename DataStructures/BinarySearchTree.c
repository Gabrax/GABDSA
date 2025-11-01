#include <iostream>
#include <algorithm>
#include <vector>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

struct BinarySearchTree {
public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRec(root, value);
    }

    void inorder() {
        inorderRec(root);
        std::cout << std::endl;
    }

    void preorder() {
        preorderRec(root);
        std::cout << std::endl;
    }

    void postorder() {
        postorderRec(root);
        std::cout << std::endl;
    }

    int successor(int x) {
        TreeNode* node = find(root, x);
        if (node == nullptr) return -1;
        TreeNode* succ = nullptr;

        if (node->right) {
            succ = minValueNode(node->right);
        } else {
            TreeNode* ancestor = root;
            while (ancestor != node) {
                if (x < ancestor->value) {
                    succ = ancestor;
                    ancestor = ancestor->left;
                } else {
                    ancestor = ancestor->right;
                }
            }
        }

        return succ ? succ->value : -1;
    }

    int predecessor(int x) {
        TreeNode* node = find(root, x);
        if (node == nullptr) return -1;
        TreeNode* pred = nullptr;

        if (node->left) {
            pred = maxValueNode(node->left);
        } else {
            TreeNode* ancestor = root;
            while (ancestor != node) {
                if (x > ancestor->value) {
                    pred = ancestor;
                    ancestor = ancestor->right;
                } else {
                    ancestor = ancestor->left;
                }
            }
        }

        return pred ? pred->value : -1;
    }

    bool search(int value) {
        return find(root, value) != nullptr;
    }

    void remove(int value) {
        root = removeRec(root, value);
    }

private:
    TreeNode* root;

    TreeNode* insertRec(TreeNode* root, int newValue) {
        if (root == nullptr) {
            return new TreeNode(newValue);
        }

        if (newValue < root->value) {
            root->left = insertRec(root->left, newValue);
        } else if (newValue > root->value) {
            root->right = insertRec(root->right, newValue);
        }

        return root;
    }

    void inorderRec(TreeNode* root) {
        if (root != nullptr) {
            inorderRec(root->left);
            std::cout << root->value << " ";
            inorderRec(root->right);
        }
    }

    void preorderRec(TreeNode* root) {
        if (root != nullptr) {
            std::cout << root->value << " ";
            preorderRec(root->left);
            preorderRec(root->right);
        }
    }

    void postorderRec(TreeNode* root) {
        if (root != nullptr) {
            postorderRec(root->left);
            postorderRec(root->right);
            std::cout << root->value << " ";
        }
    }

    TreeNode* find(TreeNode* root, int value) {
        if (root == nullptr || root->value == value)
            return root;

        if (value < root->value)
            return find(root->left, value);
        else
            return find(root->right, value);
    }

    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }

    TreeNode* maxValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->right != nullptr)
            current = current->right;
        return current;
    }

    TreeNode* removeRec(TreeNode* root, int key) {
        if (root == nullptr)
            return root;

        if (key < root->value) {
            root->left = removeRec(root->left, key);
        } else if (key > root->value) {
            root->right = removeRec(root->right, key);
        } else {
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            TreeNode* temp = minValueNode(root->right);
            root->value = temp->value;
            root->right = removeRec(root->right, temp->value);
        }
        return root;
    }
};
struct VectorBST {

    void insert(int value) {
        auto it = std::lower_bound(tree.begin(), tree.end(), value);
        if (it == tree.end() || *it != value) // Avoid duplicates
            tree.insert(it, value);
    }

    void remove(int value) {
        auto it = std::lower_bound(tree.begin(), tree.end(), value);
        if (it != tree.end() && *it == value) {
            tree.erase(it);
        }
    }

    bool search(int value) {
        return std::binary_search(tree.begin(), tree.end(), value);
    }

    int predecessor(int x) {
        auto it = std::lower_bound(tree.begin(), tree.end(), x);
        if (it == tree.begin()) return -1; // No predecessor exists
        return *(--it);
    }

    int successor(int x) {
        auto it = std::upper_bound(tree.begin(), tree.end(), x);
        if (it == tree.end()) return -1; // No successor exists
        return *it;
    }

    void inorder() {
        for (int v : tree) std::cout << v << " ";
        std::cout << "\n";
    }

    void preorder(int index = 0) {
        if (index >= tree.size()) return;
        std::cout << tree[index] << " ";
        preorder(2 * index + 1); // Left child
        preorder(2 * index + 2); // Right child
    }

    void postorder(int index = 0) {
        if (index >= tree.size()) return;
        postorder(2 * index + 1); // Left child
        postorder(2 * index + 2); // Right child
        std::cout << tree[index] << " ";
    }

private:
    std::vector<int> tree;
};

int main() {
    std::cout << "NODE VERSION BST\n";
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder traversal: ";
    bst.inorder();
    std::cout << '\n';


    std::cout << "VECTOR VERSION BST\n";
    VectorBST vecbst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(20);
    bst.insert(15);
    bst.insert(25);

    std::cout << "Inorder: ";
    vecbst.inorder();

    std::cout << "Preorder: ";
    vecbst.preorder();
    std::cout << "\n";

    std::cout << "Postorder: ";
    vecbst.postorder();
    std::cout << "\n";

    std::cout << "Deleting 10...\n";
    vecbst.remove(10);

    std::cout << "Successor of 20 is: " << vecbst.successor(20) << '\n';
    std::cout << "Predecessor of 20 is: " << vecbst.predecessor(20) << '\n';

    std::cout << "Inorder after deletion: ";
    vecbst.inorder();
}
