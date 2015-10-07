#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "wizard.h"
#include "persona.h"
#include "locations.cpp"

int roll_dice()
{
    //return 1;
    return (rand() % 5 + 1);
}

int main()
{
    srand( time( NULL ) );
    cout << "Welcome to your new reality, dark and scary" << endl;
    cout << "You are a wizard, who yesterday drank too much and lost all his equipment. You have to overcome your hangover and get all your belongings back" << endl;
    cout << "Do you remember your name?" << endl;
    string name;
    cin >> name;
    Wizard wizard (name);
    cout << "Good, at least you remember your name, " << wizard.get_name()<< endl;
    cout << "So let's begin our journey" << endl;
    int dice;
    int already_visited[6] = {0};
    int helper = 0;
    while (helper <=6 )
    {
        //the game proceeds until the wizard collects all his 5 items
        cout << endl;
        cout << "Roll your dice to decide where to go" << endl;
        dice = roll_dice();
        cout << "So there you go now" << endl;
        switch(dice)
        {
        case 1:
            cout << endl;
            if(already_visited[0] == 0)
            {
                first_location(&wizard);
                already_visited[0] = 1;
                helper++;
                break;
            };
        case 2:
            cout << endl;
            if(already_visited[1] == 0)
            {
                second_location(&wizard);
                already_visited[1] = 1;
                helper++;
                break;
            };
        case 3:
            cout << endl;
            if(already_visited[2] == 0)
            {
                third_location(&wizard);
                already_visited[2] = 1;
                helper++;
                break;
            };
        case 4:
            cout << endl;
            if(already_visited[3] == 0)
            {
                fourth_location(&wizard);
                already_visited[3] = 1;
                helper++;
                break;
            };
        case 5:
            cout << endl;
            if(already_visited[4] == 0)
            {
                fifth_location(&wizard);
                already_visited[4] = 1;
                helper++;
                break;
            };
        case 6:
            cout << endl;
            if(already_visited[5] == 0)
            {
                wizard.set_patience(); //wizard can get extra patience but he has to wait some time
                already_visited[5] = 1;
                helper++;
                break;
            };
        default:
            cout << endl;
            cout << "Oups, you are still too drunk to roll the dice";
            break;
        }

    };
    cout << endl;
    if(wizard.get_item(0) == "0" || wizard.get_item(1) == "0" || wizard.get_item(2) == "0" || wizard.get_item(4) == "0" || wizard.get_item(4) == "0")
    {
        cout << "Unfortunately, you've lost the game.";
    }
    else
    {
        cout << "You've collected all you items:" << endl;
        for(int i=0; i<5; i++)
        {
            cout << wizard.get_item(i) << endl;
        }
    }
    return 0;
}
