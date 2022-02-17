class Solution {
public:
	int numSquares(int n) {
		//using Lagrange's four-square theorem, also known as Bachet's conjecture, states that every natural 
		//number can be represented as the sum of four integer squares. 

		vector<int> sqr;
		int x=1;
		while(x*x<=n){ //saving all squares till n
			sqr.push_back(x*x);
			x++;
		}
		int size= sqr.size();

		for(int i=0; i<size; i++){ //for one
			if(sqr[i]==n)
				return 1;
		}

		for(int i=0; i<size; i++){
			for(int j=i; j<size; j++){ //for two
				if(sqr[i]+sqr[j]==n)
					return 2;
			}
		}

		for(int i=0; i<size; i++){ //for three
			for(int j=i; j<size; j++){
				for(int k=j; k<size; k++){
					if(sqr[i]+sqr[j]+sqr[k]==n)
						return 3;
				}
			}
		}

		return 4; //if not 1,2,3 then definitely 4
	}
};