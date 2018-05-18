#include <iostream>

using namespace std;

struct Node {
    int a;
    Node *next;
};

void add(int *array, Node **first, int argc) {
    (*first) = new Node;
    (*first)->a = *(array + 1);
    (*first)->next = nullptr;

    Node *curr = *first;

    for (int i = 2; i < argc; i++)
    {
        curr->next = new Node;
        curr = curr->next;
        curr->a = *(array + i);
        curr->next = nullptr;
    }
}

void Reverse(struct Node **head) {
    if ((*head) == nullptr)
        return;
    Node *curr, *next, *prev = nullptr;
    curr = *head;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void Find(Node **first) {
    cout << "position: ";
    int count;
    int n;
    cin >> n;
    Node *curr = *first;
    while (count != n) {
        count++;
        if (count == n)
            cout << curr->a << endl;
        curr = curr->next;
    }
}

int main(int argc, char *argv[]) {
    int *array = new int[argc-1];

    for (int i = 1; i < argc; i++)
        array[i] = atoi(argv[i]);

    Node *first = nullptr;

    if (argc == 1)
        Node *first = nullptr;
    else
        add(array, &first, argc);
    Reverse(&first);
    Find(&first);
}
