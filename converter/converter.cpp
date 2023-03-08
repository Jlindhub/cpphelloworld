#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "how much time did Marc say it'd take? give me the number and then the time frame." <<endl;
    int marcInput;
    int marcScale = 3; //change depending on how fast you feel marc is
    string timescale;
    while(!(cin >> marcInput >> timescale))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, try again.";
    }
    if(marcInput*marcScale != 1 && timescale.back() != 's')
    {
        char addS = 's';
        timescale.push_back(addS);
    }
    cout << "right, so that'l probably take uuuh " << marcInput * marcScale << " " << timescale << "." << endl;
    system("pause");
}
