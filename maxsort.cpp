#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> A){       // Prints array
    for(int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
    
    cout << endl;

}
int find_max(vector<int> A){        // Return the index of the larges element
    int max = A[0];
    int index = 0;

    for(int i = 0; i <A.size(); i++){
        if(A[i] >= max){
            max = A[i];
            index = i;
        }
    }

    return index;

}
void maxsort(vector<int> A){        // Prints sorted array
    vector<int> store;

    while(!A.empty()){
        int storeMax = find_max(A);
        store.insert(store.begin(), A[storeMax]);
        A.erase(A.begin() + storeMax);
    }

    printvec(store);
}
int main(){
    int size;
    cout << "Return size\n";
    cin >> size;

    vector<int> vec;

    cout << "Return inptus\n";
    for(int i = 0; i < size; i++){
        int place_holder; 
        cin >> place_holder;
        vec.push_back(place_holder);
    }

    maxsort(vec);
    return 0;
}