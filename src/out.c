#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* expensive_(void *n_);
Iterable* input_= NULL;
int initialized_pqr = 0;
void* expensive_(void *n_) {
incRef(n_);



void * aaaaad = NULL;
void * aaaaae = NULL;



void * aaaaac = NULL;



Integer* aaaabn;
aaaabn = (Integer*) x3malloc(sizeof(Integer));
aaaabn->nrefs = 0;
aaaabn->isStr = 0;
aaaabn->isIter = 0;
aaaabn->value = 0;
void * aaaabo = NULL;
aaaabo = aaaaad;
aaaaad = aaaabn;
incRef(aaaaad);
decRef(aaaabo);




Boolean* aaaabp = (Boolean*) x3malloc(sizeof(Boolean));
aaaabp->nrefs = 0;
aaaabp->isStr = 0;
aaaabp->isIter = 0;
aaaabp->value = ((Integer*) n_)->value <= ((Integer*) aaaaad)->value;
void * aaaabq = NULL;
aaaabq = aaaaae;
aaaaae = aaaabp;
incRef(aaaaae);
decRef(aaaabq);



if ( ((Boolean *)aaaaae)->value) {
decRef(n_);
decRef(aaaaae);



void * aaaaaf = NULL;



if (aaaaad!= NULL) {
(*(int *)aaaaad)--;
}
return aaaaad;
}
else {
decRef(aaaaad);
decRef(aaaaae);



void * aaaaaj = NULL;
void * aaaaak = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaao = NULL;
void * aaaaai = NULL;



Integer* aaaabr;
aaaabr = (Integer*) x3malloc(sizeof(Integer));
aaaabr->nrefs = 0;
aaaabr->isStr = 0;
aaaabr->isIter = 0;
aaaabr->value = 1;
void * aaaabs = NULL;
aaaabs = aaaaaj;
aaaaaj = aaaabr;
incRef(aaaaaj);
decRef(aaaabs);




Integer* aaaabt;
aaaabt  = (Integer*) x3malloc(sizeof(Integer));
aaaabt->nrefs = 0;
aaaabt->isIter = 0;
aaaabt->isStr = 0;
aaaabt->value=((Integer*)n_)->value - ((Integer*)aaaaaj)->value;
void * aaaabu = NULL;
aaaabu = aaaaak;
aaaaak = aaaabt;
incRef(aaaaak);
decRef(aaaabu);
decRef(aaaaaj);
void * aaaaal = NULL;



Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
aaaabv->nrefs = 0;
aaaabv->isStr = 0;
aaaabv->isIter = 0;
aaaabv->value = 2;
void * aaaabw = NULL;
aaaabw = aaaaam;
aaaaam = aaaabv;
incRef(aaaaam);
decRef(aaaabw);




Integer* aaaabx;
aaaabx  = (Integer*) x3malloc(sizeof(Integer));
aaaabx->nrefs = 0;
aaaabx->isIter = 0;
aaaabx->isStr = 0;
aaaabx->value=((Integer*)n_)->value - ((Integer*)aaaaam)->value;
void * aaaaby = NULL;
aaaaby = aaaaan;
aaaaan = aaaabx;
incRef(aaaaan);
decRef(aaaaby);
decRef(n_);
decRef(aaaaam);




void* aaaabz;
aaaabz = expensive_((void*) aaaaak);
void * aaaaca = NULL;
aaaaca = aaaaag;
aaaaag = aaaabz;
incRef(aaaaag);
decRef(aaaaca);
decRef(aaaaak);




void* aaaacb;
aaaacb = expensive_((void*) aaaaan);
void * aaaacc = NULL;
aaaacc = aaaaah;
aaaaah = aaaacb;
incRef(aaaaah);
decRef(aaaacc);
decRef(aaaaan);




Integer* aaaacd;
aaaacd  = (Integer*) x3malloc(sizeof(Integer));
aaaacd->nrefs = 0;
aaaacd->isStr = 0;
aaaacd->isIter = 0;
aaaacd->value=((Integer*)aaaaag)->value + ((Integer*)aaaaah)->value;
void * aaaace = NULL;
aaaace = aaaaao;
aaaaao = aaaacd;
incRef(aaaaao);
decRef(aaaace);
decRef(aaaaag);
decRef(aaaaah);



if (aaaaao!= NULL) {
(*(int *)aaaaao)--;
}
return aaaaao;
}
}


