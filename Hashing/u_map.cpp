#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string> mp;

    // 1->Karan 2->Aditya 3->Parth 4->Abhi
    //insert, delete, lookup, size, empty, update, traverse

    //Insertion
    mp.insert({1, "Karan"});
    mp[2]="Aditya";
    mp[3]="Parth";
    mp[4]="Abhi";

    //Update
    mp[2]="Adi";
    mp.at(2)="Adi1";

    //lookup
    //cout<<mp[1]<<" "<<mp.at(1)<<"\n";
    //cout<<mp.at(3)<<"\n";

    if(mp.find(2)!=mp.end()){
        cout<<mp.at(2)<<"\n";
    }else{
        cout<<"Key 2 is not present in mp\n";
    }

    if(mp.find(3)!=mp.end()){
        cout<<mp.at(3)<<"\n";
    }else{
        cout<<"Key 3 is not present in mp\n";
    }

    //delete
    mp.erase(1);
    mp.erase(mp.begin());

    //size, empty
    cout<<"Size of the unordered map is "<<mp.size()<<" and its empty status is "<<mp.empty()<<"\n";
    //Traversal
    unordered_map<int, string>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        //cout<<it->first<<" "<<it->second<<"\n";
        cout<<(*it).first<<" "<<it->second<<"\n";
    }

    unordered_map<string, int> mp1;

    mp1["Karan"]=1;
    mp1["Abhi"]=2;

    for(auto it2=mp1.begin(); it2!=mp1.end(); it2++){
        cout<<it2->first<<" "<<it2->second<<"\n";
    }
}