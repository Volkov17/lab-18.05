int main(){
      #include <iostream>

using namespace std;

struct Node {
        int a;
        Node *next;
};

void add (int *array,Mlist *&head,int argc){
    head = new Mlist;
    head->a = *(array + 1);
    head->next = nullptr;
    Mlist *curr = head;
    for (int i = 2; i < argc; i++)
    {
        curr->next = new Mlist;
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
void Print(Node &*first) {
        Node *print = first;
        if (print == nullptr) {
                cout << "The list is empty." << endl;
                cout << endl;
        }
        else {
                do {
                        cout << print->a;
                        if (print->next)
                                cout << " -> ";
                        print = print->next;
                } while (print);
                cout << endl;
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
                add(array, head, argc);
        Print(head);
        Reverse(head);
        Print(head);
}
}
