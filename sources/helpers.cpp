#include "helpers.h"
#include "structures.h"
#include <string>
#include <iostream>
using namespace std; 


time_c time_builder(int time){
    time_c timer ;
    int seconde , minute , heures;
    minute = time/60;
    timer.secondes = time;
    if (minute<1) return timer ;
    seconde=time%60 ;
    minute=time/60;
    timer.secondes=seconde;
    timer.minutes=minute;
    if ((minute/60)<1) return timer;
    heures=minute/60;
    minute=minute%60;
    timer.heures=heures;
    timer.minutes=minute;
    return timer;
}

int get_time(){
    return 12834;
}

string print(string arg){
    cout << arg << endl;
    return arg;
}