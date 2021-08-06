#include <iostream>
#include <filesystem>
#include "./headers/structures.h"
#include "./headers/helpers.h"
#include <string.h>
#include <ctime>

using namespace std ;

string link ;
config cfg;

void print(string arg){
    cout << arg << endl;
}
void header(){
    auto mytime = ctime(NULL);
    cout << mytime << endl;
    print(" hacktools v3.0 ...");
}

int Connect (){
    char * cmd ;
    cmd ="netsh wlan connect name=\"SOBRI MMM5\"";
    system(cmd);
    return 0;
}

int requests(string method,string url){
    method+=url;
    return 0;
}

string html_parser(){
    return "";
}

int open_browser(string link){
    link+="salut";
    return 0;
}

void scraping (){
    bool isvalide;
    short loop;
    int data;
    short max_loop = 10;
    
    while (!isvalide){
        try
        {
            data = requests("GET","google.com");
            isvalide = true;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            loop++;
            //sleep
        }
        if(loop>max_loop){
            loop=0;
            Connect();
            //sleep
        }
        
    }
    string link  = html_parser();
    open_browser(link);
    print("link is "+link);
}

int change_mac(){
    const char * cmd ;
    cmd ="bin/TMAC/TMAC.exe -n Wi-Fi -nr02 -re -s";
    int rep = system(cmd);
    cout << "" <<endl;
    if(rep==0){
        print("mac mis a jour");
    }
    else {
        print("erreur mac ...");
    }
    return 0;
}

int connection_bot(){
    print("connexion check");
    int init_time = get_time();
    int cur_time;
    int loop=true;
	int refresh=60*4+10 ;
	short notconected=0;
	short tour=1;
	short max_notconected=5;
	short max_tour=5;
	bool first_loop=true;
	short first_loop_state=1;
    while (loop){
        cur_time = get_time();
        if(cur_time>=init_time+refresh){
            loop = false;
            print("1");
        }
        else {
            //sleep
            try
            {
                requests("URL","http://sobricom.net/login");
                if(cur_time>=init_time+10){
                    try
                    {
                        requests("GET","https://www.google.com/");

                    }
                    catch(const std::exception& e)
                    {
                        std::cerr << e.what() << '\n';
                        notconected+=1;
						print("no internet  connexion");
						open_browser(link);
						print("link is "+link);
						//sleep
                    }
                    
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                tour++;
            }    
        }
        if(notconected>=max_notconected){
            notconected=0;
			loop=false;
            print("1");
        }
        if (tour>=max_tour){
            tour=0;
			Connect();
            print("1");
        }
		if (first_loop){
            first_loop_state=Connect();
            if (first_loop_state) first_loop=true;
            else first_loop=false;
            print("@ first loop");
            print("1");
            //sleep
        } 	
		//sleep
    }
    return 0;
}

int main()
{
    header();
    while (true){
        change_mac();
        scraping();
        connection_bot();
    }
    //time_c builded = time_builder(124737373);
    return 0;
}