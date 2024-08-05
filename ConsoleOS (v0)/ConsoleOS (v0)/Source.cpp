#include<iostream>
#include<Windows.h>
#include<fstream>
#include<ctime>
#include<conio.h>
#include <iomanip>
#include<string>
#include <mmsystem.h>       //only used to play music from local drive
#pragma comment(lib, "winmm.lib")

#pragma warning(disable : 4996)


//..................................
//COLOUR DEFINITIONS

#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define BLACK       "\033[30m" 
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"


#define BG_GREEN    "\033[42m" 
#define BG_BLACK    "\033[40m"      
#define BG_RED      "\033[41m"     
#define BG_YELLOW   "\033[43m"      
#define BG_BLUE     "\033[44m"      
#define BG_MAGENTA  "\033[45m"     
#define BG_CYAN     "\033[46m"      
#define BG_WHITE    "\033[47m"

//..................................


using namespace std;




//*****************************TIME VARIABLES**********************************************************************************//

time_t TIME = time(0);
string TimeString = ctime(&TIME);

string Date = TimeString.substr(4, 6);
string Time = TimeString.substr(11, 5);
string Day = TimeString.substr(0, 3);
//*****************************************************************************************************************************//


//*****************************************************************************************************************************//
//                                      ALL FUNCTIONS USED IN THIS PROGRAM:
//*****************************************************************************************************************************//

void SetConsoleToFullscreen()
{
    INPUT ip = { 0 };
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = VK_F11;
    Sleep(40);

    SendInput(1, &ip, sizeof(INPUT));
    Sleep(40);

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    Sleep(40);

    INPUT inputs[4] = { 0 };

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_CONTROL;
    Sleep(40);

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_OEM_MINUS;
    Sleep(40);

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = VK_OEM_MINUS;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    Sleep(40);
    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_CONTROL;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    Sleep(40);
    for (int i = 0; i < 2; ++i) {
        SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
        Sleep(40);
    }
}

void BootScreen()
{
    cout << endl << endl << endl;
    cout << GREEN << "\t\t\t\t\t\t\tW E L C O ME   T O\n\n";
    Sleep(50);


    cout << YELLOW;


    cout<< "\t              *@@@@                                                                    .,                        @@@@%             %@@                " << endl;
    Sleep(100);
    cout << "\t           ,@@@@  @@@@@                                                              @@@@                     @@@@   @@@@       @@@@  @@@@@           " << endl;
    Sleep(100);
    cout << "\t          @@@@/     @@@                                                              @@@@                   #@@@@     @@@@     @@@      @@@           " << endl;
    Sleep(100);
    cout << "\t         @@@@@       @@                                                              @@@@                   @@@@@     @@@@@   /@@@#     #@@           " << endl;
    Sleep(100);
    cout << "\t         @@@@@                                                                       @@@@                  @@@@@      ,@@@@&   @@@@@                  " << endl;
    Sleep(100);
    cout << "\t        &@@@@@                                                                       @@@@                  @@@@@       @@@@@   (@@@@@@                " << endl;
    Sleep(100);
    cout << "\t        @@@@@@             (@@@%(@@@@   &@@@@@@@@@@@@    @@@@ &@@@,    @@@@,@@@@     @@@@     @@@@ @@@&   ,@@@@@       @@@@@     @@@@@@@              " << endl;
    Sleep(100);
    cout << "\t        @@@@@@            @@@@    @@@@   ,@@@@   @@@@   @@@*  /@@@@   @@@@   &@@@&   @@@@    @@@@   @@@@  *@@@@@      ,@@@@@       @@@@@@@            " << endl;
    Sleep(100);
    cout << "\t        @@@@@@            @@@@    @@@@#  ,@@@@   @@@@   @@@@@        @@@@@    @@@@   @@@@   @@@@@   @@@@  .@@@@@      (@@@@@         ,@@@@@@          " << endl;
    Sleep(100);
    cout << "\t        /@@@@@           @@@@@    @@@@@  ,@@@@   @@@@    &@@@@@@/    @@@@@    @@@@   @@@@   @@@@@@@@@@@@   @@@@@      @@@@@@           #@@@@          " << endl;
    Sleep(100);
    cout << "\t         @@@@@           %@@@@    @@@@@  ,@@@@   @@@@       @@@@@@@  @@@@@    @@@@   @@@@   @@@@@          @@@@@      @@@@@    @@       *@@@@         " << endl;
    Sleep(100);
    cout << "\t          @@@@&      @@%  @@@@    @@@@,  ,@@@@   @@@@    /*    @@@@/ @@@@@    @@@@   @@@@   @@@@@           @@@@,     @@@@@    @@        @@@          " << endl;
    Sleep(100);
    cout << "\t           @@@@&    @@@   %@@@,   @@@@   ,@@@@   @@@@  *@@@@    @@@   @@@@   &@@@    @@@@    @@@@&   @@@     @@@@    &@@@@     @@@      @@@#          " << endl;
    Sleep(100);
    cout << "\t             @@@@@@@@       @@@@@@@@    ,@@@@@& @@@@@@  .@@@@@@@@%      @@@@@@@@    @@@@@@@    @@@@@@@&        @@@@@@@@@       @@@@@@@@@@&            " << endl;



    cout << endl << RESET;
    Sleep(100);
    cout << "\n\n\t\t\t\t\t\t\t\t  B";
    Sleep(100);
    cout << "o";
    Sleep(100);
    cout << "o";
    Sleep(100);
    cout << "t";
    Sleep(100);
    cout << "i";
    Sleep(100);
    cout << "n";
    Sleep(100);
    cout << "g";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";
    
    cout << "\n\n\t\t\t\t\t\t\t";
    cout << BG_GREEN << GREEN << "O";
    Sleep(100);
    for (int i = 0; i < 28; i++)
    {
        Sleep(100);
        cout << "O";
    }
    Sleep(1000);
    cout <<RESET<< "\r                                                                                                            \r\n";

    cout << RESET;

    //cout << RESET<<"\n\n\n\t\t\t\t\t[OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"O"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OOO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"OO]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"O]";
    //Sleep(100);
    //system("cls");
    //cout << "\n\n\n\t\t\t\t\t["<<GREEN<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<RESET<<"]";
    //Sleep(100);
    //system("cls");
    //cout << RESET;
}
// ^^ RUNS AT START AND PLAYS ANIMATION

