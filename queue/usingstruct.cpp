#include<iostream>
using namespace std;

struct queue {
    int arr[5];
    int front ;
    int rear;
}q;

void insert(int n){
    if(q.rear== 4){
        cout<<"Overflow"<<endl;
    }
    else{
        q.arr[q.rear] = n;
        q.rear ++;
    }
}
void deletequeue(){
    if(q.front == q.rear){
        cout<<"Underflow"<<endl;
    }
    else{
        int current = q.arr[q.front];
        cout<<"The current element is "<<current<<endl;
        q.front ++;
    }

}

void display(){
    for(int i = q.front; i<q.rear; i++){
        cout<<q.arr[i];
    }
}

int main(){
    q.front = 0;
    q.rear = 0;

    int n, exit = 0;
    int choice;
    
    cout<<"1.Insert 2.Delete 3.display ";
    while(exit !=1)
    cin>>choice;
    switch(choice){
         cout<<"1.Insert 2.Delete 3.display ";
        case 1:
            cin>>n;
            
            for(int i = q.front; i<q.rear; i++){
                cout<<"Enter the element:"<<endl;
                insert(n);
                cout<<q.arr[i]<<" ";
            }
            break;

        case 2:
            deletequeue();
            break;

        case 3:
            display();
        cout<<"Enter 1 to exit again ";
        cin>>exit;
    } 
    
return 0;
}