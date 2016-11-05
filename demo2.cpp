#include <iostream>
#include "console.hpp"

using namespace std;
using namespace console;

int main() {
    cout << reset << clear;

    cout << red << "red";
    cout << maroon << "maroon";
    cout << blue << "blue";
    cout << navy << "navy";
    cout << green << "green";
    cout << lime << "lime";
    cout << purple << "purple";
    cout << pink << "pink";
    cout << olive << "olive";
    cout << yellow << "yellow";
    cout << black << "black";
    cout << grey << "grey";
    cout << teal << "teal";
    cout << aqua << "aqua";
    cout << silver << "silver";
    cout << white << "white" << reset << endl;

    cout << silver << on_black << "silver on black";
    cout << silver << on_grey << "silver on grey";
    cout << silver << on_navy << "silver on navy";
    cout << silver << on_blue << "silver on blue";
    cout << silver << on_purple << "silver on purple";
    cout << white << on_pink << "white on pink";
    cout << silver << on_green << "silver on green";
    cout << silver << on_lime << "silver on lime";
    cout << silver << on_olive << "silver on olive";
    cout << silver << on_yellow << "silver on yellow";
    cout << silver << on_maroon << "silver on maroon";
    cout << silver << on_red << "silver on red";
    cout << silver << on_teal << "silver on teal";
    cout << black << on_aqua << "black on aqua";
    cout << black << on_silver << "black on silver";
    cout << black << on_white << "black on white" << reset << endl;

    cout << endl << "Press Key!" << endl;
    getchar();

    cout << yellow << on_navy;
    clear(cout);
    cout << "Hallo Welt!";
    getchar();

    cout << reset << clear;
    return 0;
}