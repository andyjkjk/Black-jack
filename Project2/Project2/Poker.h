#ifndef POKER_H_
#define POKER_H_
#include<string>
using namespace std;

class Poker
{
public:
	Poker();   //�غc�禡�A��P��l��
	void shuffle();   //�~�P,�b�C���C���}�l�e�i��
	string getPlayer()const;    //�Φr�ꪺ�Φ���^���a���P
	string getLandlord()const;  //�Φr�ꪺ�Φ���^���a���P
	int getSumP()const;       //��^���a�P���I�ơA�ΥH�P�_�O�_�W�L21
	int getSumL()const;         //��^���a�P���I��
	void playerAsk();          //���a�n�P
	void landlordAsk();        //���a�n�P
	void newGame();           //�}�l�s�C��
	void landlordProcess();      //�b���a���n�P�ɶi��B�z

private:
	int poker[53], pValue[53]; //���J,���J�N���ƭ�
	string pName[53];  //���J�W
	int player[5], landlord[5];  //���a�⤤���P ,���a�⤤���P
	int playerN, landlordN;  //���a�⤤���P��,���a�⤤���P��

};
#endif