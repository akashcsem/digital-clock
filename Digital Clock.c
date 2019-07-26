

#include <stdio.h>
#include <windows.h>
#include <time.h>

int main ()
{
    int  start, second, minute, hour;
    char *fixtime[100] = {"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","",""};

    hour = test_time1(fixtime);
    minute = test_time2(fixtime);
    start = test_time3(fixtime);

    for(second = start; ; ){
        Sleep(1000);
        system("cls");
        printf("\n Digital Clock\n\n");
        second = second%3600;

        if(second%3600==0)
            hour++;
        if(hour%12==0)
            printf("\n\t00");
        else if(hour%12<10)
            printf("\n\t0%d", hour%12);
        else
            printf("\n\t%d", hour%12);


        if(second%60==0)
            minute++;
        if(minute%60==0)
            printf(" : 00");
        else if(minute%60<10)
            printf(" : 0%d", minute%60);
        else
            printf(" : %d", minute%60);

        if(second%60==0)
            printf(" : 00");
        else if(second%60<10)
            printf(" : 0%d", second%60);
        else
            printf(" : %d", second%60);
        AMorPM();
        if((second)%14>=1&&(second)%14<=12)    printf("\n\n\n\tA");
        if((second)%14>=2&&(second)%14<=11)    printf("K");
        if((second)%14>=3&&(second)%14<=10)    printf("A");
        if((second)%14>=4&&(second)%14<=9)    printf("S");
        if((second)%14>=5&&(second)%14<=8)    printf("H");

        second++;
    }

    getch();
}

