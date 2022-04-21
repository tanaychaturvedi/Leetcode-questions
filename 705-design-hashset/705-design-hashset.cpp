class MyHashSet {
public:
   vector<list<int>>vec;
    int siz;
    MyHashSet() {
        siz=1237;
        vec.resize(siz);
    }
    int hash(int key){
        return key%siz;
    }
    list<int> :: iterator search(int key){
        int idx=hash(key);
        return find(vec[idx].begin(),vec[idx].end(),key);
    }
    void add(int key) {
        if(contains(key)) return;
        int idx=hash(key);
        vec[idx].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int idx=hash(key);
        vec[idx].erase(search(key));
    }
    
    bool contains(int key) {
        int idx=hash(key);
        if(search(key)!=vec[idx].end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */