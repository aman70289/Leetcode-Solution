class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        vector<int>psum(n,0);
        string dec1="--X";
        string dec2="X--";
        string inc1="X++";
        string inc2="++X";
        for(int i=0;i<operations.size();i++){
            if(operations[i]==inc1||operations[i]==inc2){
                psum[i]=psum[i]+1;

            }
            else{
                psum[i]=psum[i]-1;
            }
        }
        for(int i=1;i<n;i++){
            psum[i]=psum[i]+psum[i-1];
        }
        return psum[n-1];
    }
};