#include <iostream>


using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int v) : data(v), next(nullptr) {}
};


void printList(Node* head) {
    while (head != nullptr) {       //listenin sonuna kadar dolaş
        cout << head->data << " ";  //her düğüm verisini yaz
        head = head->next;          //sonraki düğüme geç
    }
}

void deleteNode(Node*& head, int value) {
    Node* current = head;    //mevcut düğüm
    Node* prev = nullptr;    //bir önceki düğüm

    while (current != nullptr) { //listenin sonuna kadar dolaş
        if (current->data == value) //silinicek düğümü buldu mu?
        {
            if (prev == nullptr)      //eğer silincek düğüm il düğümse
                head = current->next;  //baş düğüm bir sonraki düğüm olur
            else
                prev->next = current->next; // aradaki bağlantı yeniden kurulur
            delete current; //bellekten düğüm silinir
            return;
        }
        prev = current;  //bir sonraki adım için current prev yap
        current = current->next; //bir sonraki düğüme geç

    }
}

bool searchNode(Node* head, int value) {
    Node* current = head; //baştan başla
    while (current != nullptr) { //listenin sonuna kadar dolaş
        if (current->data == value) {  // aranan değer bulundu mu?
            return true;               //bulunduysa true döndür
        }
        current = current->next;       //bir sonraki düğüme geç
    }
    return false;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printList(head);
    cout << endl;

    deleteNode(head, 30);
    printList(head);


    int x = 50;
    if (searchNode(head, x)) {
        cout << "Found!" << endl;
    }
    else {
        cout << "Not Found!" << endl;
    }

}
