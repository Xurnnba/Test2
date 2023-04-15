#include <iostream>
using namespace std;

enum Color { RED, BLACK };

class Node {
public:
    int data;
    bool color;
    Node *left, *right, *parent;

    Node(int data) : data(data) {
        left = right = parent = nullptr;
        color = RED;
    }

    Node *uncle() {
        if (parent == nullptr || parent->parent == nullptr)
            return nullptr;

        if (parent->isOnLeft())
            return parent->parent->right;
        else
            return parent->parent->left;
    }

    bool isOnLeft() { return this == parent->left; }

    Node *sibling() {
        if (parent == nullptr)
            return nullptr;

        if (isOnLeft())
            return parent->right;

        return parent->left;
    }

    void moveDown(Node *nParent) {
        if (parent != nullptr) {
            if (isOnLeft()) {
                parent->left = nParent;
            } else {
                parent->right = nParent;
            }
        }

        nParent->parent = parent;
        parent = nParent;
    }

    bool hasRedChild() {
        return (left != nullptr && left->color == RED) ||
               (right != nullptr && right->color == RED);
    }
};

class RBTree {
    Node *root;

    void rotateLeft(Node *x) {
        Node *nParent = x->right;

        if (x == root)
            root = nParent;

        x->moveDown(nParent);

        x->right = nParent->left;

        if (nParent->left != nullptr)
            nParent->left->parent = x;

        nParent->left = x;
    }

    void rotateRight(Node *x) {
        Node *nParent = x->left;

        if (x == root)
            root = nParent;

        x->moveDown(nParent);

        x->left = nParent->right;

        if (nParent->right != nullptr)
            nParent->right->parent = x;

        nParent->right = x;
    }

    void swapColors(Node *x1, Node *x2) {
        bool temp;
        temp = x1->color;
        x1->color = x2->color;
        x2->color = temp;
    }

    void swapValues(Node *u, Node *v) {
        int temp;
        temp = u->data;
        u->data = v->data;
        v->data = temp;
    }

    void fixRedRed(Node *x) {
        if (x == root) {
            x->color = BLACK;
            return;
        }

        Node *parent = x->parent, *grandparent = parent->parent,
             *uncle = x->uncle();

        if (parent->color != BLACK) {
            if (uncle != nullptr && uncle->color == RED) {
                parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                fixRedRed(grandparent);
            } else {
                if (parent->isOnLeft()) {
                    if (x->isOnLeft()) {
                        swapColors(parent, grandparent);
                    } else {
                        rotateLeft(parent);
                        swapColors(x, grandparent);
                    }
                    rotateRight(grandparent);
                } else {
                    if (x->isOnLeft()) {
                        rotateRight(parent);
                        swapColors(x, grandparent);
                    } else {
                        swapColors(parent, grandparent);
                    }

                    

                }
            }
        }
    }
};

