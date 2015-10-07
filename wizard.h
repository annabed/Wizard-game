#include <stdlib.h>
class Wizard
{
        string name;
        string item[5];
        int patience; //patience is important when the wizard has to talk with other heroes
    public:
        void set_item(int, string);
        string get_item(int);
        void set_patience(void);
        void decrement_patience(void);
        int get_patience(void);
        string get_name(void);
        Wizard(string);
        ~Wizard();
};

Wizard::Wizard(string n)
{
    name = n;
    patience = 10;
    for(int i=0; i<5; i++)
    {
        item[i] = "0";
    }
}

Wizard::~Wizard(){}

void Wizard::set_item(int n, string s)
{
    item[n] = s;
}

string Wizard::get_name()
{
    return name;
}

string Wizard::get_item(int n)
{
    return item[n];
}

void Wizard::set_patience(void)
{
    patience++;
}

void Wizard::decrement_patience(void)
{
    patience--;
}

int Wizard::get_patience(void)
{
    return patience;
}
