void rec(queue<int>&q ,int k){
    if(q.empty() || k==0)return;
    int x = q.front();
    q.pop();
    rec(q,k-1);
    q.push(x);
}
queue<int> modifyQueue(queue<int> q, int k)
{
    // q=12345 k=2
    rec(q,k);
    // now q become 34521
    int x = q.size() -k;
    while(x--){
        int y=q.front();
        q.pop();
        q.push(y);
    }
    return q;
}
