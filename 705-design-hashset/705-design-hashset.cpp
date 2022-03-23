class MyHashSet {
public:
    vector <bool> x;
    MyHashSet() {
        x.resize(1e6+1,false);
    }
    
    void add(int key) {
        x[key]=1;
    }
    
    void remove(int key) {
        x[key]=0;
    }
    
    bool contains(int key) {
        return x[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */