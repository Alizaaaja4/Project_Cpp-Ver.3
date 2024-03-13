#include <iostream>
#include <unistd.h>
#include <cstring>
using namespace std;

void log_member();
void dash_member();
void coffee();
void snack();
void intrument();

struct items{
    string kopi1, kopi2, kopi3, kopi4, kopi5, kopi6;
    string sn1, sn2, sn3, sn4, sn5, sn6;
    string jawab, promo;
    int jumlah;
    double harga, total, diskon = 0.8;
};
items it;

void log_member() {
    char uname[20], pass[20];
    cout << "==================== LOGIN MEMBER ==================" <<endl;
    cout << "[Bot] Masukan Username: "; cin >> uname; 
    cout << "[Bot] Masukan Password: "; cin >> pass;
    cout << "==================================================="<<endl << endl;
    cout << "Proses verifikasi...." <<endl<<endl; sleep (2);
    
    if(strcmp(uname, "ngopi") ==0 && strcmp (pass, "000")==0){
        cout <<"Berhasil login!!"<<endl;
        cout <<"Loading...."<<endl <<endl; sleep(2); dash_member();
    } else{
        cout <<"Gagal login!!"<< endl;
        cout <<"Loading...."<<endl <<endl; sleep(2); log_member();
    }
}

void coffee(){
    string pilih;
    cout << "\033[2J\033[1;1H";
    cout << "============== MENU COFFEE D'XPRESSO ==============" << endl;
    cout << "|| [A]. Arabika Coffe     |      Rp. 24.000      ||" << endl;
    cout << "|| [B]. Americano Coffe   |      Rp. 22.000      ||" << endl;
    cout << "|| [C]. Capuccino Coffe   |      Rp. 25.000      ||" << endl;
    cout << "|| [D]. Mocha Coffe       |      Rp. 20.000      ||" << endl;
    cout << "|| [E]. Lungo Coffe       |      Rp. 23.000      ||" << endl;
    cout << "|| [F]. Con Panna Coffe   |      Rp. 24.000      ||" << endl;
    cout << "===================================================" << endl;
    cout << "|| [Z]. Back                                     ||" << endl;
    cout << "===================================================" << endl;
    cout << "\t\t/> "; cin >> pilih;

    if (pilih == "A" || pilih == "a") {
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Arabika Coffe                         "<< endl;
        cout << " Harga  : Rp. 24.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 24000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            }

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    } else if (pilih == "B" || pilih == "b"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Americano Coffe                         "<< endl;
        cout << " Harga  : Rp. 22.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah *22000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            } 

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    } else if (pilih == "C" || pilih == "c"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Capuccino Coffe                         "<< endl;
        cout << " Harga  : Rp. 25.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 25000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            } 

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if (pilih == "D" || pilih == "d"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Mocha Coffe                         "<< endl;
        cout << " Harga  : Rp. 20.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 20000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            } 

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if (pilih == "E" || pilih == "e"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Lungo Coffe                         "<< endl;
        cout << " Harga  : Rp. 23.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 23000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            } 

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if (pilih == "F" || pilih == "f"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Con Panna Coffe                         "<< endl;
        cout << " Harga  : Rp. 24.000/ Cup                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 24000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "daskom") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                coffee();
            } 

        } else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    } else if(pilih == "Z" || "z"){
        dash_member();
    } else{
        cout << "\033[2J\033[1;1H";
        cout << endl << "Maaf option ada tidak terdekteksi!!" << endl; sleep(3);
        coffee();
    }
}

void snack(){
    string pilih;
    cout << "\033[2J\033[1;1H";
    cout << "============== MENU SNACK D'XPRESSO ===============" << endl;
    cout << "|| [A]. Butter Croissant  |      Rp. 14.000      ||" << endl;
    cout << "|| [B]. Biskuit Vanilla   |      Rp. 12.000      ||" << endl;
    cout << "|| [C]. Pisang Goreng     |      Rp. 15.000      ||" << endl;
    cout << "|| [D]. Brownies Cokelat  |      Rp. 15.000      ||" << endl;
    cout << "|| [E]. Roti Panggang     |      Rp. 13.000      ||" << endl;
    cout << "|| [F]. Chicken Sandwich  |      Rp. 18.000      ||" << endl;
    cout << "===================================================" << endl;
    cout << "|| [Z]. Back                                     ||" << endl;
    cout << "===================================================" << endl;
    cout << "\t\t/> "; cin >> pilih;

    if(pilih=="A" || pilih=="a"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Butter Croissant                         "<< endl;
        cout << " Harga  : Rp. 14.000/ 3pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 14000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if (pilih == "B" || pilih == "b"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Biskuit Vanilla                         "<< endl;
        cout << " Harga  : Rp. 12.000/ 3pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 12000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if(pilih == "C" || pilih == "c"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Pisang Goreng                         "<< endl;
        cout << " Harga  : Rp. 15.000/ 3pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 15000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if (pilih == "D" || pilih == "d"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Brownies cokelat                         "<< endl;
        cout << " Harga  : Rp. 15.000/ 3pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 15000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if(pilih == "E" || pilih == "e"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Roti Panggang                         "<< endl;
        cout << " Harga  : Rp. 13.000/ 2pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 13000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if(pilih=="F" || pilih=="f"){
        cout << "\033[2J\033[1;1H";
        cout << "-=-=-=-=-=-=-= INFORMASI PESANAN -=-=-=-=-=-=-=-"<< endl;
        cout << " Pesanan: Chicken Sandwich                         "<< endl;
        cout << " Harga  : Rp. 18.000/ 1pcs                       "<< endl;
        cout << " Jumlah : "; cin >> it.jumlah; cout << endl;
        cout << " Pesanan sedang dibuat....."<< endl; sleep(4); 

        it.harga = it.jumlah * 18000;

        cout << " Harga: Rp. " << it.harga << endl <<endl;
        cout << " Apakah anda memiliki voucher diskon (yes/ no) ? "; cin >> it.jawab;
        if (it.jawab == "Yes" || it.jawab == "yes"){
            cout <<" Masukan kode diskon: "; cin >> it.promo;
            if (it.promo == "loopingforever") {
                it.total = it.harga * it.diskon;
                cout <<" Harga setelah diskon 20%: Rp. "<< it.total << endl << endl;
                cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
                cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
                dash_member();
            }else{
                cout << endl << " Dalam proses verifikasi!!" << endl; sleep(4);
                cout << " Maaf voucher anda sudah tidak aktif!!" << endl; sleep(5);
                snack();
            }
        }else if(it.jawab =="No" || it.jawab == "no"){
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        } else{
            cout << endl << " Maaf sedang ada gangguan!!" << endl;
            cout <<" Total Harga : Rp. "<< it.harga << endl <<endl;
            cout <<"Silahkan untuk membayar ke kasir!!" <<endl;
            cout <<"Program akan tertutup dalam 5 detik"<< endl; sleep(5);
            dash_member();
        }
    }else if(pilih == "Z" || "z"){
        dash_member();
    } else{
        cout << "\033[2J\033[1;1H";
        cout << endl << "Maaf option ada tidak terdekteksi!!" << endl; sleep(3);
        snack();
    }
}

void intrument(){
    string jawab;
    cout << "\033[2J\033[1;1H";
    cout << "=================== HOW TO USE D'XPRESSO MACHINE ====================" << endl;
    cout << "[1]. Pilih pesanan kopi atau snack pada mesin              " << endl;
    cout << "[2]. Masukan jumlah pesanan, dengan cepat mesin akan membuatnya" << endl;
    cout << "[3]. Setelah selesai, mesin akan memberikan tagihan dan silahkan" << endl;
    cout << "     bayar ke kasir" << endl;
    cout << "[4]. Anda dapat memasukan voucher untuk mendapatkan diskon 20%" << endl;
    cout << "=====================================================================" << endl;
    sleep(5); cout << endl << "\t\tKembali ke menu utama (y/n): "; cin >> jawab;

    if (jawab == "Y" || jawab == "y"){
        dash_member();
    } else if (jawab == "N" || jawab == "n"){
        intrument();
    } else{
        intrument();
    }
}

void dash_member(){
    int menu;
    cout << "\033[2J\033[1;1H";
    cout << "================ MACHINE D'XPRESSO ================" << endl;
    cout << "|||\t\t[1]. Pesan Coffee               |||" << endl;
    cout << "|||\t\t[2]. Pesan Snack                |||" << endl;
    cout << "|||\t\t[3]. Informasi Penggunaan       |||" << endl;
    cout << "|||\t\t[4]. Keluar                     |||" << endl;
    cout << "====================================================" << endl;

    cout << "\t\t Input |>  "; cin >> menu;

    switch(menu){
        case 1: coffee(); break;
        case 2: snack(); break;
        case 3: intrument(); break;
        case 4: cout << endl << "\tMesin akan berhenti dalam 4 detik" << endl << endl; sleep(4);
                exit(0);
        default: cout << "\033[2J\033[1;1H";
                 cout << endl << "Maaf option ada tidak terdekteksi!!" << endl; sleep(3);
                 dash_member(); 
    }
}

int main() {
    int menu;
    cout << "====================== WELCOME =====================" << endl;
    cout << "||                 D'Xpresso Coffe                ||" << endl;
    cout << "====================================================" << endl << endl;
    cout << "\t\t[1]. D'Xpresso Member" << endl;
    cout << "\t\t[2]. Exit Program" << endl << endl;
    cout << "====================================================" << endl << endl;

    cout << "\t\t Input |>  "; cin >> menu;

    switch (menu) {
    case 1: cout << "\033[2J\033[1;1H"; // membersihkan layar konsol
            log_member(); break;
    case 2: cout << endl << "\tMesin akan berhenti dalam 4 detik" << endl <<endl; sleep(4);
            exit(0);
    default: cout << "\033[2J\033[1;1H";
             cout << endl << "Maaf option ada tidak terdekteksi!!" << endl; sleep(3);
             main(); 
    }
    return 0;
}
