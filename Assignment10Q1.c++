#include<iostream>
#include<vector>
using namespace std;

class box{
    float length;
    float width;
    float height;
    public:
    box(){
        this->length=0;
        this->width=0;
        this->height=0;
    }
    box(float length,float width,float height){
        this->length=length;
        this->width=width;
        this->height=height;
    }
    void calc(){
        double vol=length*width*height;
        cout<<vol;
    }
    void accept(){
        cout<<"ENTER DIMENSIONS";
        cin>>this->length>>this->height>>this->width;
    }
    void print(){
        cout<<"DIMENSIONS ARE"<<endl<<this->length<<endl<<this->height<<endl<<this->width;
    }

};

template <class t>
class stack{
    private:
    int top=-1;
    vector<t> v;
    int size;
    public:
    stack(int size){
        this->size=size;
    }
    void push(t data){
        if(top==size)
        {
            cout<<"Stack Overflow";
            return ;
        }
        top++;
        v.push_back(data);

    }
    void pop(){ 
        if(top==-1){
            cout<<"Stack UnderFlow";
            return;
        }
        top--;
    }
    void peep(){
        cout<<"Top Element: "<<v[top]<<endl;
    }
    bool isEmpty(){
        if(top==-1){
            return false;
        }
        return true;
    }
    void prints(){
        int n=top;
        while(n>-1)
        cout<<this->v[n--]<<endl;
    }
    int gettop(){
        return this->top;
    }
    int getadd(){
        int n=top;
        while(n>-1){
            n->
        }
    }


};
int main(){
    stack<box*> s1(5);
    int x=1;
    while ( x)
    {
        switch (x)
        {
        case 1:
        {
           box *bptr=new box;
           bptr->accept();
           s1.push(bptr);
        }
        break;
        case 2:
          for (int i = 0; i < s1.gettop(); i++){
            ->print();
          }        
        // case 3:
        // {
        //     int empid;
        //     cout << "Enter the empid to search = ";
        //     cin >> empid;
        //     for (int i = 0; i < empList.size(); i++)
        //         if (empList.at(i)->getEmpid() == empid)
        //             empList.at(i)->displayEmployee();
        // }
        // break;
        default:
            cout << "Wrong choice..." << endl;
            break;
        }
    }
    stack<box*> s2(5); 
    box *bptr=new box;

          
    return 0;

}
