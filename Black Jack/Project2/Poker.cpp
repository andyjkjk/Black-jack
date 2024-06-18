#include "poker.h"
#include<time.h>
#include<iostream>
#include<string>
#define NUM 1000
int j = 2;
int randNum[NUM]; //�w�q�FrandNum�}�C�Ӧs���H����

Poker::Poker()
{
	poker[0] = 0;
	for (int i = 1; i <= 13; i++) //(�Ni=0�קאּ�qi=1�}�l)
	{
		poker[i] = i;          //�Ϋغc�禡��P��l��
		poker[i + 13] = i;
		poker[i + 26] = i;
		poker[i + 39] = i;
	}
	pValue[0] = 0;
	for (int i = 0; i <= 52; i++)
	{
		if (poker[i] <= 10)
			pValue[i] = poker[i];
		else
			pValue[i] = 10;
	}
	pName[0] = "";
	for (int i = 0; i < 4; i++)
	{
		pName[1 + 13 * i] = "A";
		pName[2 + 13 * i] = "2";
		pName[3 + 13 * i] = "3";
		pName[4 + 13 * i] = "4";
		pName[5 + 13 * i] = "5";
		pName[6 + 13 * i] = "6";
		pName[7 + 13 * i] = "7";
		pName[8 + 13 * i] = "8";
		pName[9 + 13 * i] = "9";
		pName[10 + 13 * i] = "10";
		pName[11 + 13 * i] = "J";
		pName[12 + 13 * i] = "Q";
		pName[13 + 13 * i] = "K";
	}


	for (int i = 0; i < 5; i++)
	{
		player[i] = 0;
		landlord[i] = 0;
	}

}
void Poker::shuffle()
{
	cout << "�C���}�l�A�}�l�~�P>>>>>" << endl;
	srand((int)time(0));
	for (int i = 0; i < NUM; i++)
	{
		randNum[i] = rand() * 51 / 32767 + 1;
	}
	player[0] = randNum[j++];    //����1-52���H����
	player[1] = randNum[j++];    //����1-52���H����
	landlord[0] = randNum[j++];  //����1-52���H����
	landlord[1] = randNum[j++];  //����1-52���H����

	playerN = 2; //��l�]�w���a�⤤���P�Ƭ�2�i
	landlordN = 2; //��l�]�w���a�⤤���P�Ƭ�2�i

	cout << "�~�P����,�A���P��:" << getPlayer() << "  �I��:" << getSumP() << endl;
}
string Poker::getPlayer()const
{
	int i;
	string pp = "";

	for (i = 0; i < playerN; i++)
		pp = pp + pName[player[i]] + " ";

	return pp;
}
string Poker::getLandlord()const
{
	int i;
	string lp = "";

	for (i = 0; i < landlordN; i++)
		lp = lp + pName[landlord[i]] + " ";

	return lp;
}
int Poker::getSumP()const  //��^���a���`�I��
{
	int sp = 0; //�x�s���a�`�I��

	/*for (int i = 0; i < playerN; i++) //��{���A�N���a�⤤�C�i�P���I�ƥ[�`�� sp ��
		sp = sp + pValue[player[i]];*/
	
	for (int i = 0; i < playerN; i++) {
		if (pName[player[i]] == "A") {
			sp += 1;
		}
		else if (pName[player[i]] == "J") {
			sp += 11;
		}
		else if (pName[player[i]] == "Q") {
			sp += 12;
		}
		else if (pName[player[i]] == "K") {
			sp += 13;
		}
		else {
			// �N�D�S��P���r���ഫ����ƨå[�� sp ��(stoi)
			sp += stoi(pName[player[i]]);
		}
	}

	return sp;
}

int Poker::getSumL()const  //��^���a���`�I��
{
	int sl = 0;

	for (int i = 0; i < landlordN; i++)
		sl = sl + pValue[landlord[i]];

	return sl;
}
void Poker::playerAsk()
{
	if (playerN >= 5)
	{
		cout << "�A���P�Ƥw�g5�i�A����A�n�P�F" << endl;
		landlordProcess();
	}
	else
	{
		player[playerN++] = randNum[j++];   //����1-52���H����
		cout << "�A���P��:" << getPlayer() << "  �I��:" << getSumP() << endl;
		if (getSumP() > 21)
		{
			cout << "�A�z�P�F,�A��F!!!!" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
		else if (getSumP() == 21)
		{
			landlordProcess();
		}
	}
}
void Poker::landlordAsk()
{
	if (playerN >= 5)
	{
		if (getSumP() > getSumL())
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "�AĹ�F!!!!" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();


		}
		else if (getSumP() == getSumL())
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "���襭��" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
		else if (getSumP() < getSumL())
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "�A��F!!!!" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
	}
	else
	{
		landlord[landlordN++] = randNum[j++];
		if (getSumL() > 21)
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "���a�z�P,�AĹ�F" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
		else    landlordProcess();
	}
}

void Poker::newGame()
{
	system("CLS");
	cout << ">>>>>>>>>>>>>>>> Welcome To Play Black Jack <<<<<<<<<<<<<<<<" << endl << endl;
	shuffle();



}
void Poker::landlordProcess()
{
	if (getSumL() >= 17)
	{
		if (getSumL() > getSumP())
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "���a��ӡA�A��F" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
		else if (getSumP() == getSumL())
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "���襭��" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
		else
		{
			cout << "���a���P��" << getLandlord() << "  �I��:" << getSumL() << endl;
			cout << "�AĹ�F!!!!" << endl << "------------------------------------------------------------------------------------" << endl;
			shuffle();
		}
	}
	else
	{
		landlordAsk();
	}
}