class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0;i*i<=c;i++){
            long long temp=i*i;
            long long req=c-temp;
            long long sq=sqrt(req);
           if(sq*sq==req)return true;
            
        }
        return false;
    }
};