int test_time1(char *timer_value[])
{
    int buffer_hour;
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%I", info);

    if(strcasecmp(buffer,"00")==0)  buffer_hour = 0;
    else if(strcasecmp(buffer,"01")==0)  buffer_hour = 1;
    else if(strcasecmp(buffer,"02")==0)  buffer_hour = 2;
    else if(strcasecmp(buffer,"03")==0)  buffer_hour = 3;
    else if(strcasecmp(buffer,"04")==0)  buffer_hour = 4;
    else if(strcasecmp(buffer,"05")==0)  buffer_hour = 5;
    else if(strcasecmp(buffer,"06")==0)  buffer_hour = 6;
    else if(strcasecmp(buffer,"07")==0)  buffer_hour = 7;
    else if(strcasecmp(buffer,"08")==0)  buffer_hour = 8;
    else if(strcasecmp(buffer,"09")==0)  buffer_hour = 9;
    else if(strcasecmp(buffer,"10")==0)  buffer_hour = 10;
    else if(strcasecmp(buffer,"11")==0)  buffer_hour = 11;
    else if(strcasecmp(buffer,"12")==0)  buffer_hour = 12;
    else if(strcasecmp(buffer,"13")==0)  buffer_hour = 13;
    else if(strcasecmp(buffer,"14")==0)  buffer_hour = 14;
    else if(strcasecmp(buffer,"15")==0)  buffer_hour = 15;
    else if(strcasecmp(buffer,"16")==0)  buffer_hour = 16;
    else if(strcasecmp(buffer,"17")==0)  buffer_hour = 17;
    else if(strcasecmp(buffer,"18")==0)  buffer_hour = 18;
    else if(strcasecmp(buffer,"19")==0)  buffer_hour = 19;
    else if(strcasecmp(buffer,"20")==0)  buffer_hour = 20;
    else if(strcasecmp(buffer,"21")==0)  buffer_hour = 21;
    else if(strcasecmp(buffer,"22")==0)  buffer_hour = 22;
    else if(strcasecmp(buffer,"23")==0)  buffer_hour = 23;
    else if(strcasecmp(buffer,"24")==0)  buffer_hour = 24;
    else if(strcasecmp(buffer,"25")==0)  buffer_hour = 25;
    else if(strcasecmp(buffer,"26")==0)  buffer_hour = 26;
    else if(strcasecmp(buffer,"27")==0)  buffer_hour = 27;
    else if(strcasecmp(buffer,"27")==0)  buffer_hour = 28;
    else if(strcasecmp(buffer,"29")==0)  buffer_hour = 29;
    else if(strcasecmp(buffer,"30")==0)  buffer_hour = 30;
    else if(strcasecmp(buffer,"31")==0)  buffer_hour = 31;
    else if(strcasecmp(buffer,"32")==0)  buffer_hour = 32;
    else if(strcasecmp(buffer,"33")==0)  buffer_hour = 33;
    else if(strcasecmp(buffer,"34")==0)  buffer_hour = 34;
    else if(strcasecmp(buffer,"35")==0)  buffer_hour = 35;
    else if(strcasecmp(buffer,"36")==0)  buffer_hour = 36;
    else if(strcasecmp(buffer,"37")==0)  buffer_hour = 37;
    else if(strcasecmp(buffer,"38")==0)  buffer_hour = 38;
    else if(strcasecmp(buffer,"39")==0)  buffer_hour = 39;
    else if(strcasecmp(buffer,"40")==0)  buffer_hour = 40;
    else if(strcasecmp(buffer,"41")==0)  buffer_hour = 41;
    else if(strcasecmp(buffer,"42")==0)  buffer_hour = 42;
    else if(strcasecmp(buffer,"43")==0)  buffer_hour = 43;
    else if(strcasecmp(buffer,"44")==0)  buffer_hour = 44;
    else if(strcasecmp(buffer,"45")==0)  buffer_hour = 45;
    else if(strcasecmp(buffer,"46")==0)  buffer_hour = 46;
    else if(strcasecmp(buffer,"47")==0)  buffer_hour = 47;
    else if(strcasecmp(buffer,"48")==0)  buffer_hour = 48;
    else if(strcasecmp(buffer,"49")==0)  buffer_hour = 49;
    else if(strcasecmp(buffer,"50")==0)  buffer_hour = 50;
    else if(strcasecmp(buffer,"51")==0)  buffer_hour = 51;
    else if(strcasecmp(buffer,"52")==0)  buffer_hour = 52;
    else if(strcasecmp(buffer,"53")==0)  buffer_hour = 53;
    else if(strcasecmp(buffer,"54")==0)  buffer_hour = 54;
    else if(strcasecmp(buffer,"55")==0)  buffer_hour = 55;
    else if(strcasecmp(buffer,"56")==0)  buffer_hour = 56;
    else if(strcasecmp(buffer,"57")==0)  buffer_hour = 57;
    else if(strcasecmp(buffer,"58")==0)  buffer_hour = 58;
    else if(strcasecmp(buffer,"59")==0)  buffer_hour = 59;

    return buffer_hour;
}

