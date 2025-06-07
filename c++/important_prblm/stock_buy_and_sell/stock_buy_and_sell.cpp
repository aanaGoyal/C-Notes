#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int selling_price[6] = {7,1,4,3,6,5};
    int max_porfit = 0;
    int best_buy = selling_price[0];
    for(int i=1;i<n;i++){
        if(selling_price[i]>best_buy){
            max_porfit=max(max_porfit,selling_price[i]-best_buy);
        }
        best_buy=min(best_buy,selling_price[i]);
    }
    cout << "Max Profit: " << max_porfit;

}
