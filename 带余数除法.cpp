#include <iostream>

using namespace std;
int main(){
    int n;
    int z;
    int sum = 0;
    int x, y;
    cin >> n;
    for( int i=0; i<n; i++){
        cin >> x;
        cin >> y;
        sum = 0;
        for( int m=1; m<=x; m++){
            z = x/m;
            if( z==y ){
                sum++;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}