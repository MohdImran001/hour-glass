#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//#include <MMSystem.h>
using namespace std;

int digits[10] = {1,1,1,1,1,1,1,1,1,1};
int digits2[10] = {0,0,0,0,0,0,0,0,0,0};
void draw() {
    system("cls");
    cout << endl;
    cout << "\t\t      HOUR GLASS (30 Seconds)" << endl << endl;
    cout << "\t\t\t  " << digits[9] << "   " << digits[8] << "   " << digits[7] << "   " << digits[6] << endl;
    cout << "\t\t\t    " << digits[5] << "   " << digits[4] << "   " << digits[3] <<  endl;
    cout << "\t\t\t      " << digits[2] << "   " << digits[1] << endl;
    cout << "\t\t\t        " << digits[0] << endl;
    cout << "\t\t\t        " << digits2[0] << endl;
    cout << "\t\t\t      " << digits2[2] << "   " << digits2[1] << endl;
    cout << "\t\t\t    " << digits2[5] << "   " << digits2[4] << "   " << digits2[3] <<  endl;
    cout << "\t\t\t  " << digits2[9] << "   " << digits2[8] << "   " << digits2[7] << "   " << digits2[6] << endl;

}
void reset() {
    for(int i=0;i<10;++i)
    {
        digits2[i] = 0;
        digits[i] = 1;
    }
}
int main()
{
    //PlaySound(TEXT("cartoon005.wav"),NULL,SND_SYNC);
    cout << "Press any key to start time : ";
    getche();
    top:
    system("COLOR F0");
    draw();
    for(int i=9;i>=0;--i)
    {
        digits[i] = 0;
        digits2[i] = 1;
        Sleep(3000);
        draw();
    }
    system("COLOR F7");
    cout << endl << "\t\tTIME OUT (PRESS ANY KEY TO RESET)";
    getche();
    reset();
    goto top;
    return 0;
}
