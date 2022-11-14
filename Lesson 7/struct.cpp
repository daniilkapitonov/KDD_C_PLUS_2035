#include <iostream>
#include <iomanip>
using namespace std;

struct airplane{
    char *name;
    int inv_code;
    int fly_hours;
    int plases_for_people;
    int kg_for_baggage;
    char case_letter;
};

airplane init_str_airplane(char *name,
    int inv_code,
    int fly_hours,
    int plases_for_people,
    int kg_for_baggage,
    char case_letter){
        airplane cash;
        cash.name = name;
        cash.fly_hours = fly_hours;
        cash.inv_code = inv_code;
        cash.plases_for_people = plases_for_people;
        cash. kg_for_baggage = kg_for_baggage;
        cash.case_letter = case_letter;

        return cash;
    }
void airplane_cout(airplane plane){
    cout<<plane.name<< endl<< plane.fly_hours<< endl <<plane.inv_code<< endl <<plane.plases_for_people<< endl <<plane.kg_for_baggage<< endl <<plane.case_letter<< endl;
}

int main(int argc, char const *argv[])
{
    airplane plane;
    char *test = "SuperJet";
    plane = init_str_airplane(test, 4632, 6541514, 300, 3200, 'S');
    airplane_cout(plane);

    airplane mass[10];
    mass[1].name;

}

