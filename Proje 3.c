#include <allegro.h>
#include <math.h>
#include <stdio.h>

void baslat();
void bitir();

int main()
{
	baslat();
	
	FILE *SKOR;
	
/*	BITMAP *ArkaplanResmi=load_bitmap("resim.bmp",NULL);	//RESIMLERI ALMAK ICIN. */
	BITMAP *Oyna=load_bitmap("oyna.bmp",NULL);
	BITMAP *Kontroller=load_bitmap("kontroller.bmp",NULL);
	BITMAP *Hakkinda=load_bitmap("hakkinda.bmp",NULL);
	BITMAP *Cikis=load_bitmap("cikis.bmp",NULL);
	BITMAP *Geri=load_bitmap("geri.bmp",NULL);
	BITMAP *TekrarOyna=load_bitmap("tekraroyna.bmp",NULL);
	BITMAP *Skorlar=load_bitmap("skorlar.bmp",NULL);
	
	BITMAP *OynaY=load_bitmap("oynay.bmp",NULL);
	BITMAP *KontrollerY=load_bitmap("kontrollery.bmp",NULL);
	BITMAP *HakkindaY=load_bitmap("hakkinday.bmp",NULL);
	BITMAP *CikisY=load_bitmap("cikisy.bmp",NULL);
	BITMAP *GeriY=load_bitmap("geriy.bmp",NULL);
	BITMAP *TekrarOynaY=load_bitmap("tekraroynay.bmp",NULL);
	BITMAP *SkorlarY=load_bitmap("skorlary.bmp",NULL);
	
	BITMAP *Bina=load_bitmap("bina.bmp",NULL);
	BITMAP *KirikBina=load_bitmap("kirikbina.bmp",NULL);
	BITMAP *Kontrol=load_bitmap("kontrol.bmp",NULL);
	BITMAP *Hakkimizda=load_bitmap("hakkimizda.bmp",NULL);
	
	BITMAP *Duran=load_bitmap("duran.bmp",NULL);
	BITMAP *SolVuran=load_bitmap("solvuran.bmp",NULL);
	BITMAP *SagVuran=load_bitmap("sagvuran.bmp",NULL);
	BITMAP *Sevinen=load_bitmap("sevinen.bmp",NULL);
	BITMAP *Uzulen=load_bitmap("uzulen.bmp",NULL);
	BITMAP *Vuran=load_bitmap("vuran.bmp",NULL);
	BITMAP *Vuramayan=load_bitmap("vuramayan.bmp",NULL);
	BITMAP *Vurulan=load_bitmap("vurulan.bmp",NULL);
	
	BITMAP *Top1=load_bitmap("top1.bmp",NULL);
	
	BITMAP *Hiz20=load_bitmap("hiz20.bmp",NULL);
	BITMAP *Hiz40=load_bitmap("hiz40.bmp",NULL);
	BITMAP *Hiz60=load_bitmap("hiz60.bmp",NULL);
	BITMAP *Hiz80=load_bitmap("hiz80.bmp",NULL);
	BITMAP *Hiz100=load_bitmap("hiz100.bmp",NULL);
	
	BITMAP *Sol0=load_bitmap("sol0.bmp",NULL);
	BITMAP *Sol37=load_bitmap("sol37.bmp",NULL);
	BITMAP *Sol45=load_bitmap("sol45.bmp",NULL);
	BITMAP *Sol53=load_bitmap("sol53.bmp",NULL);
	BITMAP *Dik=load_bitmap("dik.bmp",NULL);
	BITMAP *Sag53=load_bitmap("sag53.bmp",NULL);
	BITMAP *Sag45=load_bitmap("sag45.bmp",NULL);
	BITMAP *Sag37=load_bitmap("sag37.bmp",NULL);
	BITMAP *Sag0=load_bitmap("sag0.bmp",NULL);
	
	BITMAP *AraKatman=create_bitmap(800,600);
	
	SAMPLE *AlkisSesi=load_sample("AlkisSesi.wav");						//SES DOSYASI ALMAK ICIN.
	SAMPLE *ButonSesi=load_sample("ButonSesi.wav");
	SAMPLE *YumrukSesi=load_sample("YumrukSesi.wav");
	SAMPLE *YikilmaSesi=load_sample("YikilmaSesi.wav");
	SAMPLE *GeriSayim=load_sample("GeriSayim.wav");
	SAMPLE *Headshot=load_sample("Headshot.wav");
	SAMPLE *GameOfThrones=load_sample("GameOfThrones.wav");
	
	show_mouse(screen);				//MOUSE'un EKRANDA GÖRÜNMESÝNÝ SAÐLAR.
	play_sample(GameOfThrones,100/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,1);
	
	while(!(mouse_x>325 && mouse_x<469 && mouse_y>222 && mouse_y<265 && (mouse_b & 1)))		//CIKIS'a BASILANA KADAR PROGRAM DEVAM EDER.
	{
		clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR. */	
		blit(Oyna,AraKatman,0,0,325,50,144,43);				//OYNA BUTONUNU ARAKATMAN'da TUTAR.
		blit(Skorlar,AraKatman,0,0,325,93,144,43);			//SKORLAR BUTONUNU ARAKATMAN'da TUTAR.
		blit(Kontroller,AraKatman,0,0,325,136,144,43);		//KONTROLLER BUTONUNU ARAKATMAN'da TUTAR.
		blit(Hakkinda,AraKatman,0,0,325,179,144,43);		//HAKKINDA BUTONUNU ARAKATMAN'da TUTAR.
		blit(Cikis,AraKatman,0,0,325,222,144,43);			//ÇIKIÞ BUTONUNU ARAKATMAN'da TUTAR.
		anamenu:
			
		if(mouse_x>325 && mouse_x<469 && mouse_y>50 && mouse_y<93)
		{
			blit(OynaY,AraKatman,0,0,325,50,144,43);
		}
		else if(mouse_x>325 && mouse_x<469 && mouse_y>93 && mouse_y<136)
		{
			blit(SkorlarY,AraKatman,0,0,325,93,144,43);
		}
		else if(mouse_x>325 && mouse_x<469 && mouse_y>136 && mouse_y<179)
		{
			blit(KontrollerY,AraKatman,0,0,325,136,144,43);
		}
		else if(mouse_x>325 && mouse_x<469 && mouse_y>179 && mouse_y<222)
		{
			blit(HakkindaY,AraKatman,0,0,325,179,144,43);
		}
		else if(mouse_x>325 && mouse_x<469 && mouse_y>222 && mouse_y<265)
		{
			blit(CikisY,AraKatman,0,0,325,222,144,43);
		}
		
		if(mouse_x>325 && mouse_x<469 && mouse_y>136 && mouse_y<179 && (mouse_b & 1))	//MOUSE KONTROLLER'in ÜZERÝNDE MÝ DÝYE KONTROL EDER.
		{
			play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
			
			while(!(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48 && (mouse_b & 1)))
			{
				clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR.
				blit(Kontrol,AraKatman,0,0,0,0,800,600);			//KONTROL TABLOSUNU ARA KATMANDA TUTAR.
				blit(Geri,AraKatman,0,0,325,5,144,43);				//GERÝ BUTONUNU ARA KATMANDA TUTAR.
				if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48)
	   				{
                         blit(GeriY,AraKatman,0,0,325,5,144,43);
					}
				blit(AraKatman,screen,0,0,0,0,800,600);				//RESMÝ EKRANA BASAR.
				clear_bitmap(AraKatman);							// EKRANI TEMÝZLER.
			}
		}
		
		if(mouse_x>325 && mouse_x<469 && mouse_y>93 && mouse_y<136 && (mouse_b & 1))  //MOUSE SKORLAR'ýn ÜZERÝNDE MÝ DÝYE KONTROL EDER.
		{
			play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
			
			while(!(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48 && (mouse_b & 1)))
			{
				clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR.
				blit(Geri,AraKatman,0,0,325,5,144,43);				//GERÝ BUTONUNU ARA KATMANDA TUTAR.
				if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48)
	   				{
                         blit(GeriY,AraKatman,0,0,325,5,144,43);
					}
				
				SKOR=fopen("skorlar.txt","r");
			 	int score[3];
				int skortut;
				for(skortut=0;skortut<3;skortut++)
				{
		  		fscanf(SKOR,"%d",&score[skortut]);
				}
				
				fclose(SKOR);
				
				textprintf_ex(AraKatman,font,308,75, makecol(0,0,0),-1,"---EN YUKSEK SKORLAR---");
				textprintf_ex(AraKatman,font,375,90, makecol(255,0,0),-1,"1: %d",score[0]);
				textprintf_ex(AraKatman,font,375,105, makecol(0,100,0),-1,"2: %d",score[1]);
				textprintf_ex(AraKatman,font,375,120, makecol(0,0,255),-1,"3: %d",score[2]);
				
				blit(AraKatman,screen,0,0,0,0,800,600);				//RESMÝ EKRANA BASAR.
				clear_bitmap(AraKatman);							// EKRANI TEMÝZLER.
			}
		}
		
		if(mouse_x>325 && mouse_x<469 && mouse_y>179 && mouse_y<222 && (mouse_b & 1))  //MOUSE HAKKINDA'nýn ÜZERÝNDE MÝ DÝYE KONTROL EDER.
		{
			play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
			
			while(!(mouse_x>650 && mouse_x<794 && mouse_y>540 && mouse_y<583 && (mouse_b & 1)))
			{
				clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR.
				blit(Hakkimizda,AraKatman,0,0,0,0,800,600);
				blit(Geri,AraKatman,0,0,650,540,144,43);				//GERÝ BUTONUNU ARA KATMANDA TUTAR.
				if(mouse_x>650 && mouse_x<794 && mouse_y>540 && mouse_y<583)
	   				{
                         blit(GeriY,AraKatman,0,0,650,540,144,43);
					}
				blit(AraKatman,screen,0,0,0,0,800,600);				//RESMÝ EKRANA BASAR.
				clear_bitmap(AraKatman);							// EKRANI TEMÝZLER.
			}
		}
		
		if(mouse_x>325 && mouse_x<469 && mouse_y>50 && mouse_y<93 && (mouse_b & 1))		//MOUSE OYNA'nýn ÜZERÝNDE MÝ DÝYE KONTROL EDER.
		{
			play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
			menu:
			srand(time(NULL));	//PROGRAM HER AÇILDIÐINDA FARKLI SAYILAR ÜRETÝLMESÝNÝ SAÐLAR.
			
			int b1,b2,b3,b4,b5,b6,b7,b8;
			int i=0,hiz=0,yon=0;
			int vurus;
			float ruzgar;
			
			while(!(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48 && (mouse_b & 1)))		//MOUSE GERI'nin ÜZERÝNDE MÝ DÝYE KONTROL EDER.
			{
			 			play_sample(GeriSayim,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
			 			
    				    int k;
						for(k=3;k>0;k--)
						{
							clear_to_color(AraKatman, makecol(255,255,255)); 									// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR. */
							textprintf_ex(AraKatman,font,400,100, makecol(0,0,0),-1,"%d",k);					//3'DEN GERÝ SAYAR.
							blit(AraKatman,screen,0,0,0,0,800,600);
							rest(1000);
						}
				
				//-------------------------------------------------PLAYER 1--------------------------------------------------
				int hiztut=0,yontut1=4,yontut2=0;
				float x=0,y=0;
				int yer1x,yer1y,yer2x,yer2y;
				int topla1=0,topla2=0;
				
				for(vurus=0;vurus<3;vurus++)
				{
	   			        int puan1=0;
						rand()%200;
						b1=rand()%200;		// 1. BINA BOYU.
						b2=rand()%200;		// 2. BINA BOYU.
						b3=rand()%200;		// 3. BINA BOYU.
						b4=100+rand()%100;	// 4. BINA BOYU.
						b5=100+rand()%100;	// 5. BINA BOYU.
						b6=rand()%200;		// 6. BINA BOYU.
						b7=rand()%200;		// 7. BINA BOYU.
						b8=rand()%200;		// 8. BINA BOYU.
						
						ruzgar=-20+rand()%40+1;
					
					while(!key[KEY_SPACE])		//SPACE'E BASILANA KADAR ÇALIÞTIR.
				{
					clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR. */
					blit(Geri,AraKatman,0,0,325,5,144,43);				//GERÝ BUTONUNU ARA KATMANDA TUTAR.
					
					if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48)
	   				{
                         blit(GeriY,AraKatman,0,0,325,5,144,43);
					}
				
					// blit(Bina,AraKatman,0,b,15,225+b,100,250);	//KALIP.
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);		//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);	//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);	//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);	//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);	//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);	//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);	//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);	//8. BÝNA
				
					if(b1<=b2 && b1<=b3)
					{
						textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,10,230+b1,60,120);		//EKRANA PLAYER 1'i BASAR.
						blit(Top1,AraKatman,0,0,60,315+b1,35,35);		//EKRANA TOPU BASAR.
						x=60.0,y=315+b1;								//TOP KOORDÝNATLARI
						yer1x=10,yer1y=230+b1;							//TOPUN NEREYE GÝTTÝÐÝNÝ KONTROL ETMEK ÝÇÝN
					}
					else if(b2<b1 && b2<=b3)
					{
						textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,110,230+b2,60,120);	//EKRANA PLAYER 1'i BASAR.
						blit(Top1,AraKatman,0,0,160,315+b2,35,35);		//EKRANA TOPU BASAR.
						x=160.0,y=315+b2;
						yer1x=110,yer1y=230+b2;
					}
					else if(b3<b1 && b3<b2)
					{
						textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,210,230+b3,60,120);	//EKRANA PLAYER 1'i BASAR.
						blit(Top1,AraKatman,0,0,260,315+b3,35,35);		//EKRANA TOPU BASAR.
						x=260.0,y=315+b3;	
						yer1x=210,yer1y=230+b3;				
					}
					
					if(b8<=b7 && b8<=b6)
					{
						textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA PLAYER 2'yi BASAR.
						yer2x=735,yer2y=230+b8;
					}
					else if(b7<b8 && b7<=b6)
					{
						textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA PLAYER 2'yi BASAR.
						yer2x=635,yer2y=230+b7;
					}
					else if(b6<b7 && b6<b8)
					{
						textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA PLAYER 2'yi BASAR.
						yer2x=535,yer2y=230+b6;
					}
					
						if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48 && (mouse_b & 1))		//GERÝ BUTONUNA BASILDIÐINDA ÜST MENÜYE GÝDER.
						{
							play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
							goto menu;
						}
					
					textprintf_ex(AraKatman,font,50,15, makecol(255,0,0),-1,"HIZ");
					textprintf_ex(AraKatman,font,135,15, makecol(255,0,0),-1,"YON");
					textprintf_ex(AraKatman,font,335,55, makecol(255,0,0),-1,"OYUN SIRASI - P1");
					
					switch(vurus)
					{
						case 0: textprintf_ex(AraKatman,font,340,70, makecol(255,0,0),-1,"ATIS HAKKI: III");		break;
						case 1:	textprintf_ex(AraKatman,font,343,70, makecol(255,0,0),-1,"ATIS HAKKI: II");			break;
						case 2:	textprintf_ex(AraKatman,font,346,70, makecol(255,0,0),-1,"ATIS HAKKI: I");			break;
					}
					
					if(ruzgar<0)
					textprintf_ex(AraKatman,font,328,85, makecol(255,0,0),-1,"<<< RUZGAR: %.0f <<<",ruzgar);		//EKSÝ DEGER ÝSE RUZGARI YAZAR.
					else if(ruzgar>0)
					textprintf_ex(AraKatman,font,328,85, makecol(255,0,0),-1,">>> RUZGAR: %.0f >>>",ruzgar);		//ARTI DEGER ÝSE RUZGARI YAZAR.
					else if(ruzgar==0)
					textprintf_ex(AraKatman,font,353,85, makecol(255,0,0),-1," RUZGAR: %.0f ",ruzgar);				//SIFIR ÝSE RUZGARI YAZAR.
				
					if(hiztut<=0)
					blit(Hiz20,AraKatman,0,0,25,25,75,75);
					else if(hiztut==1)
					blit(Hiz40,AraKatman,0,0,25,25,75,75);
					else if(hiztut==2)
					blit(Hiz60,AraKatman,0,0,25,25,75,75);
					else if(hiztut==3)
					blit(Hiz80,AraKatman,0,0,25,25,75,75);
					else if(hiztut>=4)
					blit(Hiz100,AraKatman,0,0,25,25,75,75);
					
						if(key[KEY_DOWN])
						{
							if(hiztut>0)
							hiztut--;
						}
						else if(key[KEY_UP])
						{
							if(hiztut<4)
							hiztut++;
						}
					
					if(yontut1==4)
					blit(Dik,AraKatman,0,0,110,25,75,75);
					else if(yontut1==5)
					blit(Sag53,AraKatman,0,0,110,25,75,75);
					else if(yontut1==6)
					blit(Sag45,AraKatman,0,0,110,25,75,75);
					else if(yontut1==7)
					blit(Sag37,AraKatman,0,0,110,25,75,75);
					else if(yontut1>=8)
					blit(Sag0,AraKatman,0,0,110,25,75,75);
					
						if(key[KEY_LEFT])
						{
							if(yontut1>4)
							yontut1--;
						}
						else if(key[KEY_RIGHT])
						{
							if(yontut1<8)
							yontut1++;
						}
							
					rest(55);		//PROGRAMI 55 MÝLÝSANÝYE DURAKLATIR.
					blit(AraKatman,screen,0,0,0,0,800,600);		//RESMÝ EKRANA BASAR.
				}
				
				switch(hiztut)
				{
					case 0: hiz=20; 	break;		//HIZ 20
					case 1: hiz=40; 	break;		//HIZ 40
					case 2: hiz=60; 	break;		//HIZ 60
					case 3: hiz=80; 	break;		//HIZ 80
					case 4: hiz=100; 	break;		//HIZ 100
				}
				
				switch(yontut1)
				{
					case 4: yon=2; 		break;			//DIK 
					case 5: yon=3; 		break;			//SAG 53
					case 6: yon=4;	 	break;			//SAG 45
					case 7: yon=6;	 	break;			//SAG 37
					case 8: yon=20;	 	break;			//SAG 0
				}
				
		  
  		  		float teta= -M_PI/yon;		//YÜKSEKLÝK TETA'ya BAÐLI
	 	 		float hizX= (hiz+ruzgar)*cos(teta);
  				float hizY= (hiz+ruzgar)*sin(teta);
 		 		float yercekimi=9.8;
			   	float dt=0.1;
			   	int sayac1=0;
			   	
			   	//-------------------------------------------------------TOPUN HAREKETÝ-----------------------------------------------------
			   	while(x<800 && y<600)
			   	{
			   		hizY=hizY + yercekimi*dt;
					x= x + (hizX*dt);
					y= y + (hizY*dt) + 0.5*yercekimi*(dt*dt);
					
					clear_to_color(AraKatman,makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR. */
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);			//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);		//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);		//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);		//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);		//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);		//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);		//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);		//8. BÝNA
					
					if(sayac1<20)
					{
						if(b1<=b2 && b1<=b3)
						{
							textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
							blit(SolVuran,AraKatman,0,0,10,230+b1,60,120);		//EKRANA VURAN PLAYER 1'i BASAR.
						}
						else if(b2<b1 && b2<=b3)
						{
							textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
							blit(SolVuran,AraKatman,0,0,110,230+b2,60,120);		//EKRANA VURAN PLAYER 1'i BASAR.
						}
						else if(b3<b1 && b3<b2)
						{
							textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
							blit(SolVuran,AraKatman,0,0,210,230+b3,60,120);		//EKRANA VURAN PLAYER 1'i BASAR.	
						}
					}
					else
					{
						if(b1<=b2 && b1<=b3)
						{
							textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
							blit(Duran,AraKatman,0,0,10,230+b1,60,120);			//EKRANA DURAN PLAYER 1'i BASAR.
						}
						else if(b2<b1 && b2<=b3)
						{
							textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
							blit(Duran,AraKatman,0,0,110,230+b2,60,120);		//EKRANA DURAN PLAYER 1'i BASAR.
						}
						else if(b3<b1 && b3<b2)
						{
							textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
							blit(Duran,AraKatman,0,0,210,230+b3,60,120);		//EKRANA DURAN PLAYER 1'i BASAR.	
						}
					}
					
					
					if(b8<=b7 && b8<=b6)
					{
						textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					else if(b7<b8 && b7<=b6)
					{
						textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					else if(b6<b7 && b6<b8)
					{
						textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					
						
					blit(Top1,AraKatman,0,0,x,y,35,35);		//TOPUN HAREKETÝ.
					
					//----------------------------------------------RAKÝP VURMA ÝÞLEMÝ---------------------------------------------------
					if(x+17.5>yer2x && x+17.5<yer2x+60 && y+17.5>yer2y-15 && y+17.5<yer2y+25)		//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(Headshot,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						textprintf_ex(AraKatman,font,360,85,makecol(255,0,0),-1,"HEADSHOT !");
						blit(Vurulan,AraKatman,0,0,yer2x,yer2y,60,120);
						blit(Vuran,AraKatman,0,0,yer1x,yer1y,60,120);
						puan1+=20;
						x=800,y=600;
					}
					else if(x+17.5>yer2x && x+17.5<yer2x+60 && y+17.5>yer2y+25 && y+17.5<yer2y+80)		//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(YumrukSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(Vurulan,AraKatman,0,0,yer2x,yer2y,60,120);
						blit(Vuran,AraKatman,0,0,yer1x,yer1y,60,120);
						puan1+=10;
						x=800,y=600;
					}
					else if(x+17.5>yer2x && x+17.5<yer2x+60 && y+17.5>yer2y+80 && y+17.5<yer2y+120)		//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(YumrukSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(Vurulan,AraKatman,0,0,yer2x,yer2y,60,120);
						blit(Vuran,AraKatman,0,0,yer1x,yer1y,60,120);
						puan1+=5;
						x=800,y=600;
					}
					//------------------------------------------------BÝNA KIRMA ÝÞLEMÝ---------------------------------------------------------
					else if(x+17.5>0 && x+17.5<100 && y+17.5>350+b1 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b1,0,350+b1,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
		   			else if(x+17.5>100 && x+17.5<200 && y+17.5>350+b2 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b2,100,350+b2,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>200 && x+17.5<300 && y+17.5>350+b3 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b3,200,350+b3,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>300 && x+17.5<400 && y+17.5>350+b4 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b4,300,350+b4,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>400 && x+17.5<500 && y+17.5>350+b5 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b5,400,350+b5,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>500 && x+17.5<600 && y+17.5>350+b6 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b6,500,350+b6,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>600 && x+17.5<700 && y+17.5>350+b7 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b7,600,350+b7,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					else if(x+17.5>700 && x+17.5<800 && y+17.5>350+b8 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b8,700,350+b8,100,250);
						blit(Vuramayan,AraKatman,0,0,yer1x,yer1y,60,120);
						x=800,y=600;
					}
					
					//---------------------------------------------------------------------------------------------------------------------
					blit(AraKatman,screen,0,0,0,0,800,600);
					rest(10);
					sayac1++;
			   	}
			   	
			   	textprintf_ex(AraKatman,font,365,100, makecol(255,0,0),-1,"%d PUAN !",puan1);							//PUANI EKRANA YAZAR
			   	blit(AraKatman,screen,0,0,0,0,800,600);
			   	rest(1500);
			   	topla1=topla1+puan1;
	
				//--------------------------------------------------------PLAYER 2--------------------------------------------------------------
					hiztut=0;
					yon=0;
					hiz=0;
					x=0,y=0;
			
						int puan2=0;
						rand()%200;
						b1=rand()%200;	// 1. BINA BOYU.
						b2=rand()%200;	// 2. BINA BOYU.
						b3=rand()%200;	// 3. BINA BOYU.
						b4=100+rand()%100;	// 4. BINA BOYU.
						b5=100+rand()%100;	// 5. BINA BOYU.
						b6=rand()%200;	// 6. BINA BOYU.
						b7=rand()%200;	// 7. BINA BOYU.
						b8=rand()%200;	// 8. BINA BOYU.
						
						ruzgar=-20+rand()%40+1;
						
					while(!key[KEY_SPACE])		//SPACE'E BASILANA KADAR ÇALIÞTIR.
				{
					clear_to_color(AraKatman, makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR.
					blit(Geri,AraKatman,0,0,325,5,144,43);				//GERÝ BUTONUNU ARA KATMANDA TUTAR.
					
					if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48)
	   				{
                         blit(GeriY,AraKatman,0,0,325,5,144,43);
					}
				
					// blit(Bina,AraKatman,0,b,15,225+b,100,250);	//KALIP.
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);		//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);	//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);	//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);	//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);	//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);	//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);	//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);	//8. BÝNA
				
					if(b1<=b2 && b1<=b3)
					{
						textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,10,230+b1,60,120);		//EKRANA PLAYER 1'i BASAR.
						yer1x=10,yer1y=230+b1;
					}
					else if(b2<b1 && b2<=b3)
					{
						textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,110,230+b2,60,120);	//EKRANA PLAYER 1'i BASAR.
						yer1x=110,yer1y=230+b2;
					}
					else if(b3<b1 && b3<b2)
					{
						textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,210,230+b3,60,120);	//EKRANA PLAYER 1'i BASAR.
						yer1x=210,yer1y=230+b3;				
					}
					
					if(b8<=b7 && b8<=b6)
					{
						textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA PLAYER 2'yi BASAR.
						blit(Top1,AraKatman,0,0,710,315+b8,35,35);			//EKRANA TOPU BASAR.
						x=710.0,y=315+b8;
						yer2x=735,yer2y=230+b8;
					}
					else if(b7<b8 && b7<=b6)
					{
						textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA PLAYER 2'yi BASAR.
						blit(Top1,AraKatman,0,0,610,315+b7,35,35);			//EKRANA TOPU BASAR.
						x=610.0,y=315+b7;
						yer2x=635,yer2y=230+b7;
					}
					else if(b6<b7 && b6<b8)
					{
						textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA PLAYER 2'yi BASAR.
						blit(Top1,AraKatman,0,0,510,315+b6,35,35);			//EKRANA TOPU BASAR.
						x=510.0,y=315+b6;
						yer2x=535,yer2y=230+b6;
					}
					
						if(mouse_x>325 && mouse_x<469 && mouse_y>5 && mouse_y<48 && (mouse_b & 1))		//GERÝ BUTONUNA BASILDIÐINDA ÜST MENÜYE GÝDER.
						{
							play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
							goto menu;
						}
					
					textprintf_ex(AraKatman,font,640,15, makecol(0,0,255),-1,"HIZ");
					textprintf_ex(AraKatman,font,725,15, makecol(0,0,255),-1,"YON");
					textprintf_ex(AraKatman,font,335,55, makecol(0,0,255),-1,"OYUN SIRASI - P2");
					
					switch(vurus)
					{
						case 0: textprintf_ex(AraKatman,font,340,70, makecol(0,0,255),-1,"ATIS HAKKI: III");		break;
						case 1:	textprintf_ex(AraKatman,font,343,70, makecol(0,0,255),-1,"ATIS HAKKI: II");			break;
						case 2:	textprintf_ex(AraKatman,font,346,70, makecol(0,0,255),-1,"ATIS HAKKI: I");			break;
					}
					
					if(ruzgar<0)
					textprintf_ex(AraKatman,font,328,85, makecol(0,0,255),-1,"<<< RUZGAR: %.0f <<<",ruzgar);		//EKSÝ DEGER ÝSE RUZGARI YAZAR.
					else if(ruzgar>0)
					textprintf_ex(AraKatman,font,328,85, makecol(0,0,255),-1,">>> RUZGAR: %.0f >>>",ruzgar);		//ARTI DEGER ÝSE RUZGARI YAZAR.
					else if(ruzgar==0)
					textprintf_ex(AraKatman,font,353,85, makecol(0,0,255),-1," RUZGAR: %.0f ",ruzgar);				//SIFIR ÝSE RUZGARI YAZAR.
				
					if(hiztut<=0)
					blit(Hiz20,AraKatman,0,0,615,25,75,75);
					else if(hiztut==1)
					blit(Hiz40,AraKatman,0,0,615,25,75,75);
					else if(hiztut==2)
					blit(Hiz60,AraKatman,0,0,615,25,75,75);
					else if(hiztut==3)
					blit(Hiz80,AraKatman,0,0,615,25,75,75);
					else if(hiztut>=4)
					blit(Hiz100,AraKatman,0,0,615,25,75,75);
					
						if(key[KEY_DOWN])
						{
							if(hiztut>0)
							hiztut--;
						}
						else if(key[KEY_UP])
						{
							if(hiztut<4)
							hiztut++;
						}
					
					if(yontut2<=0)
					blit(Sol0,AraKatman,0,0,700,25,75,75);
					else if(yontut2==1)
					blit(Sol37,AraKatman,0,0,700,25,75,75);
					else if(yontut2==2)
					blit(Sol45,AraKatman,0,0,700,25,75,75);
					else if(yontut2==3)
					blit(Sol53,AraKatman,0,0,700,25,75,75);
					else if(yontut2==4)
					blit(Dik,AraKatman,0,0,700,25,75,75);
					
						if(key[KEY_LEFT])
						{
							if(yontut2>0)
							yontut2--;
						}
						else if(key[KEY_RIGHT])
						{
							if(yontut2<4)
							yontut2++;
						}
							
					rest(55);		//PROGRAMI 10 MÝLÝSANÝYE DURAKLATIR.
					blit(AraKatman,screen,0,0,0,0,800,600);		//RESMÝ EKRANA BASAR.
				}
				
				switch(hiztut)
				{
					case 0: hiz=20; 	break;		//HIZ 20
					case 1: hiz=40; 	break;		//HIZ 40
					case 2: hiz=60; 	break;		//HIZ 60
					case 3: hiz=80; 	break;		//HIZ 80
					case 4: hiz=100; 	break;		//HIZ 100
				}
				
				switch(yontut2)
				{
					case 0: yon=20; 	break;		//SOL 0 
					case 1: yon=6;	 	break;		//SOL 37 
					case 2: yon=4; 		break;		//SOL 45
					case 3: yon=3;	 	break;		//SOL 53
					case 4: yon=2;	 	break;		//DÝK
				}
				
				teta= -M_PI/yon;		//YÜKSEKLÝK TETA'ya BAÐLI
	 	 		hizX= (hiz-ruzgar)*cos(teta);	
  				hizY= (hiz-ruzgar)*sin(teta);
 		 		yercekimi=9.8;
			   	dt=0.1;
			   	int sayac2=0;
				//-------------------------------------------------------TOPUN HAREKETÝ-------------------------------------------------------
				while(x>-35 && y<600)
				{
					hizY=hizY + yercekimi*dt;
					x= x - (hizX*dt);
					y= y + (hizY*dt) + 0.5*yercekimi*(dt*dt);
					
					clear_to_color(AraKatman,makecol(255,255,255)); 	// ARKAPLAN RENGÝNÝ DEÐÝÞTÝRÝR. 
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);			//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);		//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);		//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);		//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);		//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);		//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);		//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);		//8. BÝNA
					
					if(b1<=b2 && b1<=b3)
					{
						textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,10,230+b1,60,120);			//EKRANA DURAN PLAYER 1'i BASAR.
					}
					else if(b2<b1 && b2<=b3)
					{
						textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,110,230+b2,60,120);		//EKRANA DURAN PLAYER 1'i BASAR.
					}
					else if(b3<b1 && b3<b2)
					{
						textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,210,230+b3,60,120);		//EKRANA DURAN PLAYER 1'i BASAR.	
					}
					
					if(sayac2<20)
					{
						if(b8<=b7 && b8<=b6)
						{
							textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
							blit(SagVuran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA VURAN PLAYER 2'i BASAR.
						}
						else if(b7<b8 && b7<=b6)
						{
							textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
							blit(SagVuran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA VURAN PLAYER 2'i BASAR.
						}
						else if(b6<b7 && b6<b8)
						{
							textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
							blit(SagVuran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA VURAN PLAYER 2'i BASAR.	
						}
					}
					else
					{
						if(b8<=b7 && b8<=b6)
						{
							textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
							blit(Duran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA DURAN PLAYER 2'yi BASAR.
						}
						else if(b7<b8 && b7<=b6)
						{
							textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
							blit(Duran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA DURAN PLAYER 2'yi BASAR.
						}
						else if(b6<b7 && b6<b8)
						{
							textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
							blit(Duran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA DURAN PLAYER 2'yi BASAR.
						}
					}
					
					blit(Top1,AraKatman,0,0,x,y,35,35);		//TOPUN HAREKETÝ.
		   			//-------------------------------------------------------------RAKÝP VURMA ÝÞLEMÝ--------------------------------------------------------------
					if(x+17.5>yer1x && x+17.5<yer1x+60 && y+17.5>yer1y-15 && y+17.5<yer1y+25)			//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(Headshot,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						textprintf_ex(AraKatman,font,360,85,makecol(0,0,255),-1,"HEADSHOT !");
						blit(Vurulan,AraKatman,0,0,yer1x,yer1y,60,120);
						blit(Vuran,AraKatman,0,0,yer2x,yer2y,60,120);
						puan2+=20;
						x=-35,y=600;
					}
					else if(x+17.5>yer1x && x+17.5<yer1x+60 && y+17.5>yer1y+25 && y+17.5<yer1y+80)		//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(YumrukSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(Vurulan,AraKatman,0,0,yer1x,yer1y,60,120);
						blit(Vuran,AraKatman,0,0,yer2x,yer2y,60,120);
						puan2+=10;
						x=-35,y=600;
					}
					else if(x+17.5>yer1x && x+17.5<yer1x+60 && y+17.5>yer1y+80 && y+17.5<yer1y+120)		//TOPUN GÝTTÝÐÝ YERÝ KONTROL EDER.
					{
						play_sample(YumrukSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(Vurulan,AraKatman,0,0,yer1x,yer1y,60,120);
						blit(Vuran,AraKatman,0,0,yer2x,yer2y,60,120);
						puan2+=5;
						x=-35,y=600;
					}
					//--------------------------------------------------------BÝNA KIRMA ÝÞLEMÝ-------------------------------------------------------------
					else if(x+17.5>0 && x+17.5<100 && y+17.5>350+b1 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b1,0,350+b1,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
		   			else if(x+17.5>100 && x+17.5<200 && y+17.5>350+b2 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b2,100,350+b2,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>200 && x+17.5<300 && y+17.5>350+b3 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b3,200,350+b3,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>300 && x+17.5<400 && y+17.5>350+b4 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b4,300,350+b4,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>400 && x+17.5<500 && y+17.5>350+b5 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b5,400,350+b5,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>500 && x+17.5<600 && y+17.5>350+b6 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b6,500,350+b6,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>600 && x+17.5<700 && y+17.5>350+b7 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b7,600,350+b7,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					else if(x+17.5>700 && x+17.5<800 && y+17.5>350+b8 && y+17.5<600)
					{
						play_sample(YikilmaSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
						blit(KirikBina,AraKatman,0,b8,700,350+b8,100,250);
						blit(Vuramayan,AraKatman,0,0,yer2x,yer2y,60,120);
						x=-35,y=600;
					}
					
					//----------------------------------------------------------------------------------------------------------------------
			
					blit(AraKatman,screen,0,0,0,0,800,600);
					rest(10);
					sayac2++;
				}
					textprintf_ex(AraKatman,font,365,100, makecol(0,0,255),-1,"%d PUAN !",puan2);					//PUANI EKRANA YAZAR
				   	blit(AraKatman,screen,0,0,0,0,800,600);
				   	rest(1500);
			   		topla2=topla2+puan2;
				}
				
				//---------------------------------------------------KAZANAN BELÝRLEME-----------------------------------------------------
				
				SKOR=fopen("skorlar.txt","r");
			 	int score[3];
				int skortut;
				for(skortut=0;skortut<3;skortut++)
				{
		  		fscanf(SKOR,"%d",&score[skortut]);
				}
				
				fclose(SKOR);
				
					if(topla1>score[0] && topla1>score[1] && topla1>score[2])
				 	{
				 		score[2]=score[1];
				 		score[1]=score[0];
				 		score[0]=topla1;
				 	}
				 	if(topla1<score[0] && topla1>score[1] && topla1>score[2])
				 	{
				 		score[2]=score[1];
				 		score[1]=topla1;
				 	}
				 	if(topla1<score[0] && topla1<score[1] && topla1>score[2])
				 	{
				 		score[2]=topla1;
				 	}
				 	if(topla2>score[0] && topla2>score[1] && topla2>score[2])
				 	{
				 		score[2]=score[1];
				 		score[1]=score[0];
				 		score[0]=topla2;
				 	}
				 	if(topla2<score[0] && topla2>score[1] && topla2>score[2])
				 	{
				 		score[2]=score[1];
				 		score[1]=topla2;
				 	}
				 	if(topla2<score[0] && topla2<score[1] && topla2>score[2])
				 	{
				 		score[2]=topla2;
				 	}
 					
 					SKOR=fopen("skorlar.txt","w+");
				 	
				 	for(skortut=0;skortut<3;skortut++)
				 	{
				 		fprintf(SKOR,"%d\n",score[skortut]);
				 	}
				 	
				 	fclose(SKOR);
				
						if(topla1>topla2)
				{
					clear_to_color(AraKatman,makecol(255,255,255));
					
					play_sample(AlkisSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);	// SES DOSYASINI KULLANMAK.
					
					while(!(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93 && (mouse_b & 1)))
				{
				
					blit(TekrarOyna,AraKatman,0,0,100,50,144,43);				//OYNA BUTONUNU ARAKATMAN'da TUTAR.
					blit(Geri,AraKatman,0,0,550,50,144,43);						//GERI BUTONUNU ARAKATMAN'da TUTAR.
					
						if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93 && (mouse_b & 1))		//GERÝ BUTONUNA BASILDIÐINDA ÜST MENÜYE GÝDER.
						{
							play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
							goto anamenu;
						}
						
						if(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93)
						{
								blit(TekrarOynaY,AraKatman,0,0,100,50,144,43);
						}
						else if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93)
						{
								blit(GeriY,AraKatman,0,0,550,50,144,43);
						}
						
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);			//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);		//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);		//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);		//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);		//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);		//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);		//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);		//8. BÝNA
							
					if(b1<=b2 && b1<=b3)
					{
						textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
						blit(Sevinen,AraKatman,0,0,10,230+b1,60,120);		//EKRANA PLAYER 1'i BASAR.
					}
					else if(b2<b1 && b2<=b3)
					{
						textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
						blit(Sevinen,AraKatman,0,0,110,230+b2,60,120);	//EKRANA PLAYER 1'i BASAR.
					}
					else if(b3<b1 && b3<b2)
					{
						textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
						blit(Sevinen,AraKatman,0,0,210,230+b3,60,120);	//EKRANA PLAYER 1'i BASAR.				
					}
					
					if(b8<=b7 && b8<=b6)
					{
						blit(Uzulen,AraKatman,0,0,735,230+b8,60,120);		//EKRANA PLAYER 2'yi BASAR.
						textprintf_ex(AraKatman,font,763,240+b8,makecol(0,0,255),-1,"P2");
					}
					else if(b7<b8 && b7<=b6)
					{
						blit(Uzulen,AraKatman,0,0,635,230+b7,60,120);		//EKRANA PLAYER 2'yi BASAR.
						textprintf_ex(AraKatman,font,663,240+b7,makecol(0,0,255),-1,"P2");
					}
					else if(b6<b7 && b6<b8)
					{
						blit(Uzulen,AraKatman,0,0,535,230+b6,60,120);		//EKRANA PLAYER 2'yi BASAR.
						textprintf_ex(AraKatman,font,563,240+b6,makecol(0,0,255),-1,"P2");	
					}
					
					textprintf_ex(AraKatman,font,350,120, makecol(255,0,0),-1,"P1: %d PUAN",topla1);
					textprintf_ex(AraKatman,font,350,135, makecol(0,0,255),-1,"P2: %d PUAN",topla2);
					textprintf_ex(AraKatman,font,350,150, makecol(255,0,0),-1,"KAZANAN P1 !");
					blit(AraKatman,screen,0,0,0,0,800,600);
					
				}
			}
				else if(topla1<topla2)
				{
					clear_to_color(AraKatman,makecol(255,255,255));
					
					play_sample(AlkisSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);	// SES DOSYASINI KULLANMAK.
					
					while(!(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93 && (mouse_b & 1)))
				{
					
					blit(TekrarOyna,AraKatman,0,0,100,50,144,43);				//OYNA BUTONUNU ARAKATMAN'da TUTAR.
					blit(Geri,AraKatman,0,0,550,50,144,43);						//GERI BUTONUNU ARAKATMAN'da TUTAR.
					
						if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93 && (mouse_b & 1))		//GERÝ BUTONUNA BASILDIÐINDA ÜST MENÜYE GÝDER.
						{
							play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
							goto anamenu;
						}
						
						if(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93)
						{
								blit(TekrarOynaY,AraKatman,0,0,100,50,144,43);			//YEÞÝL TEKRAR OYNA BUTONUNU ARAKATMANDA TUTAR.
						}
						else if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93)
						{
								blit(GeriY,AraKatman,0,0,550,50,144,43);				//YEÞÝL GERÝ BUTONUNU ARAKATMANDA TUTAR.
						}
					
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);			//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);		//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);		//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);		//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);		//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);		//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);		//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);		//8. BÝNA
							
					if(b1<=b2 && b1<=b3)
					{
						blit(Uzulen,AraKatman,0,0,10,230+b1,60,120);		//EKRANA UZULEN PLAYER 1'i BASAR.
						textprintf_ex(AraKatman,font,38,240+b1,makecol(255,0,0),-1,"P1");
					}
					else if(b2<b1 && b2<=b3)
					{
						blit(Uzulen,AraKatman,0,0,110,230+b2,60,120);		//EKRANA UZULEN PLAYER 1'i BASAR.
						textprintf_ex(AraKatman,font,138,240+b2,makecol(255,0,0),-1,"P1");
					}
					else if(b3<b1 && b3<b2)
					{
						blit(Uzulen,AraKatman,0,0,210,230+b3,60,120);		//EKRANA UZULEN PLAYER 1'i BASAR.				
						textprintf_ex(AraKatman,font,238,240+b3,makecol(255,0,0),-1,"P1");
					}
					
					if(b8<=b7 && b8<=b6)
					{
						textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
						blit(Sevinen,AraKatman,0,0,735,230+b8,60,120);		//EKRANA SEVÝNEN PLAYER 2'yi BASAR.
					}
					else if(b7<b8 && b7<=b6)
					{
						textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
						blit(Sevinen,AraKatman,0,0,635,230+b7,60,120);		//EKRANA SEVÝNEN PLAYER 2'yi BASAR.
					}
					else if(b6<b7 && b6<b8)
					{
						textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
						blit(Sevinen,AraKatman,0,0,535,230+b6,60,120);		//EKRANA SEVÝNEN PLAYER 2'yi BASAR.
					}
					
					textprintf_ex(AraKatman,font,350,120, makecol(255,0,0),-1,"P1: %d PUAN",topla1);
					textprintf_ex(AraKatman,font,350,135, makecol(0,0,255),-1,"P2: %d PUAN",topla2);
					textprintf_ex(AraKatman,font,350,150, makecol(0,0,255),-1,"KAZANAN P2 !");
					blit(AraKatman,screen,0,0,0,0,800,600);
				}
			}
				
				else if(topla1==topla2)
				{
					clear_to_color(AraKatman,makecol(255,255,255));
					
					while(!(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93 && (mouse_b & 1)))
				{
					
				 	blit(TekrarOyna,AraKatman,0,0,100,50,144,43);				//OYNA BUTONUNU ARAKATMAN'da TUTAR.
					blit(Geri,AraKatman,0,0,550,50,144,43);						//GERI BUTONUNU ARAKATMAN'da TUTAR.
					
						if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93 && (mouse_b & 1))		//GERÝ BUTONUNA BASILDIÐINDA ÜST MENÜYE GÝDER.
						{
							play_sample(ButonSesi,255/*ses seviyesi*/,128/*sað ya da sol hoparlör ayarý*/,1000/*ses hýzý ayarý*/,0);
							goto anamenu;
						}
						
						if(mouse_x>100 && mouse_x<244 && mouse_y>50 && mouse_y<93)
						{
								blit(TekrarOynaY,AraKatman,0,0,100,50,144,43);			//YEÞÝL TEKRAR OYNA BUTONUNU ARAKATMANDA TUTAR.
						}
						else if(mouse_x>550 && mouse_x<694 && mouse_y>50 && mouse_y<93)
						{
								blit(GeriY,AraKatman,0,0,550,50,144,43);				//YEÞÝL GERÝ BUTONUNU ARAKATMANDA TUTAR.
						}
						
					blit(Bina,AraKatman,0,b1,0,350+b1,100,250);			//1. BÝNA
					blit(Bina,AraKatman,0,b2,100,350+b2,100,250);		//2. BÝNA
					blit(Bina,AraKatman,0,b3,200,350+b3,100,250);		//3. BÝNA
					blit(Bina,AraKatman,0,b4,300,350+b4,100,250);		//4. BÝNA
					blit(Bina,AraKatman,0,b5,400,350+b5,100,250);		//5. BÝNA
					blit(Bina,AraKatman,0,b6,500,350+b6,100,250);		//6. BÝNA
					blit(Bina,AraKatman,0,b7,600,350+b7,100,250);		//7. BÝNA
					blit(Bina,AraKatman,0,b8,700,350+b8,100,250);		//8. BÝNA
							
					if(b1<=b2 && b1<=b3)
					{
						textprintf_ex(AraKatman,font,33,220+b1,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,10,230+b1,60,120);		//EKRANA PLAYER 1'i BASAR.
					}
					else if(b2<b1 && b2<=b3)
					{
						textprintf_ex(AraKatman,font,133,220+b2,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,110,230+b2,60,120);	//EKRANA PLAYER 1'i BASAR.
					}
					else if(b3<b1 && b3<b2)
					{
						textprintf_ex(AraKatman,font,233,220+b3,makecol(255,0,0),-1,"P1");
						blit(Duran,AraKatman,0,0,210,230+b3,60,120);	//EKRANA PLAYER 1'i BASAR.				
					}
					
					if(b8<=b7 && b8<=b6)
					{
						textprintf_ex(AraKatman,font,758,220+b8,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,735,230+b8,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					else if(b7<b8 && b7<=b6)
					{
						textprintf_ex(AraKatman,font,658,220+b7,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,635,230+b7,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					else if(b6<b7 && b6<b8)
					{
						textprintf_ex(AraKatman,font,558,220+b6,makecol(0,0,255),-1,"P2");
						blit(Duran,AraKatman,0,0,535,230+b6,60,120);		//EKRANA PLAYER 2'yi BASAR.
					}
					
					textprintf_ex(AraKatman,font,350,120, makecol(255,0,0),-1,"P1: %d PUAN",topla1);
					textprintf_ex(AraKatman,font,350,135, makecol(0,0,255),-1,"P2: %d PUAN",topla2);
					textprintf_ex(AraKatman,font,350,150, makecol(0,0,0),-1,"BERABERE !");
					blit(AraKatman,screen,0,0,0,0,800,600);
					
				}
			}
			//--------------------------------------------------------------------------------------------------------------------------------
			}			
		}
		blit(AraKatman,screen,0,0,0,0,800,600);		//RESMÝ EKRANA BASAR.
		clear_bitmap(AraKatman);		// EKRANI TEMÝZLER.
	}

	bitir();
	return 0;
}
END_OF_MAIN();

void baslat()
{
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	
	if (res != 0) 
	{
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT,"A");
}

void bitir()
{
	clear_keybuf();
}
