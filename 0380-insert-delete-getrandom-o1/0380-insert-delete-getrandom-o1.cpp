class RandomizedSet {
public:
    set<int> truSet;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(truSet.count(val))
            return false;
        truSet.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(truSet.count(val)) {
            truSet.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int ind = rand() % truSet.size();
        auto it = truSet.begin();
        advance(it, ind);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */