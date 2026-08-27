class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        //totalsum=taken+notaken
        //taken=total-nottake
        int totalsum=0;
        for(int num:cardPoints){
            totalsum+=num;
        }
        //so we calculate minimum subarray sum
        int windsize=n-k;
        int sum=0;
        for(int i=0;i<windsize;i++){
            sum+=cardPoints[i];
        }
        int minisum=sum;
        int i=0;
        int j=windsize;
        while(j<n){
            sum+=cardPoints[j];
            sum-=cardPoints[i];

            minisum=min(minisum,sum);
            i++;
            j++;
        }
        return totalsum-minisum;
    }
};