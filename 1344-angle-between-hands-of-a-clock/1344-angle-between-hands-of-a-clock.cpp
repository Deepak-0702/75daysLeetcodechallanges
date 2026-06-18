class Solution {
public:
    double angleClock(int hour, int minutes) {
        // 12 hour me 360 degree ghumta hai 
        // 1 hour me 360/12=30 degree
        //par problem ye hai ki hour hand minute ke saath bhi move karta rehta hai.
        //Aur 1 hour mein hour hand 30° move karta hai.
        // To 1 minute mein: 30/60 =0.5 degree
        double hourangle=30*hour+0.5*minutes;
        double minuteangle=6*minutes;
        double angle=abs(hourangle-minuteangle);
        return min(angle,360-angle);
    }
};