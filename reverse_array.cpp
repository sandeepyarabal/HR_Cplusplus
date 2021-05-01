#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    
    vector<int> cont;
    
    for ( int i =0; i < n ; i ++)
    {   cin >> a;
        cont.push_back(a);
    }
    
   
    reverse(cont.begin(),cont.end());
    
 
    for ( auto p : cont)
    {   
      cout << p << " ";
      
    }
    return 0;
}
