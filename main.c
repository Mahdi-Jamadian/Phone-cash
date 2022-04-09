#include <stdio.h>

int main() {
    int Internal_call = 150;
    int External_call = 4000;
    int Internal_web = 800;
    int External_web = 1300;
    int Call,Call_cash,Call_time;
    int Web,Web_cash,Web_time;
    long  double Number;
    int i = 0;
    printf("\n Enter the mobile number : ");
    scanf("%lf",&Number);

    while (i<1)
    {
        printf("\n Are your calls internal or external? (Internal = 1 & External = 0)");
        scanf("%d",&Call);
        printf("\n How many minutes of conversation have you had during this month?");
        scanf("%d",&Call_time);
        if(Call == 1){
            Call_cash =  Internal_call * Call_time;
        }else{
            Call_cash = External_call * Call_time;}
        scanf("%d",&Number);
        printf("\n  Is your web use internal or external ? (Internal = 1 & External = 0)");
        scanf("%d",&Web);
        printf("\n You have been using the Internet for a few minutes this month ? ");
        scanf("%d",&Web_time);
        if(Web == 1){
            Web_cash =  Internal_web * Web_time;
        }else{
            Web_cash = External_web * Web_time;}
        printf("\n -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
        printf("\n The amount of your calls is : %d  $",Call_cash);
        printf("\n The amount of your internet usage will be : %d $",Web_cash);
    }
    return 0;
}
