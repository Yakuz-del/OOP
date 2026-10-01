#include <iostream>
#include <string>
using namespace std;

// ---------- Класс Time ----------
class Time {
private:
    int h, m, s;

public:
    // Конструктор со списком инициализации
    Time(int hours = 0, int minutes = 0, int seconds = 0)
        : h(hours), m(minutes), s(seconds) {
    }

    // Сеттеры с проверками
    void setH(int val) { if (val >= 0 && val < 24) h = val; }
    void setM(int val) { if (val >= 0 && val < 60) m = val; }
    void setS(int val) { if (val >= 0 && val < 60) s = val; }

    // Геттеры
    int getH() const { return h; }
    int getM() const { return m; }
    int getS() const { return s; }

    // Метод GetTime: "HH:MM:SS"
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

// ---------- Класс Date ----------
class Date {
private:
    int d, m, y;

public:
    // Конструктор со списком инициализации
    Date(int day = 1, int month = 1, int year = 2000)
        : d(day), m(month), y(year) {
    }

    // Сеттеры с проверками
    void setD(int val) { if (val >= 1 && val <= 31) d = val; }
    void setM(int val) { if (val >= 1 && val <= 12) m = val; }
    void setY(int val) { if (val > 0) y = val; }

    // Геттеры
    int getD() const { return d; }
    int getM() const { return m; }
    int getY() const { return y; }

    // Метод GetDate: "DD.MM.YYYY"
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

// ---------- main ----------
int main() {
    Time t(5, 7, 3);
    Date d(1, 9, 2026);

    cout << "Time: " << t.GetTime() << endl; // 05:07:03
    cout << "Date: " << d.GetDate() << endl; // 01.09.2026

    return 0;
}