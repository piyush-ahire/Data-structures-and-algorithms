#include<iostream>
using namespace std;

void watchVideo(int * viewsPtr){

    *viewsPtr = *viewsPtr + 1;

}
int main(){
    int views = 100;
    watchVideo(&views);

    cout<<views<<endl;

    //referance variable

    int x = 10;
    int &y = x;

    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}