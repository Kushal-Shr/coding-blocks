#include <iostream>
#include <queue>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
    }
    Person(const string &n, int a)
    {
        name = n;
        age = a;
    }
};

class PersonCompare
{
public:
    bool operator()(Person A, Person B)
    {
        return A.age < B.age;
    }
};

int main()
{
    priority_queue<Person, vector<Person>, PersonCompare> pq;

    Person p1("Kushal", 20);
    Person p2("Shubhangi", 19);
    Person p3("Scarlet", 21);
    Person p4("Sky", 18);

    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    pq.push(p4);

    cout << pq.top().name;

    return 0;
}