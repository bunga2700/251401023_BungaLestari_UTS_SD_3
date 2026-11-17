#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* tambah(Node* root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;

        return root;
    }

    if (data < root->data) {
        root->kiri = tambah (root->kiri, data);
    }

    if (data > root->data) {
        root->kanan = tambah (root->kanan, data);
    }

    return root;
}

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    int angka, bawah, atas, cek;

    cout << "Masukkan angka (-1 = stop) : " << endl;
    cin >> angka;

    while (angka != -1) {
        root = tambah(root, angka);
        cin >> angka;
    }

    cout << "Batas bawah: ";
    cin >> bawah;
    cout << "Batas atas: ";
    cin >> atas;

    if (bawah < root->data) {
        root->kiri = tambah (root->kiri, bawah);
    }

    if (bawah > root->data) {
        root->kanan = tambah (root->kanan, bawah);
    }

    cout << "Pre Order : ";
    preOrder(root);

    cout << endl;

    cout << "In Order : ";
    inOrder(root);

    cout << endl;

    cout << "Post Order : ";
    postOrder(root);

    cout << endl;

    cout << "Masukkan 1 angka untuk diperiksa: ";
    cin >> cek;
    return 0;
}