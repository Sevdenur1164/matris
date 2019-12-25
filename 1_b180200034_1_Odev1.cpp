#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>


using namespace std;

class ogrenciler{
	
   public:   //sonra bunu kaldır 
   
     string TCno;
     string adi;
     string soyadi;
     string ogrencino;             // aldığı dersleri ve onların ortalamasını girdirmen lazım aeastır
     int dogumtarihi;
     string bolumu;
     int kayittarihi;
     string dersadi;
     int vize,kisasinav1,kisasinav2,odev,final;
	 float ortalama;
	 int derssayisi;
     
   
};



class personeller{
	
	public:
		
		string TC;
		string personeladi;
		string personelsoyadi;
		string unvani;
		int personelno;
		int personeldogumtarihi;         //verdiği dersler kısmını nasıl yapacaksın biraz araştır
		string personelbolumu;
		int isebaslamatarihi;
	
		
		
};





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	
	
	do{
		
		
		 ogrenciler o;
		
		int secim;
		
		cout<<endl;
		cout<<"Ogrenci kaydi yapmak icin 1'e basiniz..."<<endl;          //YAPTIN
		cout<<"Ogrenci kaydi guncellenek icin 2'e basiniz..."<<endl;    //yaptın
		cout<<"Ogrenci kaydi silmek icin 3'e basiniz..."<<endl;         //YAPTIN
		cout<<"Personel kaydi yapmak icin 4'e basiniz..."<<endl;       //YAPTIN
		cout<<"Personel kaydi guncellemek icin 5'e basiniz..."<<endl;    //yaptın
		cout<<"Personel kaydi silmek icin 6'e basiniz..."<<endl;     //yaptın
		cout<<"Ogrenci sorgulamak icin 7'e basiniz..."<<endl;        
		cout<<"Kayitli ogrenci listesi cikarmak icin 8'e basiniz..."<<endl;         //YAPTIN
		cout<<"Kayitli personel listesi cikarmak icin 9'e basiniz..."<<endl;          //YAPTIN
		cout<<"Cikis yapmak icin 10'a basiniz..."<<endl;
		
		
		cin>>secim;
		
		
		ofstream dosyaolustur("ogrenciler.txt",ios::app);
	    dosyaolustur.close();
	
     	ofstream dosyaolustur2("personeller.txt",ios::app);
     	dosyaolustur2.close();
		
		
		
		if(secim==1){
			
		    
		    cout<<endl;
		    cout<<"Ogrencinin bilgilerini giriniz..."<<endl;
		    
		    cout<<"Ogencinin adi : "<<endl;
		    cin>>o.adi;
		    cout<<"Ogencinin soyadi : "<<endl;
		    cin>>o.soyadi;
			cout<<"Ogencinin Tc kimlik numarasi : "<<endl;
		    cin>>o.TCno;
		    cout<<"Ogencinin okul numarasi : "<<endl;
		    cin>>o.ogrencino;
		    cout<<"Ogencinin dogum tarihi : "<<endl;
		    cin>>o.dogumtarihi;
		    cout<<"Ogencinin bolumu : "<<endl;
		    cin>>o.bolumu;
		    cout<<"Ogencinin kayit tarihi : "<<endl;
		    cin>>o.kayittarihi;
		    
		    
		    dosyaolustur.open("ogrenciler.txt",ios::app);
		
		    dosyaolustur<<o.adi<<"  "<<o.soyadi<<"   Tc kimlik no : "<<o.TCno<<"  Okul numarasi : "<<o.ogrencino<<"\t Dogum tarihi : "<<o.dogumtarihi<<"  Bolumu : "<<o.bolumu<<"  Kayit tarihi : "<<o.kayittarihi<<"  ";
		   
		    dosyaolustur.close();
		
		    
		   
		    cout<<"Ogrencinin aldigi ders sayisini giriniz : "<<endl;
		    cin>>o.derssayisi;
		    
		    for(int i=1;i<=o.derssayisi;i++)
		    {
		    	
		    	
		    	
		    	cout<<i<<". dersin adini giriniz : "<<endl;
		    	cin>>o.dersadi;
		    	
		    	
		    
		    	
		    		cout<<o.dersadi<<" dersinin vize notunu giriniz...:";
		    		cin>>o.vize;
		    		cout<<o.dersadi<<" dersinin 1.kisa sinav notunu giriniz...:";
		    		cin>>o.kisasinav1;
		    		cout<<o.dersadi<<" dersinin 2.kisa sinav notunu giriniz...:";
		    		cin>>o.kisasinav2;
		    		cout<<o.dersadi<<" dersinin odev notunu giriniz...:";
		    		cin>>o.odev;
		    		cout<<o.dersadi<<" dersinin final sinav notunu giriniz...:";
		    		cin>>o.final;
		    		
		    		o.ortalama =(float)o.vize*(0.30)+0.05*((float)o.kisasinav1+(float)o.kisasinav2)+(float)o.odev*0.10+(float)o.final*0.50;
		    		
		    		cout<<"Ogrencinin ortalamasi : "<<o.ortalama<<endl;
		    		
		    		
		    		dosyaolustur.open("ogrenciler.txt",ios::app);
		    		dosyaolustur<<"Ders adi : "<<o.dersadi<<"   Vize notu :"<<o.vize<<"   1.kisa sinav notu :"<<o.kisasinav1;
		            dosyaolustur<<"   2.kisa sinav notu : "<<o.kisasinav2<<"   Odev notu : "<<o.odev<<"   Final notu : "<<o.final<<"   Ortalama : "<<o.ortalama;
		    		dosyaolustur.close();
		    		
		    		
		    		
		    	
		    		
		    		if(o.ortalama<=39.99&&o.ortalama>=0)
		    		{
		    		    dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : FF ";
		                dosyaolustur.close();
		    			
					}
					
					else if(o.ortalama<=49.99&&o.ortalama>=40)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : FD ";
		                dosyaolustur.close();
					}
					
					else if(o.ortalama<=54.99&&o.ortalama>=50)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : DD ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=65.99&&o.ortalama>=55)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : DC ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=70.99&&o.ortalama>=66)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : CC ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=74.99&&o.ortalama>=71)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : CB ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=82.99&&o.ortalama>=75)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : BB ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=89.99&&o.ortalama>=83)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : BA ";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=100&&o.ortalama>=90)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"  Harf notu : FF ";
		                dosyaolustur.close();
					}
				    
		    	
		    		
		    	}
	   
		    
		    }
		    
		    
		
		 if(secim==2)
		{
			string isim;
			
			cout<<"Guncelleme yapmak istediginiz ogrencinin adini giriniz : ";
			cin>>isim;
			
		   	 ifstream dosyaoku("ogrenciler.txt");
			 ofstream dosyaolustur("guncel.txt");
			
			   string ad,ad1;
			
		       while(!dosyaoku.eof()){
			   
			      ogrenciler o1;
			      
			      getline(dosyaoku,ad);
			      ad1=ad.substr(0,isim.length());
			      
			      if(ad1==isim){
			      	
			      	cout<<endl;
		            cout<<"Ogrencinin bilgilerini giriniz..."<<endl;
		            
		            cout<<"Ogencinin adi : "<<endl;
		            cin>>o1.adi;
		            cout<<"Ogencinin soyadi : "<<endl;
		            cin>>o1.soyadi;
					cout<<"Ogencinin Tc kimlik numarasi : "<<endl;
		            cin>>o1.TCno;
		            cout<<"Ogencinin okul numarasi : "<<endl;
		            cin>>o1.ogrencino;
		            cout<<"Ogencinin dogum tarihi : "<<endl;
		            cin>>o1.dogumtarihi;
		            cout<<"Ogencinin bolumu : "<<endl;
		            cin>>o1.bolumu;
		            cout<<"Ogencinin kayit tarihi : "<<endl;
		            cin>>o1.kayittarihi;
		    
		    
                  
		    
	        	  dosyaolustur<<o1.adi<<"  "<<o1.soyadi<<"Ogrencinin TC kimlik numarasi : "<<o1.TCno;
		          dosyaolustur<<" OGrencinin okul numarasi : "<<o1.ogrencino<<" Ogrencinin dogum tarihi : "<<o1.dogumtarihi;
		          dosyaolustur<<" Ogrencinin bolumu : "<<o1.bolumu<<" Ogrencinin kayit tarihi : "<<o1.kayittarihi;
		       
		
		    
		   
		    cout<<"Ogrencinin aldigi ders sayisini giriniz : "<<endl;
		    cin>>o1.derssayisi;
		    
		    for(int i=1;i<=o1.derssayisi;i++)
		    {
		    	
		    	
		    	
		    	cout<<i<<". dersin adini giriniz : "<<endl;
		    	cin>>o1.dersadi;
		    	
		    	
		    
		    	
		    		cout<<o1.dersadi<<" dersinin vize notunu giriniz...:";
		    		cin>>o1.vize;
		    		cout<<o1.dersadi<<" dersinin 1.kisa sinav notunu giriniz...:";
		    		cin>>o1.kisasinav1;
		    		cout<<o1.dersadi<<" dersinin 2.kisa sinav notunu giriniz...:";
		    		cin>>o1.kisasinav2;
		    		cout<<o1.dersadi<<" dersinin odev notunu giriniz...:";
		    		cin>>o1.odev;
		    		cout<<o1.dersadi<<" dersinin final sinav notunu giriniz...:";
		    		cin>>o1.final;
		    		
		    		o1.ortalama =(float)o1.vize*(0.30)+0.05*((float)o1.kisasinav1+(float)o1.kisasinav2)+(float)o1.odev*0.10+(float)o1.final*0.50;
		    		
		    		cout<<"Ogrencinin ortalamasi : "<<o1.ortalama<<endl;
		    		
		    		
		    	
		    		dosyaolustur<<"Ders adi : "<<o1.dersadi<<"  Vize notu :"<<o1.vize<<"  1.kisa sinav notu :"<<o1.kisasinav1;
		            dosyaolustur<<"  2.kisa sinav notu : "<<o1.kisasinav2<<"  Odev notu : "<<o1.odev<<"  Final notu : "<<o1.final<<"  Ortalama : "<<o1.ortalama;
		    	
		    		
		    		
		    		
		    	
		    		
		    		if(o1.ortalama<=39.99&&o1.ortalama>=0)
		    		{
		    		    
		                dosyaolustur<<"  Harf notu : FF "<<"\n"<<endl;
		               
		    			
					}
					
					else if(o1.ortalama<=49.99&&o1.ortalama>=40)
					{
						
		                dosyaolustur<<"  Harf notu : FD "<<"\n"<<endl;
		             
					}
					
					else if(o1.ortalama<=54.99&&o1.ortalama>=50)
					{
						
		                dosyaolustur<<"  Harf notu : DD "<<"\n"<<endl;
		                
					}
					else if(o1.ortalama<=65.99&&o1.ortalama>=55)
					{
						
		                dosyaolustur<<"  Harf notu : DC "<<"\n"<<endl;
		               
					}
					else if(o1.ortalama<=70.99&&o1.ortalama>=66)
					{
						
		                dosyaolustur<<"  Harf notu : CC "<<"\n"<<endl;
		              
					}
					else if(o1.ortalama<=74.99&&o1.ortalama>=71)
					{
						
		                dosyaolustur<<"  Harf notu : CB "<<"\n"<<endl;
		                
					}
					else if(o1.ortalama<=82.99&&o1.ortalama>=75)
					{
				
		                dosyaolustur<<"  Harf notu : BB "<<"\n"<<endl;
		               
					}
					else if(o1.ortalama<=89.99&&o1.ortalama>=83)
					{
					
		                dosyaolustur<<"  Harf notu : BA "<<"\n"<<endl;
		               
					}
					else if(o1.ortalama<=100&&o1.ortalama>=90)
					{
					
		                dosyaolustur<<"  Harf notu : FF "<<"\n"<<endl;
		                
					}
				    
		    	
		    		
		    	}
	   
		  }
			
		
			else {
				    cout<<"Girilen isimde ogrenci bulunamamistir."<<endl;
				    break;
		    	}
		}
		         	dosyaoku.close();
			        dosyaolustur.close();
			        
			        remove("ogrenciler.txt");
			        rename("guncel.txt","ogrenciler.txt");
			
				
		}     
	
	
	 
		if(secim==3){
			
			string isim;
			
			cout<<"Silmek istediginiz ogrencinin ismini giriniz : ";
			cin>>isim;
			
			ifstream dosyaoku("ogrenciler.txt");
			
			ofstream dosyaolustur("guncel.txt");
			
			string ad,ad1;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,ad);
				ad1=ad.substr(0,isim.length());
				
				if(ad1!=isim){
					
					dosyaolustur<<ad<<endl;
					
				}
			}
			
			cout<<"Silme islemi gerceklesmistir."<<endl;
			dosyaoku.close();
			dosyaolustur.close();
			
			remove("ogrenciler.txt");
			rename("guncel.txt","ogrenciler.txt");
		}
		
		
		
		
		
		
		
		
		
		
		
		
		if(secim==4){
			
			personeller p;
			
			cout<<endl;
		    cout<<"Personelin bilgilerini giriniz..."<<endl;
		    
		    cout<<"Personelin adi : "<<endl;
		    cin>>p.personeladi;
		    cout<<"Personelin soyadi : "<<endl;
		    cin>>p.personelsoyadi;
			cout<<"Personelin Tc kimlik numarasi : "<<endl;
		    cin>>p.TC;
		    cout<<"Personelin unvani : "<<endl;
		    cin>>p.unvani;
		    cout<<"Personel no : "<<endl;
		    cin>>p.personelno;
		    cout<<"Personelin dogum tarihi : "<<endl;
		    cin>>p.personeldogumtarihi;
		    cout<<"Personelin bolumu : "<<endl;
		    cin>>p.personelbolumu;
		    cout<<"Personelin ise baslama tarihi : "<<endl;
		    cin>>p.isebaslamatarihi;
		    
		    dosyaolustur2.open("personeller.txt",ios::app);
		    
		    dosyaolustur2<<p.personeladi<<"  "<<p.personelsoyadi<<"  Personelin TC kimlik numarasi : "<<p.TC;
		    dosyaolustur2<<" Personelin unvani : "<<p.unvani<<" Personel no : "<<p.personelno;
		    dosyaolustur2<<" Personelin dogum tarihi: "<<p.personeldogumtarihi<<" Personelin bolumu : "<<p.personelbolumu<<" Personelin ise baslama tarihi : "<<p.isebaslamatarihi<<endl;
		    dosyaolustur2.close();
			
		}
		
		
		
		
		    if(secim==5){
		    	
		   	
			
			string isim;
			
			cout<<"Guncellemek istediginiz personelin ismini giriniz : ";
			cin>>isim;
			
			ifstream dosyaoku("personeller.txt");
			ofstream dosyaolustur("guncel.txt");
			
			string ad,ad1;
			
		    while(!dosyaoku.eof())
		    {
		    	personeller p1;
		    	getline(dosyaoku,ad);
		    	ad1=ad.substr(0,isim.length());
		    	
		    	if(ad1==isim){
				
		    	
		    	cout<<"Personelin bilgilerini giriniz..."<<endl;
		    
		    cout<<"Personelin adi : "<<endl;
		    cin>>p1.personeladi;
		    cout<<"Personelin soyadi : "<<endl;
		    cin>>p1.personelsoyadi;
			cout<<"Personelin Tc kimlik numarasi : "<<endl;
		    cin>>p1.TC;
		    cout<<"Personelin unvani : "<<endl;
		    cin>>p1.unvani;
		    cout<<"Personel no : "<<endl;
		    cin>>p1.personelno;
		    cout<<"Personelin dogum tarihi : "<<endl;
		    cin>>p1.personeldogumtarihi;
		    cout<<"Personelin bolumu : "<<endl;
		    cin>>p1.personelbolumu;
		    cout<<"Personelin ise baslama tarihi : "<<endl;
		    cin>>p1.isebaslamatarihi;
		    
		    
		    dosyaolustur<<p1.personeladi<<"  "<<p1.personelsoyadi<<"  Personelin TC kimlik numarasi : "<<p1.TC;
		    dosyaolustur<<" Personelin unvani : "<<p1.unvani<<" Personel no : "<<p1.personelno;
		    dosyaolustur<<" Personelin dogum tarihi: "<<p1.personeldogumtarihi<<" Personelin bolumu : "<<p1.personelbolumu<<" Personelin ise baslama tarihi : "<<p1.isebaslamatarihi<<endl;
		    
		     break;
	     	}
	     	else 
	     	{
	     		cout<<"Girilen isimde personel bulunamamistir."<<endl;
	     		break;
			 }
	}
		    
		
		   dosyaoku.close();
		   dosyaolustur.close();
		   
		   remove("personeller.txt");
		   rename("guncel.txt","personeller.txt");
		  
	}
		
			if(secim==6){
			
			
			ifstream dosyaoku("personeller.txt");
		
			string isim;
			
			cout<<"Silmek istediginiz personelin ismini giriniz : ";
			cin>>isim;
			
			ofstream dosyaolustur2("guncel.txt");
			
			string ad,ad1;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,ad);
				ad1=ad.substr(0,isim.length());
				
				if(ad1!=isim){
					
					dosyaolustur2<<ad<<endl;
					
				}
			}
			
			cout<<"Silme islemi gerceklesmistir."<<endl;
			dosyaoku.close();
			dosyaolustur2.close();
			
			remove("personeller.txt");
			rename("guncel.txt","personeller.txt");
		}
		
		
		
		
		
		
		else if(secim==8){
			
			ifstream dosyaoku("ogrenciler.txt");
			
			string bilgi;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,bilgi);
				
				cout<<bilgi<<endl;
			}
			
			dosyaoku.close();
		}
		
		else if(secim==9){
			
			ifstream dosyaoku("personeller.txt");
			
			string bilgi2;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,bilgi2);
				
				cout<<bilgi2<<endl;
			}
			
			dosyaoku.close();
		}
		
		
