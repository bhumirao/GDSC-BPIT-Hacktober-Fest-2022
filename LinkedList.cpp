
// NAME - A.BHUMIKA RAO 
// 211020401
// BRANCH DSAI
#include <bits/stdc++.h>
#include <map>
using namespace std;

class node{
    public:
       
        string name;
        int marks;
        int regd;
        node* next;
   
    node(){
       
    }
   
    node(string name,int marks,int regd){
        this->name=name;
        this->marks=marks;
        this->regd=regd;
    }
    //destructor
    ~node() {
        ;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
       
    }

};


void insertAtHead(node* &head,string name,int marks,int regd){
    node* temp=new node(name,marks,regd);
    temp->next=head;
    head=temp;
   
}

void print(node* &head,string branch){
    node* temp=head;
    cout<<"regd"<<"  "<< "name"<<" " <<"branch"<<" "<<"marks"<<"   "<<endl;
    while(temp!= NULL && temp->next!= NULL){
        cout<<temp->regd<<"   "<< temp->name<<"   " <<branch<<"   "<< temp->marks<<"   "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(node* tail,string name,int marks,int regd){
    node* temp=new node(name,marks,regd);
    tail->next=temp;
    tail=tail->next;
}

void deleteNode(int position, node* &head) { 

    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
       
       
    


int main()
{   cout<<"  MECH List \n "<<endl;
    node* mech=new node();
    node* head1 = mech; 
    node* tail1 = mech;
    //print(head);
   // node* head1 =NULL ;
    insertAtHead(head1,"UUU",78,4005);
    insertAtHead(head1,"TTT",66,4004);
    insertAtHead(head1,"SSS",95,4003);
    insertAtHead(head1,"RRR",89,4002);
    insertAtHead(head1,"QQQ",92,4001);
    print(head1,"mech");
   
    cout<<"  CSE List \n "<<endl;
    node* cse=new node();
    node* head2 = cse; 
    node* tail2 = cse;
    
    insertAtHead(head2,"EEE",69,1005);
    insertAtHead(head2,"DDD",89,1004);
    insertAtHead(head2,"CCC",75,1003);
    insertAtHead(head2,"BBB",91,1002);
    insertAtHead(head2,"AAA",94,1001);
    print(head2,"cse");
   
    cout<<" ECE List \n "<<endl;
    node* ece=new node();
    node* head3 = ece; 
    node* tail3 = ece;
    
    insertAtHead(head3,"JJJ",58,2005);
    insertAtHead(head3,"III",76,2004);
    insertAtHead(head3,"HHH",75,2003);
    insertAtHead(head3,"GGG",89,2002);
    insertAtHead(head3,"FFF",72,2001);
    print(head3,"ece");
   
     cout<<" EEE List \n "<<endl;
    node* eee=new node();
  
    node* head4 = eee; 
    node* tail4 = eee;
    insertAtHead(head4,"OOO",58,3005);
    insertAtHead(head4,"NNN",76,3004);
    insertAtHead(head4,"MMM",75,3003);
    insertAtHead(head4,"LLL",89,3002);
    insertAtHead(head4,"KKK",91,3001);
    print(head4,"eee");
   
   
  // the topper of mech is SSS
    
    insertAtTail(tail2,"SSS",95,4003);
  
    deleteNode(3,head1);
    // EEE TOPPER AT BEGINNING OF ECE LIST
    insertAtHead(head3,"KKK",91,3001);
    deleteNode(1,head4);
    
    // UPDATED LISTS
    cout<<" updated mech list " <<endl;
    print(head1,"mech");
    cout<<" updated CSE list " <<endl;
  
    print(head2,"cse");
 
    cout<<" updated ECE list " <<endl;
    print(head3,"ECE");
    cout<<" updated EEE list " <<endl;
    print(head4,"EEE");
    
    /*do
    {
        a = a -> next;
    } while (a -> next != head);		
    temp -> data = data;
    temp -> next = a -> next;
    a -> next = temp;
    }
    return head;
}
*/
    
    return 0;
}