//very simple c program which will limit the chargin of your's laptop to extend its battery life, how cool is that;)
//Tested on Asus Vivobook 15 Pro

//Copyright(c) Vishal Ahirwar. All rights reserved.

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define file_path "/sys/class/power_supply/BAT0/charge_control_end_threshold"

int main(int argc,char**archv)
{
    if(argc>2)
    {
        printf("you can't have more than 2 arguments to program :)\n[usage] :\nprogram_name battery_threshold_you_want_to_set>=30 and <=100\n");
        return 1;
    };

    uint16_t threshold=60;
    if(argc==2)
    {
        char*ouput;
        threshold=strtol(archv[1],&ouput,10);
        if(*ouput || threshold>100 || threshold<0)
        {
            printf("[error] please provide charging threshold in integer format which should be in between 0 to 100\n");
            return 1;
        };

    }else
    {
        printf("[message] : setting up threshold to default value 60\n");
    };

    FILE*bat=fopen(file_path,"w");
    if(bat)
    {
        fprintf(bat,"%d",threshold);

    }else
    {
        printf("[error] failed to set charging threshold {Did you forget to run it with sudo? }\n");
        return 1;
    };

    fclose(bat);
    return 0;
}