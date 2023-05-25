#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string sleep,current;
    cin>>current;
    cin>>sleep;
    string sleepHour,sleepMinute,currentHour,currentMinute;
    currentHour=current[0];
    currentHour+=current[1];
    currentMinute=current[3];
    currentMinute+=current[4];
    sleepHour=sleep[0];
    sleepHour+=sleep[1];
    sleepMinute=sleep[3];
    sleepMinute+=sleep[4];
    int totalSleep = (stoi(sleepHour)*60) + stoi(sleepMinute);
    int currentTime= (stoi(currentHour)*60) + stoi(currentMinute);
    int dif = currentTime - totalSleep;
    if(dif<0){
        dif = 1440+dif;
    }
    int hour,minute;
    hour = dif/60;
    minute = dif - (hour*60);
    string h = to_string(hour),m = to_string(minute);
    if(h.length()==1){
        h = "0";
        h+= to_string(hour);
    }
    if(m.length()==1){
        m="0";
        m+=to_string(minute);
    }
    string t =h;
    t+=":";
    t+=m;
    cout<<t<<endl;

    
    return 0;
}