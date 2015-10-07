class Person
{
        string person_name;
        string person_item;
        int patience;
    public:
        Person(string, string);
        ~Person();
        string get_person_name(void);
        string get_person_item(void);
        int get_person_patience(void);
        int generate_patience(void);
};

Person::Person(string n, string i)
{
    person_name = n;
    patience = generate_patience();
    person_item = i;
}

Person::~Person(){}

string Person::get_person_name()
{
    return person_name;
}

int Person::get_person_patience()
{
    return patience;
}

int Person::generate_patience()
{
    return (rand() % 12 + 1);
}

string Person::get_person_item()
{
    return person_item;
}
