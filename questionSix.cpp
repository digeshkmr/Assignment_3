/* Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the */

#include<iostream>

using namespace std;

int main(){

    float costPrice, sellingPrice;
    float profit, profitPercent, loss, lossPercent; 

    cout << "Enter cost price : " << endl;
    cin >> costPrice;

    cout << "Enter selling price : " << endl;
    cin >> sellingPrice;

    if(costPrice > sellingPrice){
        profit = costPrice - sellingPrice;
        profitPercent = (profit / costPrice) * 100;
        cout << "Profit : " << profit << endl;
        cout << "Profit % : " << profitPercent << endl;
    }
    else{
        loss = sellingPrice - costPrice;
        lossPercent = (loss / costPrice) * 100;
        cout << "Loss : " << loss << endl;
        cout << "Loss % : " << lossPercent << endl;
    }



    return 0;
}