class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int iter = 0;
        for (iter; iter < s.size(); iter++){
            switch (s[iter]){
                case 'I':
                    if(iter != s.size()-1){
                        switch(s[iter+1]){
                            case 'V':
                                total += 4;
                                iter +=1;
                                break;
                            case 'X':
                                total += 9;
                                iter +=1;
                                break;
                            default:
                                total += 1;
                                break;
                        }
                    }else{
                        total += 1;
                    }
                    break;
                case 'V':
                    total += 5;
                    break;
                case 'X':
                    if(iter != s.size()-1){
                        switch(s[iter+1]){
                            case 'L':
                                total += 40;
                                iter +=1;
                                break;
                            case 'C':
                                total += 90;
                                iter +=1;
                                break;
                            default:
                                total += 10;
                                break;
                        }
                    }else{
                        total += 10;
                    }
                    break;
                case 'L':
                    total += 50;
                    break;
                case 'C':
                    if(iter != s.size()-1){
                        switch(s[iter+1]){
                            case 'D':
                                total += 400;
                                iter +=1;
                                break;
                            case 'M':
                                total += 900;
                                iter +=1;
                                break;
                            default:
                                total += 100;
                                break;
                        }
                    }else{
                        total += 100;
                    }
                    break;
                case 'D':
                    total += 500;
                    break;
                case 'M':
                    total += 1000;
                    break;
                default:
                    break;
            }
        }
        return total;
    }
};