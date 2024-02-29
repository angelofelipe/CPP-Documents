#include <iostream>
#include <queue>
using namespace std;

int main(){
    int size, time, swap, i;
    queue<int> scheduler;

    cin >> size >> time;
    for (i = 0; i < size; i++){
        cin >> swap;
        scheduler.push(swap);
    }

    for (i = 0; i < time; i++){
        if (!(scheduler.empty())){
            swap = scheduler.front();
            swap--;
            scheduler.pop();
            if (swap > 0)
                scheduler.push(swap);            
        } else {
            break;
        }
    }
    
    if (scheduler.empty()){
        cout << "pronto";
    } else {
        cout << scheduler.size() << endl;
        while (!(scheduler.empty())){
            swap = scheduler.front();
            cout << swap << " ";
            scheduler.pop();
        }
    }

    return 0;
}