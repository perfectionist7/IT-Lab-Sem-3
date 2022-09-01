#include <iostream>
using namespace std;
class time {
    int hours;
    int mins;
    int secs;
    public:
        void read() {
            cout << "Enter the hours,mins,secs" << endl;
            cin >> hours >> mins >> secs;
        }
        void display() {
            cout << "The time in hours,mins,secs = " << endl;
            cout << hours << " " << mins << " " << secs;
        }
        time add(time t1, time t2) {
            time t3;
            t3.hours = t1.hours + t2.hours;
            t3.mins = t1.mins + t2.mins;
            t3.secs = t1.secs + t1.secs;
            if(t3.secs > 60) {
                t3.secs = t3.secs - 60;
                t3.mins++;
            }
            if(t3.mins > 60) {
                t3.mins = t3.mins - 60;
                t3.hours++;
            }
            if(t3.hours > 24) {
                t3.hours = t3.hours - 24;
            }

            return t3;
        }
        time diff(time t1, time t2) {
            time t3;
            t3.hours = t1.hours - t2.hours;
            t3.mins = t1.mins - t2.mins;
            t3.secs = t1.secs - t2.secs;
            if(t3.secs < 0) {
                t3.secs = t3.secs + 60;
                t3.mins--;
            }
            if(t3.mins < 0) {
                t3.mins = t3.mins + 60;
                t3.hours--;
            }
            if(t3.hours < 0) {
                t3.hours = t3.hours + 24;
            }
            return t3;
        }


};
int main() {
    time t1,t2,t3,t4;
    t1.read();
    t2.read();
    t3 = t3.add(t1,t2);
    t4 = t4.diff(t1,t2);
    cout << "On adding times: " << endl;
    t3.display();
    cout << endl;
    cout << "On subtracting time: " << endl;
    t4.display();
}
