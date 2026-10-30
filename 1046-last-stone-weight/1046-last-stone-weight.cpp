class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        if(stones.size()<2)return stones[0];
        for(int i:stones){
            pq.push(i);
        }
        if(pq.size()==2){
            int num=pq.top();
            pq.pop();
            return num-pq.top();
        }
        while(pq.size()!=1){
            int num1=pq.top();
            pq.pop();
            int num2=pq.top();
            pq.pop();
            pq.push(num1-num2);
        }
        return pq.top();
    }
};