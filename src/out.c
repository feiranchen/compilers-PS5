#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* sum_(void *n_) {
incRef(n_);



void * sum_ = NULL;
void * x_ = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * aaaaae = NULL;
void * aaaaaj = NULL;






Integer* aaaaav;
aaaaav = (Integer*) x3malloc(sizeof(Integer));
aaaaav->nrefs = 0;
aaaaav->isStr = 0;
aaaaav->isIter = 0;
aaaaav->value = 0;
void * aaaaaw = NULL;
aaaaaw = sum_;
sum_ = aaaaav;
incRef(sum_);
decRef(aaaaaw);






Integer* aaaaax;
aaaaax = (Integer*) x3malloc(sizeof(Integer));
aaaaax->nrefs = 0;
aaaaax->isStr = 0;
aaaaax->isIter = 0;
aaaaax->value = 1;
void * aaaaay = NULL;
aaaaay = x_;
x_ = aaaaax;
incRef(x_);
decRef(aaaaay);






void * aaaaaz = NULL;
aaaaaz = aaaaac;
aaaaac = x_;
incRef(aaaaac);
decRef(aaaaaz);



void * aaaaba = NULL;
aaaaba = aaaaad;
aaaaad = n_;
incRef(aaaaad);
decRef(aaaaba);




Boolean* aaaabb = (Boolean*) x3malloc(sizeof(Boolean));
aaaabb->nrefs = 0;
aaaabb->isStr = 0;
aaaabb->isIter = 0;
aaaabb->value = ((Integer*) aaaaac)->value <= ((Integer*) aaaaad)->value;
void * aaaabc = NULL;
aaaabc = aaaaae;
aaaaae = aaaabb;
incRef(aaaaae);
decRef(aaaabc);
decRef(aaaaac);
decRef(aaaaad);



while (((Boolean *)aaaaae)->value) {
decRef(aaaaae);



void * aaaaaf = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaai = NULL;






void * aaaabd = NULL;
aaaabd = aaaaaf;
aaaaaf = sum_;
incRef(aaaaaf);
decRef(aaaabd);
decRef(sum_);



void * aaaabe = NULL;
aaaabe = aaaaag;
aaaaag = x_;
incRef(aaaaag);
decRef(aaaabe);




void* aaaabf;
aaaabf = add_((void*) aaaaaf, (void*) aaaaag);
void * aaaabg = NULL;
aaaabg = sum_;
sum_ = aaaabf;
incRef(sum_);
decRef(aaaabg);
decRef(aaaaaf);
decRef(aaaaag);






void * aaaabh = NULL;
aaaabh = aaaaah;
aaaaah = x_;
incRef(aaaaah);
decRef(aaaabh);
decRef(x_);



Integer* aaaabi;
aaaabi = (Integer*) x3malloc(sizeof(Integer));
aaaabi->nrefs = 0;
aaaabi->isStr = 0;
aaaabi->isIter = 0;
aaaabi->value = 1;
void * aaaabj = NULL;
aaaabj = aaaaai;
aaaaai = aaaabi;
incRef(aaaaai);
decRef(aaaabj);




void* aaaabk;
aaaabk = add_((void*) aaaaah, (void*) aaaaai);
void * aaaabl = NULL;
aaaabl = x_;
x_ = aaaabk;
incRef(x_);
decRef(aaaabl);
decRef(aaaaah);
decRef(aaaaai);



void * aaaabm = NULL;
aaaabm = aaaaac;
aaaaac = x_;
incRef(aaaaac);
decRef(aaaabm);



void * aaaabn = NULL;
aaaabn = aaaaad;
aaaaad = n_;
incRef(aaaaad);
decRef(aaaabn);




Boolean* aaaabb = (Boolean*) x3malloc(sizeof(Boolean));
aaaabb->nrefs = 0;
aaaabb->isStr = 0;
aaaabb->isIter = 0;
aaaabb->value = ((Integer*) aaaaac)->value <= ((Integer*) aaaaad)->value;

Boolean* aaaabo = (Boolean*) x3malloc(sizeof(Boolean));
aaaabo->nrefs = 0;
aaaabo->isStr = 0;
aaaabo->isIter = 0;
aaaabo->value = ((Integer*) aaaaac)->value <= ((Integer*) aaaaad)->value;
void * aaaabp = NULL;
aaaabp = aaaaae;
aaaaae = aaaabo;
incRef(aaaaae);
decRef(aaaabp);
decRef(aaaaac);
decRef(aaaaad);
}
decRef(n_);
decRef(x_);
decRef(aaaaae);






void * aaaabq = NULL;
aaaabq = aaaaaj;
aaaaaj = sum_;
incRef(aaaaaj);
decRef(aaaabq);
decRef(sum_);



