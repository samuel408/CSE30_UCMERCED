#include "Time.h"

Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int hour,int mins,int secs){
    hours = hour;
    minutes = mins;
    seconds = secs;
}

Time::~Time(){

}

int Time::getHours(){
    return hours;
}

int Time::getMinutes(){
    return minutes;
}

int Time::getSeconds(){
    return seconds;
}

 void Time::setHours(int h){
    hours = h;
}

void Time :: setMinutes(int m){
    minutes = m;
}

void Time :: setSeconds (int s){
    seconds = s;
}