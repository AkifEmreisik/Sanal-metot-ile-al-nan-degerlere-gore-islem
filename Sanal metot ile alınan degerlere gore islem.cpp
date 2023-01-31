#include<iostream>

class Hesap{
	public:
		int taban;
		int yukseklik;
	virtual void alan() = 0;
	
};

class Ucgen : public Hesap{
	void alan(){
		std::cout<<"Ucgen Alan = "<<taban*yukseklik/2<<std::endl;
	}
};

class Dortgen : public Hesap{
	void alan(){
		std::cout<<"Dortgen Alan = "<<taban*yukseklik;
	}
};

void Alan1(Hesap* hesaptr){
	hesaptr->alan();
}
int main(){
	class Ucgen ucgen;
	class Dortgen dortgen;
	std::cout<<"Ucgenin tabanini giriniz"<<std::endl;
	std::cin>>ucgen.taban;
	std::cout<<"Ucgenin yukseklik giriniz"<<std::endl;
	std::cin>>ucgen.yukseklik;
	std::cout<<"Dortgenin tabanini giriniz"<<std::endl;
	std::cin>>dortgen.taban;
	std::cout<<"Dortgenin yukseklik giriniz"<<std::endl;
	std::cin>>dortgen.yukseklik;


	Alan1(&ucgen);
	Alan1(&dortgen);
	
	
	return 0;
}
