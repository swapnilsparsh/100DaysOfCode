#include <bits/stdc++.h>
using namespace std;
vector <bool> kidsWithCandies(vector <int> &candies , int extraCandies)
{
    int n = candies.size() , maxCandies = 0;
    for(int i = 0 ; i < n ; i++)
        if(candies[i] > maxCandies)
            maxCandies = candies[i];
    vector <bool> result(n);
    for(int i = 0 ; i < n ; i++)
        result[i] = (candies[i] + extraCandies >= maxCandies);
    return result;
}
int main()
{
    vector <int> candies = {1 , 4 , 5 , 6 , 7};
    int extraCandies = 5;
    for(bool x : kidsWithCandies(candies , extraCandies))
        cout << (x ? "true" : "false") << " ";
    cout << '\n';
    return 0;
}