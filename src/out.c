#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* upTo_(void *n_);
void* length_(void *iter_);
void* stepper_(void *n_ , void *m_);
Iterable* input_= NULL;
int initialized_pqr = 0;
void* upTo_(void *n_) {
incRef(n_);



void * ret_ = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * i_ = NULL;
void * aaaaaj = NULL;






void * aaaabh = NULL;
aaaabh = ret_;
ret_ = NULL;
incRef(ret_);
decRef(aaaabh);






Integer* aaaabi;
aaaabi = (Integer*) x3malloc(sizeof(Integer));
aaaabi->nrefs = 0;
aaaabi->isStr = 0;
aaaabi->isIter = 0;
aaaabi->value = 1;
void * aaaabj = NULL;
aaaabj = aaaaac;
aaaaac = aaaabi;
incRef(aaaaac);
decRef(aaaabj);



void * aaaabk = NULL;
aaaabk = aaaaad;
aaaaad = n_;
incRef(aaaaad);
decRef(aaaabk);
decRef(n_);



Iterable* aaaabl;
aaaabl = (Iterable*) x3malloc(sizeof(Iterable));
aaaabl->isIter = 1;
aaaabl->isStr = 0;
aaaabl->nrefs = 0;
aaaabl->value = aaaaac;
aaaabl->additional = aaaaad;
aaaabl->next = &Integer_through;
aaaabl->concat = NULL;
incRef(aaaaac);
incRef(aaaaad);
void* aaaabm = checkIter(aaaabl);
void * aaaabn = NULL;
aaaabn = i_;
i_ = aaaabm;
incRef(i_);
decRef(aaaabn);
decRef(aaaaac);
decRef(aaaaad);
	if (i_!=NULL) {
		if ((*((int *)(i_+1))) == 0) {
void * aaaabo = NULL;
aaaabo = i_;
			i_ = strToIter( ((String *)i_)->value, ((String *)i_)->len);
incRef(i_);
decRef(aaaabo);
		}
	}
	while (i_!=NULL) {
Iterable * aaaaae = NULL;
		aaaaae = (Iterable *)i_;
		incRef(aaaaae);
void * aaaabp = NULL;
aaaabp = i_;
		i_ = aaaaae->value;
		incRef(i_);
		decRef(aaaabp);
		


void * aaaaai = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaaf = NULL;






void * aaaabq = NULL;
aaaabq = aaaaai;
aaaaai = i_;
incRef(aaaaai);
decRef(aaaabq);
decRef(i_);



void * aaaabr = NULL;
aaaabr = aaaaag;
aaaaag = ret_;
incRef(aaaaag);
decRef(aaaabr);
decRef(ret_);



Iterable* aaaabs;
aaaabs = (Iterable*) x3malloc(sizeof(Iterable));
aaaabs->isStr = 0;
aaaabs->isIter = 1;
aaaabs->nrefs = 1;
aaaabs->value = aaaaai;
aaaabs->additional = NULL;
aaaabs->next = NULL;
aaaabs->concat = NULL;
incRef(aaaaai);
aaaabs->nrefs = 0;
void * aaaabt = NULL;
aaaabt = aaaaah;
aaaaah = aaaabs;
incRef(aaaaah);
decRef(aaaabt);
decRef(aaaaai);



void *aaaabv;
aaaabv = aaaaag;
if (aaaabv!=NULL) {
(*((int *)aaaabv))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaabv);
aaaabv = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaabv);
}
}
void *aaaabw;
aaaabw = aaaaah;
if (aaaabw!=NULL) {
(*((int *)aaaabw))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaabw);
aaaabw = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaabw);
}
}
Iterable* aaaabu;
aaaabu = concatenate((Iterable*)aaaabv, (Iterable*) aaaabw);
decRef(aaaabv);
decRef(aaaabw);
void * aaaabx = NULL;
aaaabx = ret_;
ret_ = aaaabu;
incRef(ret_);
decRef(aaaabx);
decRef(aaaaag);
decRef(aaaaah);