void displayLockScreen()
{
    cout << GREEN <<BOLD<< "\n\t\t\t\t\t\t\t  [ < < Welcome User > > ]" << RESET;

    const string correctPassword = "helloworld";
    const int maxAttempts = 3;
    int attempts = 0;
    bool correctPasswordEntered = false;

    while (correctPasswordEntered == false)
    {
        cout << endl << endl << endl;

        string userPassword;
        cout << "\n\n\t\t\t\t\t\tEnter password: ";
        cout << "\t";


        cout << flush;
        while (true) {
            char pass = _getch();
            if (pass == 13)
            {
                break;
            }
            userPassword += pass;
            cout << '*';
            cout << flush;
        }
        cout << endl;

        if (userPassword == correctPassword) {
            cout << GREEN << "\t\t\t\t\t\tPASSWORD CORRECT" << RESET;
            Sleep(120);
            cout << BLACK << BG_GREEN << "\tU";
            Sleep(100);
            cout << "N";
            Sleep(100);
            cout << "L";
            Sleep(100);
            cout << "O";
            Sleep(100);
            cout << "C";
            Sleep(100);
            cout << "K";
            Sleep(100);
            cout << "I";
            Sleep(100);
            cout << "N";
            Sleep(100);
            cout << "G";
            Sleep(100);
            cout << ".";
            Sleep(100);
            cout << ".";
            Sleep(100);
            cout << ".";
            Sleep(100);
            cout << RESET;

            Sleep(800);
            system("cls");

            correctPasswordEntered = true;

        }
        else {
            ++attempts;
            cout << RED << "\t\t\tIncorrect password. Try Again" << RESET << endl;
            Sleep(700);
            system("cls");

            // Check if maximum attempts reached
            if (attempts >= maxAttempts)
            {
                cout << RED << "\t\t\tIncorrect password. Try Again" << endl << YELLOW "\t\t\tPassword hint: 'helloworld'\n" << RESET << endl;
            }
        }
    }
}


void ShutDown()
{
    cout << endl << endl << endl;
    cout << MAGENTA << "\t\t\t\t\t\t\t\tB Y E   B Y E\n\n";
    Sleep(50);



    cout << "\t              *@@@@                                                                    .,                        @@@@%             %@@                " << endl;
    Sleep(100);
    cout << "\t           ,@@@@  @@@@@                                                              @@@@                     @@@@   @@@@       @@@@  @@@@@           " << endl;
    Sleep(100);
    cout << "\t          @@@@/     @@@                                                              @@@@                   #@@@@     @@@@     @@@      @@@           " << endl;
    Sleep(100);
    cout << "\t         @@@@@       @@                                                              @@@@                   @@@@@     @@@@@   /@@@#     #@@           " << endl;
    Sleep(100);
    cout << "\t         @@@@@                                                                       @@@@                  @@@@@      ,@@@@&   @@@@@                  " << endl;
    Sleep(100);
    cout << "\t        &@@@@@                                                                       @@@@                  @@@@@       @@@@@   (@@@@@@                " << endl;
    Sleep(100);
    cout << "\t        @@@@@@             (@@@%(@@@@   &@@@@@@@@@@@@    @@@@ &@@@,    @@@@,@@@@     @@@@     @@@@ @@@&   ,@@@@@       @@@@@     @@@@@@@              " << endl;
    Sleep(100);
    cout << "\t        @@@@@@            @@@@    @@@@   ,@@@@   @@@@   @@@*  /@@@@   @@@@   &@@@&   @@@@    @@@@   @@@@  *@@@@@      ,@@@@@       @@@@@@@            " << endl;
    Sleep(100);
    cout << "\t        @@@@@@            @@@@    @@@@#  ,@@@@   @@@@   @@@@@        @@@@@    @@@@   @@@@   @@@@@   @@@@  .@@@@@      (@@@@@         ,@@@@@@          " << endl;
    Sleep(100);
    cout << "\t        /@@@@@           @@@@@    @@@@@  ,@@@@   @@@@    &@@@@@@/    @@@@@    @@@@   @@@@   @@@@@@@@@@@@   @@@@@      @@@@@@           #@@@@          " << endl;
    Sleep(100);
    cout << "\t         @@@@@           %@@@@    @@@@@  ,@@@@   @@@@       @@@@@@@  @@@@@    @@@@   @@@@   @@@@@          @@@@@      @@@@@    @@       *@@@@         " << endl;
    Sleep(100);
    cout << "\t          @@@@&      @@%  @@@@    @@@@,  ,@@@@   @@@@    /*    @@@@/ @@@@@    @@@@   @@@@   @@@@@           @@@@,     @@@@@    @@        @@@          " << endl;
    Sleep(100);
    cout << "\t           @@@@&    @@@   %@@@,   @@@@   ,@@@@   @@@@  *@@@@    @@@   @@@@   &@@@    @@@@    @@@@&   @@@     @@@@    &@@@@     @@@      @@@#          " << endl;
    Sleep(100);
    cout << "\t             @@@@@@@@       @@@@@@@@    ,@@@@@& @@@@@@  .@@@@@@@@%      @@@@@@@@    @@@@@@@    @@@@@@@&        @@@@@@@@@       @@@@@@@@@@&            " << endl;


    cout << endl << RESET;
    Sleep(90);
    cout << RED << "\n\n\t\t\t\t\t\t\t\t  S";
    Sleep(90);
    cout << "h";
    Sleep(90);
    cout << "u";
    Sleep(90);
    cout << "t";
    Sleep(90);
    cout << "t";
    Sleep(90);
    cout << "i";
    Sleep(90);
    cout << "n";
    Sleep(90);
    cout << "g";
    Sleep(90);
    cout << " ";
    Sleep(90);
    cout << "D";
    Sleep(90);
    cout << "o";
    Sleep(90);
    cout << "w";
    Sleep(90);
    cout << "n";
    Sleep(90);
    cout << ".";
    Sleep(90);
    cout << ".";
    Sleep(90);
    cout << ".";
    Sleep(90);

    cout << RESET;
}
// ^^ RUNS WHEN EXITED AND PLAY ANIMATION

