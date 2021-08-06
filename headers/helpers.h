#ifndef HELPERS_H
#define HELPERS_H
#include "structures.h"
#include <string>
#include <iostream>

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
    time_t current_time;
	// current_time = std::time(NULL);
    return 12834;
}

#endif
