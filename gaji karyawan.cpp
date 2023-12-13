#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string nama[10];
   int jum, gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],tun_jabatan[10],pajakgapok[10],pajaklembur[10],totpajak[10],gajibersih[10];
	
   cout<<"Jumlah karyawan? : ";
   cin>>jum;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
        cout<<"Data KARYAWAN KE-"<<i<<endl;
	cout<<"Masukan Nama              : ";
	cin>>nama[i];
	cout<<"Masukan Golongan          : ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja  : ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			gapok[i]=8000000;
			tun_jabatan[i]=1200000;
			break;
		case 2 :
			gapok[i]=5000000;
			tun_jabatan[i]=500000;
			break;    
		case 3 :
			gapok[i]=2500000;
			tun_jabatan[i]=125000;
			break;
		case 4 :
			gapok[i]=1000000;
			tun_jabatan[i]=30000;
			break;
		default :
			gapok[i]=0;
			tun_jabatan[i]=0;	
	}
	
	if (jkerja[i]>173){
	    jlembur[i]=jkerja[i]-173;	
	}else{
	     jlembur[i]=0;
	}
	
	glembur[i]=jlembur[i]*20000;
	pajakgapok[i]=0.11*gapok[i];
	pajaklembur[i]=0.11*glembur[i];
	totpajak[i]=pajakgapok[i]+pajaklembur[i];
	gajibersih[i]=((gapok[i]+tun_jabatan[i]+glembur[i])-totpajak[i]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Golongan             : "<<gol[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Gaji Lembur          : "<<glembur[i]<<endl;
		cout<<"Pajak Gaji Pokok     : "<<pajakgapok[i]<<endl;
		cout<<"Pajak Lembur         : "<<pajaklembur[i]<<endl;
		cout<<"Total Pajak          : "<<totpajak[i]<<endl;
		cout<<"Tunjangan Jabatan    : "<<tun_jabatan[i]<<endl;
		cout<<"Gaji Bersih          : "<<gajibersih[i]<<endl;
		cout<<endl<<endl;	
	}	

getch();
}
