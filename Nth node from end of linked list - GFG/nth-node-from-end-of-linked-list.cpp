//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:

    // calculate the length of the linked list(L)
    // Compare it with N with the length of the linked list
    // Make a pointer (p) and make it travel till L-N+1 and return p->data
    
   int len(Node*head){
    int count=0;
    Node*temp=head;
    
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    return count;
    }
    int getNthFromLast(Node *head, int n)
    {
        int L=len(head);
        
        if(L<n){
            return -1;
        }
        
        Node*endNode=head;
        
        int from_end=L-n;
        
        while(from_end!=0)
        {
            endNode=endNode->next;
            
            from_end--;
        }
        
        return endNode->data;
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends