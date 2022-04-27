class PeekingIterator : public Iterator {
    
    int nextVal; 
    
    bool iterHasNext; 
    
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        
        iterHasNext=Iterator::hasNext();
        
	    if (iterHasNext) nextVal = Iterator::next(); 
        
	}
	
	int peek() {
        
        return nextVal;
        
    }
	
	int next() {
        
	    int currNext = nextVal; 
        
        iterHasNext=Iterator::hasNext(); 
        
	    if (iterHasNext) nextVal = Iterator::next(); 
        
	    return currNext; 
    }
	
	bool hasNext() const {
        
	    return iterHasNext; 
        
	}
    
};