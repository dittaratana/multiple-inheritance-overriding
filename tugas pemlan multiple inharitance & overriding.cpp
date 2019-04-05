 #include <iostream>
using namespace std;
class Parkiran{
	public:
	    int jumlah, harga;
	    void set(int a, int b){
	    	jumlah=a;
	    	harga=b;
		}
};
class maksparkir{
	public:
		int max(){
			return 80;
		}
};
class mtr:public maksparkir{
	public:
		int max(){
			return 50;
		}
};
class mbl:public maksparkir{
	public: 
		int max(){
			return 30;
		}
};
class motor: public Parkiran{
	public:
	    int total(){
	        return (jumlah *harga);
	    }
};
class mobil: public Parkiran{
	public:
	    int total(){
	        return ((jumlah *harga)+(0.1*jumlah*harga));
	    }
};
int main(){
	cout << "Keuntungan Parkiran MATOS hari ini"<<endl;
	motor mot;
    mobil mob;
    mtr a;
	cout<<"Jumlah max motor ";
    cout<<a.max()<<endl;
   	mbl b;	 
	cout <<"Jumlah max mobil "; 
   	cout<<b.max()<<endl;
	mot.set(30,2000);
    cout <<"total untung parkir motor= Rp"<<mot.total()<<endl;
    mob.set(24,3000);
    cout<<"total untung parkir mobil= Rp"<<mob.total()<<endl;
    return 0;
}
