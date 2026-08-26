#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
};

// x + next = curr


class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    void build(int n)
    {
        Node *tail = nullptr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Node *node = new Node(x);
            if (!head)
                head = tail = node;
            else
                tail->next = node, tail = node;
        }
    }

    Node *getTail()
    {
        Node *cur = head;
        if (!cur)
            return nullptr;
        while (cur->next)
        
            cur = cur->next;
        return cur;
    }

    Node *getNodeAt(int idx)
    { // 0-indexed
        Node *cur = head;
        while (cur && idx--)
            cur = cur->next;
        return cur;
    }

    ~LinkedList()
    {
    }
};

/*
    Implement only the function below.
*/
Node *getIntersectionNode(Node *headA, Node *headB)
{
    auto ptr1 = headA;
    auto ptr2 = headB;

    int retryCnt = 0;

    while (ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if (ptr1 == NULL)
        {
            ptr1 = headB;
        }

        if (retryCnt == 2)
            return NULL;

        if (ptr2 == NULL)
            ptr2 = headA;
    }

    return ptr1;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nA, nB, common;
    cin >> nA >> nB >> common;

    LinkedList A, B, C;
    A.build(nA - common);
    B.build(nB - common);
    C.build(common);

    Node *commonHead = C.head;

    if (A.getTail())
        A.getTail()->next = commonHead;
    else
        A.head = commonHead;

    if (B.getTail())
        B.getTail()->next = commonHead;
    else
        B.head = commonHead;

    Node *ans = getIntersectionNode(A.head, B.head);

    if (ans == nullptr)
        cout << -1 << "\n";
    else
        cout << ans->val << "\n";

    return 0;
}