#include <iostream>
#include "Array.h"
using namespace std;

extern int stlarray();
extern int vector_stl();
extern int dequeue();
extern int list_stl();
extern int stack_stl();
extern int queue_stl();
extern int prio_queue();
extern int  set_stl();
extern int map_stl();
extern int algo_stl();
int main() {

	cout << "Hello"<<endl;


	

	int* a =normalarray();

	//cout << "Address received at a " << a << endl;

	cout <<"Num1 "<< a[0] <<"Num2 "<< a[1] <<"Num3 "<< a[2] << endl;
	//stlarray();
	//vector_stl();
	//dequeue();
	//list_stl();
	//stack_stl();
	//queue_stl();
	//prio_queue();
	//set_stl();
	//map_stl();
	algo_stl();


	return 0;
}