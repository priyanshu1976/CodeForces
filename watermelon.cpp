#include <bits/stdc++.h>
using namespace std;

 void take(string temp){
     if(temp.size() < 10) {
       cout << temp << endl;
       return;
     }
     temp = temp[0] + to_string(temp.size() - 2) + temp[temp.size() - 1];
     cout << temp << endl;
 }

int main() {
    int t;
    cin >> t;
    string word;
    while (t > 0)
    {
      cin >> word;
      take(word);
      t--;
    }
    return 0;
}