#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
void* coolname_() {



void * int_ = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * num_ = NULL;
void * aaaaap = NULL;
void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaat = NULL;






Integer* aaaabc;
aaaabc = (Integer*) x3malloc(sizeof(Integer));
(aaaabc->nrefs) = 0;
aaaabc->value = 20;
void * aaaabd = NULL;
aaaabd = int_;
int_ = aaaabc;
incRef(int_);
decRef(aaaabd);






Integer* aaaabe;
aaaabe = (Integer*) x3malloc(sizeof(Integer));
(aaaabe->nrefs) = 0;
aaaabe->value = 1;
void * aaaabf = NULL;
aaaabf = aaaaac;
aaaaac = aaaabe;
incRef(aaaaac);
decRef(aaaabf);



Integer* aaaabg;
aaaabg = (Integer*) x3malloc(sizeof(Integer));
(aaaabg->nrefs) = 0;
aaaabg->value = 100;
void * aaaabh = NULL;
aaaabh = aaaaad;
aaaaad = aaaabg;
incRef(aaaaad);
decRef(aaaabh);



Integer* aaaabj;
aaaabj = (Integer*) x3malloc(sizeof(Integer));
aaaabj->value = ((Integer *)aaaaac)->value + 1;
aaaabj->nrefs = 1;
Integer* aaaabk;
aaaabk = (Integer*) x3malloc(sizeof(Integer));
aaaabk->value = ((Integer *)aaaaad)->value - 1;
aaaabk->nrefs = 1;
Iterable* aaaabi;
aaaabi = (Iterable*) x3malloc(sizeof(Iterable));
aaaabi->isIter = 1;
aaaabi->nrefs = 0;
aaaabi->value = aaaabj;
aaaabi->additional = aaaabk;
aaaabi->next = &Integer_through;
aaaabi->concat = NULL;
void * aaaabm = NULL;
aaaabm = num_;
num_ = checkIter(aaaabi);
incRef(num_);
decRef(aaaabm);
decRef(aaaaac);
decRef(aaaaad);
	if (num_!=NULL) {
		if ((*((int *)(num_+1))) == 0) {
void * aaaabn = NULL;
aaaabn = num_;
			num_ = strToIter( ((String *)num_)->value, ((String *)num_)->len);
incRef(num_);
decRef(aaaabn);
		}
	}
	while (num_!=NULL) {
Iterable * aaaaae = NULL;
		aaaaae = (Iterable *)num_;
		incRef(aaaaae);
void * aaaabo = NULL;
aaaabo = num_;
		num_ = aaaaae->value;
		incRef(num_);
		decRef(aaaabo);
		


void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaai = NULL;
void * aaaaaf = NULL;






void * aaaabp = NULL;
aaaabp = aaaaag;
aaaaag = num_;
incRef(aaaaag);
decRef(aaaabp);



Integer* aaaabq;
aaaabq = (Integer*) x3malloc(sizeof(Integer));
(aaaabq->nrefs) = 0;
aaaabq->value = 75;
void * aaaabr = NULL;
aaaabr = aaaaah;
aaaaah = aaaabq;
incRef(aaaaah);
decRef(aaaabr);




Boolean* aaaabs = (Boolean*) x3malloc(sizeof(Boolean));
aaaabs->nrefs = 0;
aaaabs->value = ((Integer*) aaaaag)->value != ((Integer*) aaaaah)->value;
void * aaaabt = NULL;
aaaabt = aaaaai;
aaaaai = aaaabs;
incRef(aaaaai);
decRef(aaaabt);
decRef(aaaaag);
decRef(aaaaah);



if ( ((Boolean *)aaaaai)->value) {
decRef(num_);
decRef(aaaaai);



}
else {
decRef(aaaaai);



void * aaaaaj = NULL;
void * aaaaak = NULL;
void * t_ = NULL;






void * aaaabu = NULL;
aaaabu = aaaaaj;
aaaaaj = num_;
incRef(aaaaaj);
decRef(aaaabu);
decRef(num_);



Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
(aaaabv->nrefs) = 0;
aaaabv->value = 3;
void * aaaabw = NULL;
aaaabw = aaaaak;
aaaaak = aaaabv;
incRef(aaaaak);
decRef(aaaabw);




Iterable* aaaabx;
Integer* aaaaby;
if(((Integer*)aaaaak)->value == 0) 
	aaaabx = NULL;
else {
	aaaaby  = (Integer*) x3malloc(sizeof(Integer));
	aaaaby->nrefs = 0;
	aaaaby->value=((Integer*)aaaaaj)->value / ((Integer*)aaaaak)->value;
	aaaabx = (Iterable*) x3malloc(sizeof(Iterable));
	aaaabx->isIter = 1;
aaaabx->nrefs = 0;
	aaaabx->value = aaaaby;
	aaaabx->additional = NULL;
	aaaabx->next = NULL;
	aaaabx->concat = NULL;
incRef(aaaaby);
}
void * aaaabz = NULL;
aaaabz = t_;
t_ = aaaabx;
incRef(t_);
decRef(aaaabz);
decRef(aaaaaj);
decRef(aaaaak);
	if (t_!=NULL) {
		if ((*((int *)(t_+1))) == 0) {
void * aaaaca = NULL;
aaaaca = t_;
			t_ = strToIter( ((String *)t_)->value, ((String *)t_)->len);
incRef(t_);
decRef(aaaaca);
		}
	}
	while (t_!=NULL) {
Iterable * aaaaal = NULL;
		aaaaal = (Iterable *)t_;
		incRef(aaaaal);
void * aaaacb = NULL;
aaaacb = t_;
		t_ = aaaaal->value;
		incRef(t_);
		decRef(aaaacb);
decRef(int_);
		


void * aaaaam = NULL;






void * aaaacc = NULL;
aaaacc = int_;
int_ = t_;
incRef(int_);
decRef(aaaacc);
decRef(t_);



void * aaaacd = NULL;
aaaacd = aaaaam;
aaaaam = aaaaal;
incRef(aaaaam);
decRef(aaaacd);
decRef(aaaaal);




void* aaaace;
aaaace = iterGetNext((void*) aaaaam);
void * aaaacf = NULL;
aaaacf = t_;
t_ = aaaace;
incRef(t_);
decRef(aaaacf);
decRef(aaaaam);
	}
decRef(t_);
}



void * aaaacg = NULL;
aaaacg = aaaaaf;
aaaaaf = aaaaae;
incRef(aaaaaf);
decRef(aaaacg);
decRef(aaaaae);




void* aaaach;
aaaach = iterGetNext((void*) aaaaaf);
void * aaaaci = NULL;
aaaaci = num_;
num_ = aaaach;
incRef(num_);
decRef(aaaaci);
decRef(aaaaaf);
	}
decRef(num_);






void * aaaacj = NULL;
aaaacj = aaaaap;
aaaaap = int_;
incRef(aaaaap);
decRef(aaaacj);



Integer* aaaack;
aaaack = (Integer*) x3malloc(sizeof(Integer));
(aaaack->nrefs) = 0;
aaaack->value = 21;
void * aaaacl = NULL;
aaaacl = aaaaaq;
aaaaaq = aaaack;
incRef(aaaaaq);
decRef(aaaacl);



void * aaaacm = NULL;
aaaacm = aaaaar;
aaaaar = int_;
incRef(aaaaar);
decRef(aaaacm);
decRef(int_);



Integer* aaaacn;
aaaacn = (Integer*) x3malloc(sizeof(Integer));
(aaaacn->nrefs) = 0;
aaaacn->value = 25;
void * aaaaco = NULL;
aaaaco = aaaaas;
aaaaas = aaaacn;
incRef(aaaaas);
decRef(aaaaco);




Boolean* aaaacp = (Boolean*) x3malloc(sizeof(Boolean));
aaaacp->nrefs = 0;
aaaacp->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaacq = NULL;
aaaacq = aaaaan;
aaaaan = aaaacp;
incRef(aaaaan);
decRef(aaaacq);
decRef(aaaaap);
decRef(aaaaaq);




Boolean* aaaacr = (Boolean*) x3malloc(sizeof(Boolean));
aaaacr->nrefs = 0;
aaaacr->value = ((Integer*) aaaaar)->value == ((Integer*) aaaaas)->value;
void * aaaacs = NULL;
aaaacs = aaaaao;
aaaaao = aaaacr;
incRef(aaaaao);
decRef(aaaacs);
decRef(aaaaar);
decRef(aaaaas);




Boolean* aaaact;
aaaact = (Boolean*) x3malloc(sizeof(Boolean));
aaaact->nrefs = 0;
aaaact->value=((Boolean*)aaaaan)->value && ((Boolean*)aaaaao)->value;
void * aaaacu = NULL;
aaaacu = aaaaat;
aaaaat = aaaact;
incRef(aaaaat);
decRef(aaaacu);
decRef(aaaaan);
decRef(aaaaao);



if ( ((Boolean *)aaaaat)->value) {
decRef(aaaaat);



void * aaaaau = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;






Integer* aaaacv;
aaaacv = (Integer*) x3malloc(sizeof(Integer));
(aaaacv->nrefs) = 0;
aaaacv->value = 121;
void * aaaacw = NULL;
aaaacw = aaaaau;
aaaaau = aaaacv;
incRef(aaaaau);
decRef(aaaacw);




Character* aaaacx;
aaaacx = (Character*) x3malloc(sizeof(Character));
aaaacx->value = unichar (((Integer*)aaaaau)->value);
void * aaaacy = NULL;
aaaacy = aaaaav;
aaaaav = aaaacx;
incRef(aaaaav);
decRef(aaaacy);
decRef(aaaaau);



Integer* aaaacz;
aaaacz = (Integer*) x3malloc(sizeof(Integer));
(aaaacz->nrefs) = 0;
aaaacz->value = 101;
void * aaaada = NULL;
aaaada = aaaaaw;
aaaaaw = aaaacz;
incRef(aaaaaw);
decRef(aaaada);




Character* aaaadb;
aaaadb = (Character*) x3malloc(sizeof(Character));
aaaadb->value = unichar (((Integer*)aaaaaw)->value);
void * aaaadc = NULL;
aaaadc = aaaaax;
aaaaax = aaaadb;
incRef(aaaaax);
decRef(aaaadc);
decRef(aaaaaw);



Integer* aaaadd;
aaaadd = (Integer*) x3malloc(sizeof(Integer));
(aaaadd->nrefs) = 0;
aaaadd->value = 115;
void * aaaade = NULL;
aaaade = aaaaay;
aaaaay = aaaadd;
incRef(aaaaay);
decRef(aaaade);




Character* aaaadf;
aaaadf = (Character*) x3malloc(sizeof(Character));
aaaadf->value = unichar (((Integer*)aaaaay)->value);
void * aaaadg = NULL;
aaaadg = aaaaaz;
aaaaaz = aaaadf;
incRef(aaaaaz);
decRef(aaaadg);
decRef(aaaaay);



Iterable* aaaadj;
aaaadj = (Iterable*) x3malloc(sizeof(Iterable));
aaaadj->isIter = 1;
aaaadj->nrefs = 1;
aaaadj->value = aaaaaz;
aaaadj->additional = NULL;
aaaadj->next = NULL;
aaaadj->concat = NULL;
incRef(aaaaaz);
Iterable* aaaadi;
aaaadi = (Iterable*) x3malloc(sizeof(Iterable));
aaaadi->isIter = 1;
aaaadi->nrefs = 1;
aaaadi->value = aaaaax;
aaaadi->additional = aaaadj;
aaaadi->next = NULL;
aaaadi->concat = NULL;
incRef(aaaaax);
Iterable* aaaadh;
aaaadh = (Iterable*) x3malloc(sizeof(Iterable));
aaaadh->isIter = 1;
aaaadh->nrefs = 1;
aaaadh->value = aaaaav;
aaaadh->additional = aaaadi;
aaaadh->next = NULL;
aaaadh->concat = NULL;
incRef(aaaaav);
aaaadh->nrefs = 0;
decRef(aaaaav);
decRef(aaaaax);
decRef(aaaaaz);
return aaaadh;
}
decRef(aaaaat);






return NULL;
}


