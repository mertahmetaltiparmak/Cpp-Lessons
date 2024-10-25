class students:public human {
    private:
        string studentNo;
    public:
    // human constructorini ekledik burada
        students(string studentNo, string name, string lastname, int age):human(name, lastname, age) {
            this -> studentNo = studentNo;
        }
        string getStudentNo() {
            return studentNo;
        } 
};