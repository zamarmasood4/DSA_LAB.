#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
		
	public:
	Node *head;
	
	Node(){
		head=NULL;
	}
	
	void insert_beg(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head=p;
		   	
		}		
	}
	
	void insert_at_value(int pos,int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
		  Node *temp;
		  temp=head;
		  while(temp->data!=pos)
		  { 
		  temp=temp->next;
		
		  	}
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= temp->next;
		  temp->next=p;
		  }
		    	
		}
		void insert_at_loc(int pos,int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
		  Node *temp;
		  temp=head;
		  for(int i=1; i<pos; i++)
		  { 
		  temp=temp->next;
		
		  	}
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= temp->next;
		  temp->next=p;
		  }
		    	
		}
		
		void insert_end(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
		  Node *temp;
		  Node *p;
		  p = new Node();
		  p->data = n;
		  p->next = NULL;
		  temp = head;
		  while(temp->next!=NULL){
		  	temp = temp->next;
		  	
		  }
		  temp->next = p;
		   	
		}		
	}
		
		void del_beg(){
		
		if(head==NULL){
	
		 cout<<"No Nodes Exist"<<endl;	
			
		}
		
		else{
			
		  Node *ptr;
		  ptr = head;
		  head = head->next;
		  delete(ptr);
		  ptr = NULL;
		}		
	}
	
	
		void del_at_posi(int pos){
		
		if(head==NULL)
		{
	
		 cout<<"No Node Exist"<<endl;	
			
		}
		
		else
		
		{
		  Node *temp;
		  Node *temp1;
		  temp=head;
		  for(int i=1; i<pos; i++)
		  { 
		  temp1 = temp;
		  temp = temp->next;
		
		  	}
		  temp1->next = temp->next;
		  delete(temp);
		  
		  }
		    	
		}
		
		void del_at_value(int n){
		
		if(head==NULL)
		{
	
		 cout<<"No Node Exist"<<endl;	
			
		}
		
		else
		
		{
		  Node *temp;
		  Node *temp1;
		  temp=head;
		  while(temp->data!=n)
		  { 
		  temp1 = temp;
		  temp = temp->next;
		
		  	}
		  temp1->next = temp->next;
		  delete(temp);
		  
		  }
		    	
		}
		void del_end(){
		
		if(head==NULL){
	
		 cout<<"No Nodes Exist"<<endl;	
			
		}
		
		else{
			
		  Node *ptr;
		  Node *ptr1;
		  ptr = head;
		  while(ptr->next!=NULL){
		  	ptr1 = ptr;
		  	ptr = ptr->next;
		  }
		  ptr1->next = NULL;
		  delete(ptr);
		}		
	}
					
			
	
	
	
	void display()
	{
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	
    }	
	
};

int main()
{
	Node n;
    n.insert_beg(20);
    n.insert_beg(30);
    n.insert_beg(32);
    n.insert_beg(3);
    n.display();
//    cout<<"*********************************"<<endl;
//    n.del_beg();
//    n.display();
//    cout<<"*********************************"<<endl;
//    n.insert_at_loc(2,10);
//    n.display();
//    cout<<"*********************************"<<endl;
//    n.del_at_value(30);
//    n.display();
//    cout<<"*********************************"<<endl;
//    n.del_at_posi(2);
//    n.display();
//    cout<<"*********************************"<<endl;
//    n.insert_at_value(20,50);
//    n.display();
//    cout<<"*********************************"<<endl;
//    n.insert_end(5);
//    n.display();
    cout<<"*********************************"<<endl;
    n.del_end();
    n.display();
    
	return 0;
	
}
