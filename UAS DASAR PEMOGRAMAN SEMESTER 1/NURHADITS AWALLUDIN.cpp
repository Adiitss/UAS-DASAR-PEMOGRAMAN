#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
	
    int pilihan_paket, harga_paket, harga, jumlah_total, kembalian, kurang;
	long uang_muka ;
    string tanggal, alamat, nomor_hp, email, nama, pembeli;
 	const int promo = 3500000;
    string kode, jawab;
	int array [3] = {1700000, 2700000, 3000000};
	
	struct band{
		string nama;
		string nomor;
		string email;
	};

int main(){
	 band personil [2];
	 personil[0].nama = "Adits";
	 personil[0].nomor = "085721079149";
	 personil[0].email = "nurhadits.adits@gmail.com";
	 
	 cout << "--------------------------------------------" << endl;
	 cout << "  ADMIN" << endl;
	 cout << "  Nama	:" << personil[0].nama << endl;
	 cout << "  Nomor	:" << personil[0].nomor << endl;
	 cout << "  Email	:" << personil[0].email << endl;
	 cout << "--------------------------------------------" << endl;
	 


		cout << "\t\t\t\t\t=================================================================================" << endl;
        cout << "\t\t\t				--------------------------------------------------" << endl;
        cout << "\t\t   					    SELAMAT DATANG DI PRICE LIST WEDDING MUSIC" << endl;
        cout << "\t\t\t				--------------------------------------------------" << endl;;
        cout << "\t\t\t\t\t=================================================================================" << endl;
        
        
        
        	
        	
        cout << "\t\t\t\t\t=================================================================================" << endl;	
        cout << "\t\t\t\t\tSILAHKAN MASUKAN DATA ANDA : " << endl;
	    cout << "\t\t\t\t\t=================================================================================" << endl;
		
	    cout << "\t\t\t\t\tNAMA		:"; getline (cin, nama);
	    cout << "\t\t\t\t\tNOMOR HP	:"; getline (cin, nomor_hp) ;	
	    cout << "\t\t\t\t\tEMAIL\t	:"; getline (cin, email) ;
		cout << "\t\t\t\t\tTANGGAL ACARA\t:"; getline (cin, tanggal);
 		cout << "\t\t\t\t\tALAMAT	\t:"; getline (cin, alamat); 
 		
	    cout << "\t\t\t\t\t=================================================================================" << endl << endl;
	    

	    cout << "\t\t\t				--------------------------------------------------" << endl;
	    cout << "\t\t\t					 PROMO AWAL TAHUN PAKET BAND 3" << endl;
	    cout << "\t\t\t					   HARGA MENJADI RP3.500.000" << endl;
	    cout << "\t\t\t				--------------------------------------------------" << endl << endl;
	    
	    awal :

	
		cout << "\t\t\t\t\t		========== PAKET PRICE LIST WEDDING MUSIK ========" << endl;
		
	    cout << "\t\t\t\t\t1. Paket Acoustick 1" << endl;
	    cout << "\t\t\t\t\t( Vocal, Piano )" << endl;
	    cout << "\t\t\t\t\tRate Harga Rp1.700.000" << endl;
	    
	
	    cout << "\t\t\t\t\t2. Paket Band 1" << endl;
	    cout << "\t\t\t\t\t( Vocal, Guitar, Bass, Drum )" << endl;
	    cout << "\t\t\t\t\tRate Harga Rp2.700.000" << endl;
	
	
	    cout << "\t\t\t\t\t3. Paket Band 2" << endl;
	    cout << "\t\t\t\t\t( Vocal, Guitar, Bass, Drum, Piano )" << endl;
	    cout << "\t\t\t\t\tRate Harga Rp3.000.000" << endl;
	    
	
	    cout << "\t\t\t\t\t4. Paket Band 3" << endl;
	    cout << "\t\t\t\t\t( Vocal, Guitar, Bass, Drum, Piano Saxophone, Violin )" << endl;
	    cout << "\t\t\t\t\tRate Harga Rp4.000.000" << endl << endl; 
	    
	
    	cout << "\t\t\t\t\tMASUKAN PAKET PILIHAN ANDA :"; cin >> kode; 
		cin.clear(); 
		cin.sync();
  
		    if 		(kode == "1"){
		       		cout << "\t\t\t\t\tPaket Acoustick 1";
		       		harga = array [0];
		       		
		
		   }else if	(kode == "2"){
		    		cout << "\t\t\t\t\tPaket Band 1";
		        	harga = array [1];
		        	
		        	
		
		   }else if	(kode == "3"){
		        	cout << "\t\t\t\t\tPaket Band 2 ";
		        	harga = array [2];
		        	
		
		   }else if	(kode == "4"){
		        	cout << "\t\t\t\t\tPaket Band 3 ";
		        	harga = promo;
		        
		
		   }else {}
		   
		cout << endl << endl;
 	
		cout << "\t\t\t\t\t=================================================================================" << endl;
		cout << "\t\t\t\t\t\t\t\tSTRUK PEMBAYARAN " << endl;
		cout << "\t\t\t\t\t=================================================================================" << endl;

		cout << "\t\t\t\t\tNAMA PEMBOOKING\t:" << nama << endl;
    	cout << "\t\t\t\t\tNOMOR HP\t:" << nomor_hp << endl;
   		cout << "\t\t\t\t\tEMAIL\t\t:" << email << endl;
		cout << "\t\t\t\t\tTANGGAL ACARA\t:" << tanggal << endl;
		cout << "\t\t\t\t\tALAMAT\t\t:" << alamat << endl;
    
	   
	    cout << "\t\t\t\t\t=================================================================================" << endl;
	    cout << "\t\t\t\t\tJUMLAH TOTAL		: Rp"  << harga << endl;
	    cout << "\t\t\t\t\tUANG MUKA		: Rp"; cin >> uang_muka;
    
    
    	kurang = harga - uang_muka;
    
    		if (harga >= uang_muka){
    		
    			cout << "\t\t\t\t\tKEKURANGAN\t\t: Rp" << kurang << endl;
			}else{
	    		cout << "\t\t\t\t\tKEMBALI\t\t\t: Rp" << kurang * (-1) << endl;
			}
	
		cout << "\t\t\t\t\t=================================================================================" << endl;
		cout << "\t\t\t\t\tTERIMAKASIH UNTUK ANDA DAN KELUARGA ANDA " << endl;
		cout << "\t\t\t\t\tKITA AKAN MENGHIBUR TAMU DAN YANG SEPESIAL UNTUK KEDUA PENGANTIN KITA " << endl;
		cout << "\t\t\t\t\t=================================================================================" << endl;
		
		cout << "\t\t\t\t\tAPAKAH ANDA INGIN BOOKING KEMBALI? [Y/N]"; cin >> jawab;
	
		cout << endl << endl;

			while ( jawab == "Y" || jawab == "y" ){
			goto awal;	

		
}


		cout << "\t\t\t\t\t=================================================================================" << endl;
		cout << "\t\t\t\t\tTERIMAKASIH :)" << endl;
		cout << "\t\t\t\t\tSEMOGA HARIMU MENYENANGKAN" << endl;
		cout << "\t\t\t\t\t=================================================================================" << endl;

	
}



        

