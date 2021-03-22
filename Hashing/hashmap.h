#include <iostream>
#include<cstring>
using namespace std;
template<typename T>
class Node{
    string key;
    T value;
    Node<T>*next;
    
    Node(string key, T val)
    {
        this->key=key;
        value=val;
        next=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {
            delete next;
        }
    }
};
template<typename T>
class Hashtable{
    Node<T>** table;
    int cur_size;
    int tab_size;
    
    
    int hashfn(string key)
    {
        int idx=0;
        int p=1;
        for(int j=0;j<key.length();j++)
        {
            idx=idx+(key[j]*p)%tab_size;
            idx=idx%tab_size;
            p=(p*27)%tab_size;
        }
        return idx;
    }
public:
    Hashtable(int ts=7)
    {
        tab_size=ts;
        table=new Node<T>*[tab_size];
        cur_size=0;
        for(int i=0;i<tab_size;i++)
        {
            table[i]=NULL;
        }
    }
    
    
    void insert(string key,T value)
    {
        int idx=hashfn(key);
        Node<T>*n=new Node<T>(key,value);
        n->next=table[idx];
        table[idx]=n;
        cur_size++;
    }
    void print()
    {
        for(int i=0;i<tab_size;i++)
        {
            cout<<"bucket "<<i<<"->";
            Node<T>*temp=table[i];
            while(temp!=NULL)
            {
                cout<<temp->key<<"->";
                temp=temp->next;
            }
        }
    }
    
    T search(string key)
    {
        
    }
    void erase(string key)
    {
        
    }
}
