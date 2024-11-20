class Hotel {
    string* customer_name[100], *customer_lastname[100];
    int sum = 0, counter1, counter2;
    enum status {
        empty_room,
        full_room
    }rooms[20];
    public:
        Hotel();
        void room_management();
        void room_reservation();
        void room_evucation();
        void number_of_rooms();
        void room_report();
        void income();
};