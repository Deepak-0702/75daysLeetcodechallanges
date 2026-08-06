class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n1=players.size();
        int n2=trainers.size();
        int i=0;
        int j=0;
        int count=0;
        while(i<n1 && j<n2){
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};