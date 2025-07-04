#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    int total_marks() const
    {
        return math_marks + eng_marks;
    }
};

bool compare(Student a, Student b)
{
    if (a.total_marks() != b.total_marks())
    {
        return a.total_marks() > b.total_marks();
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " "
             << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