if (aaaaaj!= NULL) {
(*(int *)aaaaaj)--;
}
return aaaaaj;
}
void* add_(void *x_ , void *y_) {
incRef(x_);
incRef(y_);



void * aaaaak = NULL;
void * aaaaal = NULL;
void * ret_ = NULL;
void * aaaaam = NULL;






void * aaaabr = NULL;
aaaabr = aaaaak;
aaaaak = x_;
incRef(aaaaak);
decRef(aaaabr);
decRef(x_);



void * aaaabs = NULL;
aaaabs = aaaaal;
aaaaal = y_;
incRef(aaaaal);
decRef(aaaabs);
decRef(y_);




Integer* aaaabt;
aaaabt  = (Integer*) x3malloc(sizeof(Integer));
aaaabt->nrefs = 0;
aaaabt->isStr = 0;
aaaabt->isIter = 0;
aaaabt->value=((Integer*)aaaaak)->value + ((Integer*)aaaaal)->value;
void * aaaabu = NULL;
aaaabu = ret_;
ret_ = aaaabt;
incRef(ret_);
decRef(aaaabu);
decRef(aaaaak);
decRef(aaaaal);






void * aaaabv = NULL;
aaaabv = aaaaam;
aaaaam = ret_;
incRef(aaaaam);
decRef(aaaabv);
decRef(ret_);



if (aaaaam!= NULL) {
(*(int *)aaaaam)--;
}
return aaaaam;
}


void* our_main()
{
void * aaaaap = NULL;
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaaq = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;






Integer* aaaabw;
aaaabw = (Integer*) x3malloc(sizeof(Integer));
aaaabw->nrefs = 0;
aaaabw->isStr = 0;
aaaabw->isIter = 0;
aaaabw->value = 1000;
void * aaaabx = NULL;
aaaabx = aaaaap;
aaaaap = aaaabw;
incRef(aaaaap);
decRef(aaaabx);




void* aaaaby;
aaaaby = sum_((void*) aaaaap);
void * aaaabz = NULL;
aaaabz = aaaaan;
aaaaan = aaaaby;
incRef(aaaaan);
decRef(aaaabz);
decRef(aaaaap);



Integer* aaaaca;
aaaaca = (Integer*) x3malloc(sizeof(Integer));
aaaaca->nrefs = 0;
aaaaca->isStr = 0;
aaaaca->isIter = 0;
aaaaca->value = 500500;
void * aaaacb = NULL;
aaaacb = aaaaao;
aaaaao = aaaaca;
incRef(aaaaao);
decRef(aaaacb);




Boolean* aaaacc = (Boolean*) x3malloc(sizeof(Boolean));
aaaacc->nrefs = 0;
aaaacc->isIter = 0;
aaaacc->isStr = 0;
aaaacc->value = ((Integer*) aaaaan)->value == ((Integer*) aaaaao)->value;
void * aaaacd = NULL;
aaaacd = aaaaaq;
aaaaaq = aaaacc;
incRef(aaaaaq);
decRef(aaaacd);
decRef(aaaaan);
decRef(aaaaao);



if ( ((Boolean *)aaaaaq)->value) {
decRef(aaaaaq);



void * aaaaar = NULL;
void * aaaaas = NULL;






String* aaaace;
aaaace = (String *) x3malloc(sizeof(String));
aaaace->isIter = 0;
aaaace->value = (char*) x3malloc(sizeof("Yes"));
aaaace->nrefs = 0;
aaaace->isStr = 1;
aaaace->len = sizeof("Yes") - 1;
mystrcpy(aaaace->value, "Yes");
void * aaaacf = NULL;
aaaacf = aaaaar;
aaaaar = aaaace;
incRef(aaaaar);
decRef(aaaacf);



Iterable* aaaacg;
aaaacg = (Iterable*) x3malloc(sizeof(Iterable));
aaaacg->isStr = 0;
aaaacg->isIter = 1;
aaaacg->nrefs = 1;
aaaacg->value = aaaaar;
aaaacg->additional = NULL;
aaaacg->next = NULL;
aaaacg->concat = NULL;
incRef(aaaaar);
aaaacg->nrefs = 0;
void * aaaach = NULL;
aaaach = aaaaas;
aaaaas = aaaacg;
incRef(aaaaas);
decRef(aaaach);
decRef(aaaaar);



if (aaaaas!= NULL) {
(*(int *)aaaaas)--;
}
return aaaaas;
}
decRef(aaaaaq);






String* aaaaci;
aaaaci = (String *) x3malloc(sizeof(String));
aaaaci->isIter = 0;
aaaaci->value = (char*) x3malloc(sizeof("No"));
aaaaci->nrefs = 0;
aaaaci->isStr = 1;
aaaaci->len = sizeof("No") - 1;
mystrcpy(aaaaci->value, "No");
void * aaaacj = NULL;
aaaacj = aaaaat;
aaaaat = aaaaci;
incRef(aaaaat);
decRef(aaaacj);



Iterable* aaaack;
aaaack = (Iterable*) x3malloc(sizeof(Iterable));
aaaack->isStr = 0;
aaaack->isIter = 1;
aaaack->nrefs = 1;
aaaack->value = aaaaat;
aaaack->additional = NULL;
aaaack->next = NULL;
aaaack->concat = NULL;
incRef(aaaaat);
aaaack->nrefs = 0;
void * aaaacl = NULL;
aaaacl = aaaaau;
aaaaau = aaaack;
incRef(aaaaau);
decRef(aaaacl);
decRef(aaaaat);



if (aaaaau!= NULL) {
(*(int *)aaaaau)--;
}
return aaaaau;
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
