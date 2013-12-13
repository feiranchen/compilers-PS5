#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
void* id_(void *t_) {
incRef(t_);






if (t_!= NULL) {
(*(int *)t_)--;
}
return t_;
}
void* singleton_(void *t_) {
incRef(t_);



void * aaaaac = NULL;



void * aaaaas = NULL;
aaaaas = aaaaac;
aaaaac = t_;
incRef(aaaaac);
decRef(aaaaas);
decRef(t_);



Iterable* aaaaat;
aaaaat = (Iterable*) x3malloc(sizeof(Iterable));
aaaaat->isIter = 1;
aaaaat->nrefs = 1;
aaaaat->value = aaaaac;
aaaaat->additional = NULL;
aaaaat->next = NULL;
aaaaat->concat = NULL;
incRef(aaaaac);
aaaaat->nrefs = 0;
decRef(aaaaac);
return aaaaat;
}
void* test_(void *t_) {
incRef(t_);



void * aaaaad = NULL;
void * aaaaae = NULL;



void * aaaaau = NULL;
aaaaau = aaaaad;
aaaaad = t_;
incRef(aaaaad);
decRef(aaaaau);
decRef(t_);




void* aaaaav;
aaaaav = singleton_((void*) aaaaad);
void * aaaaaw = NULL;
aaaaaw = aaaaae;
aaaaae = aaaaav;
incRef(aaaaae);
decRef(aaaaaw);
decRef(aaaaad);




void* aaaaax;
aaaaax = id_((void*) aaaaae);
decRef(aaaaae);
return aaaaax;
}
void* output_(void *t_ , void *b_) {
incRef(t_);
incRef(b_);



void * aaaaaf = NULL;
void * aaaaah = NULL;



void * ret_ = NULL;






void * aaaaay = NULL;
aaaaay = aaaaaf;
aaaaaf = b_;
incRef(aaaaaf);
decRef(aaaaay);
decRef(b_);



if ( ((Boolean *)aaaaaf)->value) {
decRef(aaaaaf);



void * aaaaag = NULL;






String* aaaaaz;
aaaaaz = (String *) x3malloc(sizeof(String));
(aaaaaz->isIter) = 0;
aaaaaz->value = (char*) x3malloc(sizeof("Yes."));
(aaaaaz->nrefs) = 0;
(aaaaaz->isStr) = 1;
aaaaaz->len = sizeof("Yes.") - 1;
mystrcpy(aaaaaz->value, "Yes.");
void * aaaaba = NULL;
aaaaba = aaaaag;
aaaaag = aaaaaz;
incRef(aaaaag);
decRef(aaaaba);




void* aaaabb;
aaaabb = singleton_((void*) aaaaag);
decRef(aaaaag);
return aaaabb;
}
else {
decRef(aaaaaf);



void * ret_ = NULL;






String* aaaabc;
aaaabc = (String *) x3malloc(sizeof(String));
(aaaabc->isIter) = 0;
aaaabc->value = (char*) x3malloc(sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU..."));
(aaaabc->nrefs) = 0;
(aaaabc->isStr) = 1;
aaaabc->len = sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...") - 1;
mystrcpy(aaaabc->value, "FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...");
void * aaaabd = NULL;
aaaabd = ret_;
ret_ = aaaabc;
incRef(ret_);
decRef(aaaabd);
}






void * aaaabe = NULL;
aaaabe = aaaaah;
aaaaah = ret_;
incRef(aaaaah);
decRef(aaaabe);
decRef(ret_);



Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 1;
aaaabf->value = aaaaah;
aaaabf->additional = NULL;
aaaabf->next = NULL;
aaaabf->concat = NULL;
incRef(aaaaah);
aaaabf->nrefs = 0;
decRef(aaaaah);
return aaaabf;
}
void* charoutput_(void *char_) {
incRef(char_);



void * bool_ = NULL;
void * aaaaai = NULL;
void * c_ = NULL;
void * aaaaao = NULL;
void * aaaaap = NULL;






Boolean* aaaabg;
aaaabg = (Boolean *) x3malloc(sizeof(Boolean));
(aaaabg->nrefs) = 0;
aaaabg->value = 0;
void * aaaabh = NULL;
aaaabh = bool_;
bool_ = aaaabg;
incRef(bool_);
decRef(aaaabh);






void * aaaabi = NULL;
aaaabi = aaaaai;
aaaaai = char_;
incRef(aaaaai);
decRef(aaaabi);




void* aaaabj;
aaaabj = test_((void*) aaaaai);
void * aaaabk = NULL;
aaaabk = c_;
c_ = aaaabj;
incRef(c_);
decRef(aaaabk);
decRef(aaaaai);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaabl = NULL;
aaaabl = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaabl);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)c_;
		incRef(aaaaaj);
