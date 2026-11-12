class MyHashMap {
private:
    vector<int> map;
public:
    MyHashMap() {
        map.resize(1000001, -1);
    }
    
    void put(int key, int value) {
        map[key] = value;    
    }
    
    void remove(int key) {
        map[key] = -1;
    }
    
    int get(int key) {
        return map[key];
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */