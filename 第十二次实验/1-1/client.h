class client {
   public:
    static char ServerName;
    int static ClientName;
    static void changeServerName() {}
    client(char s, int c) {
        this->ServerName = s;
        this->ClientName = c;
    }
    ~client() {}
};