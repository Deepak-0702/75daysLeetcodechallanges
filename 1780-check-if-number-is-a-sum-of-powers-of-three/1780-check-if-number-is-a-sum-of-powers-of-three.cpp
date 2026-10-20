class Solution {
public:
bool helper(int n,int pow){
    if(n==0) return true;
    if(pow>n) return false;

    bool take=helper(n-pow,pow*3);
    bool skip=helper(n,pow*3);

    return take||skip;
}
    bool checkPowersOfThree(int n) {
        return helper(n,1);
    }
};