#include<bits/stdc++.h>


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this ->data =data;
        this ->next = NULL;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp ->next = head;
}
using namespace std;
int main(){
    Node* node1= new Node();
    cout<<node1 -> data << endl;
    cout<<node1 -> next << endl;



}