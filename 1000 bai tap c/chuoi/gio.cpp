#include <bits/stdc++.h>
using namespace std;

int convert_to_int(char x, char y){
    string str = {x, y};
    int value = 0;
    
    for(int i = 0; i < 2; i++){
        if(str[i] < '0' || str[i] > '9')
            return -1;
        value = value * 10 + str[i] - '0';
    }
    return value;
}

bool in_range(int value, int l, int r){
    return l <= value && value <=r;
}

string time_date(string time){

    if (int(time.size()) != 10)
        return "false";
    
    int hh, mm, ss;
    hh = convert_to_int(time[0], time[1]);
    mm = convert_to_int(time[3], time[4]);
    ss = convert_to_int(time[6], time[7]);

    if (!in_range(hh, 0, 12) || !in_range(mm, 0, 59) || !in_range(ss, 0, 59))
        return "false";

    if (time[8] == 'P' && time[9] == 'M'){
        time[0] = ((hh + 12) % 24) / 10 + '0';
        time[1] = ((hh + 12) % 24) % 10 + '0';
    } 

    time.resize(8);
    return time;
}

int main(){
    string time = "09:05:45AM";
    cout << time_date(time);
}