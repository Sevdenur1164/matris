/********************************************************
**                  SAKARYA ÜNÝVERSÝTESÝ
**                 FEN EDEBÝYAT FAKÜLTESÝ
**                   MATEMATÝK BÖLÜMÜ
**               PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**               ÖDEV NUMARASI...: 1
**               ÖÐRENCÝ ADI.....: SEVDENUR AK
**               ÖÐRENCÝ NUMARASI: B180200034
**               DERS GRUBU......: 1
*********************************************************/  



#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int satirsayisi, sutunsayisi ;
	
	cout<<"Normunu hesaplamak istediginiz matrisin satir sayisini giriniz :";
	cin>>satirsayisi;
	
	cout<<"Normunu hesaplamak istediginiz matrisin sutun sayisini giriniz :";	
	cin>>sutunsayisi;
	
	
	int secim;
	
	cout<<"1-Normunu hesaplamak icin 1 e basiniz:"<<endl;
	cout<<"Sonsuz-Normunu hesaplamak icin 2 ye basiniz:"<<endl;
	cout<<"Frobenius-Normunu hesaplamak icin 3 e basiniz:"<<endl;
	cout<<"Programdan cikmak <sonlandirmak> icin 0 a basiniz:"<<endl;
	
	cin>>secim;
	
 
	int A[satirsayisi][sutunsayisi];   /*Verilen matris A olsun. */
	
	cout<<"A matrisinin bilesenlerini giriniz..:"<<endl;
	
	for(int i=0; i<satirsayisi; i++)
	{
		for(int j=0; j<sutunsayisi; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>A[i][j];
		}

	}
	
       
	
	
	
	
	system("PAUSE");
	
	return 0;
}
