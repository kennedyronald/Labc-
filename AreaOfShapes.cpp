#include<iostream>
#include<cstdlib>


using namespace std;

int CaculatingOfSquare(){
   int side1;
   int side2;

   cout<<"Enter first side:";
    cin>>side1;
   cout<<"Enter first second:";
    cin>>side2;
    return side1 * side2;
}
int CaculatingOfTriangle(){
    int base ;
    int height;

    cout<<"Enter value of your base:";
    cin>>base;
    cout<<"Enter value of your height:";
    cin>>height;
    return  (base*height)/2;

}
int caculatingOfRectangle(){
    int length;
    int width;
    
    cout<<"Enter value of your length:";
    cin>>length;
    cout<<"Enter value of your width:";
    cin>>width;
    return length * width;

}


int main(){
   int choice;
   while(true){
        cout<<"\n";
        cout<<"Please select the area of shape to calculate"<<endl;
        cout<<"1.Square"<<endl;
        cout<<"2.Triangle"<<endl;
        cout<<"3.Rectangle"<<endl;
        cout<<"4.Quit the program"<<endl;
        cout<<"\n";

        cout<<"Enter  selection:";
        cin>>choice ;
     if(!(cin >> choice)){
      cout<<"you have entered an invalid input"<<endl;

     }   
      if(choice != 4){
        switch(choice){
            case 1 :            
                    cout<< CaculatingOfSquare();
                     break;
            case 2 :
                    cout<< CaculatingOfTriangle();
                    break;
            case 3 :
                    cout<<caculatingOfRectangle();
                    break;
            default:
                    cout<< "your input was"<<" "<< choice <<" " <<"which is an invalid input"<<endl;
                    cout<<"please enter a valid input!! "<<endl;                                   

        }

        }
      else{ 
        exit(0);
        
         }   

} 
return 0; 
}