//..................................................................................................................................

//Application class for derived classes:
//----------------------------------------------------------------------------------------------------------------------------------
class Application 
{
protected:
    string name;

public:
    Application(string name = "")
    {
        this->name = name;
    }
    virtual void run() = 0; // Pure virtual function
    string getName()
    { 
        return name; 
    }
};


class EmailApp : public Application {
private:
    string inboxFile = "inbox.txt";
    string outboxFile = "outbox.txt";
    int inboxMessages = 1;

    void sendEmail()
    {

        system("cls");
        string to, subject, body;


        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t|\t\tWRITE MESSAGE\t\t\t|\n";
        cout << "\t\t -----------------------------------------------\n";
        cout << endl;
        cout << "\n\n\n\n\n" << endl;
        cout << "\t\t\t\n";
        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << MAGENTA << "\t\tTo:     \t";
        cin >> to;
        cin.ignore();
        
        cout << MAGENTA << "\t\tSubject:\t";
        getline(cin, subject);
        cout << MAGENTA << "\t\tBody:   \t";
        getline(cin, body);
        cout << "\t\t\t\n";
        cout << "\t\t" << BG_GREEN << BLACK << "Email sent successfully!\n" << RESET;
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t -----------------------------------------------\n\n";
     

        ofstream outbox(outboxFile, ios::app);
        outbox << "To: " << to << "\n"
               << "Subject: " << subject << "\n"
               << "Body: " << body << "\n\n";

        
        
        outbox.close();
        
        Sleep(700);
        system("cls");
    }

    void viewInbox() 
    {
        ifstream inbox(inboxFile);
        string line;
        

        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t|\t\tI N B O X\t\t\t|\n";
        cout << "\t\t -----------------------------------------------\n";
        cout << endl;
        cout << "\n\n\n\n\n" << endl;
        cout << "\t\t\t\n";
        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";

        cout << MAGENTA << "\t\tMessage:\n";
        while (getline(inbox, line))
        {
            cout << "\t\t\t" << YELLOW << line << endl;
        }
        cout << RESET;

        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t\t\n";
        cout << "\t\t -----------------------------------------------\n\n";
        cout << "\n\t\tPRESS 0 TO GO BACK :";
        int back;
        cin >> back;
        system("cls");

        
        inbox.close();
    }

    void viewOutbox()
    {

        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t|\t\t     OUTBOX         \t\t|\n";
        cout << "\t\t -----------------------------------------------\n";
        cout << endl;
        cout << "\n\n" << endl;
        cout << "\t\t -----------------------------------------------\n";
        cout << "\t\t\t\n";

        ifstream outbox(outboxFile);
        string line;
        while (getline(outbox, line)) {
            cout << "\t\t\t" << YELLOW << line << endl;
        }
        outbox.close();
        cout << RESET;
        cout << "\n\n\t\t -----------------------------------------------\n\n";
        cout << "\n\t\tPRESS 0 TO GO BACK :";
        int back;
        cin >> back;
        system("cls");
    }

public:
    EmailApp() : Application("Gmail") {}

    int outboxCount()
    {
        int outboxMessages = 0;

        bool isMail = false;
        ifstream file(outboxFile);
        string line;
        while (getline(file, line))
        {
            if (!line.empty())
            {
                isMail = true;
                outboxMessages++;
            }
            else
            {
                isMail = false;
            }
        }
        file.close();

        return outboxMessages / 3;
    }

