#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAXNUM = 10;
const int MAXLEN = 100;

int splitline(string, char, char[][MAXLEN]);

int program_main(){
    string text = "ABCDEF,GHI,JKL,MNO";
    char target[MAXNUM][MAXLEN];

    int cnt = splitline(txt, ',', target);

    cout << "Number  of split words: " << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        cout << "Word" << i + 1 << ": " << target[i] << endl;
    }

    return 0;

}


}