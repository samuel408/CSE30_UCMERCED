// defining class Time
#ifndef Time_h
#define Time_h

class Time
 {
     //private integers
    //  private:
    int hours;
	int minutes;
	int seconds;
//public functions
    public:
    // declaration of constructor that sets integers above to 0
    Time();
       
  //  declaration fo constructor that sets integers equal to what the user says.
    Time(int hour, int min, int secs);
     
    //declaration of time destructor 
    ~Time();

    //declaration of accesors
    int getHours();
    int getMinutes();
    int getSeconds();

    //declaration of mutators
     void setHours(int);
     void setMinutes(int);
     void setSeconds(int);

};
#endif
