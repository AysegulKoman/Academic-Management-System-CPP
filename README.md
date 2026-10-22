# 🎓 Academic Performance & Data Management System (Modern C++)

Bu proje; Nesne Yönelimli Programlama (OOP), jenerik mimari ve Modern C++ standartları kullanılarak geliştirilmiş bir **Akademik Öğrenci ve Performans Yönetim Sistemi**'dir.

## 🚀 Öne Çıkan Özellikler & Teknik Detaylar

- **Modern C++ Memory Management:** Bellek sızıntılarını (memory leak) ve manuel bellek yönetim yükünü önlemek için `std::unique_ptr` ve `std::make_unique` akıllı işaretçileri (Smart Pointers) kullanılmıştır.
- **Nesne Yönelimli Programlama (OOP):**
  - **Soyutlama (Abstraction) & Çok Biçimlilik (Polymorphism):** `Entity` soyut taban sınıfı ve saf sanal fonksiyonlar (`pure virtual functions`) ile nesne mimarisi kurgulanmıştır.
  - **Kalıtım (Inheritance):** `Student` sınıfı `Entity` sınıfından türetilmiştir.
- **Jenerik Programlama (Templates):** Esnek veri yapıları için template tabanlı repository mimarisi entegre edilmiştir.
- **Algoritmik Sıralama & Lambda İfadeleri:** Öğrencilerin Genel Not Ortalamasına (GNO) göre sıralanmasında C++ STL `std::sort` ile **Lambda ifadeleri** kullanılmıştır.
- **Veri Filtreleme:** Onur belgesi almaya hak kazanan öğrencileri dinamik GNO eşik değerine göre filtreleme yeteneği mevcuttur.
- **Düzgün Konsol Formatı:** `<iomanip>` kütüphanesi kullanılarak veriler konsolda hizalı ve tablo formatında sunulur.

---

## 🛠️ Kurulum ve Çalıştırma

Projenizi herhangi bir C++14 (veya üstü) destekleyen derleyici ile derleyebilirsiniz.

### Visual Studio İle Çalıştırma:
1. `ConsoleApplication7.slnx` veya `ConsoleApplication7.vcxproj` dosyasını açın.
2. `Ctrl + F5` tuşlarına basarak projeyi derleyip çalıştırın.

---

## 💻 Örnek Konsol Çıktısı

```text
=================================================================
   MODERN C++ ACADEMIC PERFORMANCE & DATA MANAGEMENT SYSTEM       
=================================================================

---> KAYITLI TUM OGRENCILER:
=================================================================================
ID    AD SOYAD            BOLUM                   GNO     ALINAN DERSLER
---------------------------------------------------------------------------------
101   Aysegul Koman       Computer Engineering    3.85    [C++ OOP, Data Structures, Algorithms]
102   Taha Pasaoglu        Computer Engineering    2.90    [C++ OOP, Linear Algebra]
...
