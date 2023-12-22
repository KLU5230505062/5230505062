bu kodum en fazla on teklifin aldığı açık arttırma uygulamasıdır.
Kodum aşağıdaki gibi ilerler:
-->açık artırma başlığını,giriş mesajını yazdırdım.
-->int teklifveren_no; ile teklif veren bilgilerini kapsayan struct oluşturdum.
-->en fazla 10 teklifin bilgisini ayırmak için dizi oluşturdum.(Daha fazla teklif yapabilirsiniz.)
-->teklif veren sayısını bir sayaçla takip ettim.
-->Sayaç teklif sayısına ulaştığında döngü sona erer.
-->teklif verenlerin numaralarını,tekliflerini almak amacıyla döngü kullandım.
-->kazanan teklifi,teklif veren numarasını bulmak için döngü kullandım.
-->Döngüde her teklifi mevcut en yüksek teklifle karşılaştırdım. 
-->Daha yüksek bir teklif olursa onu yeni en yüksek teklif olarak ayarlayıp kazanan teklif veren numarasını güncellememiz gerekiyor.
-->sonucunda: kazananı ve kazanan teklifi yazdırır ve:
-->"ODEME: %.2f TL\n", en_yuksek_teklif ile sonucunda "ödemeyi" de yazdırır.(printf)
