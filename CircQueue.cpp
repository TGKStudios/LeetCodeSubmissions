/**Creates a circular 'queue' using a vector, and a few 'pointers'. Ternary operator is used to scrunch everything down to one line. May not be pretty, but saves space. One of many solutions.*/

private:
    int t_, h_, c_, l;
    vector  q;
public:
   
    MyCircularQueue(int k):t_(0), h_(0), c_(0),l(k),q(k) {}
    
   
    bool enQueue(int value) {return !isFull() ? (q[t_] = value, t_=(t_+1)%q.size(), c_++,true) : false;}
    
  
    bool deQueue() {return !isEmpty() ? ((h_=h_+1)%q.size(), c_--, true) :false;}
    
   
    int Front() {return (!isEmpty()) ? q[h_] : -1; }
    
   
    int Rear() {return (!isEmpty()) ? q[(t_+q.size()-1)%q.size()] : -1;}
    
   
    bool isEmpty() {return c_==0 ? true: false;}
    
   
    bool isFull() {return c_==l ? true: false;}};
