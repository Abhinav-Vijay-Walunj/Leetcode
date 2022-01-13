// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
   // queue<int> q;
   if (q.empty() == true
        || k > q.size())
        return q;
    if (k <= 0)
        return q;

    stack<int> s;

    /* Push the first K elements 
       into a Stack*/
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    /* Enqueue the contents of stack
       at the back of the queue*/
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    /* Remove the remaining elements and 
       enqueue them at the end of the Queue*/
    for (int i = 0; i < q.size() - k; i++) {
        q.push(q.front());
        q.pop();
    }
    /*
    stack<int> s;
    int t;
    for(int i=0;i<k;i++)
    {
        t=q.dequeue();
        s.push(t);
    }
    while(s.size()!=0)
    {
        t=s.top();
        
        q.enqueue(t);
        s.pop();
    }
    */
    return q;
    // add code here.
}