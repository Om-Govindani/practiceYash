#include <iostream>

class SLL
{
    private:
    class SLL_Node
    {
        public:
        int data;
        SLL_Node *next;
        SLL_Node(int data = 0; SLL_Node *next = NULL)
        {
            this->data = data;
            this->next = next;
        }
    };
    int count;
    SLL_Node *root;
    public:
    SLL()
    {
        this->root = NULL;
        this->count = 0;
    }
};

int main()
{
    return 0;
}