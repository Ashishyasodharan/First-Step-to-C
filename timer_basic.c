//timer program for c biginners
//ashish_yasodharan
//20/07/2021
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int hour=0,minute=0,second=0,flag=0; // global variables
void print() // function to print data
{
    system("cls");// clear screen
    printf("1.start 2.stop 3.reset 4.end \n");

    printf("*****************************\n");
    printf("           %d:%d:%d\n",hour,minute,second);
    printf("*****************************");

}
void delay(ms) // dealay function
{
    clock_t timeDelay = ms + clock();
    while(timeDelay > clock());

}
int counter() // counter
{
  while(!kbhit() && flag == 0)
{
    if (minute > 59)
    {
        minute =0;
        ++hour;
    }
    if (second >59)
    {

        second = 0;
        ++minute;
    }
    print();
    delay(1000);
    ++second;


}
selection();
}
int selection()
{
    switch(getch()){
    case 49: // number 1 in key board
        flag =0;
        break;
    case 50:
        flag = 1;
        break;
    case 51:
        hour = minute = second = 0;
        flag =1;
        break;
    case 52:
        exit(0);
        break;

           }
}

int main()
{
    while(1)
    {
        counter();
    }
    return 0;
}
