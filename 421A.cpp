#include <bits/stdc++.h>
using namespace std;
int main() {
    int size, pos;
    string print;
    cin>>size>>pos;
    cin>> print;

    // check pos is close to which end
    int right = abs(size - pos);
    int left = pos -1 ;

    if(left < right){
        // Move left
        while(left > 0){
            cout << "LEFT" << endl;
            left--;
        }

        for(int i = 0 ; i < size ; i++){
            if(i == size-1){
                cout << "PRINT "<< print[i] << endl;
                break;
            }
            cout << "PRINT " << print[i] << endl;
            cout << "RIGHT" << endl;
        }
        return 0;
    } else {
        while(right > 0){
            cout << "RIGHT" << endl;
            right--;
        }

        for(int i = size -1 ; i>= 0 ; i--){
            if(i == 0){
                cout << "PRINT " << print[i] << endl;
                break;
            }
            cout  << "PRINT " << print[i] << endl;
            cout << "LEFT" << endl;
        }
    }

    return 0;
}
