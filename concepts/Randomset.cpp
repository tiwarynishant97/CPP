class RandomizedSet {
    set<int> s;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto itr = find(s.begin(),s.end(),val);
        if (itr!=s.end()){
            return false;
        }
        else {
            s.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        auto itr = find(s.begin(),s.end(),val);
        if (itr!=s.end()){
            s.erase(itr);
            return true;
        }
        else {
            return false;
        }
        
    }
    
    int getRandom() {
        std::random_device rd;
        std::mt19937 gen(rd());
    
        // Create a uniform distribution over the range of indices
        std::uniform_int_distribution<int> dist(0, s.size() - 1);
    
        // Generate a random index
        int index = dist(gen);
        
        // Return the element at the random index
        //return s[index];

        auto it = s.begin(); // Iterator to the beginning of the set
    
        // Advance the iterator to the 5th element (index 4)
        std::advance(it, index);
    
        // Check if iterator is valid before accessing the element
        return *it;
            
        }
};
