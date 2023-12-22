#include <stdio.h>
#include <stdlib.h>

int main() {


// Açýk Arttýrma Uygulamasý:
// Teklif verenin bilgilerini içeren struct þu þekildedir:
printf("*****ACIK ARTTIRMA UYGULAMASI*****\n");
printf("Acik Arttirma Uygulamasina Hosgeldiniz...\n");
printf("\n\n");
struct Teklif {
    int teklifveren_no;  // Teklif verenin numarasý:
    double teklif;       // Teklif miktarý:
};

    // En fazla 10 teklifin bilgisini ayýrmak için bir dizi oluþturalým.
    struct Teklif teklifler[13];
    //SAYAC
    // Sayacý þimdi baþlatalým.
    int i = 0;
    //TEKLÝF VERENLERÝN NUMARASI VE TEKLÝFLER:
    // Teklif verenlerin numaralarýný ve teklifleri toplayalým.
    // "En fazla 10 teklif" kýsmýný unutmayalým!
    while (i < 9) {
        printf("Teklif veren %d.\nTEKLIFINIZI GIRINIZ: ", i + 1);
        scanf("%lf", &teklifler[i].teklif);
        teklifler[i].teklifveren_no = i + 1; // Teklif veren numarasýný ayýralým.
        i++;
    }
    //KAZANAN TEKLÝF VE TEKLÝF NUMARASI:
    // Kazanan teklifi ve teklif veren numarasýný bulalým.
    double en_yuksek_teklif = teklifler[0].teklif;
    int kazanan_teklifveren_no = teklifler[0].teklifveren_no;
    
    // Sayacý sýfýrlayalým.
    i = 1;

    while (i < 9) {
    	//EN YÜKSEK TEKLÝF:
        // En yüksek teklifi öðrenmek için teklifleri karþýlaþtýralým.
        if (teklifler[i].teklif > en_yuksek_teklif) {
            en_yuksek_teklif = teklifler[i].teklif;
            kazanan_teklifveren_no = teklifler[i].teklifveren_no;
        }		
        i++;
 }
    
    //KAZANAN VE KAZANAN TEKLÝF:
    // Kazananý ve kazanan teklifi yazdýrmayý unutmayalým!
    printf("KAZANAN TEKLIF VEREN: %d\n", kazanan_teklifveren_no);
    printf("ODEME: %.2f TL\n", en_yuksek_teklif);
    printf("***********************************\n\n");

    return 0;
}
