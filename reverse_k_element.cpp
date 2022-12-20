// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
   stack<int>s;
   for(int i=0;i<k;i++){
       int val=q.front();
       q.pop();
       s.push(val);
       
   }
   while(!s.empty()){
       int val=s.top();
       s.pop();
       q.push(val);
       
   }
   int j=q.size()-k;
   while(j--){
       int val=q.front();
       q.pop();
       q.push(val);
   }
   return q;
   
}