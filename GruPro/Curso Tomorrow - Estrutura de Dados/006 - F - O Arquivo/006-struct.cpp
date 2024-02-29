#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

struct library{
    string name;
    int state; // 1 == Disponível, 2 == Emprestado, 0 == Nao encontrado
};

bool cmp_library(library a, library b){
    return ((a.name < b.name) || (a.name >= b.name && a.state <= b.state));
}

int binary_search_library(const vector<library>& string_list, const string& name) {
    int left = 0, right = string_list.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (name == string_list[mid].name) {
            if (string_list[mid].state == 1)
                return 1;
            else
                return 2;
        } else if (name < string_list[mid].name) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return 0;
}



int main(){
    int amount_books, quantity_searchs, answer;
    library book;
    vector<library> books;
    string search;
    cin >> amount_books;
    for (int  i = 0; i < amount_books; i++)
    {
        cin >> book.name >> book.state;
        books.push_back(book);
    }
    
    cin >> quantity_searchs;
    for (int i = 0; i < quantity_searchs; i++)
    {
        cin >> search;
        answer = binary_search_library(books, search);
        if (answer == 1)
        {
            cout << "Disponivel\n";
        }else if (answer == 2)
        {
            cout << "Emprestado\n";
        }else{
            cout << "Nao encontrado\n";
        }   
    }    
}