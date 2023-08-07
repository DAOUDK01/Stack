#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top=-1 ;
  void push(int val){
  	if(top== SIZE-1){
  		cout<<"stack over flow "<<"\n";
	  }
	  else {
	  	top++;
	  	stack[top]=val;
	  }
  }
  void pop(){
  	if(  top< SIZE-1) {
  		cout<<"stack is empty \n";
	  }
	  else  {
	  	top--;
	  }
  }
  void disply(){
  
	  	for(int i = top; i<=0; i++){
	  		cout<<stack[top]<<"\n";
		  }
	  }
  
  int main(){
  	push(33);
  	push(22);
  	pop();
  	disply();
  }
	

