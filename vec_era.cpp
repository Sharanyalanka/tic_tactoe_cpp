#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it;
      for(it = v.begin(); it != v.end(); )
    {
        if(*it % 2 == 0)
            it = v.erase(it);
       else
       it++;
    }
     for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    return 0;
}