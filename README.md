# Taş, Kağıt, Makas Oyunu
Bu proje, klasik Taş, Kağıt, Makas oyununu terminal tabanlı bir program olarak sunmaktadır. Kullanıcı ve bilgisayar arasında oynanan bu oyunda, belirli kurallara göre kazanan belirlenir. İlk olarak 5 puana ulaşan oyuncu oyunu kazanır.

## Kod Açıklaması
Bu C programı, kullanıcının girdiği seçimi (taş, kağıt veya makas) bilgisayarın rastgele seçimiyle karşılaştırır ve sonucu ekrana yazdırır. 

### Fonksiyonlar
- **int karsilastir(char oyuncu, char bilgisayar)**:
  - Kullanıcının ve bilgisayarın seçimlerini alır.
  - Kazananı belirler ve sonucu döner:
    - `2`: Berabere
    - `1`: Oyuncu kazandı
    - `0`: Bilgisayar kazandı

- **int main()**:
  - Oyun döngüsünü içerir.
  - Kullanıcıdan bir seçim alır ve bilgisayarın rastgele seçimiyle karşılaştırır.
  - Kazananı belirler ve skoru günceller.
  - İlk olarak 5 puana ulaşan oyuncuyu belirler ve sonucu ekrana yazdırır.

### Kullanım
1. Programı çalıştırın.
2. Taş için 't', kağıt için 'k', makas için 'm' tuşlarına basarak seçim yapın.
3. Bilgisayarın seçimi ve oyunun sonucu ekranda gösterilecektir.
4. İlk olarak 5 puana ulaşan oyuncu oyunu kazanır.

### Gereksinimler
- C derleyicisi (gcc veya başka bir derleyici)