//		
//		if(secim==7){     // Açıyor ama göstermiyor bir daha dene..
//			
//			string sorgulaogrenci;
//			ogrenciler o;
//			
//			cout<<"Sorgulamak istediginiz ogrencinin ismini giriniz : ";
//			cin>>sorgulaogrenci;
//			
//			ifstream dosyaoku("ogrenciler.txt");
//			dosyaolustur.open("ogrenciler.txt");
//			
//			while(!dosyaoku.eof()){
//				
//				dosyaoku>>o.adi>>o.soyadi>>o.TCno>>o.bolumu>>o.dogumtarihi>>o.ogrencino>>o.kayittarihi>>o.dogumtarihi;
//				
//				if(sorgulaogrenci==o.adi)
//				{
//					cout<<"Ogrenci bilgileri "<<endl;
//					
//					cout<<"Ogencinin adi : "<<o.adi;
//		            cout<<"Ogencinin soyadi : "<<o.soyadi;
//		           	cout<<"Ogencinin Tc kimlik numarasi : "<<o.TCno;
//		            cout<<"Ogencinin okul numarasi : "<<o.ogrencino;
//		            cout<<"Ogencinin dogum tarihi : "<<o.dogumtarihi;
//		            cout<<"Ogencinin bolumu : "<<o.bolumu;
//		            cout<<"Ogencinin kayit tarihi : "<<o.kayittarihi;
//		            
//		            int derssayisi;
//		            
//		            for(int i=1;i<=derssayisi;i++)
//		    {
//		    	
//		    		
//		    		cout<<"Ders adi : "<<o.dersadi<<"   Vize notu :"<<o.vize<<"   1.kisa sinav notu :"<<o.kisasinav1;
//		            cout<<"   2.kisa sinav notu : "<<o.kisasinav2<<"   Odev notu : "<<o.odev<<"   Final notu : "<<o.final<<"   Ortalama : "<<o.ortalama;
//	
//		    		
//		    		if(o.ortalama<=39.99&&o.ortalama>=0)
//		    		{
//		    		    
//		                cout<<"  Harf notu : FF ";
//		    			
//					}
//					
//					else if(o.ortalama<=49.99&&o.ortalama>=40)
//					{
//					
//		                cout<<"  Harf notu : FD ";
//
//					}
//					
//					else if(o.ortalama<=54.99&&o.ortalama>=50)
//					{
//						
//		                cout<<"  Harf notu : DD ";
//		                
//					}
//					else if(o.ortalama<=65.99&&o.ortalama>=55)
//					{
//						
//		                cout<<"  Harf notu : DC ";
//		                
//					}
//					else if(o.ortalama<=70.99&&o.ortalama>=66)
//					{
//						
//		                cout<<"  Harf notu : CC ";
//		                
//					}
//					else if(o.ortalama<=74.99&&o.ortalama>=71)
//					{
//						
//		                cout<<"  Harf notu : CB ";
//		                
//					}
//					else if(o.ortalama<=82.99&&o.ortalama>=75)
//					{
//						
//		                cout<<"  Harf notu : BB ";
//		                
//					}
//					else if(o.ortalama<=89.99&&o.ortalama>=83)
//					{
//						
//		                cout<<"  Harf notu : BA ";
//		               
//					}
//					else if(o.ortalama<=100&&o.ortalama>=90)
//					{
//						
//		                cout<<"  Harf notu : FF ";
//		                
//					}
//				    
//		    	
//		    	dosyaoku.close();	
//		            
//		            
//				}
//			}
//		}
//}


