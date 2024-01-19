#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;


void insertnode1(int x){
    head = new Node;
    head -> data = x;
    head -> next = nullptr;
}