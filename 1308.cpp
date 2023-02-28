// 20230227
// silver 5

#include<iostream>

using namespace std;

bool leap_yr(int year){ // 윤년이면 true
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0) return true;
            else return false;
        }
        return true;
    }
    return false;
}

int* month(int year){
    static int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(leap_yr(year) == 1) arr[1] = 29;
    return arr;
}

int days(int year, int mon, int day){
    int total_days = 0;
    for(int i = 1; i <= year; i++){
        if(i == year){
            for(int j = 1; j <= mon; j++){
                total_days += month(i)[j - 1];
            }
            total_days += day;
        }
        else{
            if(leap_yr(i) == 1) total_days += 366;
            else total_days += 365;
        }
    }
    return total_days;
}

int main(void){
    int a, b, c;
    int d, e, f;

    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if(d - a > 1000) cout << "gg" << endl;
    else if(d - a == 1000){
        if(e > b) cout << "gg" << endl;
        else if(e == b){
            if(f >= c) cout << "gg" << endl;
            else cout << "D-" << days(d, e, f) - days(a, b, c) << endl;
        }
        else cout << "D-" << days(d, e, f) - days(a, b, c) << endl;
    }
    else cout << "D-" << days(d, e, f) - days(a, b, c) << endl;
}