if(secim==7){
	
	string ogrencisorgula;
	ifstream dosyaoku("ogrenciler.txt");
	
	cout<<"Sorgulamak istediginiz ogrencinin ismini giriniz"<<endl;
	cin>>ogrencisorgula;
	

	
	while (!dosyaoku.eof()){
		
		dosyaoku>>o.adi>>o.soyadi>>o.TCno>>o.ogrencino>>o.dogumtarihi>>o.bolumu>>o.kayittarihi>>o.bolumu>>o.dersadi>>o.kisasinav1>>o.kisasinav2>>o.odev>>o.vize>>o.final>>o.ortalama;
		
	
	    if(o.adi==ogrencisorgula){
	    	
	    	cout<<"Ogrencinin bilgileri"<<endl;
	    	
	    	cout<<"Ogencinin adi : "<<o.adi<<endl;
		    cout<<"Ogencinin soyadi : "<<o.soyadi<<endl;
            cout<<"Ogencinin Tc kimlik numarasi : "<<o.TCno<<endl;
		    cout<<"Ogencinin okul numarasi : "<<o.ogrencino<<endl;
		    cout<<"Ogencinin dogum tarihi : "<<o.dogumtarihi<<endl;
		    cout<<"Ogencinin bolumu : "<<o.bolumu<<endl;
		    cout<<"Ogencinin kayit tarihi : "<<o.kayittarihi<<endl;
		    
 
 
		    		
		    
		    		cout<<"Ders adi : "<<o.dersadi<<"   Vize notu :"<<o.vize<<"   1.kisa sinav notu :"<<o.kisasinav1;
		            cout<<"   2.kisa sinav notu : "<<o.kisasinav2<<"   Odev notu : "<<o.odev<<"   Final notu : "<<o.final<<"   Ortalama : "<<o.ortalama;
		           
		      
		    		if(o.ortalama<=39.99&&o.ortalama>=0)
		    		{
		    		   
		                cout<<"  Harf notu : FF ";
		             
		    			
					}
					
					else if(o.ortalama<=49.99&&o.ortalama>=40)
					{
						
		                cout<<"  Harf notu : FD ";
		                
					}
					
					else if(o.ortalama<=54.99&&o.ortalama>=50)
					{
						
		                cout<<"  Harf notu : DD ";
		               
					}
					else if(o.ortalama<=65.99&&o.ortalama>=55)
					{
					
		                cout<<"  Harf notu : DC ";
		               
					}
					else if(o.ortalama<=70.99&&o.ortalama>=66)
					{
						
		                cout<<"  Harf notu : CC ";
		              
					}
					else if(o.ortalama<=74.99&&o.ortalama>=71)
					{
			
		                cout<<"  Harf notu : CB ";
		        
					}
					else if(o.ortalama<=82.99&&o.ortalama>=75)
					{
						
		                cout<<"  Harf notu : BB ";
		                
					}
					else if(o.ortalama<=89.99&&o.ortalama>=83)
					{
					
		                cout<<"  Harf notu : BA ";
		             
					}
					else if(o.ortalama<=100&&o.ortalama>=90)
					{
						
		                cout<<"  Harf notu : FF ";
		                
					}
				    
		    
		  
		    			    
		    	dosyaoku.close();
		    break;   
    }	
		   
		    
		     else{
        	cout<<"Aradiginiz ogrenci sistemde kayitli degildir."<<endl;
        	break;
		}
}
	
}
       

		
	/*	if(secim==7){
			
			ifstream dosyaoku("ogrenciler.txt");
			string sorgulanacakisim;
			
			cout<<"Sorgulamak istediginiz ogrencinin ismini giriniz : "<<endl;
			cin>>sorgulanacakisim;
			
			if(dosyaoku.is_open()){
				
				int x=0;
				do{
					ogrenciler o3;
					dosyaoku>>o3.adi;
					
					if(o3.adi==sorgulanacakisim){
						
						cout<<o3.adi<<o3.soyadi;
					}
					}while(!dosyaoku.eof());
					
					dosyaoku.close();
					
					if(x=0)
						cout<<"Dosyada kayitli ogrenci bulunamadi"<<endl;
				}
						else
							cout<<"Dosya acilamadi.";
				
		}  //olmadıııııııııııııııı   */
	
	/*	if(secim==7){
			
			char sorgulanacakisim;
			cout<<"Sorgulamak istediginiz ogrencinin ismini giriniz : "<<endl;
			cin>>sorgulanacakisim;
			
			ifstream dosyaoku("ogrenciler.txt");
			dosyaoku.open("ogrenciler.txt");
			
			char veri;
			while(!dosyaoku.eof()){
				dosyaoku.get(veri);
				
				if(veri==sorgulanacakisim)
				{
					cout<<"Aradiginiz ogrenci ''"<<veri<<"'bulundu."<<endl;
				}
			}
			dosyaoku.close();
			
		}        dosyaoku da yazsam dosyaolusturda yazsam işe yaramadı          */

		
	}while(1==1);
	

	
	
	
	
	system("PAUSE");
	return 0;
}
