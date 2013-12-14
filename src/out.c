#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* id_(void *t_) {
incRef(t_);



void * aaaaac = NULL;



void * aaaaaz = NULL;
aaaaaz = aaaaac;
aaaaac = t_;
incRef(aaaaac);
decRef(aaaaaz);
decRef(t_);



if (aaaaac!= NULL) {
(*(int *)aaaaac)--;
}
return aaaaac;
}
void* singleton_(void *t_) {
incRef(t_);



void * aaaaad = NULL;
void * aaaaae = NULL;



void * aaaaba = NULL;
aaaaba = aaaaad;
aaaaad = t_;
incRef(aaaaad);
decRef(aaaaba);
decRef(t_);



Iterable* aaaabb;
aaaabb = (Iterable*) x3malloc(sizeof(Iterable));
aaaabb->isStr = 0;
aaaabb->isIter = 1;
aaaabb->nrefs = 1;
aaaabb->value = aaaaad;
aaaabb->additional = NULL;
aaaabb->next = NULL;
aaaabb->concat = NULL;
incRef(aaaaad);
aaaabb->nrefs = 0;
void * aaaabc = NULL;
aaaabc = aaaaae;
aaaaae = aaaabb;
incRef(aaaaae);
decRef(aaaabc);
decRef(aaaaad);



if (aaaaae!= NULL) {
(*(int *)aaaaae)--;
}
return aaaaae;
}
void* test_(void *t_) {
incRef(t_);



void * aaaaaf = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;



void * aaaabd = NULL;
aaaabd = aaaaaf;
aaaaaf = t_;
incRef(aaaaaf);
decRef(aaaabd);
decRef(t_);




void* aaaabe;
aaaabe = singleton_((void*) aaaaaf);
void * aaaabf = NULL;
aaaabf = aaaaag;
aaaaag = aaaabe;
incRef(aaaaag);
decRef(aaaabf);
decRef(aaaaaf);




void* aaaabg;
aaaabg = id_((void*) aaaaag);
void * aaaabh = NULL;
aaaabh = aaaaah;
aaaaah = aaaabg;
incRef(aaaaah);
decRef(aaaabh);
decRef(aaaaag);



if (aaaaah!= NULL) {
(*(int *)aaaaah)--;
}
return aaaaah;
}
void* output_(void *t_ , void *b_) {
incRef(t_);
incRef(b_);



void * aaaaai = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;



void * ret_ = NULL;






void * aaaabi = NULL;
aaaabi = aaaaai;
aaaaai = b_;
incRef(aaaaai);
decRef(aaaabi);
decRef(b_);



if ( ((Boolean *)aaaaai)->value) {
decRef(aaaaai);



void * aaaaaj = NULL;
void * aaaaak = NULL;






String* aaaabj;
aaaabj = (String *) x3malloc(sizeof(String));
aaaabj->isIter = 0;
aaaabj->value = (char*) x3malloc(sizeof("Yes."));
aaaabj->nrefs = 0;
aaaabj->isStr = 1;
aaaabj->len = sizeof("Yes.") - 1;
mystrcpy(aaaabj->value, "Yes.");
void * aaaabk = NULL;
aaaabk = aaaaaj;
aaaaaj = aaaabj;
incRef(aaaaaj);
decRef(aaaabk);




void* aaaabl;
aaaabl = singleton_((void*) aaaaaj);
void * aaaabm = NULL;
aaaabm = aaaaak;
aaaaak = aaaabl;
incRef(aaaaak);
decRef(aaaabm);
decRef(aaaaaj);



if (aaaaak!= NULL) {
(*(int *)aaaaak)--;
}
return aaaaak;
}
else {
decRef(aaaaai);



void * ret_ = NULL;






String* aaaabn;
aaaabn = (String *) x3malloc(sizeof(String));
aaaabn->isIter = 0;
aaaabn->value = (char*) x3malloc(sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU..."));
aaaabn->nrefs = 0;
aaaabn->isStr = 1;
aaaabn->len = sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...") - 1;
mystrcpy(aaaabn->value, "FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...");
void * aaaabo = NULL;
aaaabo = ret_;
ret_ = aaaabn;
incRef(ret_);
decRef(aaaabo);
}






void * aaaabp = NULL;
aaaabp = aaaaal;
aaaaal = ret_;
incRef(aaaaal);
decRef(aaaabp);
decRef(ret_);



Iterable* aaaabq;
aaaabq = (Iterable*) x3malloc(sizeof(Iterable));
aaaabq->isStr = 0;
aaaabq->isIter = 1;
aaaabq->nrefs = 1;
aaaabq->value = aaaaal;
aaaabq->additional = NULL;
aaaabq->next = NULL;
aaaabq->concat = NULL;
incRef(aaaaal);
aaaabq->nrefs = 0;
void * aaaabr = NULL;
aaaabr = aaaaam;
aaaaam = aaaabq;
incRef(aaaaam);
decRef(aaaabr);
decRef(aaaaal);



if (aaaaam!= NULL) {
(*(int *)aaaaam)--;
}
return aaaaam;
}
void* charoutput_(void *char_) {
incRef(char_);



void * bool_ = NULL;
void * aaaaan = NULL;
void * c_ = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
void * aaaaav = NULL;






Boolean* aaaabs;
aaaabs = (Boolean *) x3malloc(sizeof(Boolean));
aaaabs->nrefs = 0;
aaaabs->isStr = 0;
aaaabs->isIter = 0;
aaaabs->value = 0;
void * aaaabt = NULL;
aaaabt = bool_;
bool_ = aaaabs;
incRef(bool_);
decRef(aaaabt);






void * aaaabu = NULL;
aaaabu = aaaaan;
aaaaan = char_;
incRef(aaaaan);
decRef(aaaabu);




void* aaaabv;
aaaabv = test_((void*) aaaaan);
void * aaaabw = NULL;
aaaabw = c_;
c_ = aaaabv;
incRef(c_);
decRef(aaaabw);
decRef(aaaaan);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaabx = NULL;
aaaabx = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaabx);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaao = NULL;
		aaaaao = (Iterable *)c_;
		incRef(aaaaao);
void * aaaaby = NULL;
aaaaby = c_;
		c_ = aaaaao->value;
		incRef(c_);
		decRef(aaaaby);
		


void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaap = NULL;






void * aaaabz = NULL;
aaaabz = aaaaaq;
aaaaaq = c_;
incRef(aaaaaq);
decRef(aaaabz);
decRef(c_);



void * aaaaca = NULL;
aaaaca = aaaaar;
aaaaar = char_;
incRef(aaaaar);
decRef(aaaaca);




Boolean* aaaacb = (Boolean*) x3malloc(sizeof(Boolean));
aaaacb->nrefs = 0;
aaaacb->isIter = 0;
aaaacb->isStr = 0;
aaaacb->value = ((Character*) aaaaaq)->value == ((Character*) aaaaar)->value;
void * aaaacc = NULL;
aaaacc = aaaaas;
aaaaas = aaaacb;
incRef(aaaaas);
decRef(aaaacc);
decRef(aaaaaq);
decRef(aaaaar);



if ( ((Boolean *)aaaaas)->value) {
decRef(bool_);
decRef(aaaaas);









Boolean* aaaacd;
aaaacd = (Boolean *) x3malloc(sizeof(Boolean));
aaaacd->nrefs = 0;
aaaacd->isStr = 0;
aaaacd->isIter = 0;
aaaacd->value = 1;
void * aaaace = NULL;
aaaace = bool_;
bool_ = aaaacd;
incRef(bool_);
decRef(aaaace);
}
decRef(aaaaas);



void * aaaacf = NULL;
aaaacf = aaaaap;
aaaaap = aaaaao;
incRef(aaaaap);
decRef(aaaacf);
decRef(aaaaao);




void* aaaacg;
aaaacg = iterGetNext((void*) aaaaap);
void * aaaach = NULL;
aaaach = c_;
c_ = aaaacg;
incRef(c_);
decRef(aaaach);
decRef(aaaaap);
	}
