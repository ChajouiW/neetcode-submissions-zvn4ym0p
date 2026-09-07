class TimeMap {
public:
    map<string, map<int, string>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        auto it = m.find(key);
        if (it == m.end())
            return "";
        auto itt = it->second.upper_bound(timestamp);
        if (itt == it->second.begin())
            return "";
        itt--;
        return itt->second;
    }
};