    void run()
    {
        int choice;
        system("cls");
        do 
        {

            cout << "\t\t -----------------------------------------------\n";

            cout << "\t\t|\t\t  G M A I L \t\t\t|\n";
            cout << "\t\t -----------------------------------------------\n";
            cout << endl;
            cout << "\n\n\n\n\n" << endl;
            cout << "\t\t\tWhat would you like to do?\n";
            cout << "\t\t -----------------------------------------------\n";
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            Sleep(20);
            cout << MAGENTA << "\t\t\t1." << RESET << " WRITE EMAIL \t            INBOX " << GREEN"(" << inboxMessages << ") " << MAGENTA << "2." << RESET << endl;
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            Sleep(20);
            cout << MAGENTA << "\t\t\t3." << RESET << "   OUTBOX " << GREEN"(" << outboxCount() << ")" << RESET << "     \t  HOMESCREEN  " << MAGENTA << "4." << RESET << endl;
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            cout << "\t\t\t\n";
            cout << "\t\t -----------------------------------------------\n\n";
            cout << "\n\t\tENTER YOUR CHOICE :";

            cin >> choice;
            system("cls");
            switch (choice) {
            case 1:
                sendEmail();
                break;
            case 2:
                viewInbox();
                break;
            case 3:
                viewOutbox();
                break;
            case 4:
                break;
            default:
                cout << "Invalid option!\n";
                break;
            }
        } while (choice != 4);
    }
};

class Calculator : public Application 
{
public:
    Calculator() : Application("Math++") {}

    void run()
    {
        {
        calculator:
            system("cls");
            Sleep(30);
            cout << "\t\t -----------------------------------------------\n";
            Sleep(30);
            cout << "\t\t|\t\tWELCOME USER\t\t\t|\n";
            Sleep(30);
            cout << "\t\t -----------------------------------------------\n";
            Sleep(30);
            cout << endl;
            Sleep(30);
            Sleep(30);
            cout << "\n\n\n\n" << endl;
            Sleep(30);
            cout << "\t\t\tWhat would you like to do?\n";
            Sleep(30);
            cout << "\t\t -----------------------------------------------\n";
            Sleep(30);
            cout << "\t\t\t\n";
            Sleep(30);
            cout << "\t\t\t\n";
            Sleep(30);
            cout << "\t\t\t1. ADDITION\n";
            Sleep(30);
            cout << "\t\t\t2. SUBTRACTION\n";
            Sleep(30);
            cout << "\t\t\t3. MULTIPLICATION\n";
            Sleep(30);
            cout << "\t\t\t4. DIVISION\n\n";
            Sleep(30);
            cout << "\t\t\t0. GO BACK\n";
            Sleep(30);
            cout << "\t\t\t\n";
            Sleep(30);
            cout << "\t\t -----------------------------------------------\n\n";
            Sleep(30);

            int choice;
            cout << "\t\t Enter your choice: ";
            cin >> choice;

            double num1, num2, result;

            switch (choice) {
            case 1:
            addition:
                system("cls");
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t|\t\t\tADDITION\t\t|\n";
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << "\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                cout << "\t\t\t\n";
                cout << "\t\t Enter the first number: ";
                cin >> num1;
                cout << "\t\t Enter the second number: ";
                cin >> num2;
                result = num1 + num2;
                cout << YELLOW << "\n\n\n\t\t The result of " << RESET << num1 << GREEN << " + " << RESET << num2 << YELLOW << " is: " << GREEN << result << "\n" << RESET;
                cout << "\t\t -----------------------------------------------\n";
                cout << MAGENTA << "\n\t\t1." << RESET << "  ANOTHER ADDITION \t\t GO BACK  " << MAGENTA << "2." << RESET;
                cout << YELLOW << "\n\n\t\tEnter your choice: ";
                int choiceplus;
                cin >> choiceplus;
                cout << RESET;
                switch (choiceplus)
                {
                case 1:
                    Sleep(200);
                    system("cls");
                    goto addition;
                    break;
                case 2:
                    goto calculator;
                    break;
                default:
                    cout << RED << "\t\tInvalid choice. Please try again.\n" << RESET;
                    Sleep(500);
                    goto addition;
                }
                break;
            case 2:
            subtraction:
                system("cls");

                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t|\t\t\tSUBTRACTION\t\t|\n";
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << "\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                cout << "\t\t\t\n";
                cout << "\t\t Enter the first number: ";
                cin >> num1;
                cout << "\t\t Enter the second number: ";
                cin >> num2;
                result = num1 - num2;
                cout << YELLOW << "\t\t The result of " << RESET << num1 << GREEN << " - " << RESET << num2 << YELLOW << " is: " << GREEN << result << RESET << "\n";
                cout << "\t\t -----------------------------------------------\n";
                cout << MAGENTA << "\n\t\t1." << RESET << " ANOTHER SUBTRACTION\t\t GO BACK  " << MAGENTA << "2." << RESET;
                cout << YELLOW << "\n\n\t\tEnter your choice: ";
                cout << RESET;
                int choicemin;
                cin >> choicemin;

                switch (choicemin)
                {
                case 1:
                    Sleep(200);
                    system("cls");
                    goto subtraction;
                    break;
                case 2:
                    goto calculator;
                    break;
                default:
                    cout << RED << "\t\tInvalid choice. Please try again.\n" << RESET;
                    Sleep(500);
                    goto subtraction;
                }
                break;
            case 3:
            Mult:
                system("cls");

                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t|\t\tMULTIPLICATION  \t\t|\n";
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << "\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                cout << "\t\t\t\n";
                cout << "\t\t Enter the first number: ";
                cin >> num1;
                cout << "\t\t Enter the second number: ";
                cin >> num2;
                result = num1 * num2;
                cout << YELLOW << "\t\t The result of " << RESET << num1 << GREEN << " x " << RESET << num2 << YELLOW << " is: " << GREEN << result << RESET << "\n";

                cout << "\t\t -----------------------------------------------\n";
                cout << MAGENTA << "\n\t\t1." << RESET << " ANOTHER MULTIPLICATION\t\tGO BACK  " << MAGENTA << "2." << RESET;
                cout << YELLOW << "\n\n\t\tEnter your choice: ";
                cout << RESET;

                int choicemult;
                cin >> choicemult;

                switch (choicemult)
                {
                case 1:
                    Sleep(200);
                    system("cls");
                    goto Mult;
                    break;
                case 2:
                    goto calculator;
                    break;
                default:
                    cout << RED << "\t\tInvalid choice. Please try again.\n" << RESET;
                    Sleep(500);
                    goto Mult;
                }
                break;
            case 4:
            Div:
                system("cls");

                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t|\t\t\tDIVISION\t\t|\n";
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << "\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                cout << "\t\t\t\n";
                cout << "\t\t Enter the dividend: ";
                cin >> num1;
                cout << "\t\t Enter the divisor: ";
                cin >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << YELLOW << "\t\t The result of " << RESET << num1 << GREEN << " / " << RESET << num2 << YELLOW << " is: " << GREEN << result << RESET << "\n";

                }
                else {
                    cout << RED << "\t\t CANT DIVIDE BY ZERO!!.\n" << RESET;
                }
                cout << "\t\t -----------------------------------------------\n";
                cout << MAGENTA << "\n\t\t1." << RESET << " ANOTHER DIVISION \t\tGO BACK  " << MAGENTA << "2." << RESET;
                cout << YELLOW << "\n\n\t\tEnter your choice: ";
                int choicediv;
                cout << RESET;

                cin >> choicediv;

                switch (choicediv)
                {
                case 1:
                    Sleep(200);
                    system("cls");
                    goto Div;
                    break;
                case 2:
                    goto calculator;
                    break;
                default:
                    cout << RED << "\t\tInvalid choice. Please try again.\n" << RESET;
                    Sleep(500);
                    goto Div;
                }
                break;

            case 0:
                system("cls");
                break;

            default:
                cout << RED << "\t\tInvalid choice. Please try again.\n" << RESET;
                Sleep(500);
                goto calculator;
            }

        }
    }
};

