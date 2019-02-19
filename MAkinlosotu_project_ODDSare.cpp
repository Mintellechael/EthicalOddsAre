// File : Makinlosotu_project_ODDSare.cpp
// Author : Michael Akinlosotu
// PLAY ODDS ARE!!! Don't worry, what are the odds?

#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;
void game();
void print();

int main () {
    srand(time(0));
    cout << "\n\n\n LET'S PLAY ODDS ARE! Don't worry, what are the odds? \n ";
    char m;
        while (true) {
            cout << " \n\n\n 1. PLAY! \n\n ";
            cout << " 2. Author \n\n";
            cout << " 3. Know The Rules! \n\n";
            cout << " 4. Dare Devil's and facts about them\n\n";
            cout << " Enter x to quit!  ";
            cin >> m;
            if (m == 'X' || m == 'x') break;

switch (m)
            {
        case '1' : cout << "\n\n"; game(); cout << "\n\n"; break;
        case '2' : cout << "\nMichael Akinlosotu\n\n"; break;
        case '3' : cout << "\n Select a number 1-10 \n\n 2. If number is same as CP random then you do the dare that is prompted\n\n"; break;
        case '4' : cout << "\n 1. Evel Knievel : Most broken bones record with 433 broken bones doing Ramp to Ramp Motorcycle jumps \n\ne 2. Kiwi Daredevils (New Zealand Thrill Seekers) : Ride bikes down steepest hill in the world\n\n\n 3. Nik Wallenda : High-wire performances without a safety net \n\n\n 4. Harry Houdini  Escape artist, escaping from strait jacket under water and handcuffs and locks\n\n\n";
            }
    }



return 0;
}
void game(){
        int o;
        cout << "\n\n What are the odds? PICK A NUMBER 1-5   ";
        cin >> o;
        int secret = rand()% 5+1; // 0-9
        string dares[10]={"\n\n\nGo to random woman/man get on one knee and say will you marry me? ","\n\n\nsit at table with strangers and stare\n\n\n","\n\n\njumping jacks while counting aloud wrong\n\n\n","\n\n\n run around and act like someone is after you","dance on table","Sing happy birthday to random person","Text your mother saying your pregnant/got someone pregnant","Faint in front of random people","Take your shoes and socks off and put your feet on someone","blow kisses at strangers"};
        int pos;
        cout << secret;
if (secret == o) {

                string con[3]={"\n\n\n Sign up for community service!", "\n\n\n Buy your friend a meal!","\n\n\nDonate to homeless and the needy"};
                int pos1;
                char s;
                pos = rand()% 5; // ran position in dares
                pos1 = rand () %3;
                cout<< dares[pos];
                cout<< "Do you decline the dare? (y/n)";
                cin >> s;
                if (s == 'y' || s == 'Y')
                    cout<< con[pos1];
                    else
                  cout << "BYE";


}
else{
    cout<< " YOU GOT LUCKY";
}
}
