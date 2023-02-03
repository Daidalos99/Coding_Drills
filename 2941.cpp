// 20230204
// sliver 5

#include<iostream>

using namespace std;

int main(void){
    string alphabet_bundle;
    int croatian_alphabet = 0;
    cin >> alphabet_bundle;

    for(int i = 0; i < alphabet_bundle.length(); i++){
        if(alphabet_bundle[i] == '='){
            if(alphabet_bundle[i - 1] != 'c' && alphabet_bundle[i - 1] != 's' && alphabet_bundle[i - 1] != 'z'){
                croatian_alphabet++;
            }
            else if(alphabet_bundle[i - 1] == 'z' && alphabet_bundle[i - 2] == 'd'){
                croatian_alphabet--;
            }
        }
        else if(alphabet_bundle[i] == '-'){
            if(alphabet_bundle[i - 1] != 'c' && alphabet_bundle[i - 1] != 'd') croatian_alphabet++;
        }
        else if(alphabet_bundle[i] == 'j'){
            if(alphabet_bundle[i - 1] != 'l' && alphabet_bundle[i - 1] != 'n') croatian_alphabet++;
        }
        else croatian_alphabet++;
    }
    cout << croatian_alphabet << endl;
    return 0;
}