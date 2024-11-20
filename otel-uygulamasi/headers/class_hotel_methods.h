Hotel::Hotel() {
    counter1 = 0, counter2 = 0;
    room_management();
}
void Hotel::room_management() {
    int number;
    for (int i = 0; i <= 20; i++) {
        rooms[i] = empty_room;
    }
    do {
        cout << "\n\t  -- Anayurt Oteli \n";
        cout << "\t\t1. Oda Rezervasyonu\n";
        cout << "\t\t2. Oda Boşaltma\n";
        cout << "\t\t3. Dolu Oda Sayısı\n";
        cout << "\t\t4. Oda Raporu \n";
        cout << "\t\t5. Toplam Gelir \n";
        cout << "\t\t6. Çıkış \n";
        cout << "\tSeçiminizi giriniz:";
        cin >> number;
        switch (number) {
            case 1:
                room_reservation();
                break;
            case 2:
                room_evucation();
                break;
            case 3:
                number_of_rooms();
                break;
            case 4:
                room_report();
                break;
            case 5:
                income();
                break;
            case 6:
                cout << "\nÇıkış Yapılıyor...\n";
                exit(true);
                delete[] customer_name;
                delete[] customer_lastname;
                break;
            default:
                cout << "\nYanlış Değer Girdiniz(1-6 arasında girin)!!\n";
        }
    } while (number != 6);
}
void Hotel::room_reservation() {
    int number, numberOfDays, i = 1, j= 13;
    string name, lastname;
    cout << "\n\t-Lütfen bir oda tipi seçiniz-\n";
    cout << "\t1. 1 Kişilik Oda (600TL)\n";
    cout << "\t2. 2 Kişilik Oda (1000TL)\n";
    cout << "Seçiminizi giriniz:";
    cin >> number;
    switch (number) {
        case 1:
            for (; i <= 12; i++) {
                if (rooms[i] != full_room) {
                    rooms[i] = full_room;
                    cout << "Adınız: ";
                    cin >> name;
                    cout << "Soyadınız: ";
                    cin >> lastname;
                    cout << "Kaç gün kalacaksanız: ";
                    cin >> numberOfDays;
                    sum += numberOfDays * 600;
                    counter1++;
                    customer_name[i] = new string;
                    *customer_name[i] = name;
                    customer_lastname[i] = new string;
                    *customer_lastname[i] = lastname;
                    break;
                }
            }
            if (i == 12) {
                cout << "Bütün bir kişilik odalar doludur.\n";
            }
            break;
        case 2:       
            for(; j <= 20; j++) {
                if (rooms[j] != full_room) {
                    rooms[j] = full_room;
                    cout << "Adınız: ";
                    cin >> name;
                    cout << "Soyadınız: ";
                    cin >> lastname;
                    cout << "Kaç gün kalacaksanız: ";
                    cin >> numberOfDays;
                    sum += numberOfDays* 1000;
                    counter2++;
                    customer_name[j] = new string;
                    *customer_name[j] = name;
                    customer_lastname[j] = new string;
                    *customer_lastname[j] = lastname;
                    break;
                }
            }
            if (j == 20) {
                cout << "Bütün iki kişilik odalar doludur. \n";
            }
            break;
    } 
}
void Hotel::room_evucation() {
    int number;
    cout << "Boşaltacağınız oda numarasını girin: ";
    cin >> number;
    if (rooms[number] == full_room) {
        rooms[number] = empty_room;
        delete customer_name[number];
        delete customer_lastname[number];
    }
    if (number > 0 && number <= 12)
        counter1--;
    else if (number > 12 && number <= 20) {
        counter2--;
        cout << "Oda artık boş\n";
    } else {
        cout << "Bu oda zaten boş farklı bir oda giriniz.";
    }
}
void Hotel::number_of_rooms() {
    cout << "Dolu olan 1 kişilik oda sayısı: " << counter1 << "\n";
    cout << "Dolu olan 2 kişilik oda sayısı: " << counter2 << "\n";
    _sleep(2000);
}
void Hotel::room_report() {
    if (counter1 == 0 && counter2 == 0) {
        cout << "Bütün odalar boş.\n";
    } else {
        cout << "Oda Numarası Müşteri Adı Müşteri Soyadı\n";
        cout << "=======================================\n";
        for (int i = 1; i <= 20; i++) {
            if (rooms[i] == full_room) {
                cout << i << "\t\t" << *customer_name[i] << "\t\t" << *customer_lastname[i] << "\n";
            }
        }
        _sleep(2000);
    }

}
void Hotel::income() {
    cout << "Toplam Gelir: " << sum << "\n";
    _sleep(1750);
}