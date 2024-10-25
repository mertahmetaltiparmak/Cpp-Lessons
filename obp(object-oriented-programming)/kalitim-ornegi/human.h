class human {
    protected:
        string name;
        string lastname;
        int age;
    public:
        void setName(string name) {
            this -> name = name;
        }
        void setLastName(string lastname) {
            this -> lastname = lastname;
        }
        void setAge(int age) {
            this -> age = age;
        }
        string getName() {
            return name;
        }
        string getLastName() {
            return lastname;
        }
        int getAge() {
            return age;
        }
        human(string name, string lastname, int age) {
            this -> name = name; 
            this -> lastname = lastname;
            this -> age = age;
        }
};