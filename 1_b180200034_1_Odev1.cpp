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
	 string harfnotu;
     
   
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
		ofstream dosyaolustur("ogrenciler.txt",ios::app);
	    dosyaolustur.close();
	
     	ofstream dosyaolustur2("personeller.txt",ios::app);
     	dosyaolustur2.close();
		
	
	
	
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
		
		
	
		
		
		if(secim==1){
			
		    
		    cout<<endl;
		    cout<<"Ogrencinin bilgilerini giriniz..."<<endl;
		    
		    
		    cout<<"Ogencinin Tc kimlik numarasi : "<<endl;
		    cin>>o.TCno;
		    cout<<"Ogencinin adi : "<<endl;
		    cin>>o.adi;
		    cout<<"Ogencinin soyadi : "<<endl;
		    cin>>o.soyadi;	
		    cout<<"Ogencinin okul numarasi : "<<endl;
		    cin>>o.ogrencino;
		    cout<<"Ogencinin dogum tarihi : "<<endl;
		    cin>>o.dogumtarihi;
		    cout<<"Ogencinin bolumu : "<<endl;
		    cin>>o.bolumu;
		    cout<<"Ogencinin kayit tarihi : "<<endl;
		    cin>>o.kayittarihi;
		    
		    
		    
		    
		    cout<<"Ogrencinin aldigi ders sayisini giriniz : "<<endl;
		    cin>>o.derssayisi;
		    
		    dosyaolustur.open("ogrenciler.txt",ios::app);
		
		    dosyaolustur<<"\n"<<o.TCno<<"\t"<<o.adi<<"\t"<<o.soyadi<<"\t"<<o.ogrencino<<"\t"<<o.dogumtarihi<<"\t"<<o.bolumu<<"\t"<<o.kayittarihi<<"\t"<<o.derssayisi;
		   
		    dosyaolustur.close();
		
		    
		   
		    
		    
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
		    		dosyaolustur<<"\t"<<o.dersadi<<"\t"<<o.vize<<"\t"<<o.kisasinav1;
		            dosyaolustur<<"\t"<<o.kisasinav2<<"\t"<<o.odev<<"\t"<<o.final<<"\t"<<o.ortalama;
		    		dosyaolustur.close();
		    		
		    		
		    		
		    	
		    		
		    		if(o.ortalama<=39.99&&o.ortalama>=0)
		    		{
		    		    dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tFF";
		                dosyaolustur.close();
		    			
					}
					
					else if(o.ortalama<=49.99&&o.ortalama>=40)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tFD";
		                dosyaolustur.close();
					}
					
					else if(o.ortalama<=54.99&&o.ortalama>=50)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tDD";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=65.99&&o.ortalama>=55)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tDC";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=70.99&&o.ortalama>=66)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tCC";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=74.99&&o.ortalama>=71)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tC";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=82.99&&o.ortalama>=75)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tBB";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=89.99&&o.ortalama>=83)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tBA";
		                dosyaolustur.close();
					}
					else if(o.ortalama<=100&&o.ortalama>=90)
					{
						dosyaolustur.open("ogrenciler.txt",ios::app);
		                dosyaolustur<<"\tFF";
		                dosyaolustur.close();
					}
				    
		    	
		    		
		    	}
	   
		    
		    }
		    
		    
		
		 if(secim==2)
		{
			string tcguncel;
			
			ifstream dosyaoku("ogrenciler.txt");
			ofstream dosyaolustur("guncel.txt");
			
			cout<<"Guncelleme yapmak istediginiz ogrencinin TC kimlik numarasini giriniz : ";
			cin>>tcguncel;
			
		   	 
			   string TC1,TC2;
			
		       while(!dosyaoku.eof()){
			   
			      ogrenciler o1;
			      
			      getline(dosyaoku,TC1);
			      TC2=TC1.substr(0,tcguncel.length());
			      
			      if(TC2==tcguncel){
			      	
			      	cout<<endl;
		            cout<<"Ogrencinin bilgilerini giriniz..."<<endl;
		            
		            
		            cout<<"Ogencinin Tc kimlik numarasi : "<<endl;
		            cin>>o1.TCno;
		            cout<<"Ogencinin adi : "<<endl;
		            cin>>o1.adi;
		            cout<<"Ogencinin soyadi : "<<endl;
		            cin>>o1.soyadi;
		            cout<<"Ogencinin okul numarasi : "<<endl;
		            cin>>o1.ogrencino;
		            cout<<"Ogencinin dogum tarihi : "<<endl;
		            cin>>o1.dogumtarihi;
		            cout<<"Ogencinin bolumu : "<<endl;
		            cin>>o1.bolumu;
		            cout<<"Ogencinin kayit tarihi : "<<endl;
		            cin>>o1.kayittarihi;
		    
		    
                   cout<<"Ogrencinin aldigi ders sayisini giriniz : "<<endl;
		    cin>>o1.derssayisi;
		    
		    
	        	  dosyaolustur<<"\t"<<o1.TCno<<"\t"<<o1.adi<<" \t"<<o1.soyadi;
		          dosyaolustur<<"\t"<<o1.ogrencino<<"\t"<<o1.dogumtarihi;
		          dosyaolustur<<"\t"<<o1.bolumu<<"\t"<<o1.kayittarihi<<"\t"<<o1.derssayisi;
		       
		
		    
		   
		   
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
		    		
		    		
		    	
		    		dosyaolustur<<"\t"<<o1.dersadi<<"\t"<<o1.vize<<"\t"<<o1.kisasinav1;
		            dosyaolustur<<"\t"<<o1.kisasinav2<<"\t"<<o1.odev<<"\t"<<o1.final<<"\t"<<o1.ortalama;
		    	
		    		
		    		
		    		
		    	
		    		
		    		if(o1.ortalama<=39.99&&o1.ortalama>=0)
		    		{
		    		    
		                dosyaolustur<<"\tFF  ";
		               
		    			
					}
					
					else if(o1.ortalama<=49.99&&o1.ortalama>=40)
					{
						
		                dosyaolustur<<"\tFD ";
		             
					}
					
					else if(o1.ortalama<=54.99&&o1.ortalama>=50)
					{
						
		                dosyaolustur<<"\tDD ";
		                
					}
					else if(o1.ortalama<=65.99&&o1.ortalama>=55)
					{
						
		                dosyaolustur<<"\tDC ";
		               
					}
					else if(o1.ortalama<=70.99&&o1.ortalama>=66)
					{
						
		                dosyaolustur<<"\tCC ";
		              
					}
					else if(o1.ortalama<=74.99&&o1.ortalama>=71)
					{
						
		                dosyaolustur<<"\tCB ";
		                
					}
					else if(o1.ortalama<=82.99&&o1.ortalama>=75)
					{
				
		                dosyaolustur<<"\tBB ";
		               
					}
					else if(o1.ortalama<=89.99&&o1.ortalama>=83)
					{
					
		                dosyaolustur<<"\tBA ";
		               
					}
					else if(o1.ortalama<=100&&o1.ortalama>=90)
					{
					
		                dosyaolustur<<"\tFF ";
		                
					}
				    
		    
		    		
		    	}
	   
		  }
			
		
			else {
				    cout<<"Girilen TC ile uyusan ogrenci bulunamamistir."<<endl;
				    
		    	}
		}
		         	dosyaoku.close();
			        dosyaolustur.close();
			        
			        remove("ogrenciler.txt");
			        rename("guncel.txt","ogrenciler.txt");
			
				
		}     
	
	
	 
		if(secim==3){
			
			string silinecektc;
			
			cout<<"Silmek istediginiz ogrencinin TC kimlik numarasini giriniz : ";
			cin>>silinecektc;
			
			ifstream dosyaoku("ogrenciler.txt");
			
			ofstream dosyaolustur("guncel.txt");
			
			string TC1,TC2;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,TC1);
				TC2=TC1.substr(0,silinecektc.length());
				
				
				if(TC2==silinecektc){
					
					cout<<"Silme islemi gerceklesmistir."<<endl;
				}
				
				else if(TC2!=silinecektc){
					
					dosyaolustur<<TC1<<endl;
					
				}
			}
			
			
			dosyaoku.close();
			dosyaolustur.close();
			
			remove("ogrenciler.txt");
			rename("guncel.txt","ogrenciler.txt");
		}
		
		
		
		
		
		
		
		
		
		
		
		
		if(secim==4){
			
			personeller p;
			
			cout<<endl;
		    cout<<"Personelin bilgilerini giriniz..."<<endl;
		    
		    
		    cout<<"Personelin Tc kimlik numarasi : "<<endl;
		    cin>>p.TC;
		    cout<<"Personelin adi : "<<endl;
		    cin>>p.personeladi;
		    cout<<"Personelin soyadi : "<<endl;
		    cin>>p.personelsoyadi;
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
		    
		    dosyaolustur2<<p.TC<<"  "<<p.personeladi<<"  "<<p.personelsoyadi;
		    dosyaolustur2<<" Personelin unvani : "<<p.unvani<<" Personel no : "<<p.personelno;
		    dosyaolustur2<<" Personelin dogum tarihi: "<<p.personeldogumtarihi<<" Personelin bolumu : "<<p.personelbolumu<<" Personelin ise baslama tarihi : "<<p.isebaslamatarihi<<endl;
		    dosyaolustur2.close();
			
		}
		
		
		
		
		    if(secim==5){
		    	
		   	
			
			string guncelpersonel;
			
			cout<<"Guncellemek istediginiz personelin Tc kimlik numarasini giriniz : ";
			cin>>guncelpersonel;
			
			ifstream dosyaoku("personeller.txt");
			ofstream dosyaolustur("guncel.txt");
			
			string tc1,tc2;
			
		    while(!dosyaoku.eof())
		    {
		    	personeller p1;
		    	getline(dosyaoku,tc1);
		    	tc2=tc1.substr(0,guncelpersonel.length());
		    	
		    	if(tc2==guncelpersonel){
				
		    	
		   	cout<<"Personelin bilgilerini giriniz..."<<endl;
		   	
		    cout<<"Personelin Tc kimlik numarasi : "<<endl;
		    cin>>p1.TC;
		    cout<<"Personelin adi : "<<endl;
		    cin>>p1.personeladi;
		    cout<<"Personelin soyadi : "<<endl;
		    cin>>p1.personelsoyadi;
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
		    
		    
		    dosyaolustur<<p1.TC<<" "<<p1.personeladi<<"  "<<p1.personelsoyadi;
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
			
			
			
		
			string personelsil;
			
			cout<<"Silmek istediginiz personelin TC kimlik numarasini giriniz : ";
			cin>>personelsil;
			
			ifstream dosyaoku("personeller.txt");
			ofstream dosyaolustur2("guncel.txt");
			
			string tc1,tc2;
			
			while(!dosyaoku.eof()){
				
				getline(dosyaoku,tc1);
				tc2=tc1.substr(0,personelsil.length());
				
				if(tc2==personelsil){
				  cout<<"Silme islemi gerceklesmistir."<<endl;
					
				}
				else if(tc2!=personelsil){
					dosyaolustur<<tc1<<endl;
				}
			}
			
			
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
		
		


if(secim==7){
	
	string ogrencisorgula;
	
	
	cout<<"Sorgulamak istediginiz ogrencinin TC kimlik numarasini giriniz"<<endl;
	cin>>ogrencisorgula;
	
	ifstream dosyaoku("ogrenciler.txt");

	
	while (!dosyaoku.eof()){
		
		dosyaoku>>o.TCno>>o.adi>>o.soyadi>>o.ogrencino>>o.dogumtarihi>>o.bolumu>>o.kayittarihi>>o.derssayisi;
		
		
		for(int i=1;i<=o.derssayisi;i++)	{
			
			
			dosyaoku>>o.dersadi>>o.vize>>o.kisasinav1>>o.kisasinav2>>o.odev>>o.final>>o.ortalama>>o.harfnotu;
		   
			
	 }
	    if(o.TCno==ogrencisorgula){
	    	
	    	cout<<"Ogrencinin bilgileri"<<endl;
	    	
	    	cout<<"Ogencinin Tc kimlik numarasi : "<<o.TCno<<endl;
	    	cout<<"Ogencinin adi : "<<o.adi<<endl;
		    cout<<"Ogencinin soyadi : "<<o.soyadi<<endl;
		    cout<<"Ogencinin okul numarasi : "<<o.ogrencino<<endl;
		    cout<<"Ogencinin dogum tarihi : "<<o.dogumtarihi<<endl;
		    cout<<"Ogencinin bolumu : "<<o.bolumu<<endl;
		    cout<<"Ogencinin kayit tarihi : "<<o.kayittarihi<<endl;
		    cout<<"Ogrencinin aldigi ders sayisi : "<<o.derssayisi<<endl;
		    
 
 
		    	for(int i=1;i<=o.derssayisi;i++)	{
			
		    
		    		cout<<"Ders adi : "<<o.dersadi<<endl;
					cout<<"Vize notu :"<<o.vize<<endl;
					cout<<"1.kisa sinav notu :"<<o.kisasinav1<<endl;
		            cout<<"2.kisa sinav notu : "<<o.kisasinav2<<endl;
					cout<<"Odev notu : "<<o.odev<<endl;
					cout<<"Final notu : "<<o.final<<endl;
					cout<<"Ortalama : "<<o.ortalama<<endl;
					cout<<"Harf notu : "<<o.harfnotu<<endl;
		           
		            
		    		
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
       

	
		
	}while(1==1);
	

	
	
	
	
	system("PAUSE");
	return 0;
}                                                                                                                                                                      
