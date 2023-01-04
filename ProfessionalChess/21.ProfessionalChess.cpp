#include <iostream>

int main (){
    int Pieces[6];
    std::cin >> 
	    Pieces[0]>>
	    Pieces[1]>>
	    Pieces[2]>>
	    Pieces[3]>>
	    Pieces[4]>>
	    Pieces[5];
    std::cout << 
	    1-Pieces[0] <<" "<<
	    1-Pieces[1]<<" "<<
	    2-Pieces[2]<<" "<<
	    2-Pieces[3]<<" "<<
	    2-Pieces[4]<<" "<<
	    8-Pieces[5]<<std::endl;
    return 0;
}
