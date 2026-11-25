class StockSpanner {
public:

    vector<int> vec;

    StockSpanner() {
        
    }
    
    int next(int price) {
        
        vec.push_back(price);

        int count = 1;

        for(int i = vec.size()-2; i >= 0; i--){

            if(vec[i] <= price){
                count++;
            }
            else{
                break;
            }
        }

        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */