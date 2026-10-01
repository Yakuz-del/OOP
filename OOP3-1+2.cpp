#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int h, m, s;

public:
 
    Time(int hours = 0, int minutes = 0, int seconds = 0)
        : h(hours), m(minutes), s(seconds) {
    }

 
    void setH(int val) { if (val >= 0 && val < 24) h = val; }
    void setM(int val) { if (val >= 0 && val < 60) m = val; }
    void setS(int val) { if (val >= 0 && val < 60) s = val; }


    int getH() const { return h; }
    int getM() const { return m; }
    int getS() const { return s; }

    string GetTime() const {
        string sh = to_string(h);
        string sm = to_string(m);
        string ss = to_string(s);

        if (h < 10) sh = "0" + sh;
        if (m < 10) sm = "0" + sm;
        if (s < 10) ss = "0" + ss;

        return sh + ":" + sm + ":" + ss;
    }
};


class Date {
private:
    int d, m, y;

public:
    
    Date(int day = 1, int month = 1, int year = 2000)
        : d(day), m(month), y(year) {
    }

   
    void setD(int val) { if (val >= 1 && val <= 31) d = val; }
    void setM(int val) { if (val >= 1 && val <= 12) m = val; }
    void setY(int val) { if (val > 0) y = val; }

  
    int getD() const { return d; }
    int getM() const { return m; }
    int getY() const { return y; }

    string GetDate() const {
        string sd = to_string(d);
        string sm = to_string(m);
        string sy = to_string(y);

        if (d < 10) sd = "0" + sd;
        if (m < 10) sm = "0" + sm;
        while (sy.length() < 4) sy = "0" + sy;

        return sd + "." + sm + "." + sy;
    }
};


int main() {
    Time t(5, 7, 3);
    Date d(1, 9, 2026);

    cout << "Time: " << t.GetTime() << endl; 
    cout << "Date: " << d.GetDate() << endl; 

    return 0;
}