void * aaaabm = NULL;
aaaabm = c_;
		c_ = aaaaaj->value;
		incRef(c_);
		decRef(aaaabm);
		


void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaak = NULL;






void * aaaabn = NULL;
aaaabn = aaaaal;
aaaaal = c_;
incRef(aaaaal);
decRef(aaaabn);
decRef(c_);



void * aaaabo = NULL;
aaaabo = aaaaam;
aaaaam = char_;
incRef(aaaaam);
decRef(aaaabo);




Boolean* aaaabp = (Boolean*) x3malloc(sizeof(Boolean));
aaaabp->nrefs = 0;
aaaabp->value = ((Character*) aaaaal)->value == ((Character*) aaaaam)->value;
void * aaaabq = NULL;
aaaabq = aaaaan;
aaaaan = aaaabp;
incRef(aaaaan);
decRef(aaaabq);
decRef(aaaaal);
decRef(aaaaam);



if ( ((Boolean *)aaaaan)->value) {
decRef(bool_);
decRef(aaaaan);









Boolean* aaaabr;
aaaabr = (Boolean *) x3malloc(sizeof(Boolean));
(aaaabr->nrefs) = 0;
aaaabr->value = 1;
void * aaaabs = NULL;
aaaabs = bool_;
bool_ = aaaabr;
incRef(bool_);
decRef(aaaabs);
}
decRef(aaaaan);



void * aaaabt = NULL;
aaaabt = aaaaak;
aaaaak = aaaaaj;
incRef(aaaaak);
decRef(aaaabt);
decRef(aaaaaj);




void* aaaabu;
aaaabu = iterGetNext((void*) aaaaak);
void * aaaabv = NULL;
aaaabv = c_;
c_ = aaaabu;
incRef(c_);
decRef(aaaabv);
decRef(aaaaak);
	}
decRef(c_);






void * aaaabw = NULL;
aaaabw = aaaaao;
aaaaao = char_;
incRef(aaaaao);
decRef(aaaabw);
decRef(char_);



void * aaaabx = NULL;
aaaabx = aaaaap;
aaaaap = bool_;
incRef(aaaaap);
decRef(aaaabx);
decRef(bool_);




void* aaaaby;
aaaaby = output_((void*) aaaaao, (void*) aaaaap);
decRef(aaaaao);
decRef(aaaaap);
return aaaaby;
}


void* our_main()
{
void * aaaaaq = NULL;
void * aaaaar = NULL;






Integer* aaaabz;
aaaabz = (Integer*) x3malloc(sizeof(Integer));
(aaaabz->nrefs) = 0;
aaaabz->value = 66;
void * aaaaca = NULL;
aaaaca = aaaaaq;
aaaaaq = aaaabz;
incRef(aaaaaq);
decRef(aaaaca);




Character* aaaacb;
aaaacb = (Character*) x3malloc(sizeof(Character));
aaaacb->value = unichar (((Integer*)aaaaaq)->value);
void * aaaacc = NULL;
aaaacc = aaaaar;
aaaaar = aaaacb;
incRef(aaaaar);
decRef(aaaacc);
decRef(aaaaaq);




void* aaaacd;
aaaacd = charoutput_((void*) aaaaar);
decRef(aaaaar);
return aaaacd;
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
