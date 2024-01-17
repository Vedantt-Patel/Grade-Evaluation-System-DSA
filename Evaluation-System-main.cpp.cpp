// Vedant Patel
#include <bits/stdc++.h>
#include <math.h>
#define jaldi_kar ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define aavade(a, n)            \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define aavade2(a, b, n)        \
    for (int i = 0; i < n; i++) \
    cin >> a[i] >> b[i]
#define Vaavade(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        a.emplace_back(x);      \
    }
#define aavadeM(a, n, m)            \
    for (int i = 0; i < n; i++)     \
        for (int j = 0; j < m; j++) \
    cin >> a[i][j]
#define jawade(a, n)            \
    for (int i = 0; i < n; i++) \
    cout << a[i] << ' '

#define IO                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)

#define laile cin >>
#define daide cout <<
#define MAX 1000000007
#define ll long long int
#define f(i, x, n) for (int i = x; i < n; i++)
#define fl(i, x, n) for (ll i = x; i < n; i++)
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define pb push_back
#define nodgt(n) (int)log10(n) + 1
#define lcm(a, b) (a * b) / __gcd(a, b)
using namespace std;

class Student
{
public:
    string roll;
    string name;
    string course;
    int classTest;
    int sessional;
    int innovative;
    int sem;

    Student(string roll, string name, string course, int classTest, int sessional, int innovative, int sem)
    {
        this->roll = roll;
        this->name = name;
        this->course = course;
        this->classTest = classTest;
        this->sessional = sessional;
        this->innovative = innovative;
        this->sem = sem;
    }
};
int main()
{
    vector<Student> v;
    cout << "Enter the number of entries: ";
    int n;
    cin >> n;
    f(i, 0, n)
    {
        string roll, name, course;
        int classTest, sessional, innovative, sem;
        cout << "Enter the Roll Number : ";
        cin >> roll;
        cout << "Enter the Name of " << roll << " : ";
        scanf(" %[^\n]s", name);
        cout << "Enter the Course Code : ";
        cin >> course;
        cout << "Enter the Marks of Class Test of " << roll << " : ";
        cin >> classTest;
        cout << "Enter the Marks of Sessional Exam of " << roll << " : ";
        cin >> sessional;
        cout << "Enter the Marks of Innovative assignment of " << roll << " : ";
        cin >> innovative;
        cout << "Enter the Marks of Semester End Examination of " << roll << " : ";
        cin >> sem;
        // Student *s = new Student(roll, name, course, classTest, sessional, innovative, sem);
        // v.eb(s);
    }
}
