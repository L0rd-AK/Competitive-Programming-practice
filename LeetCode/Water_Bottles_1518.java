class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        if(numBottles<numExchange)return numBottles;
        int ans=numBottles;
        while(numBottles>=numExchange){
            ans+=(numBottles/numExchange);
            numBottles=(numBottles%numExchange)+(numBottles/numExchange);
        }
        return ans;
    }
}