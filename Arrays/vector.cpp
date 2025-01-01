//This code is written by Karan Mashru.
#include<iostream>
#include<vector>
using namespace std;
//This code is written by Karan Mashru.
void traverse(vector<int> &a){
    int n=a.size();

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
//This code is written by Karan Mashru.
void traverse2(vector<int> &a){
    //vector<int>::iterator it=a.begin();
    auto it = a.begin();

    while(it!=a.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
}
int main()
{
    //This code is written by Karan Mashru.
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);

    //cout<<a.size()<<"\n";
    //cout<<a.capacity()<<"\n";
    //traverse(a);
    a.push_back(50);
    //cout<<a.size()<<"\n";
    //cout<<a.capacity()<<"\n";

    //cout<<&a[0]<<"\n";

    a.insert(a.begin(), 100);
    //cout<<&a[2]<<"\n";
    a.insert(a.begin()+2, 200);
    //cout<<&a[2]<<"\n";
    //cout<<&a[0]<<"\n";
    //traverse(a);

    //delete at the end
    //a.erase(a.end()-1);
    //a.pop_back();

    //delete at begin
    //cout<<&a[0]<<"\n";
    //a.erase(a.begin());
    //cout<<&a[0]<<"\n";

    //delete at given index
    a.erase(a.begin()+3);
    traverse(a);

    //This code is written by Karan Mashru.

    //cout<<a.size()<<"\n";
    //cout<<a.capacity()<<"\n";

    //a.pop_back();a.pop_back();
    //cout<<a.size()<<"\n";
    //cout<<a.capacity()<<"\n";

    /*a.shrink_to_fit();

    cout<<a.size()<<"\n";
    cout<<a.capacity()<<"\n";

    //This code is written by Karan Mashru.

    a.push_back(100);

    cout<<a.size()<<"\n";
    cout<<a.capacity()<<"\n";
    */

   //cout<<a.empty()<<"\n";
   //a.clear(); // size set to 0, but not capacity
   //cout<<a.empty()<<"\n";
   //cout<<a.capacity()<<"\n";

   traverse2(a);

   cout<<a[4]<<"\n";
   auto it = a.begin();
   cout<<*(it+4)<<"\n";
   cout<<a.back()<<"\n";
   cout<<a.front()<<"\n";

   vector<int> b(100, 10);
   cout<<b.size()<<"\n";
   cout<<b.capacity()<<"\n";

//This code is written by Karan Mashru.
}