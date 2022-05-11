#include <iostream>
using namespace std;
#include<string>
int main()
{
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
   string r[5] = {s1, s2, s3, s4, s5};
   
    /*string r[5]={"a", "ccc", "bb", "eeeee", "dddd"};*/
        
      for (int i = 0; i < 4; i++)
      {
            for (int j = 0; j< 4-i; j++)
              {
                if(r[j].length()>r[j+1].length())
              {   
            string m = r[j];
            r[j ] = r[j+1];
            r[j+1] = m;
              }
              }
      } 
        
    for (int i = 0; i < 5; i++)
        cout << r[i] << endl;
     return 0;
}
