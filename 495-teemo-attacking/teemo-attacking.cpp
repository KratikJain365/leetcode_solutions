class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int timetotal=0;
        for(int i=0; i< timeSeries.size()-1; i++){
            timetotal += min(duration, (timeSeries[i+1]-timeSeries[i]));
        }
        timetotal +=duration;

        return timetotal;
        
    }
};