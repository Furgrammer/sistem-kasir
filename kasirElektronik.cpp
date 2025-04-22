/*
Muhammad Al Furqon
241011400095
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // Deklarasi
    char lagi, beli;
    string pesanan[10], namaPembeli, barang[10], Sdiskon;
    int i, kodeBarang, kodeLaptop, kodeSmartphone, jumBarang, jumBeli, harga[10], kodeTablet, kodeAksesoris, kodeLainnya, totalHarga, uangBayar, kembalian, SubTotal[10], metodeBayar, noRek, diskon, totalDiskon, totalBayar;

    jumBarang = 0;

    cout << endl;
    cout << "\t\t\t\t\t\tAlFurqon Electronic Store" << endl;
    cout << "\t\t\t\tJl. Raya Puspitek No. 69 Pamulang, Tangerang Selatan" << endl;
    cout << "========================================================================================================================" << endl << endl;

    cout << "Selamat datang di AlFurqon Electronic Store!" << endl;
    cout << "Promo Akhir Tahun!!! Sambut Tahun Baru dengan diskon hingga 15%." << endl;
    cout << "Diskon 5% untuk setiap pembelian!" << endl;
    cout << "Diskon 10% untuk pembelian diatas Rp 10.000.000!" << endl;
    cout << "Diskon 15% untuk pembelian diatas Rp 20.000.000!" << endl << endl;

    cout << "Masukkan nama pembeli: ";
    cin >> namaPembeli;
    cout << endl;

    do
    {
        cout << "Pilih barang yang ingin dibeli: " << endl;
        cout << "1 - Laptop" << endl;
        cout << "2 - Smartphone" << endl;
        cout << "3 - Tablet" << endl;
        cout << "4 - Aksesoris" << endl;
        cout << "5 - Lainnya" << endl;

        cout << "Masukkan kode barang: ";
        cin >> kodeBarang;
        cout << endl << endl;
        if (kodeBarang == 1){
            cout << "Laptop apa yang anda cari? " << endl;
            cout << "1 - Asus ROG Zephyrus G14 RAM 16GB SSD 1TB - Rp 20.000.000" << endl;
            cout << "2 - Lenovo Ideapad RAM 8GB SSD 256GB - Rp 10.000.000" << endl;
            cout << "3 - HP Pavilion RAM 4GB SSD 128GB - Rp 5.000.000" << endl;
            cout << "4 - Acer Aspire RAM 2GB SSD 64GB - Rp 3.000.000" << endl;
            cout << "5 - Dell Inspiron RAM 1GB SSD 32GB - Rp 2.000.000" << endl;

            cout << "Masukkan kode laptop: ";
            cin >> kodeLaptop;
            cout << endl;

            if (kodeLaptop == 1){
                cout << "Asus ROG Zephyrus G14 RAM 16GB SSD 1TB \nHarga: Rp 20.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Asus ROG Zephyrus G14 RAM 16GB SSD 1TB";
                    harga[i] = 20000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLaptop == 2){
                cout << "Lenovo Ideapad RAM 8GB SSD 256GB \nHarga: Rp 10.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Lenovo Ideapad RAM 8GB SSD 256GB";
                    harga[i] = 10000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLaptop == 3){
                cout << "HP Pavilion RAM 4GB SSD 128GB \nHarga: Rp 5.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "HP Pavilion RAM 4GB SSD 128GB";
                    harga[i] = 5000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLaptop == 4){
                cout << "Acer Aspire RAM 2GB SSD 64GB \nHarga: Rp 3.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Acer Aspire RAM 2GB SSD 64GB";
                    harga[i] = 3000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLaptop == 5){
                cout << "Dell Inspiron RAM 1GB SSD 32GB \nHarga: Rp 2.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Dell Inspiron RAM 1GB SSD 32GB";
                    harga[i] = 2000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else {
                cout << "Kode laptop tidak ditemukan" << endl << endl;
            }

            
        } else if (kodeBarang == 2){
            cout << "Smartphone apa yang anda cari? " << endl;
            cout << "1 - Samsung Galaxy S21 Ultra RAM 16GB ROM 512GB - Rp 20.000.000" << endl;
            cout << "2 - iPhone 12 Pro Max RAM 8GB ROM 256GB - Rp 15.000.000" << endl;
            cout << "3 - Xiaomi Redmi Note 10 RAM 4GB ROM 128GB - Rp 5.000.000" << endl;
            cout << "4 - Oppo A92 RAM 2GB ROM 64GB - Rp 3.000.000" << endl;
            cout << "5 - Vivo Y20 RAM 1GB ROM 32GB - Rp 2.000.000" << endl;

            cout << "Masukkan kode smartphone: ";
            cin >> kodeSmartphone;
            cout << endl;

            if (kodeSmartphone == 1){
                cout << "Samsung Galaxy S21 Ultra RAM 16GB ROM 512GB \nHarga: Rp 20.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Samsung Galaxy S21 Ultra RAM 16GB ROM 512GB";
                    harga[i] = 20000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeSmartphone == 2){
                cout << "iPhone 12 Pro Max RAM 8GB ROM 256GB \nHarga: Rp 15.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "iPhone 12 Pro Max RAM 8GB ROM 256GB";
                    harga[i] = 15000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeSmartphone == 3){
                cout << "Xiaomi Redmi Note 10 RAM 4GB ROM 128GB \nHarga: Rp 5.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Xiaomi Redmi Note 10 RAM 4GB ROM 128GB";
                    harga[i] = 5000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeSmartphone == 4){
                cout << "Oppo A92 RAM 2GB ROM 64GB \nHarga: Rp 3.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Oppo A92 RAM 2GB ROM 64GB";
                    harga[i] = 3000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeSmartphone == 5){
                cout << "Vivo Y20 RAM 1GB ROM 32GB \nHarga: Rp 2.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Vivo Y20 RAM 1GB ROM 32GB";
                    harga[i] = 2000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else {
                cout << "Kode smartphone tidak ditemukan" << endl << endl;
            }
        } else if (kodeBarang == 3){
            cout << "Tablet apa yang anda cari? " << endl;
            cout << "1 - Samsung Galaxy Tab S7 RAM 8GB ROM 256GB - Rp 10.000.000" << endl;
            cout << "2 - iPad Pro RAM 6GB ROM 128GB - Rp 8.000.000" << endl;
            cout << "3 - Xiaomi Mi Pad 5 RAM 4GB ROM 64GB - Rp 5.000.000" << endl;
            cout << "4 - Lenovo Tab M10 RAM 2GB ROM 32GB - Rp 3.000.000" << endl;
            cout << "5 - Huawei MediaPad T3 RAM 1GB ROM 16GB - Rp 2.000.000" << endl;

            cout << "Masukkan kode tablet: ";
            cin >> kodeTablet;
            cout << endl;

            if (kodeTablet == 1){
                cout << "Samsung Galaxy Tab S7 RAM 8GB ROM 256GB \nHarga: Rp 10.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Samsung Galaxy Tab S7 RAM 8GB ROM 256GB";
                    harga[i] = 10000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeTablet == 2){
                cout << "iPad Pro RAM 6GB ROM 128GB \nHarga: Rp 8.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "iPad Pro RAM 6GB ROM 128GB";
                    harga[i] = 8000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeTablet == 3){
                cout << "Xiaomi Mi Pad 5 RAM 4GB ROM 64GB \nHarga: Rp 5.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Xiaomi Mi Pad 5 RAM 4GB ROM 64GB";
                    harga[i] = 5000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeTablet == 4){
                cout << "Lenovo Tab M10 RAM 2GB ROM 32GB \nHarga: Rp 3.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Lenovo Tab M10 RAM 2GB ROM 32GB";
                    harga[i] = 3000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeTablet == 5){
                cout << "Huawei MediaPad T3 RAM 1GB ROM 16GB \nHarga: Rp 2.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Huawei MediaPad T3 RAM 1GB ROM 16GB";
                    harga[i] = 2000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else {
                cout << "Kode tablet tidak ditemukan" << endl << endl;
            }
        } else if (kodeBarang == 4){
            cout << "Aksesoris apa yang anda cari? " << endl;
            cout << "1 - Mouse Gaming - Rp 500.000" << endl;
            cout << "2 - Keyboard Gaming - Rp 1.000.000" << endl;
            cout << "3 - Headset Gaming - Rp 1.500.000" << endl;
            cout << "4 - Mousepad Gaming - Rp 250.000" << endl;
            cout << "5 - Cooling Pad - Rp 300.000" << endl;
            cout << "6 - Webcam - Rp 750.000" << endl;
            cout << "7 - Microphone - Rp 1.000.000" << endl;
            cout << "8 - Speaker - Rp 1.500.000" << endl;
            cout << "9 - Powerbank - Rp 500.000" << endl;
            cout << "10 - Charger - Rp 250.000" << endl;

            cout << "Masukkan kode aksesoris: ";
            cin >> kodeAksesoris;
            cout << endl;

            if (kodeAksesoris == 1){
                cout << "Mouse Gaming \nHarga: Rp 500.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Mouse Gaming";
                    harga[i] = 500000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 2){
                cout << "Keyboard Gaming \nHarga: Rp 1.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Keyboard Gaming";
                    harga[i] = 1000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 3){
                cout << "Headset Gaming \nHarga: Rp 1.500.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Headset Gaming";
                    harga[i] = 1500000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 4){
                cout << "Mousepad Gaming \nHarga: Rp 250.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Mousepad Gaming";
                    harga[i] = 250000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 5){
                cout << "Cooling Pad \nHarga: Rp 300.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Cooling Pad";
                    harga[i] = 300000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 6){
                cout << "Webcam \nHarga: Rp 750.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Webcam";
                    harga[i] = 750000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 7){
                cout << "Microphone \nHarga: Rp 1.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Microphone";
                    harga[i] = 1000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 8){
                cout << "Speaker \nHarga: Rp 1.500.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Speaker";
                    harga[i] = 1500000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 9){
                cout << "Powerbank \nHarga: Rp 500.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Powerbank";
                    harga[i] = 500000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeAksesoris == 10){
                cout << "Charger \nHarga: Rp 250.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Charger";
                    harga[i] = 250000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else {
                cout << "Kode aksesoris tidak ditemukan" << endl << endl;
            }
        } else if (kodeBarang == 5){
            cout << "Barang lain apa yang anda cari? " << endl;
            cout << "1 - Kamera - Rp 10.000.000" << endl;
            cout << "2 - Drone - Rp 15.000.000" << endl;
            cout << "3 - Printer - Rp 5.000.000" << endl;
            cout << "4 - Scanner - Rp 3.000.000" << endl;
            cout << "5 - Monitor - Rp 2.000.000" << endl;
            cout << "6 - TV - Rp 10.000.000" << endl;

            cout << "Masukkan kode barang lain: ";
            cin >> kodeLainnya;
            cout << endl;

            if (kodeLainnya == 1){
                cout << "Kamera \nHarga: Rp 10.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Kamera";
                    harga[i] = 10000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLainnya == 2){
                cout << "Drone \nHarga: Rp 15.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Drone";
                    harga[i] = 15000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLainnya == 3){
                cout << "Printer \nHarga: Rp 5.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Printer";
                    harga[i] = 5000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLainnya == 4){
                cout << "Scanner \nHarga: Rp 3.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Scanner";
                    harga[i] = 3000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLainnya == 5){
                cout << "Monitor \nHarga: Rp 2.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "Monitor";
                    harga[i] = 2000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else if (kodeLainnya == 6){
                cout << "TV \nHarga: Rp 10.000.000" << endl;
                cout << "Jumlah barang yang ingin dibeli: ";
                cin >> jumBeli;
                cout << "Anda yakin ingin membeli? (Y/n)? ";
                cin >> beli;
                if (beli == 'y' || beli == 'Y'){
                    pesanan[i] = "TV";
                    harga[i] = 10000000;
                    i++;
                    jumBarang++;
                } else if (beli == 'n' || beli == 'N'){
                    cout << "Anda tidak jadi membeli" << endl << endl;
                } else {
                    cout << "Inputan tidak valid" << endl << endl;
                }
            } else {
                cout << "Kode barang lain tidak ditemukan" << endl << endl;
            }
        } else {
            cout << "Kode barang tidak ditemukan" << endl;
        }

        cout << "Apakah ada lagi yang ingin dibeli? (Y/n): ";
        cin >> lagi;
        cout << endl;

    } while (lagi == 'y' || lagi == 'Y');

    for (i = 0; i < jumBarang; i++){
        SubTotal[i] = harga[i] * jumBeli;
        totalHarga = totalHarga + harga[i];
    }

    cout << "Total harga: Rp " << totalHarga << endl;

        if (totalHarga > 0 && totalHarga <= 1000000){
        diskon = totalHarga * 0.05;
        totalBayar = totalHarga - diskon;
        Sdiskon = "5%";
    } else if (totalHarga > 5000000 && totalHarga <= 10000000){
        diskon = totalHarga * 0.1;
        totalBayar = totalHarga - diskon;
        Sdiskon = "10%";
    } else if (totalHarga > 10000000){
        diskon = totalHarga * 0.15;
        totalBayar = totalHarga - diskon;
        Sdiskon = "15%";
    } else {
        diskon = 0;
        totalBayar = totalHarga;
        Sdiskon = "0%";
    }

    cout << "Anda mendapatkan diskon sebesar " << Sdiskon << endl;
    cout << "Total diskon: Rp " << diskon << endl;
    cout << "Total yang harus dibayar: Rp " << totalBayar << endl << endl;

    cout << "Pilih metode pembayaran: " << endl;
    cout << "1 - Tunai" << endl;
    cout << "2 - Transfer" << endl;
       
    do{   
        cout << "Masukkan metode pembayaran: ";
        cin >> metodeBayar;
        cout << endl;

        if (metodeBayar == 1){
            cout << "Masukkan uang pembayaran: Rp ";
            cin >> uangBayar;
            cout << endl;
            while (uangBayar < totalBayar){
                cout << "Uang yang anda masukkan kurang" << endl;
                cout << "Masukkan kembali uang pembayaran: Rp ";
                cin >> uangBayar;
            }

        } else if (metodeBayar == 2){
            cout << "Pembayaran dilakukan melalui transfer" << endl;
            cout << endl;
        } else {
            cout << "Inputan tidak valid" << endl;
        }
    } while (metodeBayar != 1 && metodeBayar != 2);



    cout << endl << endl;

    // Output
    cout <<"\t\t\t\t    Alfurqon Electronic Store"<<endl
    << "\t\t\t\tJl. Raya Puspitek No. 69 Pamulang" << endl
    << "\t\t\t\t\tTangerang Selatan" << endl << endl
    << "Kepada Yth. \n" << namaPembeli << endl
    << "Di tempat" << endl << endl;

    cout << "+===============================================================================================+" << endl;
    cout << "| No. | Jumlah \t|\t\t Nama Barang \t\t\t| Harga \t| Total Harga \t|" << endl;
    cout << "|===============================================================================================|" << endl;

    for (i = 0; i < jumBarang; i++)
    {
        cout << "|  " << i+1 <<
        "  | " << jumBeli << " Pcs" <<
        "\t| " << setw(40) << left << pesanan[i] <<
        "\t| Rp " << harga[i] << 
        "\t| Rp " << SubTotal[i] << "\t|" << endl;
    }
    
        kembalian = uangBayar - totalBayar;
    
    if (metodeBayar == 1){
        cout << "|===============================================================================================|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Sub Total \t: Rp " << totalHarga << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Total Diskon \t: Rp " << diskon << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Total \t\t: Rp " << totalBayar << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Bayar (Tunai) \t: Rp " << uangBayar << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Kembali \t: Rp " << kembalian << "\t|" << endl;
        cout << "+===============================================================================================+" << endl;
    } else if (metodeBayar == 2){
        cout << "|===============================================================================================|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Sub Total \t: Rp " << totalHarga << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Total Diskon \t: Rp " << diskon << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Total \t\t: Rp " << totalBayar << "\t|" << endl;
        cout << "|\t\t\t\t\t\t\t\t Bayar(Transfer): Rp " << totalBayar << "\t|" << endl;
        cout << "+===============================================================================================+" << endl;
    }
    cout << endl ;
    cout << "\t\t\tTerima kasih telah berbelanja di toko kami" << endl;
    cout << "\t\t\t\tSemoga harimu menyenangkan" << endl;
    cout << "\t\t\t Selamat Hari Natal dan Tahun Baru 2025!" << endl << endl;

    return 0;
}