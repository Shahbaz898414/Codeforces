#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    unordered_map<int, int> h;

    for (ll i = 0; i < n; i++)
    {
        /* code */
        h[arr[i]]++;
    }

    priority_queue<int> pq;
    for (auto it : h)
        pq.push(it.second);
    int ans = 0, minus = 0;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}



/*


ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left_ptr = head, *right_ptr = head;
        for (int i = 0; i < k-1; i++) {
            right_ptr = right_ptr->next;
        }
        
        ListNode *end_ptr = right_ptr;
        while (right_ptr->next) {
            left_ptr = left_ptr->next;
            right_ptr = right_ptr->next;
        }
        
        swap(end_ptr->val, left_ptr->val);
        
        return head;
}




*/


/*



 ListNode* swapNodes(ListNode* head, int k) {
    if(head->next==NULL){
        return head;
    }
    ListNode*temp=head;
    int s=0;
    while(temp!=NULL){
        temp=temp->next;
        s++;
    }
    ListNode*n1=head;
      int t=1;
      while(t!=k){
         n1=n1->next;
         t++;
      }
      ListNode*n2=head;
      t=1;
      while(t!=s+1-k){
          n2=n2->next;
          t++;
      }
      swap(n1->val,n2->val);
      return head;
      
      
}


*/