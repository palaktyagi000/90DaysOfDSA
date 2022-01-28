#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	//constructor
	node(int d){
		data = d;
		next = NULL;
	}
};


/*
//Linked Class (object oriented)
class LinkedList{
	node*head;
	node*tail;

public:
	LinkedList(){

	}

	void insert(int d){

	}
	...
	...

};
 */


//Functions(Procedural Programming)
void build(){

}

//passing a pointer by reference
void insertAtHead(node*&head, int d){ 

	if(head==NULL){
		head = new node(d);
		return;
	}

	node *n = new node(d); 
	n->next = head;
	head = n;

}


void print(node*head){

	while(head!=NULL){
		cout<<head->data<<" ->";
		head = head->next;
	}
	cout<<endl;
}

int length(node*head){
	int cnt=0;
	while(head!=NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtTail(node*&head, int data){
	if(head==NULL){
		head = new node(data);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL){
		tail = tail->next; 
	}
	tail->next = new node(data);
	return;

}


void insertInMiddle(node*&head, int d, int p){

	//corner case 
	if(head == NULL or p ==0){
		insertAtHead(head, d);
		return;
	}
	else if(p>length(head)){
		insertAtTail(head , d); //later

	}
	else{
		//take p-1 jumps
		int jump = 1;
		node*temp = head;
		while(jump<=p-1){
			temp = temp->next;
			jump++;
		}
		//create a new node
		node*n = new node(d);
		n->next = temp->next;
		temp->next = n;

	}
}


void deleteHead(node*&head){
	if(head==NULL){
		return;
	}
	node *temp = head->next;
	delete head; 
	head = temp;

}

void deleteInMiddle(node*&head, int p){
	int jump = 1;
	node*temp = head;
	while(jump<=p-1){
		//temp->next = n 
	}

}

//Search Operation
//Linear search
bool search(node*head, int key){

	node*temp = head;
	while(temp!=NULL){
		if(head->data==key){
			return true;
		}
		head = head->next;
	}
	return false;

}

//recursively
bool searchRecursive(node*head, int key){
	if(head==NULL){
		return false;
	}
	//rec case check at head, remaining linked list
	if(head->data==key){
		return true;
	}
	else{
		return searchRecursive(head->next, key);
	}
}

node* take_input (){
	int d;
	cin>>d;

	node*head = NULL;
	while(d!=-1){
		insertAtHead(head, d);
		cin>>d;
	}
	return head;
}

ostream& operator<<(ostream &os, node*head){
	 print(head);
	 return os;
}

istream& operator>>(istream &is, node*&head){
	head = take_input();
	return is;
}

void reverse(node*&head){
	node * C = head;
	node * P = NULL;
	node * N;

	while(C!=NULL){
		//save the next node 
		N = C->next;
		//make the current node point to prev
		C->next = P;

		//updare P and C take th em 1 step forward
		P = C;
		C = N;
	}
	head = P;

}

node* recReverse(node*head){
	//smallest linked list
	if(head->next == NULL or head == NULL){
		return head;
	}

	//rec case 
	node* shead = recReverse(head->next);

	node* temp = shead;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	head->next = NULL;
	temp->next = head;
	return shead; 
}

/*
//optimised
temp = head->next;
temp->next = head;
head
*/

node* midpoint(node*head){
	if(head==NULL or head->next==NULL){
		return head;
	}

	node*slow = head;
	node*fast = head->next;

	while(fast!=NULL and fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

node* kNode(node*head, int k){
	if(head==NULL or head->next==NULL){
		return head;
	}

	node*slow = head;
	node*fast = head;

	for(int i=0;i<k;i++){
		fast = fast->next;
	}

	while(fast->next!=NULL){
		slow = slow->next;
		fast = fast->next;
	}
	//return slow->next;

	node * p = slow->next;
	slow->next = slow->next->next;
	delete(p);
	return head->next;
}


node * merge(node*a, node*b){
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	//take a head pointer
	node*c;
	if(a->data < b->data){
		c = a;
		c->next = merge(a->next , b);
	}
	else{
		c = b;
		c->next = merge(a, b->next);
	}
	return c;

}

node* mergeSort(node*head){
	//base case
	if(head==NULL or head->next == NULL){
		return head;
	}

	//rec case 
	//1. Break
	node * mid = midpoint(head);
	node*a = head;
	node*b = mid->next;

	mid->next = NULL; 

	//2. rec sort the two parts
	a = mergeSort(a);
	b = mergeSort(b);

	//3. Merge them
	node* c = merge(a,b);
	return c;



}

int main(){

	node*head;
	//node*head2;
	cin>>head;
	cout<<head;
	//int k;
	//cin>>k;
	//reverse(head);
	//node* mid = midpoint(head);

	head = mergeSort(head);
	cout<<head;

	//cout<<mid->data<<endl;
	//node* kth = kNode(head, k);
	//kNode(head, k);
	//cout<<head;
	//cout<<kth->data<<endl;



	//node*head2;
	//node*head = take_input();
	//node*head2 = take_input();
	//cin>>head>>head2;
    //cout<<head<<head2;
   // cout<<head2;
    


	/*
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	insertAtHead(head ,0);

	insertInMiddle(head, 4, 3);
	print(head);
	insertAtTail(head, 7);

	print(head);

	//print(head);
	if(searchRecursive(head, 1)){
		cout<<"Element FOund";
	}
	else{
		cout<<"Not found";
	}
*/
	//print(head); 
	return 0;
}