void * aaaaby = NULL;
aaaaby = aaaaaf;
aaaaaf = aaaaae;
incRef(aaaaaf);
decRef(aaaaby);
decRef(aaaaae);




void* aaaabz;
aaaabz = iterGetNext((void*) aaaaaf);
void * aaaaca = NULL;
aaaaca = i_;
i_ = aaaabz;
incRef(i_);
decRef(aaaaca);
decRef(aaaaaf);
	}
decRef(i_);






void * aaaacb = NULL;
aaaacb = aaaaaj;
aaaaaj = ret_;
incRef(aaaaaj);
decRef(aaaacb);
decRef(ret_);



if (aaaaaj!= NULL) {
(*(int *)aaaaaj)--;
}
return aaaaaj;
}
void* length_(void *iter_) {
incRef(iter_);



void * ret_ = NULL;
void * e_ = NULL;
void * aaaaao = NULL;






Integer* aaaacc;
aaaacc = (Integer*) x3malloc(sizeof(Integer));
aaaacc->nrefs = 0;
aaaacc->isStr = 0;
aaaacc->isIter = 0;
aaaacc->value = 0;
void * aaaacd = NULL;
aaaacd = ret_;
ret_ = aaaacc;
incRef(ret_);
decRef(aaaacd);






void * aaaace = NULL;
aaaace = e_;
e_ = iter_;
incRef(e_);
decRef(aaaace);
decRef(iter_);
	if (e_!=NULL) {
		if ((*((int *)(e_+1))) == 0) {
void * aaaacf = NULL;
aaaacf = e_;
			e_ = strToIter( ((String *)e_)->value, ((String *)e_)->len);
incRef(e_);
decRef(aaaacf);
		}
	}
	while (e_!=NULL) {
Iterable * aaaaak = NULL;
		aaaaak = (Iterable *)e_;
		incRef(aaaaak);
void * aaaacg = NULL;
aaaacg = e_;
		e_ = aaaaak->value;
		incRef(e_);
		decRef(aaaacg);
decRef(e_);
		


void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaal = NULL;






void * aaaach = NULL;
aaaach = aaaaam;
aaaaam = ret_;
incRef(aaaaam);
decRef(aaaach);
decRef(ret_);



Integer* aaaaci;
aaaaci = (Integer*) x3malloc(sizeof(Integer));
aaaaci->nrefs = 0;
aaaaci->isStr = 0;
aaaaci->isIter = 0;
aaaaci->value = 1;
void * aaaacj = NULL;
aaaacj = aaaaan;
aaaaan = aaaaci;
incRef(aaaaan);
decRef(aaaacj);




Integer* aaaack;
aaaack  = (Integer*) x3malloc(sizeof(Integer));
aaaack->nrefs = 0;
aaaack->isStr = 0;
aaaack->isIter = 0;
aaaack->value=((Integer*)aaaaam)->value + ((Integer*)aaaaan)->value;
void * aaaacl = NULL;
aaaacl = ret_;
ret_ = aaaack;
incRef(ret_);
decRef(aaaacl);
decRef(aaaaam);
decRef(aaaaan);



void * aaaacm = NULL;
aaaacm = aaaaal;
aaaaal = aaaaak;
incRef(aaaaal);
decRef(aaaacm);
decRef(aaaaak);




void* aaaacn;
aaaacn = iterGetNext((void*) aaaaal);
void * aaaaco = NULL;
aaaaco = e_;
e_ = aaaacn;
incRef(e_);
decRef(aaaaco);
decRef(aaaaal);
	}
decRef(e_);






void * aaaacp = NULL;
aaaacp = aaaaao;
aaaaao = ret_;
incRef(aaaaao);
decRef(aaaacp);
decRef(ret_);



if (aaaaao!= NULL) {
(*(int *)aaaaao)--;
}
return aaaaao;
}
void* stepper_(void *n_ , void *m_) {
incRef(n_);
incRef(m_);



void * aaaaap = NULL;
void * iter_ = NULL;
void * aaaaas = NULL;
void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaat = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;






void * aaaacq = NULL;
aaaacq = aaaaap;
aaaaap = n_;
incRef(aaaaap);
decRef(aaaacq);




void* aaaacr;
aaaacr = upTo_((void*) aaaaap);
void * aaaacs = NULL;
aaaacs = iter_;
iter_ = aaaacr;
incRef(iter_);
decRef(aaaacs);
decRef(aaaaap);






void * aaaact = NULL;
aaaact = aaaaas;
aaaaas = iter_;
incRef(aaaaas);
decRef(aaaact);
decRef(iter_);




void* aaaacu;
aaaacu = length_((void*) aaaaas);
void * aaaacv = NULL;
aaaacv = aaaaaq;
aaaaaq = aaaacu;
incRef(aaaaaq);
decRef(aaaacv);
decRef(aaaaas);



void * aaaacw = NULL;
aaaacw = aaaaar;
aaaaar = m_;
incRef(aaaaar);
decRef(aaaacw);




Boolean* aaaacx = (Boolean*) x3malloc(sizeof(Boolean));
aaaacx->nrefs = 0;
aaaacx->isIter = 0;
aaaacx->isStr = 0;
aaaacx->value = ((Integer*) aaaaaq)->value == ((Integer*) aaaaar)->value;
void * aaaacy = NULL;
aaaacy = aaaaat;
aaaaat = aaaacx;
incRef(aaaaat);
decRef(aaaacy);
decRef(aaaaaq);
decRef(aaaaar);



if ( ((Boolean *)aaaaat)->value) {
decRef(m_);
decRef(n_);
decRef(aaaaat);



void * aaaaau = NULL;






Boolean* aaaacz;
aaaacz = (Boolean *) x3malloc(sizeof(Boolean));
aaaacz->nrefs = 0;
aaaacz->isStr = 0;
aaaacz->isIter = 0;
aaaacz->value = 1;
void * aaaada = NULL;
aaaada = aaaaau;
aaaaau = aaaacz;
incRef(aaaaau);
decRef(aaaada);



if (aaaaau!= NULL) {
(*(int *)aaaaau)--;
}
return aaaaau;
}
decRef(aaaaat);






void * aaaadb = NULL;
aaaadb = aaaaav;
aaaaav = n_;
incRef(aaaaav);
decRef(aaaadb);
decRef(n_);



void * aaaadc = NULL;
aaaadc = aaaaaw;
aaaaaw = m_;
incRef(aaaaaw);
decRef(aaaadc);
decRef(m_);



Integer* aaaadd;
aaaadd = (Integer*) x3malloc(sizeof(Integer));
aaaadd->nrefs = 0;
aaaadd->isStr = 0;
aaaadd->isIter = 0;
aaaadd->value = 1;
void * aaaade = NULL;
aaaade = aaaaax;
aaaaax = aaaadd;
incRef(aaaaax);
decRef(aaaade);




Integer* aaaadf;
aaaadf  = (Integer*) x3malloc(sizeof(Integer));
aaaadf->nrefs = 0;
aaaadf->isStr = 0;
aaaadf->isIter = 0;
aaaadf->value=((Integer*)aaaaaw)->value + ((Integer*)aaaaax)->value;
void * aaaadg = NULL;
aaaadg = aaaaay;
aaaaay = aaaadf;
incRef(aaaaay);
decRef(aaaadg);
decRef(aaaaaw);
decRef(aaaaax);




void* aaaadh;
aaaadh = stepper_((void*) aaaaav, (void*) aaaaay);
void * aaaadi = NULL;
aaaadi = aaaaaz;
aaaaaz = aaaadh;
incRef(aaaaaz);
decRef(aaaadi);
decRef(aaaaav);
decRef(aaaaay);



if (aaaaaz!= NULL) {
(*(int *)aaaaaz)--;
}
return aaaaaz;
}


