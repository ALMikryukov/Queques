#include <iostream>
#include"RingBufer.h"
using namespace std;
using  step::Queque;

template<typename T> 
void f(Queque<T>& q) {
  /* RingBufer<T,5> rb =
       static_cast <RingBufer<T,5>>(q);/// восходящее преобразование  **пример*
    cout << rb.getSize() << endl;*/
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.pop() << " " <<endl;
    cout << q.pop() << " " << endl;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    while (!q.isEmpty()) {
        cout << q.pop() << " ";
    }
    cout << endl;
    q.pop();
}


int main()
{
    RingBufer <int, 5> rb;
    try {
        f(rb);
    }
    catch (QueIsEpty e) {
        cout << e.what() << endl;
    }
   
}
/*class Q {};
class RingBuffer:public Q {};
void f() {
    RingBufer rb;
    Q& q = rb;
    RingBufer& rb2 = (RingBufer&)q;


}*/
