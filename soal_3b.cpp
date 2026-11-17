#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
};


int main() {
    Node* front = nullptr;
    Node* rear = nullptr;
    int pilihan;
    sting nama;
    
    while (true) {
        cout << "Pilih menu(1- 5)" << endl;
        cout << "1. Tambah pelanggan" << endl;
        cout << "2. Hapus pelanggan paling depan" << endl;
        cout << "3. Tampilkan pelanggan paling depan" << endl;
        cout << "4. Tampilkan pelanggan paling belakang" << endl;
        cout << "5. Hitung jumlah pelanggan yang masih nunggu" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            Node* newNode = new Node();
            cin.ignore();
            cout << "Masukkan nama: ";
            getline(cin, newNode->nama);
            newNode->next = nullptr;
            if (front == nullptr) {
                front = newNode;
                rear = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }
            cout << nama << " berhasil ditambahkan" << endl;
        } 
        else if (pilihan == 2) {
            Node* hapus = front;
            cout << "Dequeue : " << front->data << endl;
            front = front->next;
            delete hapus;
        } 
        else if (pilihan == 3) {
            cout << "Front : " << front->data << endl;

        } 
        else if (pilihan == 4) {
            cout << "Rear : " << rear->data << endl;
        }
        // else if (pilihan == 5) {
        //     palingBelakang();
        //     break;
        // }
    }
    return 0;
}