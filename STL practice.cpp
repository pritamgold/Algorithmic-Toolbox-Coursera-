#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool f(int x, int y)
{
    return x>y;
}

void setVector()
{
    vector<int> A = {8,3,11,7,2};
   /* A.push_back(8);
    A.push_back(3);
    A.push_back(11);
    A.push_back(7);
    A.push_back(2);*/
    cout<< A[1] << endl;

    sort(A.begin(), A.end());

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(223);

    bool present= binary_search(A.begin(),A.end(),123);
    cout<< "123 searched: " << present << endl;

    present= binary_search(A.begin(),A.end(),69);
    cout<< "69 searched: " << present << endl;

    auto it1 = lower_bound(A.begin(), A.end(),100);
    auto it2 = upper_bound(A.begin(),A.end(),100);

    //cout<< it1 << " " << it2 << endl;
    cout<< *it1 << " " << *it2 << endl;
    cout<< it2-it1 << endl;
    sort(A.begin(),A.end(),f);

    for(int x: A){
        cout<< x << " ";
    }
    cout<< endl;
}

void setdemo()
{
    set<int> S;
    S.insert(10);
    S.insert(1);
    S.insert(-1);
    S.insert(-13);
    S.insert(7);

    for(int x: S){
        cout<< x << " ";
    }
    cout << endl;

//-----Find--------//
    auto it= S.find(6);
    if(it== S.end()){
        cout<< "not present\n";
    }
    else{
        cout<< "present: " << *it << endl;
    }
    /// -13,-1,1,7,10
    cout<< "lower bound\n";
    auto it2= S.lower_bound(-1);
    cout<< *it2 << endl;
    auto it3 = S.lower_bound(2);
    cout<< *it3 << endl;

    cout<< "upperbound\n";
    auto it4 = S.upper_bound(-1);
    auto it5 = S.upper_bound(0);
    cout << *it4 << " " << *it5 << endl;
 }

void mapdemo()
{
    map<int, int> A;
    A[1] = 10;
    A[3] = 32;
    A[6] = 5;

    map<char, int> X;
    string name="Pritam Golder";
    for(char c: name){
        X[c]++;
    }
    cout<< X['r'] << " " << X['s'] << endl;

}
void powerOfSTL()
{
    set<pair<int, int>> S;
    S.insert({2,3});
    S.insert({10,20});
    S.insert({30,100});
    S.insert({400,450});

    int point;
    cin>> point;

    auto it = S.upper_bound({point,INT_MAX});
    if(it==S.begin()){
        cout<< "The point isn't here.\n";
        return;
    }
    --it;
    pair<int, int> current= *it;
    if(current.first<=point && current.second>=point){
        cout<< "The point found between\n" << current.first << " " << current.second << endl;
    }
    else{
        cout<< "The point isn't here.\n";
    }




}


int main()
{
    powerOfSTL();
    return 0;
}
