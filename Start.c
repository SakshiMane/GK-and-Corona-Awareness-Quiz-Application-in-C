#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void showRecord();
void edit_score(float,char[]);
void LoPlayer(char[],float);
void printList();
int main() {
    int i,c1,counter,w,r1;
    float score;
    char ch;
    char playername[20],plyrname[20];
    void about();
    homepage:
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t _______________________________________________________________________\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    /*printf("\t\t\t{***********************************************************************}\n");*/
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t      GK & COVID-19 AWARNESS QUIZ\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|***********************************************************************|\n");
     printf("\t\t\t|***********************************************************************|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\tWELCOME TO THE QUIZ!!\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t   PLAY AND LEARN\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|***********************************************************************|\n");
    printf("\t\t\t|***********************************************************************|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t *Instructions*\t\t\t\t\t|\n");
    printf("\t\t\t|\t    (Please read about the game before playing it)\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t     >> Enter 1. to START the GK Quiz Game\t\t\t|\n");
    printf("\t\t\t|\t     >> Enter 2. to Check your COVID-19 awareness\t\t|\n");
    printf("\t\t\t|\t     >> Enter 3. View the Highest Score\t\t\t\t|\n");
    printf("\t\t\t|\t     >> Enter 4. to view the List of Players and their score\t|\n");
    printf("\t\t\t|\t     >> Enter 5. to know About the Game\t\t\t\t|\n");
    printf("\t\t\t|\t     >> Enter 6. to Quit\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t|_______________________________________________________________________|\n\n");
    ch = toupper(_getch());
    if(ch=='5'){
        about();
        goto homepage;
    }
    else if(ch=='6') {
        exit(1);
    }
    else if(ch=='3') {
        showRecord();
        goto homepage;
    }
    else if(ch=='4') {
        system("cls");
        printList();
        goto homepage;
    }
    else if(ch=='2') {
        int coviscore=0,cc;
        system("cls");
        printf("\n\n\n\t\t\t\t>>>> COVID-19 AWARNESS QUIZ <<<<<");
        printf("\n\n\n\n\t\t\t\t[*] Register you Name: ");
        gets(plyrname);
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if(toupper(_getch())=='Y') {
            goto covid;
        }
        else {
            system("cls");
            goto homepage;
            system("cls");
        }
        covid :
            system("cls");
            for(i=0;i<=20;i++) {
                    system("cls");
                    printf("\n\n\n\t\t>>>>>> Covid Awareness Quiz <<<<<<");
                cc=i;
                switch(cc) {
                   case 1 : printf("\n\n\n\t\t1. Which of the following statement is/are correct about Favipiravir?");
	                     	printf("\n\n\t\tA. Favipiravir is an antiviral COVID-19 drug.\n\t\tB.Glenmark Pharmaceuticals under the brand name FabiFlu has launched \n\t\t an antiviral drug Favipiravir.\n\t\tC.It is India's first COVID-19 drug launched, priced at Rs 103 per tablet.\n\t\tD. All the above are correct");
                            if (toupper(_getch())=='D')
                            {
                            printf("\n\n\t\tCORRECT!!!");
                            coviscore++;
                            _getch();
                            break;
                            }
                            else
                            {
                              printf("\n\n\t\tWRONG!!! The correct answer is D.All of the above are correct.");
                              _getch();
                              break;
                            }
                    case 2:
                        printf("\n\n\t\t2. How many countries, areas or territories are suffering from novel coronavirus outbreak in the World?");
                        printf("\n\n\t\tA.More than 50\t\tB.More than 100\n\t\tC.More than 150\t\tD.More than 200");
                        if (toupper(_getch())=='D')
                        {
                        printf("\n\n\t\tCORRECT!!!");
                        coviscore++;
                        _getch();
                        break;
                        }
                        else
                        {
                            printf("\n\n\t\tWrong!!! The correct answer is D.More than 200");
                            _getch();
                            break;
                        }
                    case 3:
                        printf("\n\n\t\t3. Thailand announced that it has proceeded to test its novel coronavirus\n\t\t  vaccine on which animal/bird?");
                        printf("\n\n\t\tA.Monkeys\t\tB.Lizards\n\t\tC.Hens\t\t\tD.Kites");
                        if (toupper(_getch())=='A')
                        {
                        printf("\n\n\t\tCORRECT!!!");
                        coviscore++;
                        _getch();
                        break;
                        }
                        else
                        {
                        printf("\n\n\t\tWRONG!!! The correct answer is A.Monkeys");
                        _getch();
                        break;
                        }
                    case 4:
                    printf("\n\n\t\t4. In a study, which cells are found in COVID-19 patients'bodewell'for long term immunity?");
                    printf("\n\n\t\tA.P-cells\t\tB.D-cells\n\t\tC.T-cells\t\tD.Endothelial Cells");
                    if (toupper(_getch())=='C')
                    {
                        printf("\n\n\t\tCORRECT!!!");
                        coviscore++;
                        _getch();
                        break;
                    }
                    else
                    {
                    printf("\n\n\t\tWRONG!!! The correct answer is C.T-cells");
                    _getch();
                    break;
                    }
                    case 5:
                        printf("\n\n\t\t5. Name the vaccine that is jointly developed by the German company\n\t\t   BioNTech and US pharma giant Pfizer for COVID-19?");
                        printf("\n\n\t\tA.BNT162\t\tB.PICOVACC\n\t\tC.Both A and B\t\tD.Neither A nor B");
                        if (toupper(_getch())=='A')
                        {
                            printf("\n\n\t\tCORRECT!!!");
                        coviscore++;
                        _getch();
                        break;
                        }
                        else
                        {
                        printf("\n\n\t\tWRONG!! The correct answer is A.BNT162");
                        _getch();
                        break;
                        }
                    case 6:
                    printf("\n\n\t\t6. Name a clinical trial in which blood is transfused from recovered\n\t\t  COVID-19 patients to a coronavirus patient who is in critical condition?");
                    printf("\n\n\t\tA.Plasma Therapy  \t\tB.Solidarity\n\t\tC.Remdesivir\t\tD.Hydroxychloroquine");
                    if (toupper(_getch())=='A')
                    {
                    printf("\n\n\t\tCORRECT!!!");
                    coviscore++;
                    _getch();
                    break;
                    }
                    else
                    {
                    printf("\n\n\t\tWRONG!!! The correct answer is A.Plasma Therapy");
                    _getch();
                    break;
                    }
                case 7:
                printf("\n\n\t\t7. How does Coronavirus transmit?");
                printf("\n\n\t\tA.When a person sneezes or cough, droplets spread in the air\n\t\t  or fall on the ground and nearby surfaces.\n\t\tB.If another person is nearby and inhales the droplets or touches\n\t\t  these surfaces and further touches his face, eyes or mouth, \n\t\the or she can get an infection.\n\t\tC.If the distance is less than 1 meter from the infected person.\n\t\tD.All the above are correct.");
                if(toupper(_getch())=='D')
                {
                    printf("\n\n\t\tCORRECT!!!");
                    coviscore++;
                    _getch();
                    break;
			}
		else
            {
                printf("\n\n\t\tWRONG!!! The correct answer is D.All the above are correct.");
                _getch();
		       break;
		       }
            case 8:
            printf("\n\n\t\t8. In which age group the COVID-19 spreads?");
            printf("\n\n\t\tA.COVID-19 occur in all agegroups.\n\t\tB.Coronavirus infection is mild in children.\n\t\tC.Older person and persons with pre-existing\n\t\t  medical conditions are at high risk to develop serious illness.\n\t\tD.All the above are correct.");
            if(toupper(_getch())=='D')
			{
			    printf("\n\n\t\tCORRECT!!!");
			    coviscore++;
			    _getch();
                break;
                }
            else
		       {
		           printf("\n\nWRONG!!! The correct answer is D.All the above are correct");
		        _getch();
		       break;
		       }
            case 9:
            printf("\n\n\t\t9. What happens to a person suffering from COVID-19?");
            printf("\n\n\t\tA.Around 80% of the people will require no treatment as such\n\t\t  and will recover on their own.\n\t\tB.Around <20% or a small proportion may need hospitalisation.\n\t\tC.A very small proportion basically suffering from chronic illness may\n\t\t  need admission in an Intensive Care Unit (ICU).\n\t\tD.All of the above are true.");
            if(toupper(_getch())=='D')
			{
			    printf("\n\n\t\tCORRECT!!!");
			    coviscore++;
			    _getch();
			    break;
			}
		else
		       {
		           printf("\n\n\t\tWRONG!!! The correct answer is D.All of the above are true");
		           _getch();
		       break;
		       }

            case 10:
                printf("\n\n\t\t10. What is Coronavirus?");
                printf("\n\n\t\tA.It is a large family of viruses.\n\t\tB.It belongs to the family of Nidovirus.\n\t\tC.Both A and B are correct\n\t\tD.Only A is correct");
                if(toupper(_getch())=='C')
                {
                    printf("\n\nCorrect!!!");
                    coviscore++;
                    _getch();
                    break;
                    }
                else
		       {
		           printf("\n\nWrong!!! The correct answer is C. Both A and B are correct");
		           _getch();
		       break;
		       }
        case 11:
		printf("\n\n\t\t11. World Health Organisation on 11 February, 2020 announced an official name\n\t\t  for the disease that is causing the 2019 novel coronavirus outbreak?\n\t\t  What is the new name of the disease?");
		printf("\n\n\t\tA.COVn-19\t\tB.COVID-19\n\n\t\tC.COnV-20\t\tD.COnVID-19");
		if(toupper(_getch())=='B')
		{
        printf("\n\n\t\tCORRECT!!!");
		coviscore++;
		_getch();
        break;
			}
		else
		       {
                printf("\n\n\t\tWRONG!!! The correct answer is B.COVID-19");
                _getch();
		       break;
		       }
            case 12:
                printf("\n\n\t\t12. The first case of novel coronavirus was identified in ______");
                printf("\n\n\t\tA.Beijing\t\tB.Shangai\n\t\tC.Wuhan,Hubei\t\tD.Tianjin");
                if(toupper(_getch())=='C')
                    {
                        printf("\n\n\t\tCORRECT!!!");
                        coviscore++;
                        _getch();
                        break;
                    }
		else
		       {
		           printf("\n\n\t\tWRONG!!! The correct answer is C.Wuhan,Hubei");
		           _getch();
                    break;
		       }
            case 13:
                printf("\n\n\t\t13. Which of the following diseases are related to coronavirus?");
                printf("\n\n\t\tA.11 SARS\t\tB.8 MERS\n\t\tC.Both A and B\t\tD.13 Neither A and B");
                if(toupper(_getch())=='C')
                {
                printf("\n\n\t\tCORRECT!!!");coviscore++;
                _getch();
                break;
                }
                else
                {
                    printf("\n\n\t\tWRONG!!! The correct answer is C.Both A and B");
                    _getch();
                    break;
		       }
            case 14:
		printf("\n\n\t\t14. Mild Symptoms of Novel coronavirus are: ");
		printf("\n\n\t\tA.Fever\t\t\t\t\tB.Cough\n\t\tC.All of the given options \t\tD.Shortness of breath");
		if (toupper(_getch())=='C')
			{
			    printf("\n\n\t\tCORRECT!!!");
			    coviscore++;
			    _getch();
                break;
			}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.All of the given options");
                _getch();
		       break;
		       }
            case 15:
                printf("\n\n\t\t15. From where coronavirus got its name?");
                printf("\n\n\t\tA.Due to their crown-like projections.\n\t\tB.Due to their leaf-like projections\n\t\tC.Due to their surface structure of bricks.\n\t\tD.None of the above");
                if(toupper(_getch())=='A')
                {
                    printf("\n\n\t\tCORRECT!!!");
                    coviscore++;
                    _getch();
                    break;
                }
            else
		       {
		           printf("\n\n\t\tWRONG!!! The correct answer is  A. Due to their crown-like projections ");
		           _getch();
                    break;
		       }
            case 16:
                printf("\n\n\t\t16. What are the precautions that need to be taken to protect from the coronavirus?");
                printf("\n\n\t\tA.Cover your nose and mouth when sneezing.\n\t\tB.Add more garlic into your diet.\n\t\tC.Visit your doctor for antibiotics treatment\n\t\tD.Wash your hands after every hour.");
                if(toupper(_getch())=='A')
                {
                printf("\n\n\t\tCORRECT!!!");
                coviscore++;
                _getch();
                break;
                }
            else
		       {
		           printf("\n\nWRONG!!! The correct answer isA. Cover your nose and mouth when sneezing ");
		           _getch();
                    break;
		       }
            case 17:
                printf("\n\n\t\t17. A high temperature and a continuous cough have been official coronavirus symptoms.\n\t\t   But which of these did the government add \n\t\t to the list of early symptoms that people should look for?");
                printf("\n\n\t\tA.Sore throat.\t\t\t\t\tB.A Rash on your skin.\n\t\tC.Losing your sense of smell and taste.\t\tD.None of the above.");
                if (toupper(_getch())=='C')
                {
                printf("\n\n\t\tCORRECT!!!");
                coviscore++;
                _getch();
                break;
                }
                else
		       {
                printf("\n\n\t\tWRONG!!! The correct answer is A.Losing your sense of smell and taste.");
		       _getch();
		       break;
		       }
                case 18:
                printf("\n\n\t\t18. Washing your hands for 20 seconds is one of the most important ways of avoiding infection.\n\t\t But what part of the process is it that destroys the virus?");
                printf("\n\n\t\tA.Water.\t\tB.Soap\n\t\tC.Friction\t\tD.Oil");
                if(toupper(_getch())=='B')
                {
                printf("\n\n\t\tCORRECT!!!");
                coviscore++;
                _getch();
                break;
                }
            else
		       {
		           printf("\n\n\t\tWRONG!!! The correct answer isB.Soap ");
		           _getch();
                    break;
		       }
        case 19:
		printf("\n\n\t\t19. People are advised to social distance by staying two metres apart.\n\t\t  But which kitchen appliance did the government use to help people understand how far two metres is?");
		printf("\n\n\t\tA.Cooker\t\tB.Refrigerator\n\t\tC.Microwave\t\tD.Washing Machine ");
		if(toupper(_getch())=='B')
			{
			    printf("\n\n\t\tCORRECT!!!");
			    coviscore++;
			    _getch();
                break;
			}
		else
		       {
                printf("\n\nWRONG!!! The correct answer isB.Refrigerator");
		       _getch();
		       break;
		       }
                case 20:
		printf("\n\n\t\t20. People are encouraged to meet up outside wherever possible, but which of\n\t\t  these do we know is a major factor in preventing the virus from spreading as easily outside?");
        printf("\n\n\t\tA.The pollution\t\tB.The breeze.\n\t\tC.Oxygen level.\t\tD.The Land ");
		if(toupper(_getch())=='B')
			{
			    printf("\n\n\t\tCORRECT!!!");
			    coviscore++;
			    _getch();
                break;
                }
		else
		       {
		           printf("\n\n\t\tWRONG!!! The correct answer is B.The breeze");
		           _getch();
		           goto Cscore;
                    break;
		       }
        }
            }
        Cscore:
            system("cls");
            printf("\n\n\n\t\t>>>>>>>> Congratulations %s <<<<<<<<<",plyrname);
            printf("\n\n\t\tYour awareness about COVID-19 score is %d/20",coviscore);
            printf("\n\n\n\n\t\t Press Y to start the corona awareness quiz again\n");
            printf("\n\t\tPress any other any key to go to homepage\n");
            if(toupper(_getch())=='Y') {
                goto covid;
            }
            else {
                goto homepage;
                system("cls");
            }
            }
    else if(ch=='1') {
        system("cls");
        printf("\n\n\t\t\t>>>>> GK QUIZ <<<<<<<");
        printf("\n\n\n\t\t\t {*} Register Your Name: ");
        gets(playername);
        printf("Press Y to start ");

        system("cls");
        printf("\n\t\t\t$$$$$$$$$$ About the GK and Coronavirus Quiz in C $$$$$$$$$$\n\n");
        printf("\t|*| Test your knowledge with countless interesting quiz Questions\n");
        printf("\t    in the fun,amazing and challenging quiz game\n\n");
        printf("\t|*| Here are some tips you might wanna know before playing:\n\n");

        printf("\t|*| There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND.\n");
        printf("\t    The challenge round is further divided into two rounds.\n\n");

        printf("\t|*| In warmup round you will be asked a total of 3 questions to test your\n");
        printf("\t    general knowledge. You will be eligible to play the game if you give\n");
        printf("\t    atleast 2 right answers, otherwise you can't proceed further to\n");
        printf("\t    the Challenge Round.\n\n");

        printf("\t|*| Your game starts with the CHALLENGE ROUND.In each of the Challenge Round\n");
        printf("\t    you will be asked a total of 20 questions each and right answer will award\n");
        printf("\t    you with 100 points.\n\n");

        printf("\t|*| You will be given 4 options and you have to press A,B,C or D for the right\n");
        printf("\t    option.And press any key to view the next questions.\n\n");

        printf("\t|*| Quiz on COVID-19 will contain 20 question with four options.For each\n");
        printf("\t    correct answer you will get a point.\n\n");

        printf("\t|*| You will be asked questions continuously if you keep giving the\n");
        printf("\t    right answers\n\n");

        printf("\t|*| NOTE : No negative marking for wrong answers\n\n");

        printf("\t\t\t\t //\\//\\//\\ ALL THE BEST //\\//\\//\\ \n\n");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if(toupper(_getch())=='Y') {
            goto start;
        }
        else {
            system("cls");
            goto homepage;
            system("cls");
        }
        start:
            system("cls");
            w=0;
            for(i=0;i<=5;i++) {
                system("cls");
                printf("\n\n\t\t\t\t >>>>>>>> WARMUP ROUND <<<<<<<<\n\n\n");
                c1=i;
                switch(c1) {
                    case 1 : printf("\n\n\t\t\tThe Law of electromagnetic induction was given by\n");
                             printf("\t\t\t A]Faraday\t B]Tesla \n\t\t\t C]Maxwell \t D] Coulomb\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A] Faraday\n");
                                _getch();
                                break;
                             }
                     case 2 : printf("\n\n\t\t\tWhat is the National Name of Japan?\n");
                             printf("\t\t\t A]Polska\t B]Hellas \n\t\t\t C]Drukyul \t D] Nippon\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D] Nippon\n");
                                _getch();
                                break;
                             }
                    case 3 : printf("\n\n\t\t\tWind speed is measure by__________?\n");
                             printf("\t\t\t A]Lysimeter\t B]Air vane \n\t\t\t C]Hydrometer \t D] Anemometer\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D] Anemometer\n");
                                _getch();
                                break;
                             }
                     case 4 : printf("\n\n\t\t\tWhich is the National Animal of India?\n");
                             printf("\t\t\t A]Lion \t B]Elephant \n\t\t\t C]Tiger \t D] Rhino\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D] Tiger\n");
                                _getch();
                                break;
                             }
                      case 5 : printf("\n\n\t\t\tWho is the author of the book 'Ignited Minds'?\n");
                             printf("\t\t\t A]Dr.A.P.J Abdul Kalam\t B]Mahatma Gandhi \n\t\t\t C]Robin Sharma \t D]Shiv Khera\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Dr.A.P.J Abdul Kalam \n");
                                _getch();
                                break;
                             }
                      case 6 : printf("\n\n\t\t\tWhich year did Quit India movement take place?\n");
                             printf("\t\t\t A]1920\t B]1942 \n\t\t\t C]1922 \t D]1945\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                w++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B] 1942 \n");
                                _getch();
                                break;
                             }
                }
            }
                    if(w>=3) {
                        goto test;
                    }
                    else {
                        system("cls");
                        printf("\n\n\n\t\tSorry you are not eligible to play the next round!!");
                        printf("\n\t\tBETTER LUCK NEXT TIME\n");
                        _getch();
                        goto homepage;
                    }
                    test:
                        system("cls");
                        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
                        printf("\n\n\n\n\tPress any key to Start the Game!");
                        if(toupper(_getch())=='p')
                        {goto round1;}
                    round1:
                        r1=0;
                        for(i=0;i<=10;i++) {
                            system("cls");
                            counter=i;
                            printf("\n\n\n\t\t\t >>>>>> Round 1 <<<<<<<\n");
                            switch(counter) {
                            case 1 : printf("\n\n\t\t\t Where is 'Bibi ka Maqbara' is located ?\n");
                             printf("\t\t\t A]Aurangabad\t B]Delhi \n\t\t\t C]Lucknow \t D] Agra\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A] Aurangabad\n");
                                _getch();
                                goto score;
                                break;
                             }
                            case 2 : printf("\n\n\t\t\tThe minimum age of the voter in India is?\n");
                             printf("\t\t\t A]15 years\t B]18 years \n\t\t\t C]21 years \t D]31 years\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is C]21 years\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 3 : printf("\n\n\t\t\tNewton's first law of motion is known as?\n");
                             printf("\t\t\t A]Gravity\t\t\t\t B]Law of inertia \n\t\t\t C]Law of Conservation of Momentum \t D]Vertical motion\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Law of inertia\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 4 : printf("\n\n\t\t\t_____ is a way to quickly access a favorite website by saving it in your browser\n");
                             printf("\t\t\t A]Bookmark\t B]Cookie \n\t\t\t C]Blog \t D]None of the above\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Bookmark\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 5 : printf("\n\n\t\t\tKuchipudi is a dance form in India which originated in the State of_____\n");
                             printf("\t\t\t A]Andhra Pradesh\t B]Maharashtra \n\t\t\t C]Gujarat \t\t D]Kerela\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Andhra Pradesh\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 6 : printf("\n\n\t\t\tThe movie 'Gully Boy' has been nominated for the Oscar. The movie is directed by____ \n");
                             printf("\t\t\t A]Rajkumar Hirani\t B]Sanjay Lela Bhansali \n\t\t\t C]Prakash Goyal \t D]Zoya Akhtar\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Zoya Akhtar\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 7 : printf("\n\n\t\t\tThe device to measure electric current is_______ \n");
                             printf("\t\t\t A]Potentiometer\t B]Ammeter \n\t\t\t C]Voltmeter \t\t D]Voltameter\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Ammeter\n");
                                _getch();
                                goto score;
                                break;
                             }
                              case 8 : printf("\n\n\t\t\tIn which State Silent Valley is located in India? \n");
                             printf("\t\t\t A]Tamil Nadu\t B]Kerala \n\t\t\t C]Karnataka \t D]Assam\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Kerala\n");
                                _getch();
                                goto score;
                                break;
                             }
                               case 9 : printf("\n\n\t\t\tSound cannot travel through _______ \n");
                             printf("\t\t\t A]Gas\t\t B]Liquid \n\t\t\t C]Vacuum \t D]Metal\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is C]Vacuum\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 10 : printf("\n\n\t\t\tWhich of the following tax is not included in Goods and Services Tax (GST)?\n");
                             printf("\t\t\t A]Excise Duty\t\t B]Custom Duty \n\t\t\t C]Value Added Tax \t D]Service tax\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Custom Duty\n");
                                _getch();
                                goto score;
                                break;
                             }
                            case 11 : printf("\n\n\t\t\tWhich of the following gas has highest contribution in global warming?\n");
                             printf("\t\t\t A]Carbon Dioxide\t B]ChloroFluroCarbon \n\t\t\t C]Nitrous Oxide \t D]Methane\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Carbon dioxide\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 12 : printf("\n\n\t\t\tWho was the father of Indian Space Programme?\n");
                             printf("\t\t\t A]Dr.Vikram Sarabhai\t B]Dr.Satish Dhawan \n\t\t\t C]Dr.Homi J. Bhabha \t D]Dr.Krishnaswami Kasturirangan\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Dr. Vikram Sarabhai\n");
                                _getch();
                                goto score;
                                break;
                             }
                              case 13 : printf("\n\n\t\t\tWhere the Winter Olympic Games 2022 will be organized?\n");
                             printf("\t\t\t A]Pyeong Chang, South Korea\t B]Vancouver, Canada \n\t\t\t C]Sochi, Russia\t D]Beijing, China\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Beijing, China\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 14 : printf("\n\n\t\t\tPlaster of Paris is made up of ?\n");
                             printf("\t\t\t A]Marble\t B]Cement \n\t\t\t C]Gypsum\t D]Limestone\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Gypsum\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 15 : printf("\n\n\t\t\tHuman body percentage of which element is highest \n");
                             printf("\t\t\t A]Hydrogen\t B]Nitrogen \n\t\t\t C]Carbon\t D]Oxygen\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Oxygen\n");
                                _getch();
                                goto score;
                                goto rnd2;
                                break;
                             }
                            }
                        }

                    rnd2:
                        system("cls");
                        printf("\n\n\n\t\t*** WELCOME to ROUND 2  ***");
                        printf("\n\n\tPress any key to Start the Game!");
                        if(toupper(_getch())=='p')
                        {goto round2;}
                    round2 :
                        for(i=0;i<=10;i++) {
                            system("cls");
                            counter=i;
                            printf("\n\n\n\t\t\t >>>>>> Round 2 <<<<<<<\n");
                            switch(counter) {
                            case 1 : printf("\n\n\t\t\tWhich of the following states in India became first to be called HarGharJal?\n");
                             printf("\t\t\t A]Maharashtra\t B]Goa \n\t\t\t C]Punjab \t D]Karnataka\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Goa\n");
                                _getch();
                                goto score;
                                break;
                             }
                            case 2 : printf("\n\n\tWhat is the name of first premium cotton brand launched in India on occasion of World Cotton Day in 2020?\n");
                             printf("\t\t A]Jaya cotton\t\t B]Kranti Cotton \n\t\t C]Pragati Cotton \t D]Kasturi Cotton\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Kasturi cotton\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 3 : printf("\n\n\t\t\tWhat is the name of the 'Anti Radiation Missile' that was recently tested by DRDO?\n");
                             printf("\t\t\t A]SMART\t B]Bramohos \n\t\t\t C]RUDRAM-I \t D]Agni-iv\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is C]RUDRAM-I\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 4 : printf("\n\n\t\t\tJog Falls which was in the news recently, is a waterfall located in which river?\n");
                             printf("\t\t\t A]Kaveri\t B]Kabini \n\t\t\t C]Krishna \t D]Sharavati\n");

                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Sharavati\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 5 : printf("\n\n\t\t\tWhich company has tied with Indian Railway Catering and Tourism Corporation(IRCTC)\n\t\t\t  to start online train tickets?\n");
                             printf("\t\t\t A]Amazon\t B]Google \n\t\t\t C]Infosys \t D]Oracle\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Amazon\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 6 : printf("\n\n\t\t\tThe substance having Infinite Electrical Resistance are called\n");
                             printf("\t\t\t A]Conductor\t\t B]Semiconductor \n\t\t\t C]Super conductor \t D]Insulator\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Insulator\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 7 : printf("\n\n\t\t\tPituitary gland is located at the base of?\n");
                             printf("\t\t\t A]Small Intestine\t B]Brain \n\t\t\t C]Stomach \t\t D]Throat\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Brain\n");
                                _getch();
                                goto score;
                                break;
                             }
                              case 8 : printf("\n\n\t\t\tWhich of the following gas is used in cigarette lighter?\n");
                             printf("\t\t\t A]Methane\t B]Ethane \n\t\t\t C]Propane \t D]Butane\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Butane\n");
                                _getch();
                                goto score;
                                break;
                             }
                               case 9 : printf("\n\n\t\t\tOcimum tenuiflorum is the scientific name of?\n");
                             printf("\t\t\t A]Tulsi\t B]Neem \n\t\t\t C]Aloe Vera \t D]Hibiscus\n");
                             if(toupper(_getch())=='A') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is A]Tulsi\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 10 : printf("\n\n\t\t\tA breadth test by traffic police to check drunken driver uses??\n");
                             printf("\t\t\t A]Sodium Dichromate Sulphuric acid\t B]Potassium Dichromate Hydrochloric acid \n\t\t\t C]Potassium Dichromate Sulphuric acid \t D]Sodium  Dichromate Hydrochloric acid\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is C]Potassium Dichromate Sulphuric acid\n");
                                _getch();
                                goto score;
                                break;
                             }
                            case 11 : printf("\n\n\t\t\tWhich country is developing satellite to predict bush fire danger zone?\n");
                             printf("\t\t\t A]USA\t B]Australia \n\t\t\t C]France \t D]Brazil\n");
                             if(toupper(_getch())=='B') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is B]Brazil\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 12 : printf("\n\n\t\t\tWhich country is to send the world's first mining robot named 'Asteroid mining robot' into space?\n");
                             printf("\t\t\t A]UK\t B]Russia \n\t\t\t C]USA \t D]China\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]China\n");
                                _getch();
                                goto score;
                                break;
                             }
                              case 13 : printf("\n\n\t\t\tThe two warring countries Armenia and Azerbaijan announced ceasefire on?\n");
                             printf("\t\t\t A]11 October 2020\t B]8 October 2020 \n\t\t\t C]10 October 2020\t D]9 October 2020\n");
                             if(toupper(_getch())=='C') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is C]10 October 2020\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 14 : printf("\n\n\t\t\tWhich organisation called for the extension of G20 Debt Service Suspension initiative till the end of 2021?\n");
                             printf("\t\t\t A]World Bank\t B]WHO \n\t\t\t C]WTO\t D]IMF\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]IMF\n");
                                _getch();
                                goto score;
                                break;
                             }
                             case 15 : printf("\n\n\t\t\tWhich company won tax case against India at International Arbitration Tribunal?\n");
                             printf("\t\t\t A]Idea\t B]Mahindra \n\t\t\t C]Airtel\t D]Vodafone\n");
                             if(toupper(_getch())=='D') {
                                printf("\n\n\t\tCongratulations!!!!! Correct Answer\n");
                                r1++;
                                _getch();
                                break;
                             }
                             else {
                                printf("\n\t\tWrong!!! The correct answer is D]Vodafone\n");
                                _getch();
                                goto score;
                                break;
                             }
                            }
                        }
    score:
    system("cls");
    score=(float)r1*100;
    if(score>0.00 && score<2000.00)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t %s has scored %.2f points",playername,score);
	     goto go;
    }
     else if(score==2000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION %s****************",playername);
	    printf("\n\t\tYOU HAVE SCORED FULL!!!\n");
	    printf("\n\t\t\t\t YOU WON THE GAME!!!!!!!!!");
	    printf("\n\t\t You won %.2f points\n",score);
	    printf("\t\t Thank You!!");
	}
	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(_getch())=='Y')
		goto start;
	else
		{
		edit_score(score,playername);
		LoPlayer(playername,score);
		goto homepage;
		}
    }
}