class MusicPlayer : public Application
{
public:
    MusicPlayer() : Application("Spotify") {}


    void run()
    {
        bool Exit = false;
    MusicPage:
        system("cls");

        while (Exit == false)
        {
            Sleep(30);
            cout << GREEN << "\t\t -----------------------------------------------\n";
            Sleep(30);
            cout << "\t\t|\t\t" << RESET << "   SPOTIFY  \t\t\t" << GREEN << "|\n";
            Sleep(30);
            cout << "\t\t -----------------------------------------------\n";
            Sleep(30);
            cout << endl;
            Sleep(30);
            Sleep(30);
            cout << "\n\n\n\n\n" << endl;
            Sleep(30);
            cout << "\t\t    Songs\t\t\t  Artist:\n";
            cout << "\t\t -----------------------------------------------\n"<<RESET;
            Sleep(30);
            cout << GREEN << "\t\t1." << RESET << " SHOOTOUT\t\t\t" << CYAN << " Izzamuzic\n" << RESET;
            cout << GREEN << "\t\t -----------------------------------------------\n" << RESET;
            Sleep(30);
            Sleep(30);
            cout << GREEN << "\t\t2." << RESET << " AFTER DARK\t\t\t" << CYAN << " Mr.Kitty\n" RESET;
            Sleep(30);
            cout << GREEN << "\t\t -----------------------------------------------\n" << RESET;
            Sleep(30);
            cout << GREEN << "\t\t3." << RESET << " MEMORY REBOOT\t\t" << CYAN << " Narvent\n" RESET;
            Sleep(30);
            cout << GREEN << "\t\t -----------------------------------------------\n" << RESET;
            Sleep(30);
            cout << GREEN << "\t\t4." << RESET << " RESONANCE\t\t\t" << CYAN << " HOME\n" RESET;
            Sleep(30);
            cout << GREEN << "\t\t -----------------------------------------------\n\n" << RESET;
            Sleep(30);
            cout << CYAN << "\t\t0." << RESET << "  GO BACK" << RESET << endl << endl;
            cout << CYAN << "\t\tWhich song do you want to play? " << RESET;
            char choice;
            cin >> choice;


            switch (choice)
            {
            case '1':
                system("cls");

                PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\SHOOTOUT.wav"), 0, SND_FILENAME | SND_ASYNC);          //Keeps playng the song even in homescreen etc
            Arabic:
                system("cls");
                cout << GREEN;
                cout << GREEN << "\t\t -----------------------------------------------\n";
                Sleep(30);
                cout << "\t\t|\t\t" << RESET << "   SPOTIFY  \t\t\t" << GREEN << "|\n";
                Sleep(30);
                cout << "\t\t -----------------------------------------------\n";
                cout << RESET;
                cout << endl;
                cout << "\n\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                Sleep(10);
                cout << "\t\t  " << GREEN << " NOW PLAYING ";
                Sleep(10);
                cout << YELLOW << "\t\tSHOOTOUT " << RESET;
                cout << "\t\t\t\n";
                cout << "\n\t\t -----------------------------------------------\n\n";
                cout << MAGENTA << "\n\t\t1." << RESET << "  GO BACK   \t    STOP SONG  " << MAGENTA << "2." << RESET << endl;
                cout << BLUE << "\n\t\tWhat would you like to do? ^^\t" << RESET;

                char choose1;
                cin >> choose1;

                switch (choose1)
                {
                case '1':
                    goto MusicPage;
                    break;

                case '2':
                    PlaySound(NULL, NULL, SND_PURGE);
                    Sleep(700);
                    goto MusicPage;
                    break;
                default:
                    cout << "INVALID OPTION. TRY AGAIN";
                    Sleep(300);
                    goto Arabic;
                    break;
                }

                break;

            case '2':
                system("cls");

                PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\AFTERDARK.wav"), 0, SND_FILENAME | SND_ASYNC);          //Keeps playng the song even in homescreen etc
            epic:
                system("cls");
                cout << GREEN;

                cout << GREEN << "\t\t -----------------------------------------------\n";
                Sleep(30);
                cout << "\t\t|\t\t" << RESET << "   SPOTIFY  \t\t\t" << GREEN << "|\n";
                Sleep(30);
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << RESET;

                cout << "\n\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                Sleep(10);

                cout << "\t\t  " << GREEN << " NOW PLAYING ";
                Sleep(10);
                cout << YELLOW << "\t\tAFTER DARK " << RESET;
                cout << "\t\t\t\n";
                cout << "\n\t\t -----------------------------------------------\n\n";
                cout << MAGENTA << "\n\t\t1." << RESET << "  GO BACK   \t    STOP SONG  " << MAGENTA << "2." << RESET << endl;
                cout << BLUE << "\n\t\tWhat would you like to do? ^^\t" << RESET;

                char choose2;
                cin >> choose2;

                switch (choose2)
                {
                case '1':
                    goto MusicPage;
                    break;

                case '2':
                    PlaySound(NULL, NULL, SND_PURGE);
                    Sleep(700);
                    goto MusicPage;
                    break;
                default:
                    cout << "INVALID OPTION. TRY AGAIN";
                    Sleep(300);
                    goto epic;
                    break;
                }

                break;


            case '3':
                system("cls");

                PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\Memory_Reboot.wav"), 0, SND_FILENAME | SND_ASYNC);          //Keeps playng the song even in homescreen etc
            memory:
                system("cls");
                cout << GREEN;

                cout << GREEN << "\t\t -----------------------------------------------\n";
                Sleep(30);
                cout << "\t\t|\t\t" << RESET << "   SPOTIFY  \t\t\t" << GREEN << "|\n";
                Sleep(30);
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << RESET;

                cout << "\n\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                Sleep(10);
                cout << "\t\t  " << GREEN << " NOW PLAYING ";
                Sleep(10);
                cout << YELLOW << "\t\tMEMORY REBOOT " << RESET;
                cout << "\t\t\t\n";
                cout << "\n\t\t -----------------------------------------------\n\n";
                cout << MAGENTA << "\n\t\t1." << RESET << "  GO BACK   \t    STOP SONG  " << MAGENTA << "2." << RESET << endl;
                cout << BLUE << "\n\t\tWhat would you like to do? ^^\t" << RESET;

                char choose3;
                cin >> choose3;

                switch (choose3)
                {
                case '1':
                    goto MusicPage;
                    break;

                case '2':
                    PlaySound(NULL, NULL, SND_PURGE);
                    Sleep(700);
                    goto MusicPage;
                    break;
                default:
                    cout << "INVALID OPTION. TRY AGAIN";
                    Sleep(300);
                    goto memory;
                    break;
                }

                break;

            case '4':
                system("cls");

                PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\Resonance.wav"), 0, SND_FILENAME | SND_ASYNC);          //Keeps playng the song even in homescreen etc
            reso:
                system("cls");
                cout << GREEN;

                cout << GREEN << "\t\t -----------------------------------------------\n";
                Sleep(30);
                cout << "\t\t|\t\t" << RESET << "   SPOTIFY  \t\t\t" << GREEN << "|\n";
                Sleep(30);
                cout << "\t\t -----------------------------------------------\n";
                cout << endl;
                cout << RESET;

                cout << "\n\n\n\n\n" << endl;
                cout << "\t\t -----------------------------------------------\n";
                cout << "\t\t\t\n";
                Sleep(10);
                cout << "\t\t  " << GREEN << " NOW PLAYING ";
                Sleep(10);
                cout << YELLOW << "\t\tRESONANCE " << RESET;
                cout << "\t\t\t\n";
                cout << "\n\t\t -----------------------------------------------\n\n";
                cout << MAGENTA << "\n\t\t1." << RESET << "  GO BACK   \t    STOP SONG  " << MAGENTA << "2." << RESET << endl;
                cout << BLUE << "\n\t\tWhat would you like to do? ^^\t" << RESET;

                char choose4;
                cin >> choose4;

                switch (choose4)
                {
                case '1':
                    goto MusicPage;
                    break;

                case '2':
                    PlaySound(NULL, NULL, SND_PURGE);
                    Sleep(700);
                    goto MusicPage;
                    break;
                default:
                    cout << "INVALID OPTION. TRY AGAIN";
                    Sleep(300);
                    goto reso;
                    break;
                }

                break;

            case '0':
                system("cls");

                Exit = true;
                break;

            default:

                cout << "INVALID OPTION. TRY AGAIN";
                Sleep(1000);
                goto MusicPage;
                break;
            }
        }

    }
};

