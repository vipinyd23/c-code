#include <iostream>
using namespace std;
class info{
       int age;
       char f_name[50];
       char l_name[50];
       int std;
    public:
    void detail(){
         cin>>age;
         cin>>f_name;
         cin>>l_name;
         cin>>std;
         }
    void display(){
        cout<<age<<endl;
        cout<<l_name<<", "<<f_name<<endl;
        cout<<std<<endl<<endl;
        cout<<age<<","<<f_name<<","<<l_name<<","<<std;
        
    }};
    
    int main(){
        
        info st;
        st.detail();
        st.display();
    
    return 0;
    }
