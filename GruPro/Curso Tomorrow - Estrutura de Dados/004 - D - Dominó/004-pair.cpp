#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

struct domino{
    int up;
    int down;
    int sum;
};

bool cmp_domino(domino a, domino b){
    return ((a.sum < b.sum) || (a.sum == b.sum && a.up < b.up)); // || (a.sum == b.sum && a.up >= b.up && a.down < b.down)
}

int main(){
    domino piece;
    vector<domino> pieces;
    for (int i = 0; i < 10; i++){
        cin >> piece.up >> piece.down;
        piece.sum = piece.up + piece.down;
        pieces.push_back(piece);
    }
    sort(pieces.begin(), pieces.end(), cmp_domino);

    for (int i = 0; i < 10; i++){
        cout << pieces[i].up << " " << pieces[i].down << " = " << pieces[i].sum << endl;
    }    
}