class Game : public Application
{
private:
    // Constants for the game
    int width = 51;
    int height = 14;

    // Game map
    char map[14][51] = {
        "\t\t\t#############################",
        "\t\t\t#...........##..............#",
        "\t\t\t#...........##..............#",
        "\t\t\t#..#######..##..########..###",
        "\t\t\t#...........................#",
        "\t\t\t#..#######..##..########..###",
        "\t\t\t#...........................#",
        "\t\t\t#..#####################..###",
        "\t\t\t#...........##..............#",
        "\t\t\t#..#######..##..########..###",
        "\t\t\t#...........##..............#",
        "\t\t\t#...........##..............#",
        "\t\t\t#############################",
    };

    int pacmanX = 8;
    int pacmanY = 1;    //position

    int dotsCount = 0;      //aka the score of player

public:

    Game() : Application("PACMAN") {}

    void drawMap() {
        system("cls");
        cout << YELLOW << "\n\n\t\t\t\t|   P A C M A N   |\n"<<RESET;
        cout << "\n\n\n" << YELLOW;
        for (int i = 0; i < 13; i++) {
            cout << map[i] << endl;
        }

        cout << MAGENTA << "\n\n\t\t\tDots collected: \t" << GREEN << dotsCount << RESET << endl;
    }

    void movePacman(int dx, int dy) 
    {
        int newX = pacmanX + dx;
        int newY = pacmanY + dy;

        if (map[newY][newX] != '#') 
        {   //detect wall
            if (map[newY][newX] == '.') 
            {
                dotsCount++;
            }
            map[pacmanY][pacmanX] = ' '; //moved
            pacmanX = newX;
            pacmanY = newY;
            map[pacmanY][pacmanX] = 'P'; //moved
        }
    }