int test_time2(char *timer_value[])
{
    int min;
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%M", info);

    if(strcasecmp(buffer,"00")==0)  min = 0;
    else if(strcasecmp(buffer,"01")==0)  min = 1;
    else if(strcasecmp(buffer,"02")==0)  min = 2;
    else if(strcasecmp(buffer,"03")==0)  min = 3;
    else if(strcasecmp(buffer,"04")==0)  min = 4;
    else if(strcasecmp(buffer,"05")==0)  min = 5;
    else if(strcasecmp(buffer,"06")==0)  min = 6;
    else if(strcasecmp(buffer,"07")==0)  min = 7;
    else if(strcasecmp(buffer,"07")==0)  min = 8;
    else if(strcasecmp(buffer,"09")==0)  min = 9;
    else if(strcasecmp(buffer,"10")==0)  min = 10;
    else if(strcasecmp(buffer,"11")==0)  min = 11;
    else if(strcasecmp(buffer,"12")==0)  min = 12;
    else if(strcasecmp(buffer,"13")==0)  min = 13;
    else if(strcasecmp(buffer,"14")==0)  min = 14;
    else if(strcasecmp(buffer,"15")==0)  min = 15;
    else if(strcasecmp(buffer,"16")==0)  min = 16;
    else if(strcasecmp(buffer,"17")==0)  min = 17;
    else if(strcasecmp(buffer,"18")==0)  min = 18;
    else if(strcasecmp(buffer,"19")==0)  min = 19;
    else if(strcasecmp(buffer,"20")==0)  min = 20;
    else if(strcasecmp(buffer,"21")==0)  min = 21;
    else if(strcasecmp(buffer,"22")==0)  min = 22;
    else if(strcasecmp(buffer,"23")==0)  min = 23;
    else if(strcasecmp(buffer,"24")==0)  min = 24;
    else if(strcasecmp(buffer,"25")==0)  min = 25;
    else if(strcasecmp(buffer,"26")==0)  min = 26;
    else if(strcasecmp(buffer,"27")==0)  min = 27;
    else if(strcasecmp(buffer,"27")==0)  min = 28;
    else if(strcasecmp(buffer,"29")==0)  min = 29;
    else if(strcasecmp(buffer,"30")==0)  min = 30;
    else if(strcasecmp(buffer,"31")==0)  min = 31;
    else if(strcasecmp(buffer,"32")==0)  min = 32;
    else if(strcasecmp(buffer,"33")==0)  min = 33;
    else if(strcasecmp(buffer,"34")==0)  min = 34;
    else if(strcasecmp(buffer,"35")==0)  min = 35;
    else if(strcasecmp(buffer,"36")==0)  min = 36;
    else if(strcasecmp(buffer,"37")==0)  min = 37;
    else if(strcasecmp(buffer,"38")==0)  min = 38;
    else if(strcasecmp(buffer,"39")==0)  min = 39;
    else if(strcasecmp(buffer,"40")==0)  min = 40;
    else if(strcasecmp(buffer,"41")==0)  min = 41;
    else if(strcasecmp(buffer,"42")==0)  min = 42;
    else if(strcasecmp(buffer,"43")==0)  min = 43;
    else if(strcasecmp(buffer,"44")==0)  min = 44;
    else if(strcasecmp(buffer,"45")==0)  min = 45;
    else if(strcasecmp(buffer,"46")==0)  min = 46;
    else if(strcasecmp(buffer,"47")==0)  min = 47;
    else if(strcasecmp(buffer,"48")==0)  min = 48;
    else if(strcasecmp(buffer,"49")==0)  min = 49;
    else if(strcasecmp(buffer,"50")==0)  min = 50;
    else if(strcasecmp(buffer,"51")==0)  min = 51;
    else if(strcasecmp(buffer,"52")==0)  min = 52;
    else if(strcasecmp(buffer,"53")==0)  min = 53;
    else if(strcasecmp(buffer,"54")==0)  min = 54;
    else if(strcasecmp(buffer,"55")==0)  min = 55;
    else if(strcasecmp(buffer,"56")==0)  min = 56;
    else if(strcasecmp(buffer,"57")==0)  min = 57;
    else if(strcasecmp(buffer,"58")==0)  min = 58;
    else if(strcasecmp(buffer,"59")==0)  min = 59;

    return min;
}

