#include <iostream>
using namespace std;
#include <queue>

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
Node *buildTree()
{
    int x;

    cin >> x;
    if (x == -1)
        return nullptr;

    Node *root = new Node(x);
    cout << "Enter left child of" << root->data << ":";
    root->left = buildTree();
    cout << "Enter right child of" << root->data << ":";
    root->right = buildTree();
    return root;
}

Node *binaryTree()
{

    int rootData, temp;
    queue<Node *> q;
    cout << "Enter root Node: ";
    cin >> rootData;
    Node *root = new Node(rootData);
    q.push(root);

    while (!q.empty())
    {
        Node *node;
        Node *front = q.front();
        cout << "Enter left child of " << front->data << ":";
        cin >> temp;
        if (temp != -1)
        {
            node = new Node(temp);
            q.push(node);
            front->left = node;
        }
        cout << "Enter right child of " << front->data << ":";
        cin >> temp;
        if (temp != -1)
        {
            node = new Node(temp);
            q.push(node);
            front->right = node;
        }
        q.pop();
    }

    return root;
}

void preOrder(Node *node)
{
    // NLR
    if (!node)
        return;
    cout << node->data << ",";
    preOrder(node->left);
    preOrder(node->right);
}
void inOrder(Node *node)
{
    // LNR
    if (!node)
        return;
    inOrder(node->left);
    cout << node->data << ",";
    inOrder(node->right);
}
void postOrder(Node *node)
{
    // NLR
    if (!node)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << ",";
}

void levelOrder(Node *node)
{

    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        /* code */
        cout << q.front()->data << ",";
        Node *left = q.front()->left;
        Node *right = q.front()->right;
        if (left)
            q.push(left);
        if (right)
            q.push(right);
        q.pop();
    }
}
int main()

{
    // Node *tree = binaryTree();
    Node *tree = buildTree();
    cout << "PreOrder:";
    preOrder(tree);
    cout << endl;
    cout << "In Order:";
    inOrder(tree);
    cout << endl;
    cout << "Post Order:";
    postOrder(tree);
    cout << endl;
    cout << "Level Order:";
    levelOrder(tree);
    cout << endl;

    return 0;
}