void showRecord()
    {
    char name[20];
	float scr;
	FILE *f;
    system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\n\n\t\t\t*************************************************************");
	printf("\n");
	printf("\n\n\t\t\t\t %s has secured the Highest Score %0.2f\t",name,scr);
	printf("\n");
	printf("\n\n\t\t\t***************************************************************");
	fclose(f);
	_getch();
	}
void edit_score(float score, char plnm[20])
	{
    float sc;
	char nm[20];
	FILE *f;
    system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if(score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
	    }
	    }
void LoPlayer(char player[20],float sc) {
    FILE *fp;
    fp = fopen("list.txt","a");
    fprintf(fp,"\n%s\t\t%f\n",player,sc);
    fclose(fp);
}
void printList(){
    char c;
    FILE *fp;
    printf("*******************************************************\n");
    printf("|Player|\t |Score|\n");
    fp = fopen("list.txt","r");
    c=fgetc(fp);
    while(c!=EOF) {
        printf("%c",c);
        c=getc(fp);
    }
    printf("*******************************************************");
    fclose(fp);
    _getch();
}

void about() {
    system("cls");
    printf("\n\t\t\t$$$$$$$$$$ About the GK and Coronavirus Quiz in C $$$$$$$$$$\n\n");
    printf("\t|*| Test your knowledge with countless interesting quiz Questions\n");
    printf("\t    in the fun,amazing and challenging quiz game\n\n");
    printf("\t|*| Here are some tips you might wanna know before playing:\n\n");

    printf("\t|*| There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND.\n");
    printf("\t    The challenge round is further divided into two rounds.\n\n");

    printf("\t|*| In warmup round you will be asked a total of 3 questions to test your\n");
    printf("\t    general knowledge. You will be eligible to play the game if you give\n");
    printf("\t    atleast 2 right answers, otherwise you can't proceed further to\n");
    printf("\t    the Challenge Round.\n\n");

    printf("\t|*| Your game starts with the CHALLENGE ROUND.In each of the Challenge Round\n");
    printf("\t    you will be asked a total of 20 questions each and right answer will award\n");
    printf("\t    you with 100 points.\n\n");

    printf("\t|*| You will be given 4 options and you have to press A,B,C or D for the right\n");
    printf("\t    option.And press any key to view the next questions.\n\n");

    printf("\t|*| Quiz on COVID-19 will contain 20 question with four options.For each\n");
    printf("\t    correct answer you will get a point.\n\n");

    printf("\t|*| You will be asked questions continuously if you keep giving the\n");
    printf("\t    right answers\n\n");

    printf("\t|*| NOTE : No negative marking for wrong answers\n\n\n\n");

    printf("\t\t\t\t //\\//\\//\\ ALL THE BEST //\\//\\//\\ \n\n");

    printf("\t\t______GK and corona Awereness Quiz in C is developed by Group 10 of RCOE_____\n");
    _getch();

}