void* our_main()
{
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaabc = NULL;
void * aaaabf = NULL;
void * aaaabg = NULL;






Integer* aaaadj;
aaaadj = (Integer*) x3malloc(sizeof(Integer));
aaaadj->nrefs = 0;
aaaadj->isStr = 0;
aaaadj->isIter = 0;
aaaadj->value = 500;
void * aaaadk = NULL;
aaaadk = aaaaba;
aaaaba = aaaadj;
incRef(aaaaba);
decRef(aaaadk);



Integer* aaaadl;
aaaadl = (Integer*) x3malloc(sizeof(Integer));
aaaadl->nrefs = 0;
aaaadl->isStr = 0;
aaaadl->isIter = 0;
aaaadl->value = 0;
void * aaaadm = NULL;
aaaadm = aaaabb;
aaaabb = aaaadl;
incRef(aaaabb);
decRef(aaaadm);




void* aaaadn;
aaaadn = stepper_((void*) aaaaba, (void*) aaaabb);
void * aaaado = NULL;
aaaado = aaaabc;
aaaabc = aaaadn;
incRef(aaaabc);
decRef(aaaado);
decRef(aaaaba);
decRef(aaaabb);



if ( ((Boolean *)aaaabc)->value) {
decRef(aaaabc);



void * aaaabd = NULL;
void * aaaabe = NULL;






String* aaaadp;
aaaadp = (String *) x3malloc(sizeof(String));
aaaadp->isIter = 0;
aaaadp->value = (char*) x3malloc(sizeof("Yes"));
aaaadp->nrefs = 0;
aaaadp->isStr = 1;
aaaadp->len = sizeof("Yes") - 1;
mystrcpy(aaaadp->value, "Yes");
void * aaaadq = NULL;
aaaadq = aaaabd;
aaaabd = aaaadp;
incRef(aaaabd);
decRef(aaaadq);



Iterable* aaaadr;
aaaadr = (Iterable*) x3malloc(sizeof(Iterable));
aaaadr->isStr = 0;
aaaadr->isIter = 1;
aaaadr->nrefs = 1;
aaaadr->value = aaaabd;
aaaadr->additional = NULL;
aaaadr->next = NULL;
aaaadr->concat = NULL;
incRef(aaaabd);
aaaadr->nrefs = 0;
void * aaaads = NULL;
aaaads = aaaabe;
aaaabe = aaaadr;
incRef(aaaabe);
decRef(aaaads);
decRef(aaaabd);



if (aaaabe!= NULL) {
(*(int *)aaaabe)--;
}
return aaaabe;
}
decRef(aaaabc);






String* aaaadt;
aaaadt = (String *) x3malloc(sizeof(String));
aaaadt->isIter = 0;
aaaadt->value = (char*) x3malloc(sizeof("No"));
aaaadt->nrefs = 0;
aaaadt->isStr = 1;
aaaadt->len = sizeof("No") - 1;
mystrcpy(aaaadt->value, "No");
void * aaaadu = NULL;
aaaadu = aaaabf;
aaaabf = aaaadt;
incRef(aaaabf);
decRef(aaaadu);



Iterable* aaaadv;
aaaadv = (Iterable*) x3malloc(sizeof(Iterable));
aaaadv->isStr = 0;
aaaadv->isIter = 1;
aaaadv->nrefs = 1;
aaaadv->value = aaaabf;
aaaadv->additional = NULL;
aaaadv->next = NULL;
aaaadv->concat = NULL;
incRef(aaaabf);
aaaadv->nrefs = 0;
void * aaaadw = NULL;
aaaadw = aaaabg;
aaaabg = aaaadv;
incRef(aaaabg);
decRef(aaaadw);
decRef(aaaabf);



if (aaaabg!= NULL) {
(*(int *)aaaabg)--;
}
return aaaabg;
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
