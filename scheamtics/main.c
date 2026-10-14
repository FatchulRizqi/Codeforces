#include <stdio.h>

long long arr_simpan_selisih[1001];
long long simpan_nilai[1001];
long long arr[1001][1001];
int main() {
    int N, M;
    long long hasil_sebelum = 0, hasil_sesudah = 0;
    scanf("%d %d",&N, &M);

    // if(scanf("%d %d", &N, &M) != 2) {
    //     return 0;
    // } 

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%lld", &arr[i][j]);
        }
    }

    long long cek = 0;
    long long simpan_selisih = 0;
    long long simpan_nilai_selisih = 0;
    long long simpan_sementara_nilai_besar = 0;
    for(int i = 0; i < N; i++) {
        long long simpan_selisih = 0;
        long long simpan_nilai_selisih = 0;
        long long simpan_sementara_nilai_besar = 0;
        for(int j = 0; j < M; j++) {
            if(j == 0) {
                simpan_sementara_nilai_besar = arr[i][j];
                continue;
            }

            if(simpan_sementara_nilai_besar < arr[i][j]) {
                cek = arr[i][j] - simpan_sementara_nilai_besar;

                if(j == 1 && simpan_selisih == 0) {
                    simpan_selisih = cek;
                    simpan_nilai_selisih = simpan_sementara_nilai_besar;
                }else if(cek < simpan_selisih) {
                    simpan_nilai_selisih = simpan_sementara_nilai_besar;
                    simpan_selisih = cek;
                } 

                simpan_sementara_nilai_besar = arr[i][j];
            } else {
                cek = simpan_sementara_nilai_besar - arr[i][j];
                if(j == 1 && simpan_selisih == 0) {
                    simpan_selisih = cek;
                    simpan_nilai_selisih = arr[i][j];
                } else if(cek < simpan_selisih) {
                    simpan_nilai_selisih = arr[i][j];
                    simpan_selisih = cek;
                } 
            }
        }
        arr_simpan_selisih[i] = simpan_nilai_selisih;
        simpan_nilai[i] = simpan_sementara_nilai_besar;
    }
    
    for(int i = 0; i < N; i++) {
        hasil_sebelum += simpan_nilai[i];
    }
    
    long long selisih_final = 0;
    for(int i = 0; i < N; i++) {
        if(arr_simpan_selisih[i] > selisih_final) {
            selisih_final = arr_simpan_selisih[i];
        }
    }
    
    for(int i = 0; i < N; i++) {
        if(simpan_nilai[i] < selisih_final) {
            hasil_sesudah += selisih_final;
            selisih_final = 0;
        } else {
            hasil_sesudah += simpan_nilai[i];
        }
    }

    printf("%lld %lld", hasil_sebelum, hasil_sesudah);

    return 0;
}
