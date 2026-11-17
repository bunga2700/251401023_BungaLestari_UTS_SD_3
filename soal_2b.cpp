#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, hapusNode;

    Node* head = nullptr;
    Node* tail = nullptr;
    Node* temp; 

    cout << "Masukkan jumlah bilangan : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int dataInput;
        cout << "Bilangan " << i + 1 << " : ";
        cin >> dataInput;

        Node* newNode = new Node();
        newNode->data = dataInput;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Isi Linked list awal: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Masukkan nilai node yang akan dihapus: ";
    cin >> hapusNode;
    temp = head;
        while (temp->next != nullptr && temp->next->data != hapusNode) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Node dengan nilai " << hapusNode << " tidak ditemukan!" << endl;
        } else {
            Node* hapus = temp->next;
            temp->next = hapus->next;
            
            if (hapus == tail) {
                tail = temp;
            }
            
            delete hapus;
            cout << "Node " << hapusNode << " berhasil dihapus" << endl;
        }
    
    cout << "Isi Linked list setelah node dihapus: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}