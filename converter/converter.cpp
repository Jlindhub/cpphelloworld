#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "how much time did Marc say it'd take? give me the number and then the time frame." <<endl;
    int marcInput;
    char timescale[32];
    while(!(cin >> marcInput >> timescale))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, try again.";
    }
    
    cout << "right, so that'l probably take uuuh " << marcInput *3 << " " << timescale << endl;
    system("pause");
}
