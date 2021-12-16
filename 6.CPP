#include <iostream>

using namespace std;

class DS
{
public:
int S[10000];
bool flag;
int x;
private:
int counter;

public: DS()
{
flag = false;
counter = 0;
x = 0;
}
void Next(int n)
{
int min = -1;
bool flag1 = false;
for (int i=0; i<counter; i++)
{
if ((flag1 == false) && (S[i])>=n)
{
min = S[i];
flag1 = true;
} else
if (S[i]<=min) min = S[i]; 
}
flag = true;
x = min;
cout « min « endl;
}
void Add(int n)
{
if (flag == true) 
{
S[counter] = n+x;
flag = false;
} else S[counter] = n;
counter++;
}
};

void main()
{
DS A;
int k;
cin » k;
for (int i = 0; i<k; i++)
{
int n;
char zn;
cin » zn;
cin » n;
if (zn == '+') A.Add(n); else A.Next(n);
}
}