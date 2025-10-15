# 🧮 Karakter Rakam Toplayıcı (C Programı)

Bu basit C programı, kullanıcıdan iki **rakam karakteri** (`'0'` - `'9'`) alır, bu karakterleri ASCII tablosu üzerinden **sayısal değerlere çevirir**, ardından bu iki sayının toplamını hesaplar.  
Eğer toplam **tek haneli** ise sonucu ekrana yazdırır; aksi halde **hata mesajı** verir.

---

## 🚀 Özellikler

- Kullanıcıdan iki karakter girişi alır.  
- Girilen karakterlerin rakam olup olmadığını kontrol eder.  
- ASCII karakterlerini sayıya dönüştürür (`'0'` karakterinden fark alarak).  
- İki rakamın toplamını hesaplar.  
- Sonuç 9’dan büyükse kullanıcıyı uyarır.

---

## 🧠 Kodun Mantığı

1. **Karakter girişi yapılır:**
   ```c
   scanf(" %c", &ch1);
   scanf(" %c", &ch2);
   ```
   Boşluk karakteri (`" %c"`) bir önceki satırdan kalan `\n` karakterini yoksayar.

2. **Girilen karakterlerin rakam olup olmadığı kontrol edilir:**
   ```c
   if (ch1 < '0' || ch1 > '9' || ch2 < '0' || ch2 > '9')
   ```
   Bu koşul, ASCII kodlarını kullanarak rakam aralığını kontrol eder.

3. **ASCII’den sayıya çevirme:**
   ```c
   num1 = ch1 - '0';
   num2 = ch2 - '0';
   ```

4. **Toplama işlemi ve sonuç kontrolü:**
   ```c
   toplam = num1 + num2;

   if (toplam > 9)
       printf("Hata: Toplama sonucu tek haneli olmalidir.\n");
   else
       printf("Sonuc: %d\n", toplam);
   ```

---

## 💻 Örnek Çalışma

```
Birinci rakam karakterini girin (0-9): 4
Ikinci rakam karakterini girin (0-9): 5
Hata: Toplama sonucu tek haneli olmalidir.
```

```
Birinci rakam karakterini girin (0-9): 3
Ikinci rakam karakterini girin (0-9): 2
Sonuc: 5
```

---

## ⚙️ Derleme ve Çalıştırma

### Windows için (Code::Blocks veya Dev-C++):
```bash
gcc main.c -o karakter_toplayici
karakter_toplayici.exe
```

### Linux / macOS için:
```bash
gcc main.c -o karakter_toplayici
./karakter_toplayici
```

---

## 📁 Dosya Yapısı

```
📦 karakter-toplayici
 ┣ 📜 main.c
 ┗ 📜 README.md
```

---

## 🧩 Kullanım Alanı

- C dilinde **karakter-sayı dönüşümü** öğrenmek isteyen öğrenciler için basit bir örnek.  
- **ASCII tablosu** mantığını kavramak için uygulamalı bir alıştırma.

---

## 📝 Lisans

Bu proje eğitim amaçlı hazırlanmıştır. Dilediğiniz gibi kopyalayabilir, değiştirebilir veya paylaşabilirsiniz.  
