#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <fstream>
#include <ctype.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <direct.h>
#include <sstream>
#include <chrono>
#include <thread>
#include <conio.h>
#include <sys/time.h>
using namespace std;
int string_part_compare(string a, string b)
{
    int fi, fj = 0, fl1, fl2, fr = 5;
    fl1 = a.length();
    fl2 = b.length();
    for (fi = 0; fi < fl1; fi++)
    {
        if (a[fi] == b[0])
        {
            while (1)
            {
                if (b[fj] == 32 || b[fj] == '\0')
                {
                    break;
                }
                fj++;
            }
            if ((a[fi - 1] == 32 || fi == 0) && (a[fi + fj] == 32 || a[fi + fj] == '\0' || a[fi + fj] == 32 || a[fi + fj] == 33 || a[fi + fj] == 46))
            {
                fr = 0;
                for (fj = 0; fj < fl2; fj++)
                {
                    if (a[fj + fi] != b[fj])
                    {
                        fr++;
                    }
                }
                if (fr < 3)
                {
                    break;
                }
            }
        }
    }
    if (fr < 3)
    {
        fr = 0;
    }
    else
    {
        fr = 1;
    }
    return fr;
}
string string_part_copy(string a, string b)
{
    int fi, fj = 0, fl1, fl2, fr = 5;
    string fstr;
    fl1 = a.length();
    fl2 = b.length();
    for (fi = 0; fi < fl1; fi++)
    {
        if (a[fi] == b[0])
        {
            while (1)
            {
                if (b[fj] == 32 || b[fj] == '\0')
                {
                    break;
                }
                fj++;
            }
            if ((a[fi - 1] == 32 || fi == 0) && (a[fi + fj] == 32 || a[fi + fj] == '\0' || a[fi + fj] == 32 || a[fi + fj] == 33 || a[fi + fj] == 46))
            {
                fr = 0;
                for (fj = 0; fj < fl2; fj++)
                {
                    if (a[fj + fi] != b[fj])
                    {
                        fr++;
                    }
                }
                if (fr < 3)
                {
                    fstr = a.substr(fi + fl2 + 1, fl1 - fi - fl2 - 1);
                    break;
                }
            }
        }
    }
    return fstr;
}
void align_center(string a)
{
    int m, j;
    m = ((113 - a.length()) / 2) - 2;
    cout << "\n";
    for (j = 0; j < m; j++)
    {
        cout << " ";
    }
}
void delay_printing(string a, int t)
{
    int i;
    std::chrono::microseconds interval(t);
    for (i = 0; i < a.length(); i++)
    {
        cout << a[i];
        std::this_thread::sleep_for(interval);
    }
}
int main()
{
    int i, j, k = 0, s, kk, kk1, l, m, t1, len1, len2, n1 = 1, r, r1, u, v, dd, dd1, dd2, mm, mm1, mm2, yy, yy1, yy2, hour, minutes, minutes2, s1, s2, times2, times3, times1[100];
    string answer[100], question[100], lines[100], song_name, question2, question3, question4, question5, question6, question7, question8, question9, question10, question11, question12, inpt1, inpt2, inpt3, main_inpt, store[100], name[2], day1, day2, month, year, k1;
    question2 = "remember that";
    question3 = "what did i tell you about";
    question4 = "what did i tell you to remember";
    question5 = "calculate age";
    question6 = "open file";
    question7 = "play music";
    question8 = "play video";
    question9 = "show lyrics";
    question10 = "with lyrics";
    question11 = "play music with lyrics";
    question12 = "show lyrics of";
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    dd1 = timePtr->tm_mday;
    mm1 = timePtr->tm_mon + 1;
    yy1 = timePtr->tm_year + 1900;
    hour = timePtr->tm_hour;
    minutes = timePtr->tm_min;
    minutes2 = minutes;
    month = mm1 + '0';
    stringstream time1;
    time1 << yy1;
    year = time1.str();
    stringstream time2;
    time2 << mm1;
    month = time2.str();
    fstream myfile;
    myfile.open("name.txt", ios::in);
    while (getline(myfile, name[1]))
    {
    }
    myfile.close();
    myfile.open("name2.txt", ios::in);
    while (getline(myfile, name[0]))
    {
    }
    myfile.close();
    myfile.open("eden.txt", ios::in);
    while (getline(myfile, store[k]))
    {
        k++;
    }
    myfile.close();
    myfile.open("day.txt", ios::in);
    myfile >> day2;
    myfile.close();
    kk = 0;
    myfile.open("question.txt", ios::in);
    while (getline(myfile, question[kk]))
    {
        kk++;
    }
    myfile.close();
    kk = 0;
    myfile.open("answer.txt", ios::in);
    while (getline(myfile, answer[kk]))
    {
        kk++;
    }
    myfile.close();
    cout << "\n\t\t\t\t\t\t\tWelcome\n\t\t\t\t\t\t\t-------\n\t\t\t\t\t\t\t\t\t\t\t\t\t" << hour << ":" << minutes << "\n\t\t\t\t\t\t\t\t\t\t\t\t" << dd1 << "-" << mm1 << "-" << yy1 << "\n\t\t\t\t\t\t\t\t\t\t\t\t---------";
    PlaySound(TEXT("Robot voice 2 - welcome__preview.wav"), NULL, SND_FILENAME | SND_ASYNC);
    cout << "\n\t" << name[0] << " : Hello... " << name[1] << ". How can I help?\n";
    while (1)
    {
        s = 0;
        time_t t = time(NULL);
        tm *timePtr = localtime(&t);
        hour = timePtr->tm_hour;
        minutes = timePtr->tm_min;
        dd1 = timePtr->tm_mday;
        stringstream time3;
        time3 << dd1;
        day1 = time3.str();
        u = 1;
        if (minutes > minutes2)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t" << hour << ":" << minutes << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t-----";
            minutes2 = minutes;
        }
        if (n1 == 1)
        {
            cout << "\n\t" << name[1] << " : ";
        }
        n1 = 1;
        getline(cin, main_inpt);
        len1 = main_inpt.length();
        for (i = 0; i < len1; i++)
        {
            main_inpt[i] = tolower(main_inpt[i]);
        }
        if (main_inpt == "stop")
        {
            cout << "\t" << name[0] << " : Okay...\n";
            PlaySound(TEXT("MySoundApplication"), NULL, SND_APPLICATION | SND_ASYNC);
            u = 0;
        }
        for (i = 0; i < kk; i++)
        {
            if (string_part_compare(main_inpt, question[i]) == 0)
            {
                if (i != 0 && i != 4 && i != 5)
                {
                    cout << "\t" << name[0] << " : " << answer[i] << ".\n";
                }
                if (i == 0)
                {
                    cout << "\t" << name[0] << " : " << answer[i] << " " << name[0] << ".\n";
                }
                if (i == 4)
                {
                    cout << "\t" << name[0] << " : Here you can customize your assistant :-\n\n\t\t1. Change your name.\n\t\t2. Change your assistant's name.\n\t\t  (To get back just type 'back' & press enter)\n\t\t-----------------------0-----------------------\n\t\t\t\t\t";
                    cin >> inpt3;
                    if (inpt3 == "1")
                    {
                        cout << "\tWhat should I call you?\n\t\t\t\t";
                        cin >> name[1];
                        cout << "\n";
                        if (name[1][0] < 123 && name[1][0] > 96)
                        {
                            name[1][0] = 'A' + name[1][0] - 'a';
                        }
                        myfile.open("name.txt", ios::out);
                        myfile << name[1];
                        myfile.close();
                        cout << "\t" << name[0] << " : So... " << name[1] << ", How can I help?\n";
                    }
                    else if (inpt3 == "2")
                    {
                        cout << "\tWhat will you like to call me?\n\t\t\t";
                        cin >> name[0];
                        if (name[0][0] < 123 && name[0][0] > 96)
                        {
                            name[0][0] = 'A' + name[0][0] - 'a';
                        }
                        myfile.open("name2.txt", ios::out);
                        myfile << name[0];
                        myfile.close();
                    }
                    else if (inpt3 == "back")
                    {
                        cout << "\t" << name[0] << " : Okay......No problem.\n";
                    }
                    else
                    {
                        cout << "\t" << name[0] << " : Your input is invalid";
                    }
                    n1 = 0;
                    v = 0;
                }
                if (i == 5)
                {
                    cout << "\t" << name[0] << " : " << answer[i] << " " << name[1] << ".\n";
                }
                u = 0;
                break;
            }
        }
        if (main_inpt == "exit")
        {
            break;
        }
        if (string_part_compare(main_inpt, question5) == 0)
        {
            cout << "\t" << name[0] << " : Enter your date of birth:\n\n\t" << name[1] << " : DD MM YYYY\n\t\t  ";
            cin >> dd2 >> mm2 >> yy2;
            if (dd2 > dd1)
            {
                dd1 = dd1 + 30;
                mm1 = mm1 - 1;
            }
            if (mm2 > mm1)
            {
                mm1 = mm1 + 12;
                yy1 = yy1 - 1;
            }
            dd = dd1 - dd2;
            mm = mm1 - mm2;
            yy = yy1 - yy2;
            if (dd2 > 31)
            {
                cout << "\t" << name[0] << " : tYour input of birth day is invalid.\n";
            }
            if (mm2 > 12)
            {
                cout << "\t" << name[0] << " : Your input of birth month is invalid.\n";
            }
            if (yy2 > yy1)
            {
                cout << "\t" << name[0] << " : Your input of birth year is invalid.\n";
            }
            else if (dd >= 0 && mm >= 0 && yy >= 0)
            {
                cout << "\t" << name[0] << " : Your age is :\n\t\t------------\n\t\t\t" << dd << " Day, " << mm << " Month, " << yy << " Year.\n";
            }
            u = 0;
            v = 0;
            n1 = 0;
        }
        if (string_part_compare(main_inpt, question6) == 0)
        {
            inpt2 = string_part_copy(main_inpt, question6);
            inpt3 = inpt2;
            inpt2 += ".txt";
            myfile.open(inpt2.c_str(), ios::in);
            if (myfile.is_open())
            {
                cout << "\t" << name[0] << " : Opening " << inpt3 << "...\n\n";
                while (getline(myfile, inpt3))
                {
                    cout << "\t\t\t" << inpt3 << "\n";
                }
                myfile.close();
            }
            else
            {
                cout << "\t" << name[0] << " : The file " << inpt3 << " is not available.\n\n";
            }
            u = 0;
        }
        if (string_part_compare(main_inpt, question7) == 0)
        {
            inpt2 = string_part_copy(main_inpt, question7);
            inpt3 = inpt2;
            song_name = inpt2;
            inpt2 += ".wav";
            if (PlaySound(TEXT(inpt2.c_str()), NULL, SND_FILENAME | SND_ASYNC))
            {
                cout << "\t" << name[0] << " : Playing music " << inpt3 << "...\n";
            }
            else
            {
                cout << "\t" << name[0] << " : The song '" << inpt3 << "' is not available.\n";
            }
            time_t t = time(NULL);
            tm *timePtr = localtime(&t);
            struct timeval detail_time;
            gettimeofday(&detail_time, NULL);
            times2 = ((timePtr->tm_hour * 360000) + (timePtr->tm_min * 6000) + (timePtr->tm_sec * 100) + (detail_time.tv_usec / 10000));
            kk1 = 0;
            inpt2 = song_name + ".txt";
            myfile.open(inpt2.c_str(), ios::in);
            if (myfile.is_open())
            {
                while (getline(myfile, inpt3))
                {
                    len2 = inpt3.length();
                    if (inpt3[1] >= '0' && inpt3[1] <= '9' && len2 > 10)
                    {
                        times1[kk1] = (((inpt3[1] - '0') * 60000) + ((inpt3[2] - '0') * 6000) + ((inpt3[4] - '0') * 1000) + ((inpt3[5] - '0') * 100) + ((inpt3[7] - '0') * 10) + ((inpt3[8] - '0') * 1));
                        lines[kk1] = inpt3.substr(10, len2 - 10);
                        kk1++;
                    }
                }
                myfile.close();
            }
            lines[kk1] = "~~End~~";
            u = 0;
        }
        if (string_part_compare(main_inpt, question8) == 0)
        {
            inpt2 = string_part_copy(main_inpt, question8);
            inpt3 = inpt2;
            _chdir("C:\\KMPlayer\\KMPlayer.exe");
            inpt2 += ".wmv";
            cout << "\t" << name[0] << " : Playing video " << inpt3 << "...\n";
            system(inpt2.c_str());
            u = 0;
        }
        if (string_part_compare(main_inpt, question12) == 0)
        {
            song_name = string_part_copy(main_inpt, question12);
            kk1 = 0;
            inpt2 = song_name + ".txt";
            myfile.open(inpt2.c_str(), ios::in);
            if (myfile.is_open())
            {
                while (getline(myfile, inpt3))
                {
                    len2 = inpt3.length();
                    if (inpt3[1] >= '0' && inpt3[1] <= '9' && len2 > 10)
                    {
                        std::chrono::microseconds interval(100);
                        lines[kk1] = inpt3.substr(10, len2 - 10);
                        align_center(lines[kk1]);
                        for (i = 0; i < lines[kk1].length(); i++)
                        {
                            cout << lines[kk1][i];
                        }
                        kk1++;
                        std::this_thread::sleep_for(interval);
                    }
                }
                myfile.close();
            }
            align_center("~~End~~");
            delay_printing("~~End~~", 100);
            u = 0;
            s = 1;
        }
        if (string_part_compare(main_inpt, question9) == 0 && s != 1)
        {
            if (song_name[0] > 96 && song_name[0] < 123)
            {
                song_name[0] = song_name[0] - 'a' + 'A';
            }
            cout << "\t" << name[0] << " : Showing lyrics of " << song_name << "...\n";
            align_center(song_name);
            cout << "::" << song_name << "::";
            align_center(song_name);
            len2 = song_name.length();
            for (i = 0; i < len2 + 4; i++)
            {
                cout << "-";
            }
            u = 0;
            s = 0;
            t1 = 1;
            m = 0;
            times3 = 0;
            time_t t = time(NULL);
            tm *timePtr = localtime(&t);
            i = 0;
            std::chrono::milliseconds interval(10);
            while (1)
            {
                time_t t = time(NULL);
                tm *timePtr = localtime(&t);
                hour = timePtr->tm_hour;
                minutes = timePtr->tm_min;
                struct timeval detail_time;
                gettimeofday(&detail_time, NULL);
                times3 = ((timePtr->tm_hour * 360000) + (timePtr->tm_min * 6000) + (timePtr->tm_sec * 100) + (detail_time.tv_usec / 10000) - times2);
                if (minutes > minutes2)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t" << hour << ":" << minutes << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t-----";
                    minutes2 = minutes;
                }
                if (t1 == 1)
                {
                    for (i = 0; i < kk1; i++)
                    {
                        if (times1[i] >= times3 && times1[i] <= times3 + 5)
                        {
                            align_center(lines[i]);
                            cout << "  ";
                            delay_printing(lines[i], 100);
                            i++;
                            t1 = 0;
                            m = 1;
                            break;
                        }
                    }
                }
                if (times1[i] >= times3 && times1[i] <= times3 + 5 && m == 1)
                {
                    align_center(lines[i]);
                    cout << "  ";
                    delay_printing(lines[i], 1000);
                    i++;
                    if (i >= kk1)
                    {
                        align_center(lines[i]);
                        delay_printing(lines[i], 100);
                        break;
                    }
                }
                std::this_thread::sleep_for(interval);
                char key = ' ';
                if (_kbhit())
                    key = _getch();
                if (key >= 33 && key <= 126)
                {
                    cout << "\n\n\t" << name[0] << " : Stopped showing lyrics...\n";
                    break;
                }
            }
        }
        if (string_part_compare(main_inpt, question2) == 0)
        {
            if (day1 != day2)
            {
                store[k] = "\t\t\t\t\t\t\t" + day1 + "-" + month + "-" + year;
                myfile.open("eden.txt", ios::app);
                myfile << "" << store[k] << "\n";
                myfile.close();
                k++;
                if (day1 >= "10" && month >= "9")
                {
                    store[k] = "\t\t\t\t\t\t\t----------";
                }
                else if (day1 < "10" && month < "9")
                {
                    store[k] = "\t\t\t\t\t\t\t--------";
                }
                else if (day1 < "10" || month < "9")
                {
                    store[k] = "\t\t\t\t\t\t\t---------";
                }
                myfile.open("eden.txt", ios::app);
                myfile << "" << store[k] << "\n";
                myfile.close();
                k++;
                myfile.open("day.txt", ios::out);
                myfile << day1;
                myfile.close();
                day2 = day1;
            }
            stringstream k2;
            k2 << k;
            k1 = k2.str();
            store[k] = k1 + "."
                            "" +
                       main_inpt.substr(i + 13, len1 - (i + 13));
            cout << "\t" << name[0] << " : Okay... I'll remember that.\n";
            myfile.open("eden.txt", ios::app);
            myfile << "" << store[k] << "\n";
            myfile.close();
            u = 0;
            k++;
            l = k - 1;
            break;
        }
        r = 1;
        r1 = 1;
        if (string_part_compare(main_inpt, question3) == 0)
        {
            inpt1 = string_part_copy(main_inpt, question3);
            for (l = 0; l < k; l++)
            {
                for (j = 0; j < len1; j++)
                {
                    if (string_part_compare(store[l], inpt1) == 0)
                    {
                        if (r == 1)
                        {
                            cout << "\t" << name[0] << " : I remember you told me:\n\t\t-------------------------\n\t\t\t\t\t";
                            r = 0;
                        }
                        cout << "" << store[l] << "\n\t\t\t\t\t";
                        r1 = 0;
                        u = 0;
                        break;
                    }
                }
            }
            if (r1 == 1)
            {
                cout << "\t" << name[0] << " : Sorry...You didn't tell me about that.\n";
                u = 0;
            }
        }
        if (string_part_compare(main_inpt, question4) == 0)
        {
            cout << "\t" << name[0] << " : I remember you told me:\n\t\t-------------------------\n\t\t\t\t\t";
            for (l = 0; l < k; l++)
            {
                cout << "" << store[l] << "\n\t\t\t\t\t";
                u = 0;
            }
        }
        s1 = 0;
        s2 = 0;
        m = 0;
        for (i = 0; i < len1; i++)
        {
            if (main_inpt[i] == 'a')
            {
                inpt1 = main_inpt.substr(i, 3);
            }
            if (inpt1 == "ask")
            {
                m = 1;
                for (j = i; j < len1; j++)
                {
                    if (main_inpt[j] == '"')
                    {
                        s1 = j;
                        for (l = j + 1; main_inpt[l] != '"'; l++)
                        {
                            s2++;
                        }
                        question[kk] = main_inpt.substr(s1 + 1, s2);
                        len2 = question[kk].length();
                        for (i = 0; i < len2; i++)
                        {
                            main_inpt[i] = tolower(main_inpt[i]);
                        }
                        myfile.open("question.txt", ios::app);
                        myfile << "" << question[kk] << "\n";
                        ;
                        myfile.close();
                        break;
                    }
                }
            }
            if (m == 1)
            {
                break;
                m = 0;
            }
        }
        s1 = 0;
        s2 = 0;
        m = 0;
        for (i = 0; i < len1; i++)
        {
            if (main_inpt[i] == 'a')
            {
                inpt1 = main_inpt.substr(i, 6);
            }
            if (main_inpt[i] == 't')
            {
                inpt2 = main_inpt.substr(i, 4);
            }
            if (main_inpt[i] == 's')
            {
                inpt3 = main_inpt.substr(i, 3);
            }
            if (inpt1 == "answer" || inpt2 == "tell" || inpt3 == "say")
            {
                m = 1;
                for (j = i; j < len1; j++)
                {
                    if (main_inpt[j] == '"')
                    {
                        s1 = j;
                        for (l = j + 1; l < len1; l++)
                        {
                            if (main_inpt[l] == '"')
                            {
                                break;
                            }
                            s2++;
                        }
                        answer[kk] = main_inpt.substr(s1 + 1, s2);
                        if (answer[kk][0] < 123 && answer[kk][0] > 96)
                        {
                            answer[kk][0] = 'A' + answer[kk][0] - 'a';
                        }
                        myfile.open("answer.txt", ios::app);
                        myfile << "" << answer[kk] << "\n";
                        ;
                        myfile.close();
                        kk++;
                        u = 0;
                        break;
                    }
                }
            }
            if (m == 1)
            {
                break;
                m = 0;
            }
        }
        if (s2 == 0)
        {
            i = 0;
            myfile.open("question.txt", ios::out);
            while (i < kk)
            {
                myfile << "" << question[i] << "\n";
                i++;
            }
            myfile.close();
        }
        if (s2 != 0)
        {
            cout << "\t" << name[0] << " : Okay... I'll remember that.\n";
        }
        if (u == 1 && v > 1)
        {
            cout << "\t" << name[0] << " : I don't understand.\n";
        }
        v++;
    }
    return 0;
}
