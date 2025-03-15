# TP3DPBO2025C1
Tugas Praktikum 3 Dasar Pemrograman Berbasis Objek (DPBO)

# Janji
Saya Faisal Nur Qolbi dengan NIM 2311399 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![Diagram_TP3](https://github.com/user-attachments/assets/ed127966-9283-4460-bbb4-1e8f7ab9e5be)

# Desain Program
Ada 14 class yang berisi komponen internal dan eksternal komputer dan komputer itu sendiri, berikut detail class relation yang ada pada desain ini:

**Class Dasar (Parent Class)**:
- `Komponen` - Class dasar untuk seluruh komponen komputer

**Class Turunan Tingkat 1 (child←parent)**:
- `KomponenInternal` ← `Komponen` - Komponen yang berada di dalam komputer
- `KomponenEksternal` ← `Komponen` - Perangkat eksternal komputer

**Class Turunan Tingkat 2 (child←parent)**:
- `CPU` ← `KomponenInternal`
- `RAM` ← `KomponenInternal`
- `Motherboard` ← `KomponenInternal`
- `Storage` ← `KomponenInternal`
- `Monitor` ← `KomponenEksternal`
- `Speaker` ← `KomponenEksternal`

**Class Turunan Tingkat 3 (child←parent)**:
- `SSD` ← `Storage`
- `HDD` ← `Storage`

**Class Terpisah**:
- `SmartDevice` - Class independen untuk fitur perangkat pintar

**Multiple Inheritance (child←parent)**:
- `SmartSpeaker` ← `Speaker` & `SmartDevice` - Speaker dengan fitur pintar

**Class Komposisi**:
- `Komputer` - Class yang menyusun/mengkombinasikan berbagai komponen

## Detail Atribut Class

### Komponen
- `merk` - Merk komponen
- `nama` - Nama/Model komponen
- `harga` - Harga komponen

### KomponenInternal
- Mewarisi atribut `Komponen`
- `jenisSlot` - Jenis koneksi/slot ke motherboard
- `terpasang` - Status terpasang atau belum

### KomponenEksternal
- Mewarisi atribut `Komponen`
- `jenisKoneksi` - Jenis koneksi ke komputer (USB, HDMI, dll)
- `terhubung` - Status terhubung atau belum

### CPU
- Mewarisi atribut `KomponenInternal`
- `jumlahCore` - Jumlah core CPU
- `kecepatanGHz` - Kecepatan clock CPU

### RAM
- Mewarisi atribut `KomponenInternal`
- `kapasitasGB` - Kapasitas RAM dalam GB
- `tipe` - Tipe RAM (DDR4, DDR5, dll)

### Storage
- Mewarisi atribut `KomponenInternal`
- `kapasitasGB` - Kapasitas penyimpanan dalam GB
- `kecepatanBaca` - Kecepatan baca dalam MB/s
- `kecepatanTulis` - Kecepatan tulis dalam MB/s

### SSD
- Mewarisi atribut `Storage`
- `nvme` - Apakah SSD bertipe NVMe

### HDD
- Mewarisi atribut `Storage`
- `putaranRPM` - Kecepatan putaran disk dalam RPM

### Motherboard
- Mewarisi atribut `KomponenInternal`
- `chipset` - Chipset motherboard
- `formFactor` - Ukuran/bentuk motherboard (ATX, Micro-ATX, dll)

### Monitor
- Mewarisi atribut `KomponenEksternal`
- `ukuranInci` - Ukuran diagonal monitor dalam inci
- `resolusi` - Resolusi layar
- `refreshRate` - Rate refresh dalam Hz

### Speaker
- Mewarisi atribut `KomponenEksternal`
- `dayaOutput` - Daya output dalam Watt
- `stereo` - Apakah speaker stereo atau mono

### SmartDevice
- `wifiEnabled` - Status koneksi WiFi
- `networkName` - Nama jaringan yang terhubung

### SmartSpeaker
- Mewarisi atribut `Speaker` dan `SmartDevice` (multiple inheritance)
- `asisten` - Nama asisten virtual (Google Assistant, Alexa, dll)

### Komputer
- `nama` - Nama komputer
- `cpu` - Objek CPU
- `ramList` - Vector/kumpulan objek RAM
- `motherboard` - Objek Motherboard
- `ssdList` - Vector/kumpulan objek SSD
- `hddList` - Vector/kumpulan objek HDD
- `monitor` - Objek Monitor
- `smartSpeaker` - Objek SmartSpeaker

# Alur Program

Program berjalan dengan alur sebagai berikut:

1. Membuat objek data dari berbagai komponen komputer:
   - CPU Intel Core i7
   - RAM Corsair Vengeance
   - Motherboard ASUS ROG Strix
   - SSD Samsung 970 EVO
   - HDD Seagate Barracuda
   - Monitor LG UltraGear
   - SmartSpeaker JBL Link 10

2. Membuat objek data Komputer "PC Gaming" dengan komponen-komponen tersebut

3. Menampilkan spesifikasi awal komputer menggunakan method `tampilkanSpesifikasi()`

4. Menambahkan komponen baru ke komputer:
   - RAM Kingston HyperX
   - SSD Samsung 980 Pro

5. Menampilkan spesifikasi komputer setelah upgrade

# Dokumentasi (C++)
![image](https://github.com/user-attachments/assets/795987e4-d0e9-42d0-be19-33b12aee53d1)

![image](https://github.com/user-attachments/assets/efa02902-1ed7-4504-9efb-b83cc616ac4d)

