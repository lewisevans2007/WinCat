//WinCat - By awesomelewis2007

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
    string version = "0.1.3";
    string arg;
    for (int i = 0; i < argc; ++i)
        arg =  argv[i];
    if (arg == "-l") 
    {
        string file = argv[1];
        string line;
        int linenum = 1;
        ifstream myfile(file);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << linenum << "|" << line << '\n';
                linenum = linenum + 1;
            }
            myfile.close();
        }

        else cout << "Unable to open file";

        return 0;
    }
    if (arg == "-v") 
    {
        cout << version;
        return 0;
    }
    if (arg == "--help")
    {
        cout << "WinCat the cat command for windows\n";
        cout << "Made by awesomelewis2007\n";
        cout << "Github: https://github.com/awesomelewis2007/WinCat \n";
        cout << "Usage:\n    wincat.exe [FILENAME] [ARGUMENTS]\n";
        cout << "Arguments:\n    -v    Displays the version\n    --help    Displays this help file\n    -l    Displays the line numbers\n";
        return 0;
    }

    string file = argv[1];
    string line;
    ifstream myfile(file);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}