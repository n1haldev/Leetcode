class MyHashMap {
public:
    MyHashMap() {
        vector<vector<int>> hashmap;
    }
    
    void put(int key, int value) {
        int flag = 0;
        for(int i = 0;i < hashmap.size(); i++) {
            if(hashmap[i][0] == key) {
                hashmap[i][1] = value;
                return;
            } 
        }  
        vector<int> ele = { key, value };
        hashmap.push_back(ele);
    }
    
    int get(int key) {
        for(int i = 0;i < hashmap.size(); i++) {
            if(hashmap[i][0] == key) 
                return hashmap[i][1];
        }        
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0;i < hashmap.size(); i++) {
            if(hashmap[i][0] == key) 
                hashmap.erase(hashmap.begin() + i);
        }    
    }
    
private:
    vector<vector<int>> hashmap;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */