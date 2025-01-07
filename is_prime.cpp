#include <iostream>
using namespace std;
int erat(int n){
    int numbers[n+1];
    for(int i = 0; i<=n;i++){
        numbers[i] = true;
    }
    numbers[0] = numbers[1]= false;
    for(int i = 2; i*i<=n; i++){
        if(numbers[i] == true){
            for(int j = i*i; j<=n; j+=i){
                numbers[j] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++){
        if (numbers[p] == true){
            cout << p << " ";
        }
}
}
int main(){
    int n;
    cin >> n;
    erat(n);
    return 0;
}

