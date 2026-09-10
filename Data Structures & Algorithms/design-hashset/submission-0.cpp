class MyHashSet {
public:

    vector<bool> hashset1;

    MyHashSet() : hashset1(1000001, false) { }

    
    void add(int key) {
        hashset1[key] = 1;
    }
    
    void remove(int key) {
        hashset1[key] = 0;
    }
    
    bool contains(int key) {
        return hashset1[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */