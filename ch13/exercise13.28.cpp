#include <string>

class TreeNode{
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) {}
    ~TreeNode();
    TreeNode(const TreeNode &rhs) : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; }
    TreeNode& operator=(const TreeNode &rhs);
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};


TreeNode::~TreeNode()
{
    if(--*count == 0){
        if(left){
            delete left;
            left = nullptr;
        }

        if(right){
            delete right;
            right = nullptr;
        }
        delete count;
        count = nullptr;
    }
    
}

TreeNode& TreeNode::operator=(const TreeNode &rhs)
{
    ++*rhs.count;
    if(--*count == 0){
        if(left){
            delete left;
        }

        if(right){
            delete right;
        }

        delete count;
    }

    value = rhs.value;
    left = rhs.left;
    right = rhs.right;
    count = rhs.count;

    return *this;
}


class BinStrTree{
public:
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(const BinStrTree &rhs) : root(new TreeNode(*rhs.root)) {}
    BinStrTree& operator=(const BinStrTree &rhs);
    ~BinStrTree() { delete root; }
private:
    TreeNode *root;
};


BinStrTree& BinStrTree::operator=(const BinStrTree &rhs)
{
    TreeNode *new_root = new TreeNode(*rhs.root);
    delete root;
    root = new_root;
    return *this;
}

int main()
{
    return 0;
}
