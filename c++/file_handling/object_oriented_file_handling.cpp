#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

class Book{
    private:
    int book_id;
    string book_title;
    string book_author;
    string status = "Available";
    public:

    Book(){

    }
    Book(int id, string name, string author){
        this->book_id = id;
        this->book_title = name;
        this->book_author=author;
    }

    int getBookById(){
        return this->book_id;
    }
    string getBookByTitle(){
        return this->book_title;
    }
    string getBookByAuthor(){
        return this->book_author;
    }
    string getStatus(){
        return this->status;
    }

    void setBookId(int id){
        this->book_id=id;
    }
    void setBookTitle(string t){
        this->book_title=t;
    }
    void setBookAuthor(string a){
        this->book_author=a;
    }
    void setBookStatus(string s){
        this->status=s;
    }
    string newBookDetails(){
        return to_string(this->book_id) + "," + book_title + "," + book_author + ","+ status;
    }
};

class BookService{
    public:
    virtual string addBook(Book& book) = 0;
    virtual Book getBookById(int book_id) = 0;
    virtual void getAllBooks() = 0;
    virtual string updateBookById(Book& book) = 0;
    virtual string deleteBookById(int bookid) = 0;

};

class BookServiceImplementation: public BookService{
    public:
    string addBook(Book& book)override{
        ofstream file("library.txt",ios::app);
        if(!file.is_open()){
            return "Error while opening the file";
        }
        file << book.newBookDetails() << endl;
        file.close();
        return "New Book Added Successfully";
    }
    Book getBookById(int book_id)override{
        ifstream file("library.txt");
        if(!file.is_open()){
            cout << "Error while iopening the file";
        }
        string line;
        Book bookDetails;
        while(getline(file,line)){
            stringstream ss(line);
            string id;
            string title;
            string author;
            string status;
            getline(ss,id,',');
            getline(ss,title,',');
            getline(ss,author,',');
            getline(ss,status,',');

            if(stoi(id)==book_id){
                bookDetails.setBookId(stoi(id));
                bookDetails.setBookTitle(title);
                bookDetails.setBookAuthor(author);
                bookDetails.setBookStatus(status);
            }
        }
        return bookDetails;
    }
    void getAllBooks(){
        ifstream file("library.txt");
        if(!file.is_open()){
            cout << "Error while iopening the file";
        }
        while(!file.eof()){
            string str;
            getline(file,str);
            cout << str << endl;
        }
    }
    string updateBookById(Book& book){
        ifstream file("library.txt");
        if(!file.is_open()){
            cout << "Error while iopening the file";
        }
    }
};
class ApllicationUi{
    public:
    static void menu(){
        cout << "1. Add new book" << endl;
        cout << "2. Search book by id" << endl;
        cout << "3. Get all books" << endl;
        cout << "4. Update book by id" << endl;
        cout << "5. Delete bok by id" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: " << endl;
    }
    static void addBook(){
        int book_id;
        string book_title;
        string book_author;
        cout << "Enter unique Book Id: ";
        cin >> book_id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin,book_title);
        cout << "Enter Book Author: ";
        getline(cin,book_author);
        Book newBook = Book(book_id,book_title,book_author);
        BookService *bookservice = new BookServiceImplementation();
        cout << bookservice->addBook(newBook) << endl;
    }
    static void getBookById(){
        int id;
        cout << "Enter Book Id: ";
        cin >> id;
        BookService *bookService = new BookServiceImplementation();
        Book book = bookService->getBookById(id);
        if(book.getBookById()!=id){
            cout << "Invalid Book Id" << endl;
        }
        cout << "Id: " << book.getBookById() << "Book Title: " << book.getBookByTitle() << "Book Author: " << book.getBookByAuthor() << "Status: " << book.getStatus();
    }
    static void getAllBooks(){
        BookService *bookService = new BookServiceImplementation();
        bookService->getAllBooks();
    } 
    static void updateBookById(){
        int id;
        cout << "Enter book id:";
        cin >> id;
        BookService *bookService = new BookServiceImplementation();
        Book book = bookService->getBookById(id);
        if(book.getBookById()!=id){
            cout << "Invalid Book Id" << endl;
        }
        int book_id;
        string book_title;
        string book_author;
        cout << "Enter New unique Book Id: ";
        cin >> book_id;
        cin.ignore();
        cout << "Enter New Book Title: ";
        getline(cin,book_title);
        cout << "Enter New Book Author: ";
        getline(cin,book_author);
        Book newBook = Book(book_id,book_title,book_author);
        BookService *bookservice = new BookServiceImplementation();
        cout << bookservice->addBook(newBook) << endl;
        // cout << bookService->updateBookById(id) << endl;
    }
};

int main(){
    cout << "Welcome To the library Management System";
    bool is_menu = true;
    while(is_menu){
        int choice;
        cin >> choice;
        ApllicationUi::menu();
        switch (choice){
        case 1:
            ApllicationUi::addBook();
            break;
        case 2:
            ApllicationUi::getBookById();
            break;
        case 3:
            ApllicationUi::getAllBooks();
            break;
        case 4:
            break;
        }
    }
}