void* our_main()
{
void * n_ = NULL;
void * fib_ = NULL;
void * aaaaaq = NULL;
void * fibb_ = NULL;
void * i_ = NULL;
void * sum_ = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;
void * aaaabe = NULL;
void * aaaabf = NULL;
void * aaaabd = NULL;
void * aaaabi = NULL;
void * aaaabl = NULL;
void * aaaabm = NULL;






Integer* aaaacf;
aaaacf = (Integer*) x3malloc(sizeof(Integer));
aaaacf->nrefs = 0;
aaaacf->isStr = 0;
aaaacf->isIter = 0;
aaaacf->value = 40;
void * aaaacg = NULL;
aaaacg = n_;
n_ = aaaacf;
incRef(n_);
decRef(aaaacg);



void * aaaaap = NULL;




void* aaaach;
aaaach = expensive_((void*) n_);
void * aaaaci = NULL;
aaaaci = fib_;
fib_ = aaaach;
incRef(fib_);
decRef(aaaaci);
decRef(n_);






Integer* aaaacj;
aaaacj = (Integer*) x3malloc(sizeof(Integer));
aaaacj->nrefs = 0;
aaaacj->isStr = 0;
aaaacj->isIter = 0;
aaaacj->value = 39;
void * aaaack = NULL;
aaaack = aaaaaq;
aaaaaq = aaaacj;
incRef(aaaaaq);
decRef(aaaack);




void* aaaacl;
aaaacl = expensive_((void*) aaaaaq);
void * aaaacm = NULL;
aaaacm = fibb_;
fibb_ = aaaacl;
incRef(fibb_);
decRef(aaaacm);
decRef(aaaaaq);






Integer* aaaacn;
aaaacn = (Integer*) x3malloc(sizeof(Integer));
aaaacn->nrefs = 0;
aaaacn->isStr = 0;
aaaacn->isIter = 0;
aaaacn->value = 0;
void * aaaaco = NULL;
aaaaco = i_;
i_ = aaaacn;
incRef(i_);
decRef(aaaaco);






void * aaaacp = NULL;
aaaacp = sum_;
sum_ = i_;
incRef(sum_);
decRef(aaaacp);



void * aaaaar = NULL;



Integer* aaaacq;
aaaacq = (Integer*) x3malloc(sizeof(Integer));
aaaacq->nrefs = 0;
aaaacq->isStr = 0;
aaaacq->isIter = 0;
aaaacq->value = 1000;
void * aaaacr = NULL;
aaaacr = aaaaas;
aaaaas = aaaacq;
incRef(aaaaas);
decRef(aaaacr);





Integer* aaaacs;
aaaacs  = (Integer*) x3malloc(sizeof(Integer));
aaaacs->nrefs = 0;
aaaacs->isStr = 0;
aaaacs->isIter = 0;
aaaacs->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;
Boolean* aaaact = (Boolean*) x3malloc(sizeof(Boolean));
aaaact->nrefs = 0;
aaaact->isStr = 0;
aaaact->isIter = 0;
aaaact->value = ((Integer*) aaaacs)->value < ((Integer*) aaaaas)->value;
x3free(aaaacs);
void * aaaacu = NULL;
aaaacu = aaaaat;
aaaaat = aaaact;
incRef(aaaaat);
decRef(aaaacu);
decRef(aaaaas);



while (((Boolean *)aaaaat)->value) {
decRef(aaaaat);



void * aaaaav = NULL;
void * aaaaaw = NULL;



void * aaaaau = NULL;



Integer* aaaacv;
aaaacv = (Integer*) x3malloc(sizeof(Integer));
aaaacv->nrefs = 0;
aaaacv->isStr = 0;
aaaacv->isIter = 0;
aaaacv->value = 1;
void * aaaacw = NULL;
aaaacw = aaaaav;
aaaaav = aaaacv;
incRef(aaaaav);
decRef(aaaacw);




Integer* aaaacs;
aaaacs  = (Integer*) x3malloc(sizeof(Integer));
aaaacs->nrefs = 0;
aaaacs->isStr = 0;
aaaacs->isIter = 0;
aaaacs->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;

Integer* aaaacx;
aaaacx  = (Integer*) x3malloc(sizeof(Integer));
aaaacx->nrefs = 0;
aaaacx->isStr = 0;
aaaacx->isIter = 0;
aaaacx->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;
void * aaaacy = NULL;
aaaacy = i_;
i_ = aaaacx;
incRef(i_);
decRef(aaaacy);
decRef(aaaaav);



void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;




Integer* aaaacz;
aaaacz  = (Integer*) x3malloc(sizeof(Integer));
aaaacz->nrefs = 0;
aaaacz->isIter = 0;
aaaacz->isStr = 0;
aaaacz->value=((Integer*)fib_)->value - ((Integer*)fibb_)->value;
void * aaaada = NULL;
aaaada = aaaaaw;
aaaaaw = aaaacz;
incRef(aaaaaw);
decRef(aaaada);
void * aaaaax = NULL;




Integer* aaaadb;
aaaadb  = (Integer*) x3malloc(sizeof(Integer));
aaaadb->nrefs = 0;
aaaadb->isStr = 0;
aaaadb->isIter = 0;
aaaadb->value=((Integer*)aaaaaw)->value + ((Integer*)sum_)->value;
void * aaaadc = NULL;
aaaadc = sum_;
sum_ = aaaadb;
incRef(sum_);
decRef(aaaadc);
decRef(aaaaaw);
void * aaaaar = NULL;



Integer* aaaadd;
aaaadd = (Integer*) x3malloc(sizeof(Integer));
aaaadd->nrefs = 0;
aaaadd->isStr = 0;
aaaadd->isIter = 0;
aaaadd->value = 1000;
void * aaaade = NULL;
aaaade = aaaaas;
aaaaas = aaaadd;
incRef(aaaaas);
decRef(aaaade);





Integer* aaaacs;
aaaacs  = (Integer*) x3malloc(sizeof(Integer));
aaaacs->nrefs = 0;
aaaacs->isStr = 0;
aaaacs->isIter = 0;
aaaacs->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;
Boolean* aaaact = (Boolean*) x3malloc(sizeof(Boolean));
aaaact->nrefs = 0;
aaaact->isStr = 0;
aaaact->isIter = 0;
aaaact->value = ((Integer*) aaaacs)->value < ((Integer*) aaaaas)->value;
x3free(aaaacs);


Integer* aaaacs;
aaaacs  = (Integer*) x3malloc(sizeof(Integer));
aaaacs->nrefs = 0;
aaaacs->isStr = 0;
aaaacs->isIter = 0;
aaaacs->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;

Integer* aaaacx;
aaaacx  = (Integer*) x3malloc(sizeof(Integer));
aaaacx->nrefs = 0;
aaaacx->isStr = 0;
aaaacx->isIter = 0;
aaaacx->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;

Integer* aaaadf;
aaaadf  = (Integer*) x3malloc(sizeof(Integer));
aaaadf->nrefs = 0;
aaaadf->isStr = 0;
aaaadf->isIter = 0;
aaaadf->value=((Integer*)i_)->value + ((Integer*)aaaaav)->value;
Boolean* aaaadg = (Boolean*) x3malloc(sizeof(Boolean));
aaaadg->nrefs = 0;
aaaadg->isStr = 0;
aaaadg->isIter = 0;
aaaadg->value = ((Integer*) aaaadf)->value < ((Integer*) aaaaas)->value;
x3free(aaaadf);
void * aaaadh = NULL;
aaaadh = aaaaat;
aaaaat = aaaadg;
incRef(aaaaat);
decRef(aaaadh);
decRef(aaaaas);
}
decRef(i_);
decRef(aaaaat);



void * aaaabg = NULL;
void * aaaabh = NULL;




Integer* aaaadi;
aaaadi  = (Integer*) x3malloc(sizeof(Integer));
aaaadi->nrefs = 0;
aaaadi->isIter = 0;
aaaadi->isStr = 0;
aaaadi->value=((Integer*)fib_)->value - ((Integer*)fibb_)->value;
void * aaaadj = NULL;
aaaadj = aaaabe;
aaaabe = aaaadi;
incRef(aaaabe);
decRef(aaaadj);
decRef(fib_);
decRef(fibb_);



Integer* aaaadk;
aaaadk = (Integer*) x3malloc(sizeof(Integer));
aaaadk->nrefs = 0;
aaaadk->isStr = 0;
aaaadk->isIter = 0;
aaaadk->value = 1000;
void * aaaadl = NULL;
aaaadl = aaaabf;
aaaabf = aaaadk;
incRef(aaaabf);
decRef(aaaadl);
void * aaaabc = NULL;




Integer* aaaadm;
aaaadm  = (Integer*) x3malloc(sizeof(Integer));
aaaadm->nrefs = 0;
aaaadm->isStr = 0;
aaaadm->isIter = 0;
aaaadm->value=((Integer*)aaaabe)->value * ((Integer*)aaaabf)->value;
void * aaaadn = NULL;
aaaadn = aaaabd;
aaaabd = aaaadm;
incRef(aaaabd);
decRef(aaaadn);
decRef(aaaabe);
decRef(aaaabf);




Boolean* aaaado = (Boolean*) x3malloc(sizeof(Boolean));
aaaado->nrefs = 0;
aaaado->isIter = 0;
aaaado->isStr = 0;
aaaado->value = ((Integer*) sum_)->value == ((Integer*) aaaabd)->value;
void * aaaadp = NULL;
aaaadp = aaaabi;
aaaabi = aaaado;
incRef(aaaabi);
decRef(aaaadp);
decRef(sum_);
decRef(aaaabd);



if ( ((Boolean *)aaaabi)->value) {
decRef(aaaabi);



void * aaaabj = NULL;
void * aaaabk = NULL;



String* aaaadq;
aaaadq = (String *) x3malloc(sizeof(String));
aaaadq->isIter = 0;
aaaadq->value = (char*) x3malloc(sizeof("Yes"));
aaaadq->nrefs = 0;
aaaadq->isStr = 1;
aaaadq->len = sizeof("Yes") - 1;
mystrcpy(aaaadq->value, "Yes");
void * aaaadr = NULL;
aaaadr = aaaabj;
aaaabj = aaaadq;
incRef(aaaabj);
decRef(aaaadr);



Iterable* aaaads;
aaaads = (Iterable*) x3malloc(sizeof(Iterable));
aaaads->isStr = 0;
aaaads->isIter = 1;
aaaads->nrefs = 1;
aaaads->value = aaaabj;
aaaads->additional = NULL;
aaaads->next = NULL;
aaaads->concat = NULL;
incRef(aaaabj);
aaaads->nrefs = 0;
void * aaaadt = NULL;
aaaadt = aaaabk;
aaaabk = aaaads;
incRef(aaaabk);
decRef(aaaadt);
decRef(aaaabj);



if (aaaabk!= NULL) {
(*(int *)aaaabk)--;
}
return aaaabk;
}
decRef(aaaabi);






String* aaaadu;
aaaadu = (String *) x3malloc(sizeof(String));
aaaadu->isIter = 0;
aaaadu->value = (char*) x3malloc(sizeof("No"));
aaaadu->nrefs = 0;
aaaadu->isStr = 1;
aaaadu->len = sizeof("No") - 1;
mystrcpy(aaaadu->value, "No");
void * aaaadv = NULL;
aaaadv = aaaabl;
aaaabl = aaaadu;
incRef(aaaabl);
decRef(aaaadv);



Iterable* aaaadw;
aaaadw = (Iterable*) x3malloc(sizeof(Iterable));
aaaadw->isStr = 0;
aaaadw->isIter = 1;
aaaadw->nrefs = 1;
aaaadw->value = aaaabl;
aaaadw->additional = NULL;
aaaadw->next = NULL;
aaaadw->concat = NULL;
incRef(aaaabl);
aaaadw->nrefs = 0;
void * aaaadx = NULL;
aaaadx = aaaabm;
aaaabm = aaaadw;
incRef(aaaabm);
decRef(aaaadx);
decRef(aaaabl);



if (aaaabm!= NULL) {
(*(int *)aaaabm)--;
}
return aaaabm;
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
