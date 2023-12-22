#include <stdio.h>
#include <stdlib.h>

int main() {


// A��k Artt�rma Uygulamas�:
// Teklif verenin bilgilerini i�eren struct �u �ekildedir:
printf("*****ACIK ARTTIRMA UYGULAMASI*****\n");
printf("Acik Arttirma Uygulamasina Hosgeldiniz...\n");
printf("\n\n");
struct Teklif {
    int teklifveren_no;  // Teklif verenin numaras�:
    double teklif;       // Teklif miktar�:
};

    // En fazla 10 teklifin bilgisini ay�rmak i�in bir dizi olu�tural�m.
    struct Teklif teklifler[13];
    //SAYAC
    // Sayac� �imdi ba�latal�m.
    int i = 0;
    //TEKL�F VERENLER�N NUMARASI VE TEKL�FLER:
    // Teklif verenlerin numaralar�n� ve teklifleri toplayal�m.
    // "En fazla 10 teklif" k�sm�n� unutmayal�m!
    while (i < 9) {
        printf("Teklif veren %d.\nTEKLIFINIZI GIRINIZ: ", i + 1);
        scanf("%lf", &teklifler[i].teklif);
        teklifler[i].teklifveren_no = i + 1; // Teklif veren numaras�n� ay�ral�m.
        i++;
    }
    //KAZANAN TEKL�F VE TEKL�F NUMARASI:
    // Kazanan teklifi ve teklif veren numaras�n� bulal�m.
    double en_yuksek_teklif = teklifler[0].teklif;
    int kazanan_teklifveren_no = teklifler[0].teklifveren_no;
    
    // Sayac� s�f�rlayal�m.
    i = 1;

    while (i < 9) {
    	//EN Y�KSEK TEKL�F:
        // En y�ksek teklifi ��renmek i�in teklifleri kar��la�t�ral�m.
        if (teklifler[i].teklif > en_yuksek_teklif) {
            en_yuksek_teklif = teklifler[i].teklif;
            kazanan_teklifveren_no = teklifler[i].teklifveren_no;
        }		
        i++;
 }
    
    //KAZANAN VE KAZANAN TEKL�F:
    // Kazanan� ve kazanan teklifi yazd�rmay� unutmayal�m!
    printf("KAZANAN TEKLIF VEREN: %d\n", kazanan_teklifveren_no);
    printf("ODEME: %.2f TL\n", en_yuksek_teklif);
    printf("***********************************\n\n");

    return 0;
}
