// (c) Tivole

// 54

#include <iostream>
#include <cmath>
#include <climits>
 
using namespace std;
 
double INF = 1e18;
 
int sgn(long long a){
    if(a < 0) return -1;
    else if(a == 0) return 0;
    else return 1;
}
 
struct logNumber{
    long long sign;
    double value;
    logNumber(int sign = 1, double value = 0){
        this->sign = sign;
        this->value = value;
    }
    void operator *= (long long a){
        sign *= sgn(a);
        if(sign == 0) value = 0;
        else value += log(abs(a));
    }
    bool operator >(logNumber a){
        return (sign > a.sign) or  (sign == 1 and a.sign == 1 and value > a.value) or (sign == -1 and a.sign == -1 and value < a.value);
    }
    bool operator ==(logNumber a){
        return sign == a.sign and value == a.value;
    }
};
 
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    logNumber mult[n];
    for(int i =0; i < k; i++){
        for(int j=0; j < n; j++){
            long long temp;
            cin>>temp;
            mult[j] *= temp;
        }
    }
    logNumber maxMult = mult[0];
    int maxTeam = 0;
    for(int i = 0; i < n; i++){
        if (mult[i] > maxMult){
            maxMult = mult[i];
            maxTeam = i;
        }
        else if(mult[i]==maxMult){
            maxTeam = max(i, maxTeam);
        }
    }
    cout << maxTeam + 1;
 
 
 
 
    return 0;
}