#include <bits/stdc++.h>
using namespace std;

class Student

{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;
};

bool compare(Student a, Student b)
{
    if (a.eng_mark == b.eng_mark)
    {
        if (a.math_mark == b.math_mark)
        {
            return a.id < b.id;
        }
        return a.math_mark > b.math_mark;
    }
    return a.eng_mark > b.eng_mark;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << endl;
    }
    return 0;
}
