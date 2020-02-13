#include <iostream>
#include <string>
using namespace std;
int guess;
int total;
 class question
{
  public:
    string d,e,f,g,h;
    
    int correct_Answer;
    int question_score;
      void setValues (string , string , string , string , string , int , int );
      void askquestion();
};
int main()
{
    cout<<"###############################........QUIZ__ARENA........########################"<<endl;
    cout<<"##########................................................................##########"<<endl;
    cout<<"#####..........................................................................######"<<endl;
    cout<<"#####.....__________________________________CREATED BY AYUSH___________________........####"<<endl;
    cout<<"#####................................................................................#####"<<endl;
    cout<<"###....................................................................................#####"<<endl;
    cout<<"##########################№###################₹₹₹₹₹₹₹₹₹₹₹$₹₹₹#############№####################"<<endl;

cout<<"press enter to start quiz"<<endl;
cin.get();

string name;
int age;

cout<<"What's your name:(only first name allowed)"<<endl;
cin>>name;
cout<<"What's your age:"<<endl;
cin>>age;
string respond;
cout <<"Do you want to take quiz "<<name<<"... yes/no.."<<endl;
cout <<"(enter yes if you want to play or no if you don't want.)"<<endl;
cin>>respond;

if (respond == "yes"){
  
  cout<<endl;
  cout<<"Good Luck Champ "<<name<<endl;
  cout<<endl;
  cout <<"DON'T CHEAT_______"<<endl;
  cout<<endl;
  cout <<" _____YOUR TIME STARTS NOW______"<<endl;
  cout <<endl;
  cout <<"(enter your answer as choice number eg.(1)if first option is right.)"<<endl;
}else {
  cout<<endl;
  cout<<" Ok Good Bye"<<endl;
  return 0;
}
question q1;
question q2;
question q3;
question q4;
question q5;
question q6;
question q7;
question q8;
question q9;
question q10;

 q1.setValues("On which date corona was declared world health emergency?",
   "1.jan 13,2020",
   "2.jan 30,2020",
   "3.jan 31,2020",
   "4.jan 27,2020",
   2,
   20);
   
   q2.setValues( "How much run virat scored in the 5th t20i against NZ recently?",
     "1.78",
     "2.56",
     "3.57",
     "4.he is not in the match",
     4,
     10);
     q3.setValues("How much people got dead in protest against CAA & NRC in UP recently ?",
       "1.20",
       "2.19",
       "3.17",
       "4.24",
       2,
       20);
       
       q4.setValues("which keyword is used to get the input of user just as 'ENTER' in C++ programming?",
         "1.cin>>enter",
         "2.cin>>get()",
         "3.cin.get()",
         "4.cin.enter",
         3,
         20);
         
         q5.setValues("With which of the following ,Principal Quantum Number is related to?",
           "1.electron",
           "2.proton",
           "3.energy levels",
           "4.nucleus",
           3,
           15);
          
          q6.setValues("Which of the following is major cause of Cancer?",
            "1.glycogen",
            "2.platyhelminthes",
            "3.Carcinogenic Chemicals",
            "4.Cancer virus",
            3,
            20);
            q7.setValues("Which of the following is natinal game of india?",
              "1.hockey",
              "2.cricket",
              "3.both",
              "4.none",
              4,
              25);
              q8.setValues("Who is the CDS(chief of defence staff) of india?",
                "1.manoj mukund narwade",
                "2.gn.Bipin rawat",
                "3.rajnath singh",
                "4.none",
                2,20);
                
                q9.setValues("Which of the following is a famous indian hacker?",
                  "1.Ankit kumar",
                  "2.Ankit Fadia",
                  "3.Indi coder",
                  "4.Ratan tata",
                  2,
                  15);
                  
                  q10.setValues("Who is the most earning cricketer according to latest press results?",
                   "1.Ms dhoni",
                   "2.Rohit sharma",
                   "3.Rahul Gandhi",
                   "4.Virat Kohli",
                   4,10);
                   
     
q1.askquestion();
q2.askquestion();
q3.askquestion();
q4.askquestion();
q5.askquestion();
q6.askquestion();
q7.askquestion();
q8.askquestion();
q9.askquestion();
q10.askquestion();

cout<<"Your total score is "<<total<<endl;
cout<<endl;

if (total>=70){
  cout <<"Congrats you passed the quiz"<<endl;
  cout<<endl;
  cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|$$$$$¥$¥$$¥¥¥¥¥¥$¥$$$$$$$$$$$$$$$$$$$$"<<endl;
  cout <<"$$$$$$$.                                                                           $$$$$$$$"<<endl;
  cout <<"$$$$.                                                                                $$$$$$"<<endl;
  cout <<"$$$$.                                  ÇØÑGRÃTÜLÁTÏØÑẞ.                              $$$$¢¢¢¢ "<<endl;
  cout <<"$$$$$.                                                                                $$$$$$¢¢"<<endl;
  cout <<"$$$$.                                                                                  $$$$$$$"<<endl;
  cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢$$$$$$$¢$$$$$$$$$$$$¢¢¢¢¢¢¢¢¢¢¢¢$$$$$$"<<endl;
}
else {
  cout<<endl;
  cout<<"Sorry you failed the quiz"<<endl;
  cout<<"BETTER LUCK NEXT TIME"<<endl;
  
}
return 0;

}
void question::setValues (string q ,string a1,string a2,string a3,string a4,int ca,int pa)
{
  d=q;
  e=a1;
  f=a2;
  g=a3;
  h=a4;
  correct_Answer = ca;
  question_score = pa;
}
void question::askquestion()
{
  cout <<endl;
  cout <<d<<endl;
  cout <<e<<endl;
  cout <<f<<endl;
  cout <<g<<endl;
  cout <<h<<endl;
  cout<<endl;
  
  cout<<"What is your answer"<<endl;
  cin>>guess;
  
  if (guess == correct_Answer){
    cout<<endl;
    cout<<"Great you are correct"<<endl;
    total = total + question_score ;
    cout <<"You scored: "<<question_score<<"out of "<<question_score <<endl;
    cout<<endl;
  }else {
    cout<<endl;
    cout<<"Oh no! You are wrong"<<endl;
    cout << "score is 0 out of "<<question_score << endl;
    cout <<"The correct answer is "<<correct_Answer<<endl;
  }
}
  
