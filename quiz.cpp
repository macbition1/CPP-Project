#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//define global value guess and total goals
int Guess;
int Total;

class Question 
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    void setValue(string, string, string, string, string, int, int);
    void askQuestion();

};



int main_view_manu()
{
    cout << "\t\t*********************************************" <<endl;
    cout << "\t\t**** H E L L O ! W E L C O M E 'QUIZLET' ****" <<endl;
    cout << "\t\t**** ==================================  ****" <<endl;
    cout << "\t\t****               ======                ****" <<endl;
    cout << "\t\t****                 B Y                 ****" <<endl;
    cout << "\t\t****               CHUNBIAO              ****" <<endl;
    cout << "\t\t*********************************************" <<endl;
    cout << endl;
    cout << "Please press enter to start a game..."<<endl;
    cin.get();
    system("cls");
    cout<<"Please enter your information" << endl;
    string name;
    string age;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "how old are you? ";
    cin >> age;
    string respond;
    cout << "Are you ready to take the Quiz " << name << "? Yes/No." << endl;
    cout << "Your choice: ";
    cin >> respond;

    if(respond == "yes" || respond == "Yes")
    {
        cout << endl;
        cout << "Ok, Good Luck!!!" << endl;
        system("cls");
    }
    else
    {
        cout << "Ok. Goodbye!"<< endl;
        //terminate the QuizGame;
        exit(0);
    }
}


int main()
{
    main_view_manu();
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;

    q1.setValue("What is my name?", "Tomasso", "Simone", "Federico","Chunbiao", 4, 10);
    q2.setValue("what's my favorite italian food?" ,"Tagliatelle", "Pizza", "Suppli", "Gelato", 4, 10);
    q3.setValue("which city do you like?", "Aosta", "Milano", "Roma", "Taranto", 1, 10);
    q4.setValue("Which kind of job do u perfer?", "DB", "SE", "Algorithm", "Pro", 2, 10);
    q5.setValue("Which car brand belong to Torino", "Fiat", "Velvo", "BYD", "NIO", 1, 10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

    system("cls");

    cout<<"Your total score is " << Total << " Points out of 50." << endl;

    if(Total >= 30){
        cout << "Great you passed the Quiz !!!" << endl;
        cout << "C O N G R A T U L A T I O N S !!!" << endl;

    }
    else 
    {
        cout << "Sorry, you failed the quiz!!!"<< endl;
        cout << "Do u want to try again? Yes/No" << endl;
        string try_again;
        cout << "Your choice:";
        cin >> try_again;
        if(try_again == "yes" || try_again == "Yes")
        {
            main();
        }
        else{
           cout << "OK. Goodbye!" << endl;
           return 0 ;
        }
    }

    system("pause");
    return 0;

}

void Question::setValue(string q, string a1, string a2, string a3, string a4, int ca, int qa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = qa;
}

void Question :: askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1." << Answer_1 <<endl;
    cout << "2." << Answer_2 << endl;
    cout << "3." << Answer_3 <<endl;
    cout << "4." << Answer_4 << endl;
    cout << endl;

    cout << "Answer: ";
    cin >> Guess;

    if( Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great, You are correct." << endl;
        Total += Question_Score;
        cout << "Score: " << Question_Score << " Out of " << Question_Score << " !" << endl;

    }
    else{
        cout << endl;
        cout << "Oh, No. You are Wrong." << endl;
        cout << "Score: 0" << " out of "<< Question_Score << " !" << endl;
        cout << "The correct answer is " << Correct_Answer<< endl;
        cout << endl;
    }
}