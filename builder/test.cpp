#include <iostream>
using namespace std;
void banner(){
    cout << " ________  __                             ______                                                              " << endl;
    cout << "|        \\|  \\                           /      \\                                                             " << endl;
    cout << "| $$$$$$$$| $$  ______    ______        |  $$$$$$\\ __    __   ______    _______   _______   ______    ______  " << endl;
    cout << "| $$__    | $$ |      \\  /      \\       | $$ __\\$$|  \\  |  \\ /      \\  /       \\ /       \\ /      \\  /      \\ " << endl;
    cout << "| $$  \\   | $$  \\$$$$$$\\|  $$$$$$\\      | $$|    \\| $$  | $$|  $$$$$$\\|  $$$$$$$|  $$$$$$$|  $$$$$$\\|  $$$$$$\\" << endl;
    cout << "| $$$$$   | $$ /      $$| $$  | $$      | $$ \\$$$$| $$  | $$| $$    $$ \\$$    \\  \\$$    \\ | $$    $$| $$   \\$$" << endl;
    cout << "| $$      | $$|  $$$$$$$| $$__| $$      | $$__| $$| $$__/ $$| $$$$$$$$ _\\$$$$$$\\ _\\$$$$$$\\| $$$$$$$$| $$" << endl;
    cout << "| $$      | $$ \\$$    $$ \\$$    $$       \\$$    $$ \\$$    $$ \\$$     \\|       $$|       $$ \\$$     \\| $$" << endl;
    cout << "| $$      | $$ \\$$    $$ \\$$    $$       \\$$    $$ \\$$    $$ \\$$     \\|       $$|       $$ \\$$     \\| $$" << endl;
    cout << " \\$$       \\$$  \\$$$$$$$ _\\$$$$$$$        \\$$$$$$   \\$$$$$$   \\$$$$$$$ \\$$$$$$$  \\$$$$$$$   \\$$$$$$$ \\$$ " << endl;
    cout << "                        |  \\__| $$                                                                       " << endl;
    cout << "                         \\$$    $$                                                                       " << endl;
    cout << "                          \\$$$$$$                                                                             " << endl;
    cout << endl;
    cout << endl;
}
int main(){
    banner();
    bool flag = true;
    int numgalf[20] = {44, 34, 53, 39, 58, 54, 1, 50, 44, 30, 32, 37, 55, 114, 47, 53, 52, 51, 114, 60};
    for (int i = 0; i < 20; ++i) {
    numgalf[i] ^= 65;
    }
    char input[20];
    string raw_input;
    while(flag){
        cout << "Can you guess the flag? Try by input below: " << endl;
        cin >> raw_input;
        //cout << raw_input.size() << endl;
        if (raw_input.size() != 20){
            cout << "You didn't even guess the length! Try again" << endl;
            continue;
        }
        cout << "Lenght is correct! Here is your answer :)" << endl;
        for (int i=0;i<20;i++){
            input[i] = raw_input[i];
        }
        for (int i=0;i<20;i++){
            int temp = abs(numgalf[i]-int(input[i]));
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}