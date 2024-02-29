#include <iostream>
#include <stack>
#include <bitset>
using namespace std;

int main (){
    string block;
    int i = 0, points = 0, height = 0, amount_blocks = 0;
    bitset<3> top_bitset, cmp;
    stack<bitset<3>> tetris;

    cin >> amount_blocks >> height;


    while (height >= tetris.size() && i < amount_blocks){
        cin >> block;
        bitset<3> block_bitset(block);
        if (tetris.size() >= 1)
        {
            top_bitset = tetris.top();
            cmp = block_bitset ^ top_bitset;
            if (cmp == 0b111 )
            {
                points += 10;
                tetris.pop();
            } else {
                tetris.push(block_bitset);
            }
            
        } else {
            tetris.push(block_bitset);
        }
        i++;        
    }
    
    if (tetris.size() >= height)
    {
        cout << "game over";
    } else {
        cout << points;
    }
    

    return 0;
}