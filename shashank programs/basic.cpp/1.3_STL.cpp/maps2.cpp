#include<iostream>
#include<unordered_map>
using namespace std;

void print(unordered_map<string,double> &umap){
    for(auto &value : umap){
        cout << value.first << " " << value.second << endl;
    }
}

int main(){
 
    //inserting elements directly in map
    /*unordered_map<string,double> umap= {{"One",1},{"Two",2},{"Three",3}};
    print(umap);*/

  
    //inserting values by using [] operator
    unordered_map<string,double> umap;
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
    //print(umap); 


    //inserting values by insert function
    umap.insert(make_pair("e",2.718));
    //print(umap); 

    string key = "PI";
    if(umap.find(key)==umap.end())
        cout << key << " not found " << endl;
    else
    cout << "Found " <<  key  << endl; 
    
    //Traverse map
    //1.Using Range Based for Loop   
    /*for(auto i : umap)
    cout << i.first << " " << i.second << endl;*/

    //Using begin() and end()
    /*for(auto i=umap.begin(); i!=umap.end(); i++)
    cout << i->first << " " << i->second << endl;*/

    //Using stl iterator
    unordered_map<string,double> :: iterator it;
    for(it=umap.begin(); it!=umap.end();it++)
    cout << (*it).first << " " << (*it).second << endl;
    
}