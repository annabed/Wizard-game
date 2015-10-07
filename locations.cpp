void first_location(Wizard *wizard)
{
    Person woman("Anastasia", "bag");
    string line;
    ifstream first_file("first.txt");
    if (first_file.is_open())
    {
        while ( getline (first_file,line) )
        {
            cout << line << endl;
        }
        first_file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk with people";
    int decision;
    cin >> decision;
    switch(decision)
    {
    case 1:
        cout << "You've decided to let her finish." << endl << "Bad idea.";
        do
        {
            cout << "You idiot. You horrible guy. How dare you!" << endl;
            cout << "What a guy does the things you did?!" << endl;
            cout << "I hate you. I hate you." << endl;
            wizard->decrement_patience();
        }while (wizard->get_patience() > woman.get_person_patience());
    case 2:
        cout << "You interrupt her and ask if she saw you belongings." << endl;
        cout << "'I have your bag but you have to be really patient to get it.'" << endl;
        if(wizard->get_patience() > woman.get_person_patience())
        {
            cout << "Ok, you won, I will give it back to you." << endl;
            string item = woman.get_person_item();
            wizard->set_item(0, item);
        }
        else
            cout << "HAHAHA, you lost, you idiot. Go away." << endl;
    }
}

void second_location(Wizard *wizard)
{
    Person dwarf("Kichot", "knife");
    string line;
    ifstream second_file("second.txt");
    if (second_file.is_open())
    {
        while ( getline (second_file,line) )
        {
            cout << line << endl;
        }
        second_file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk with people";
    int answer;
    int good = 0;
    while(good == 0)
    {
        cin >> answer;
    if(answer == 720)
    {
        cout << "'Let it be, you're right, have your knife back." << endl;
        string item = dwarf.get_person_item();
        wizard->set_item(1, item);
        good = 1;
    }
    else
        cout << "'Try again.'" << endl;
    }
}

void third_location(Wizard *wizard)
{
    string line;
    ifstream file("third.txt");
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            cout << line << endl;
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk with people";
    wizard->set_item(2, "wand");
}

void fourth_location(Wizard *wizard)
{
    Person teacher("Teacher", "wallet");
    string line;
    ifstream file("fourth.txt");
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            cout << line << endl;
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk with people";
    string correct[6] = {"am", "are", "is", "are", "are", "are"};
    string answer[6];
    string questions[6] = {"I", "You", "He/she/it", "We", "You", "They"};
    int super = 0;
    for(int i=0; i<6; i++)
    {
        cout << questions[i] << endl;
        cin >> answer[i];
        if(answer[i] == correct[i])
        {
            super++;
        }
    }
    if(super == 6)
    {
        cout << "Let it be, now you are correct." << endl;
        cout << "Have your wallet back." << endl;
        string item = teacher.get_person_item();
        wizard->set_item(3, item);
    }
    else
        cout << "You've lost all." << endl;
}

void fifth_location(Wizard *wizard)
{
    Person elf("Elf", "shoes");
    string line;
    ifstream file("fifth.txt");
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            cout << line << endl;
        }
        file.close();
    }
    else
        cout << "Oups, you are still too drunk to talk with people";
    string prayer;
    cin >> prayer;
    int good_length = 20;
    if(prayer.length() > good_length)
    {
        cout << "'Your prayer was good and may it happens. Have your shoes back." << endl;
        string item = elf.get_person_item();
        wizard->set_item(4, item);
    }
    else
        cout << "You've lost." << endl;
}