decRef(c_);






void * aaaaci = NULL;
aaaaci = aaaaat;
aaaaat = char_;
incRef(aaaaat);
decRef(aaaaci);
decRef(char_);



void * aaaacj = NULL;
aaaacj = aaaaau;
aaaaau = bool_;
incRef(aaaaau);
decRef(aaaacj);
decRef(bool_);




void* aaaack;
aaaack = output_((void*) aaaaat, (void*) aaaaau);
void * aaaacl = NULL;
aaaacl = aaaaav;
aaaaav = aaaack;
incRef(aaaaav);
decRef(aaaacl);
decRef(aaaaat);
decRef(aaaaau);



if (aaaaav!= NULL) {
(*(int *)aaaaav)--;
}
return aaaaav;
}


void* our_main()
{
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;






Integer* aaaacm;
aaaacm = (Integer*) x3malloc(sizeof(Integer));
aaaacm->nrefs = 0;
aaaacm->isStr = 0;
aaaacm->isIter = 0;
aaaacm->value = 66;
void * aaaacn = NULL;
aaaacn = aaaaaw;
aaaaaw = aaaacm;
incRef(aaaaaw);
decRef(aaaacn);




Character* aaaaco;
aaaaco = (Character*) x3malloc(sizeof(Character));
aaaaco->isStr = 0;
aaaaco->isIter = 0;
aaaaco->value = unichar (((Integer*)aaaaaw)->value);
void * aaaacp = NULL;
aaaacp = aaaaax;
aaaaax = aaaaco;
incRef(aaaaax);
decRef(aaaacp);
decRef(aaaaaw);




void* aaaacq;
aaaacq = charoutput_((void*) aaaaax);
void * aaaacr = NULL;
aaaacr = aaaaay;
aaaaay = aaaacq;
incRef(aaaaay);
decRef(aaaacr);
decRef(aaaaax);



if (aaaaay!= NULL) {
(*(int *)aaaaay)--;
}
return aaaaay;
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
