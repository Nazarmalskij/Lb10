#include <iostream>
#include <fstream>
#include <string>
#define TESTING

using namespace std;

void process();
void create(char* fname, string text);

#ifdef TESTING
int main()
{
    process();
    return 0;
}
#endif

void process()
{
    ifstream t("t.txt");
    string s, head, tail;
    int spacePose;

    int k = 0;

    while (getline(t, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                spacePose = i;
                break;
            }
            else
            {
                head += toupper(s[i]);
            }

        }
    }

    spacePose != 0 ? tail = s.substr(spacePose, s.length() - 1) : tail = ' ';

    string res = head + tail;

    char sfname[] = "t3.txt";
    create(sfname, res);
}

void create(char* fname, string text)
{
    ofstream t(fname);
    t << text;
}