int test_time3(char *timer_value[])
{
    int buffer_second;
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%S", info);

    if(strcasecmp(buffer,"00")==0)  buffer_second = 0;
    else if(strcasecmp(buffer,"01")==0)  buffer_second = 1;
    else if(strcasecmp(buffer,"02")==0)  buffer_second = 2;
    else if(strcasecmp(buffer,"03")==0)  buffer_second = 3;
    else if(strcasecmp(buffer,"04")==0)  buffer_second = 4;
    else if(strcasecmp(buffer,"05")==0)  buffer_second = 5;
    else if(strcasecmp(buffer,"06")==0)  buffer_second = 6;
    else if(strcasecmp(buffer,"07")==0)  buffer_second = 7;
    else if(strcasecmp(buffer,"07")==0)  buffer_second = 8;
    else if(strcasecmp(buffer,"09")==0)  buffer_second = 9;
    else if(strcasecmp(buffer,"10")==0)  buffer_second = 10;
    else if(strcasecmp(buffer,"11")==0)  buffer_second = 11;
    else if(strcasecmp(buffer,"12")==0)  buffer_second = 12;
    else if(strcasecmp(buffer,"13")==0)  buffer_second = 13;
    else if(strcasecmp(buffer,"14")==0)  buffer_second = 14;
    else if(strcasecmp(buffer,"15")==0)  buffer_second = 15;
    else if(strcasecmp(buffer,"16")==0)  buffer_second = 16;
    else if(strcasecmp(buffer,"17")==0)  buffer_second = 17;
    else if(strcasecmp(buffer,"18")==0)  buffer_second = 18;
    else if(strcasecmp(buffer,"19")==0)  buffer_second = 19;
    else if(strcasecmp(buffer,"20")==0)  buffer_second = 20;
    else if(strcasecmp(buffer,"21")==0)  buffer_second = 21;
    else if(strcasecmp(buffer,"22")==0)  buffer_second = 22;
    else if(strcasecmp(buffer,"23")==0)  buffer_second = 23;
    else if(strcasecmp(buffer,"24")==0)  buffer_second = 24;
    else if(strcasecmp(buffer,"25")==0)  buffer_second = 25;
    else if(strcasecmp(buffer,"26")==0)  buffer_second = 26;
    else if(strcasecmp(buffer,"27")==0)  buffer_second = 27;
    else if(strcasecmp(buffer,"27")==0)  buffer_second = 28;
    else if(strcasecmp(buffer,"29")==0)  buffer_second = 29;
    else if(strcasecmp(buffer,"30")==0)  buffer_second = 30;
    else if(strcasecmp(buffer,"31")==0)  buffer_second = 31;
    else if(strcasecmp(buffer,"32")==0)  buffer_second = 32;
    else if(strcasecmp(buffer,"33")==0)  buffer_second = 33;
    else if(strcasecmp(buffer,"34")==0)  buffer_second = 34;
    else if(strcasecmp(buffer,"35")==0)  buffer_second = 35;
    else if(strcasecmp(buffer,"36")==0)  buffer_second = 36;
    else if(strcasecmp(buffer,"37")==0)  buffer_second = 37;
    else if(strcasecmp(buffer,"38")==0)  buffer_second = 38;
    else if(strcasecmp(buffer,"39")==0)  buffer_second = 39;
    else if(strcasecmp(buffer,"40")==0)  buffer_second = 40;
    else if(strcasecmp(buffer,"41")==0)  buffer_second = 41;
    else if(strcasecmp(buffer,"42")==0)  buffer_second = 42;
    else if(strcasecmp(buffer,"43")==0)  buffer_second = 43;
    else if(strcasecmp(buffer,"44")==0)  buffer_second = 44;
    else if(strcasecmp(buffer,"45")==0)  buffer_second = 45;
    else if(strcasecmp(buffer,"46")==0)  buffer_second = 46;
    else if(strcasecmp(buffer,"47")==0)  buffer_second = 47;
    else if(strcasecmp(buffer,"48")==0)  buffer_second = 48;
    else if(strcasecmp(buffer,"49")==0)  buffer_second = 49;
    else if(strcasecmp(buffer,"50")==0)  buffer_second = 50;
    else if(strcasecmp(buffer,"51")==0)  buffer_second = 51;
    else if(strcasecmp(buffer,"52")==0)  buffer_second = 52;
    else if(strcasecmp(buffer,"53")==0)  buffer_second = 53;
    else if(strcasecmp(buffer,"54")==0)  buffer_second = 54;
    else if(strcasecmp(buffer,"55")==0)  buffer_second = 55;
    else if(strcasecmp(buffer,"56")==0)  buffer_second = 56;
    else if(strcasecmp(buffer,"57")==0)  buffer_second = 57;
    else if(strcasecmp(buffer,"58")==0)  buffer_second = 58;
    else if(strcasecmp(buffer,"59")==0)  buffer_second = 59;

    return buffer_second;
}
void AMorPM()
{
    int min;
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%p", info);
    if(strcasecmp(buffer,"PM")==0)
        printf(" PM");
    else printf(" AM");


    //return min;
}