    bool checkWin() 
    {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (map[i][j] == '.') {
                    return false;
                }
            }
        }
        return true;
    }

    void run() 
    {
        PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\PACMAN.wav"), 0, SND_FILENAME | SND_ASYNC);
        system("cls");
        cout << YELLOW << "\n\n\t\t\t\t|   P A C M A N   |\n" << RESET;
        cout << CYAN<<"\n\t\tUse arrow keys to move Pac-Man (P) and collect all dots (.)\n";
        cout << "\t\tPress ESC to quit the game.\n\n\n\n";
        cout << "\t\tPress any key to start!\t" << RESET;
        _getch();

        map[pacmanY][pacmanX] = 'P'; // Draw Pac-Man at the starting position

        while (true) {
            drawMap();

            if (checkWin()) {
                cout << GREEN << "You Won!" << RESET << endl;
                PlaySound(NULL, NULL, SND_PURGE);
                break;
            }

            if (_kbhit()) {
                switch (_getch()) {
                case 72:            //UP
                    movePacman(0, -1);
                    break;
                case 80:            //DOWN
                    movePacman(0, 1);
                    break;
                case 75:            //LEFT
                    movePacman(-1, 0);
                    break;
                case 77:            //RIGHT
                    movePacman(1, 0);
                    break;
                case 27:            //Exit 
                    cout << RESET;
                    PlaySound(NULL, NULL, SND_PURGE);
                    return;
                }
            }
            cout << RESET;
            Sleep(50); // Slow down the game loop
        }
    }
};

class Gen : public Application
{
private:
    string word;
    int count = 0;
public:
    Gen() : Application("WordGenerator") {}

    void run()
    {
        bool Exit = false;
    Again:

        system("cls");
        cout << "\n\t\t\t\t\t\t|Enter a word:\t";
        cin.ignore();
        cin >> word;
        cin.ignore();
        cout << "\n\t\t\t\t\t\t|Number of times you want to generate:\t";
        cin >> count;
        cout << "\n\n";
        for (int i = 0; i < count; i++)
        {
            cout << word << "\t";
            if (i % 5 == 0)
            {
                cout << endl;
            }
        }
        cout << "\n\t\t\t\t\t\t|press 1 for another word OR 0 to quit:\t";
        int x;
        cin >> x;
        if (x == 0)
        {
            Sleep(250);
        }
        else
        {
            goto Again;
        }
    }
};
//Console OS class. an object of this class will be made in main
class ConsoleOS
{
private:
    Application* App[5];    //5 APPLICATIONs at a time
public:
    ConsoleOS()
    {
        for (int i = 0; i < 5; i++)
        {
            App[i] = nullptr;   //points all poinTers to null
        }
    }

    void addApplication(Application& application) 
    {
        for (int i = 0; i < 5; ++i) 
        {
            if (App[i] == nullptr) {
                App[i] = &application;
                break;
            }
        }
    }
    void BootUpSequence()
    {
        Sleep(2000);
        PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\BOOT.wav"), NULL, SND_FILENAME | SND_ASYNC);
        Sleep(1500);
        BootScreen();
        displayLockScreen();
    }

