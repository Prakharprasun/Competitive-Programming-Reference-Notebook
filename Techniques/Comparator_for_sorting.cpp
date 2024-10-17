#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> vec) {
	for(auto i: vec) {
		cout << i << " ";
	}
	cout << "\n";
}

// inbuilt sort says return false to swap and true to not swap
bool should_i_swap ( int first_number , int second_number ) {
    if ( first_number > second_number ) {
        // yes swap it to get ascendin order
        return false;
    }
    return true;
}

bool should_i_swap_if_i_want_in_descending_order ( int first_number , int second_number ) {
    if ( first_number < second_number ) {
        // yes swap it to get decending order
        return false;
    }
    return true;
}

// easier implementation is by returning what you want let me show you by means of a comparator function
// basically return if it is fine, if its not itll swap
bool comparator (int first_number,int second_number) {
    // comparator function for decending order
    return (first_number > second_number);
}

int main(){
    // comparator defines custom sorting behaviour
    // comparator basically asks "should i swap"
    vector <int> a = { 1 , 2 , 3 , 4 ,5 };
    sort(a.begin(),a.end(),comparator);
    print_vector(a);
}