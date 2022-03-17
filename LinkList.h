#include <iostream>

using namespace std;

int size = 1;

template<class T>
class LinkList
{
    public:
    T data;
    LinkList* next;
    LinkList *head = NULL;

    LinkList(){}

    void add(T value){

        LinkList* Node = new LinkList();

        Node->data = value;
        Node->next = head;
        head = Node;

        size++;    

    } 

    void insert(int pos,T data)
    {       
           LinkList* Node = new LinkList();
           Node->data = data;
           Node->next = NULL;
            pos = size-pos;
       if(pos < 0 || pos > size+1 )
       cout<<"Invalid position "<<endl;
       
       else if(pos == 1){
           Node->next = head;
           head = Node;

       }else{

           LinkList* temp = head;
           for(int i=1; i<pos-1; i++){
               if(temp != NULL)
               temp = temp->next;
           }

           if(temp != NULL){
               Node->next = temp->next;
               temp->next = Node;
           }
       }
        size++;
    }

    void print()
    {
        LinkList *ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }

    void Add_Append(T value){

        LinkList* Node = new LinkList();
        Node->data = value;
        Node->next = NULL;

        if(head == NULL){
            head = Node;

        }else{
            LinkList* temp = head;

            while(temp->next != NULL){
                temp = temp->next;
            }
                temp->next = Node;
        }
        size++;
    }

    void release(){
        LinkList *rel;
        while (head != NULL)
        {
            rel = head;
            head = head->next;
            delete(rel);
        }
        cout<<"check"<<endl;
    }

    T getNode(int index){
        int count =0;
        LinkList* temp = head;
        while(temp != NULL){
            if(count == index){
                return (temp->data);
                //break;
            }
            count++;
            temp = temp->next;
        }
        return 0;
    }

    void remove(int pos){
        LinkList* temp = head;

        if (head == NULL)
        return ;

        if(pos == 0){
            head = temp->next;
            delete(temp);
            return ;
        }
        
        for(int i=0; temp != NULL && i < pos-1; i++)
        temp = temp->next;

        if(temp == NULL || temp->next == NULL)
        return ;

        LinkList* next = temp->next->next;

        delete(temp->next);

        temp->next = next;   
        size--;             
    }

    int length(){
        return size;
    }

    ~LinkList(){
      LinkList *rel;
        while (head != NULL)
        {
            rel = head;
            head = head->next;
            delete(rel);
        } 
    }
};