    void displayMenu()      //this menu is very general. it can still be used if you uninstall/add applications
    {
        cout << "\n\n\n\n\n" << CYAN;
        Sleep(100);
        cout << "\t              *@@@@                                                                    .,                        @@@@%             %@@                " << endl;
        Sleep(100);
        cout << "\t           ,@@@@  @@@@@                                                              @@@@                     @@@@   @@@@       @@@@  @@@@@           " << endl;
        Sleep(100);
        cout << "\t          @@@@/     @@@                                                              @@@@                   #@@@@     @@@@     @@@      @@@           " << endl;
        Sleep(100);
        cout << "\t         @@@@@       @@           "<<YELLOW<<"         HOME PAGE     "<<CYAN<<"                            @@@@                   @@@@@     @@@@@   /@@@#     #@@           " << endl;
        Sleep(100);
        cout << "\t         @@@@@                                                                       @@@@                  @@@@@      ,@@@@&   @@@@@                  " << endl;
        Sleep(100);
        cout << "\t        &@@@@@                                                                       @@@@                  @@@@@       @@@@@   (@@@@@@                " << endl;
        Sleep(100);
        cout << "\t        @@@@@@             (@@@%(@@@@   &@@@@@@@@@@@@    @@@@ &@@@,    @@@@,@@@@     @@@@     @@@@ @@@&   ,@@@@@       @@@@@     @@@@@@@              " << endl;
        Sleep(100);
        cout << "\t        @@@@@@            @@@@    @@@@   ,@@@@   @@@@   @@@*  /@@@@   @@@@   &@@@&   @@@@    @@@@   @@@@  *@@@@@      ,@@@@@       @@@@@@@            " << endl;
        Sleep(100);
        cout << "\t        @@@@@@            @@@@    @@@@#  ,@@@@   @@@@   @@@@@        @@@@@    @@@@   @@@@   @@@@@   @@@@  .@@@@@      (@@@@@         ,@@@@@@          " << endl;
        Sleep(100);
        cout << "\t        /@@@@@           @@@@@    @@@@@  ,@@@@   @@@@    &@@@@@@/    @@@@@    @@@@   @@@@   @@@@@@@@@@@@   @@@@@      @@@@@@           #@@@@          " << endl;
        Sleep(100);
        cout << "\t         @@@@@           %@@@@    @@@@@  ,@@@@   @@@@       @@@@@@@  @@@@@    @@@@   @@@@   @@@@@          @@@@@      @@@@@    @@       *@@@@         " << endl;
        Sleep(100);
        cout << "\t          @@@@&      @@%  @@@@    @@@@,  ,@@@@   @@@@    /*    @@@@/ @@@@@    @@@@   @@@@   @@@@@           @@@@,     @@@@@    @@        @@@          " << endl;
        Sleep(100);
        cout << "\t           @@@@&    @@@   %@@@,   @@@@   ,@@@@   @@@@  *@@@@    @@@   @@@@   &@@@    @@@@    @@@@&   @@@     @@@@    &@@@@     @@@      @@@#          " << endl;
        Sleep(100);
        cout << "\t             @@@@@@@@       @@@@@@@@    ,@@@@@& @@@@@@  .@@@@@@@@%      @@@@@@@@    @@@@@@@    @@@@@@@&        @@@@@@@@@       @@@@@@@@@@&            " << endl;
        Sleep(100);
        cout << RESET << endl;
        cout <<YELLOW<< "\t\t\t" << Date << "\t\t\t\t\t\t\t" << Time << "\t\t\t\t\t\t\t\t" << Day << RESET << endl << endl;
        Sleep(500);
        cout << endl;
        for (int i = 0; i < 5; ++i) 
        {
            if (App[i] != nullptr) 
            {
                cout << "\t   " << BLACK << BG_YELLOW << i + 1 << "." << RESET << " " << YELLOW << App[i]->getName() << "\t\t";
                Sleep(300);
            }
        }
        cout << RESET << BG_RED "0." << RESET << RED << " Shut Down\n" << RESET;
    }

    void runApplication(int index) 
    {
        if (index >= 1 && index <= 5 && App[index - 1] != nullptr) 
        {
            App[index - 1]->run();
        }
        else {
            cout << "Invalid selection.\n";
        }
    }
};



int main()
{
    SetConsoleToFullscreen();
    ConsoleOS os;

    EmailApp Gmail;
    Calculator MathPro;
    MusicPlayer Spotify;
    Game PACMAN;
    Gen Erator;

    //PENDING^ WORK IN PROGRESS


    os.addApplication(Gmail);
    os.addApplication(MathPro);
    os.addApplication(Spotify);
    os.addApplication(PACMAN);
    //os.addApplication(Erator);

    os.BootUpSequence();

    int choice;
    while (true)
    {
        system("cls");
        os.displayMenu();
        Sleep(500);
        cout << "\n\n\n\n\t\t\t\t\t\t\tChoose an application to run:\t";
        cin >> choice;
        if (choice == 0) 
        {
            system("cls");
            PlaySound(TEXT("C:\\Users\\dell\\Music\\CP\\GOODBYE.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Sleep(1000);
            ShutDown();
            Sleep(5000);
            break;
        }
        os.runApplication(choice);
    }

    return 0;

}