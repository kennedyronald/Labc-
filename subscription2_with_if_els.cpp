#include <iostream>
#include <random>

using namespace std;
int main(){
	
	random_device values;
	
	mt19937 numbers(values());
	
	uniform_int_distribution<> distrib(0, 11);
	
	for(int i = 0; i < 1; ++i){
		
		int daysUntilExpilation = distrib(numbers);
		if(daysUntilExpilation <= 0){
			cout<<"You subscription has expired"<<endl;
			
		}
		else if(daysUntilExpilation == 1){
			cout<<"Your Subscription expires within a day \nRenew now and save 20%"<<endl;
		}
		else if(daysUntilExpilation <= 5){
			
			cout<<"Your subscription expires in "<<daysUntilExpilation<<" days"<<"\n"<<"Renew now and save 10%"<<endl;
		}
		else if(daysUntilExpilation <= 10){
			cout<<"your subsciption will expire soon\nRenew now"<<endl;
		}
		else{
			cout<<"you have an active subscription"<<endl;
		
			}
	}
	return 0;
}