void* our_main()
{
void * aaaaba = NULL;
void * aaaabb = NULL;







void* aaaadk;
aaaadk = coolname_();
((Iterable*)aaaadk)->isIter=1;
((Iterable*)aaaadk)->isStr=0;
void * aaaadl = NULL;
aaaadl = aaaaba;
aaaaba = aaaadk;
incRef(aaaaba);
decRef(aaaadl);




	if (aaaaba!=NULL) {
		if ((*((int *)(aaaaba+1))) == 0) {
void * aaaadn = NULL;
aaaadn = aaaaba;
			aaaaba = strToIter( ((String *)aaaaba)->value, ((String *)aaaaba)->len);
incRef(aaaaba);
decRef(aaaadn);
		}
	}
void* aaaadm;
aaaadm = concatChars((Iterable*)aaaaba);
void * aaaado = NULL;
aaaado = aaaabb;
aaaabb = aaaadm;
incRef(aaaabb);
decRef(aaaado);
decRef(aaaaba);



Iterable* aaaadp;
aaaadp = (Iterable*) x3malloc(sizeof(Iterable));
aaaadp->isIter = 1;
aaaadp->nrefs = 1;
aaaadp->value = aaaabb;
aaaadp->additional = NULL;
aaaadp->next = NULL;
aaaadp->concat = NULL;
incRef(aaaabb);
aaaadp->nrefs = 0;
decRef(aaaabb);
return aaaadp;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
