#include "Notebook.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
#include <vector>
using namespace ariel;
#include <string>

void check_input(int page_num, int row, int culomn, Direction d, string const &data = ""){
    if(culomn > 99){
        throw invalid_argument("Culomn must be lower then 99");
    }
    if(culomn > 99 -data.size() && d == Direction::Horizontal){
        throw invalid_argument("Data extands row boundries");
    }
    if(page_num < 0 || row < 0 || culomn < 0){
        throw invalid_argument("page rows and culomns must be positive");
    }
}

void check_input(int page_num, int row, int culomn, Direction d, int length){
    if(culomn > 99){
        throw invalid_argument("Culomn must be lower then 99");
    }
    if(culomn > 99 - length && d == Direction::Horizontal){
        throw invalid_argument("Data extands row boundries");
    }
    if(page_num < 0 || row < 0 || culomn < 0){
        throw invalid_argument("page rows and culomns must be positive");
    }
}
// void Page::write( int row, int culomn, Direction d, string const& data){
//     if(row > numberOfRows && d == Direction::Horizontal){
//         for (int i = 0; i < row; i++){
//             rows[i + numberOfRows] = new char[100];
//             for (int j = 0; j < 100; j++){
//                 rows[i + numberOfRows][j] = '_';
//             }
//         }
//         numberOfRows += row + 1;
//     }
//     if(row + data.size() > numberOfRows && d == Direction::Vertical){
//         for (int i = 0; i < row; i++){
//             rows[i + numberOfRows] = new char[100];
//             for (int j = 0; j < 100; j++){
//                 rows[i + numberOfRows][j] = '_';
//             }
//         }
//         numberOfRows += row + 1 + data.size();
//     }
//     if(d == Direction::Horizontal){
//         for (int i = 0; i < data.size(); i++){
//             rows[row][i+culomn] = data.at(i);
//         }
//     }
//     if(d == Direction::Vertical){
//         for (int i = 0; i < data.size(); i++){
//             rows[i+row][culomn] = data.at(i);
//         }
//     }
// }


void Notebook::write(int page_num, int row, int culomn, Direction d, string const &data){
    check_input(page_num, row, culomn, d, data);
    if(numberOfPages < page_num){
        numberOfPages = page_num+1;
    }
  //  pages[page_num].write(row, culomn, d, data);
}

string Notebook::read(int page, int row, int culomn, Direction d, int length){
    string ans;
    check_input(page,row,culomn,d,length);
    // if(d == Direction::Horizontal){
    //     for (int i = culomn; i < length + culomn; i++){
    //         ans += pages[page].rows[row][i];
    //     }
    // }
    // else{
    //     for (int i = row; i < length + row; i++){
    //         ans += pages[page].rows[i][culomn];
    //     }
    // }
    return ans;
}

void Notebook::erase(int page, int row, int culomn, Direction d, int length){
    check_input(page,row,culomn,d,length);
}

void Notebook::show(int page){
    
}