#include <iostream>
using namespace std;

int main()
{
    int category;
    int score=0;
    char ans;
    cout << "*****WELCOME TO THE QUIZ GAME***** "<< endl;


    cout << "Select a categories"<< endl;
    cout << "1. Science "<<endl;
    cout << "2. Art and Literature "<< endl;
    cout << "3. History"<< endl;
    cout << "4. Sports"<<endl;
    cout << "5. General Knowledge"<< endl;
    cout<<" Enter the category number: ";
    cin>>category;
    if(category==1)
    {
        cout << "Science"<<endl;
        cout << "1) Brass gets discoloured in air because of the presence of which of the following gases in air"<< endl;

        cout << "   a. Oxygen"<<endl;
        cout<<  "   b. Hydrogen sulphide"<<endl;
        cout << "   c. Carbon dioxide "<<endl;
        cout << "   d. Nitrogen"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "2. Which of the following is a non metal that remains liquid at room temperature?"<<endl;

        cout << "   a.	Phosphorous"<<endl;
        cout << "   b.	Bromine"<<endl;
        cout << "   c.	Chlorine"<<endl;
        cout << "   d.	Helium"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "3. Chlorophyll is a naturally occurring chelate compound in which central metal is?"<<endl;

        cout << "   a. copper"<<endl;
        cout << "   b.	magnesium"<<endl;
        cout << "   c.	iron"<<endl;
        cout << "   d.	calcium"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }



        cout << "4. Which of the following is used in pencils?"<<endl;

        cout << "   a.	Graphite"<<endl;
        cout << "   b.	Silicon"<<endl;
        cout << "   c.	Charcoal"<<endl;
        cout << "   d.	Phosphorous"<<endl;
        cout << "Enter the answer: ";
        cin >> ans; if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


        cout << "5. Which of the following metals forms an amalgam with other metals?"<<endl;

        cout << "   a.	Tin"<<endl;
        cout << "   b.	Mercury"<<endl;
        cout << "   c.	Lead"<<endl;
        cout << "   d.	Zinc"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


    }
    else if (category==2)
    {
        cout << "Arts and Literature"<<endl;
        cout << "1. Kathakali is a popular dance form prevalent in which state?"<<endl;
        cout << "    a. Andhra Pradesh"<<endl;
        cout << "    b. Karnataka"<<endl;
        cout << "    c. Tamil Nadu"<<endl;
        cout << "    d. Kerala"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='d')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='b')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is D"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


        cout << "2. Who is the author credited with composing the classical Tamil epic Silappatikaram?"<<endl;
        cout << "   a. Agastya"<<endl;
        cout << "   b. Ilango Adigal"<<endl;
        cout << "   c. Chithalai Chathanar"<<endl;
        cout << "   d. Tholkapiyyar"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "3. Who started his career as a music composer in films as Sharmaji of the duo Sharmaji-Varmaji?"<<endl;
        cout << "   a. Khayyam"<<endl;
        cout << "   b. Naushad"<<endl;
        cout << "   c. Roshan"<<endl;
        cout << "   d. Jaidev"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "4. The Coalition Years is the autobiography of -"<<endl;
        cout << "   a. Mr. Lalkrishna Advani"<<endl;
        cout << "   b. Mrs. Sonia Gandhi"<<endl;
        cout << "   c. Dr. Manmohan Singh"<<endl;
        cout << "   d. Mr. Pranav Mukharji"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='d')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='b')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is D"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "5. The Kitab-ul-Hind is written in -"<<endl;
        cout << "   a. Urdu Language"<<endl;
        cout << "   b. Persian Language"<<endl;
        cout << "   c. Arabic Language"<<endl;
        cout << "   d. Turkish Language"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='b'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is C"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "6. Chatkora dance is the folk dance of which tribe of Madhya Pradesh -"<<endl;
        cout << "   a. Bhil"<<endl;
        cout << "   b. Korku"<<endl;
        cout << "   c. Saharia"<<endl;
        cout << "   d. Gond"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "7. Which script is used to write Haryanvi language?"<<endl;
        cout << "   a. Sanskrit"<<endl;
        cout << "   b. Hindi"<<endl;
        cout << "   c. Devanagari"<<endl;
        cout << "   d. None of the above"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='b'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is C"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "8. Who was the author of the book History of British India?"<<endl;
        cout << "   a. Charles Grant"<<endl;
        cout << "   b. John Stuart Mill"<<endl;
        cout << "   c. James Mill"<<endl;
        cout << "   d. William Jones"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='b'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is C"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "9. The art piece In Memoriam was a creation of which one of the following European painters?"<<endl;
        cout << "   a. Thomas Jones Barker"<<endl;
        cout << "   b. Joseph Noel Paton"<<endl;
        cout << "   c. Thomas Daniell"<<endl;
        cout << "   d. Charles D' Oyly"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "10. Who among the following was awarded The Hindu Prize in Fiction category for the year 2018?"<<endl;
        cout << "    a. Neelum Saran Gour"<<endl;
        cout << "    b. N. Kalyan Raman"<<endl;
        cout << "    c. Faiyaz Khondakar"<<endl;
        cout << "    d. Dibya Jyoti Hore "<<endl;
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

    }
    else if (category==3)
    {
        cout << " History"<<endl;
        cout << "1. What does Bangladesh's flag look like?"<<endl;
        cout << "   a. Blue background with yellow star in centre"<<endl;
        cout << "   b.Green background with red circle in centre"<<endl;
        cout << "   c.Red background with white circle in centre"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


        cout << "2. What year did Bangladesh finally become independent and gain the name it has today?"<<endl;
        cout << "   a. 1947"<<endl;
        cout << "   b.1971"<<endl;
        cout << "   c.1952"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


        cout << "3. What is the national flower of Bangladesh?"<<endl;
        cout << "   a. Water lily"<<endl;
        cout << "   b.Rose"<<endl;
        cout << "   c.Tulip"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }


        cout << "4. What did Bangladesh become known as after its first session of Independence in 1947?"<<endl;
        cout << "   a. East Pakistan"<<endl;
        cout << "   b. West Pakistan"<<endl;
        cout << "   c. East India"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "5. What is the main religion practiced in Bangladesh?"<<endl;
        cout << "   a. Buddism"<<endl;
        cout << "   b. Islam"<<endl;
        cout << "   c. Hinduism"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "6. On which continent is Bangladesh located?"<<endl;
        cout << "   a. Africa"<<endl;
        cout << "   b. Asia"<<endl;
        cout << "   c. Europe"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "7. Which district of Bangladesh was part of Assam?"<<endl;
        cout << "   a.Chittagong"<<endl;
        cout << "   b.Khulna"<<endl;
        cout << "   c.Sylhet"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='b')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is C"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "8. To which Indian Lieutenant General did Pakistani Lieutenant General Niazi surrendered ?"<<endl;
        cout << "   a. Sheikh Mujibur Rahman"<<endl;
        cout << "   b. Zia-ur-Rahman"<<endl;
        cout << "   c. J. S. Aurora"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='b')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is C"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "9. Which river of Bangladesh originates in Tibet?"<<endl;
        cout << "   a. Brahmaputra"<<endl;
        cout << "   b. Padma"<<endl;
        cout << "   c. Surma"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "10. Which party won the elections in Pakistan in 1970 and was not allowed to form government?"<<endl;
        cout << "    a. Muslim League"<<endl;
        cout << "    b. Awami League"<<endl;
        cout << "    c. Pakistan People's Party"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
         if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
    }
    else if (category==4)
    {
        cout << "Sports"<<endl;;
        cout << "  1. Former Australian captain Mark Taylor has had several nicknames over his playing career. Which of the following was NOT one of them?"<<endl;
        cout << "     a. Tubby"<<endl;
        cout << "     b. Stodge"<<endl;
        cout << "     c. Helium Bat"<<endl;
        cout << "     d. Stumpy"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "2. Which was the 1st non Test playing country to beat India in an international match?"<<endl;

        cout << "   a. Canada"<<endl;
        cout << "   b. Sri Lanka"<<endl;
        cout << "   c. Zimbabwe"<<endl;
        cout << "   d. East Africa"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "3. Track and field star Carl Lewis won how many gold medals at the 1984 Olympic games?"<<endl;

        cout << "   a. Two"<<endl;
        cout << "   b. Three"<<endl;
        cout << "   c. Four"<<endl;
        cout << "   d. Eight"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='c')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='a'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "4. Which county did Ravi Shastri play for?"<<endl;

        cout << "   a. Glamorgan"<<endl;
        cout << "   b. Leicestershire"<<endl;
        cout << "   c. Gloucestershire"<<endl;
        cout << "   d. Lancashire"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

        cout << "5. Who was the first Indian to win the World Amateur Billiards title?"<<endl;

        cout << "   a. Geet Sethi"<<endl;
        cout << "   b. Wilson Jones"<<endl;
        cout << "   c. Michael Ferreira"<<endl;
        cout << "   d. Manoj Kothari"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "6. Who is the first Indian woman to win an Asian Games gold in 400m run?"<<endl;

        cout << "   a. M.L.Valsamma"<<endl;
        cout << "   b. P.T.Usha"<<endl;
        cout << "   c. Kamaljit Sandhu"<<endl;
        cout << "   d. K.Malleshwari"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='d')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='a')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }

    }
    else if (category==5)
    {
        cout << " General Knowledge"<<endl;
        cout << "1. Grand Central Terminal, Park Avenue, New York is the world's"<<endl;

        cout << "   a. largest railway station"<<endl;
        cout << "   b. highest railway station"<<endl;
        cout << "   c. longest railway station"<<endl;
        cout << "   d. None of the above"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='a')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is A"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "2. Entomology is the science that studies"<<endl;

        cout << "   a. Behavior of human beings"<<endl;
        cout << "   b. Insects"<<endl;
        cout << "   c. The origin and history of technical and scientific terms"<<endl;
        cout << "   d. The formation of rocks"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "3. Eritrea, which became the 182nd member of the UN in 1993, is in the continent of"<<endl;
        cout << "   a. Asia"<<endl;
        cout << "   b. Africa"<<endl;
        cout << "   c. Europe"<<endl;
        cout << "   d. Australia"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "4. Garampani sanctuary is located at"<<endl;

        cout << "   a. Junagarh, Gujarat"<<endl;
        cout << "   b. Diphu, Assam"<<endl;
        cout << "   c. Kohima, Nagaland"<<endl;
        cout << "   d. Gangtok, Sikkim"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='a')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "5. For which of the following disciplines is Nobel Prize awarded?"<<endl;

        cout << "   a. Physics and Chemistry"<<endl;
        cout << "   b. Physiology or Medicine"<<endl;
        cout << "   c. Literature, Peace and Economics"<<endl;
        cout << "   d. All of the above"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='d')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='b'||ans=='c'||ans=='a')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is D"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
        cout << "6. Hitler party which came into power in 1933 is known as"<<endl;

        cout << "   a. Labour Party"<<endl;
        cout << "   b. Nazi Party"<<endl;
        cout << "   c. Ku-Klux-Klan"<<endl;
        cout << "   d. Democratic Party"<<endl;
        cout << "Enter the answer: ";
        cin >> ans;
        if (ans=='b')
        {
            cout << "correct"<<endl;
            score++;
        }
        else if (ans=='a'||ans=='c'||ans=='d')
        {
            cout <<"wrong"<<endl;
            cout <<"The correct answer is B"<<endl;
        }
        else
        {
            cout << "Wrong answer, Invalid"<<endl;

        }
    }
    else
    {
        cout << "Start the program again. And choose number from the categories. ";
    }
    cout<<"********You scored:   "<<score<<endl;


    cout<<"********THANK YOU*********";

    return 0 ;
}

