#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* build_(void *n_);
void* remove_(void *s_);
void* empty_(void *s_);
Iterable* input_= NULL;
int initialized_pqr = 0;
void* build_(void *n_) {
incRef(n_);



void * aaaaad = NULL;
void * aaaaae = NULL;
void * aaaaac = NULL;



Integer* aaaabp;
aaaabp = (Integer*) x3malloc(sizeof(Integer));
aaaabp->nrefs = 0;
aaaabp->isStr = 0;
aaaabp->isIter = 0;
aaaabp->value = 0;
void * aaaabq = NULL;
aaaabq = aaaaad;
aaaaad = aaaabp;
incRef(aaaaad);
decRef(aaaabq);




Boolean* aaaabr = (Boolean*) x3malloc(sizeof(Boolean));
aaaabr->nrefs = 0;
aaaabr->isStr = 0;
aaaabr->isIter = 0;
aaaabr->value = ((Integer*) n_)->value <= ((Integer*) aaaaad)->value;
void * aaaabs = NULL;
aaaabs = aaaaae;
aaaaae = aaaabr;
incRef(aaaaae);
decRef(aaaabs);
decRef(aaaaad);



if ( ((Boolean *)aaaaae)->value) {
decRef(n_);
decRef(aaaaae);



void * aaaaaf = NULL;



String* aaaabt;
aaaabt = (String *) x3malloc(sizeof(String));
aaaabt->isIter = 0;
aaaabt->value = (char*) x3malloc(sizeof(""));
aaaabt->nrefs = 0;
aaaabt->isStr = 1;
aaaabt->len = sizeof("") - 1;
mystrcpy(aaaabt->value, "");
void * aaaabu = NULL;
aaaabu = aaaaaf;
aaaaaf = aaaabt;
incRef(aaaaaf);
decRef(aaaabu);



if (aaaaaf!= NULL) {
(*(int *)aaaaaf)--;
}
return aaaaaf;
}
else {
decRef(aaaaae);



void * aaaaaj = NULL;
void * aaaaak = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaai = NULL;



Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
aaaabv->nrefs = 0;
aaaabv->isStr = 0;
aaaabv->isIter = 0;
aaaabv->value = 1;
void * aaaabw = NULL;
aaaabw = aaaaaj;
aaaaaj = aaaabv;
incRef(aaaaaj);
decRef(aaaabw);




Integer* aaaabx;
aaaabx  = (Integer*) x3malloc(sizeof(Integer));
aaaabx->nrefs = 0;
aaaabx->isIter = 0;
aaaabx->isStr = 0;
aaaabx->value=((Integer*)n_)->value - ((Integer*)aaaaaj)->value;
void * aaaaby = NULL;
aaaaby = aaaaak;
aaaaak = aaaabx;
incRef(aaaaak);
decRef(aaaaby);
decRef(n_);
decRef(aaaaaj);



String* aaaabz;
aaaabz = (String *) x3malloc(sizeof(String));
aaaabz->isIter = 0;
aaaabz->value = (char*) x3malloc(sizeof(" "));
aaaabz->nrefs = 0;
aaaabz->isStr = 1;
aaaabz->len = sizeof(" ") - 1;
mystrcpy(aaaabz->value, " ");
void * aaaaca = NULL;
aaaaca = aaaaag;
aaaaag = aaaabz;
incRef(aaaaag);
decRef(aaaaca);




void* aaaacb;
aaaacb = build_((void*) aaaaak);
void * aaaacc = NULL;
aaaacc = aaaaah;
aaaaah = aaaacb;
incRef(aaaaah);
decRef(aaaacc);
decRef(aaaaak);



void *aaaace;
aaaace = aaaaag;
if (aaaace!=NULL) {
(*((int *)aaaace))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaace);
aaaace = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaace);
}
}
void *aaaacf;
aaaacf = aaaaah;
if (aaaacf!=NULL) {
(*((int *)aaaacf))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaacf);
aaaacf = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaacf);
}
}
Iterable* aaaacd;
aaaacd = concatenate((Iterable*)aaaace, (Iterable*) aaaacf);
decRef(aaaace);
decRef(aaaacf);
void * aaaacg = NULL;
aaaacg = aaaaal;
aaaaal = aaaacd;
incRef(aaaaal);
decRef(aaaacg);
decRef(aaaaag);
decRef(aaaaah);




	if (aaaaal!=NULL) {
		if ((*((int *)(aaaaal+1))) == 0) {
void * aaaaci = NULL;
aaaaci = aaaaal;
			aaaaal = strToIter( ((String *)aaaaal)->value, ((String *)aaaaal)->len);
incRef(aaaaal);
decRef(aaaaci);
		}
	}
void* aaaach;
aaaach = concatChars((Iterable*)aaaaal);
void * aaaacj = NULL;
aaaacj = aaaaam;
aaaaam = aaaach;
incRef(aaaaam);
decRef(aaaacj);
decRef(aaaaal);



if (aaaaam!= NULL) {
(*(int *)aaaaam)--;
}
return aaaaam;
}
}
void* remove_(void *s_) {
incRef(s_);



void * r_ = NULL;
void * b_ = NULL;
void * c_ = NULL;






String* aaaack;
aaaack = (String *) x3malloc(sizeof(String));
aaaack->isIter = 0;
aaaack->value = (char*) x3malloc(sizeof(""));
aaaack->nrefs = 0;
aaaack->isStr = 1;
aaaack->len = sizeof("") - 1;
mystrcpy(aaaack->value, "");
void * aaaacl = NULL;
aaaacl = r_;
r_ = aaaack;
incRef(r_);
decRef(aaaacl);






Boolean* aaaacm;
aaaacm = (Boolean *) x3malloc(sizeof(Boolean));
aaaacm->nrefs = 0;
aaaacm->isStr = 0;
aaaacm->isIter = 0;
aaaacm->value = 0;
void * aaaacn = NULL;
aaaacn = b_;
b_ = aaaacm;
incRef(b_);
decRef(aaaacn);






void * aaaaco = NULL;
aaaaco = c_;
c_ = s_;
incRef(c_);
decRef(aaaaco);
decRef(s_);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaacp = NULL;
aaaacp = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaacp);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaan = NULL;
		aaaaan = (Iterable *)c_;
		incRef(aaaaan);
void * aaaacq = NULL;
aaaacq = c_;
		c_ = aaaaan->value;
		incRef(c_);
		decRef(aaaacq);
		


void * aaaaap = NULL;



if ( ((Boolean *)b_)->value) {



void * aaaaar = NULL;
void * aaaaat = NULL;
void * aaaaas = NULL;
void * aaaaaq = NULL;



Iterable* aaaacr;
aaaacr = (Iterable*) x3malloc(sizeof(Iterable));
aaaacr->isStr = 0;
aaaacr->isIter = 1;
aaaacr->nrefs = 1;
aaaacr->value = c_;
aaaacr->additional = NULL;
aaaacr->next = NULL;
aaaacr->concat = NULL;
incRef(c_);
aaaacr->nrefs = 0;
void * aaaacs = NULL;
aaaacs = aaaaar;
aaaaar = aaaacr;
incRef(aaaaar);
decRef(aaaacs);
decRef(c_);



void *aaaacu;
aaaacu = r_;
if (aaaacu!=NULL) {
(*((int *)aaaacu))++;
if ((*((int *)r_+1)) == 0) {
decRef(aaaacu);
aaaacu = strToIter( ((String *)r_)->value, ((String *)r_)->len);
incRef(aaaacu);
}
}
void *aaaacv;
aaaacv = aaaaar;
if (aaaacv!=NULL) {
(*((int *)aaaacv))++;
if ((*((int *)aaaaar+1)) == 0) {
decRef(aaaacv);
aaaacv = strToIter( ((String *)aaaaar)->value, ((String *)aaaaar)->len);
incRef(aaaacv);
}
}
Iterable* aaaact;
aaaact = concatenate((Iterable*)aaaacu, (Iterable*) aaaacv);
decRef(aaaacu);
decRef(aaaacv);
void * aaaacw = NULL;
aaaacw = aaaaat;
aaaaat = aaaact;
incRef(aaaaat);
decRef(aaaacw);
decRef(r_);
decRef(aaaaar);




	if (aaaaat!=NULL) {
		if ((*((int *)(aaaaat+1))) == 0) {
void * aaaacy = NULL;
aaaacy = aaaaat;
			aaaaat = strToIter( ((String *)aaaaat)->value, ((String *)aaaaat)->len);
incRef(aaaaat);
decRef(aaaacy);
		}
	}
void* aaaacx;
aaaacx = concatChars((Iterable*)aaaaat);
void * aaaacz = NULL;
aaaacz = r_;
r_ = aaaacx;
incRef(r_);
decRef(aaaacz);
decRef(aaaaat);
}
else {
decRef(b_);
decRef(c_);






Boolean* aaaada;
aaaada = (Boolean *) x3malloc(sizeof(Boolean));
aaaada->nrefs = 0;
aaaada->isStr = 0;
aaaada->isIter = 0;
aaaada->value = 1;
void * aaaadb = NULL;
aaaadb = b_;
b_ = aaaada;
incRef(b_);
decRef(aaaadb);
}
void * aaaaao = NULL;




void* aaaadc;
aaaadc = iterGetNext((void*) aaaaan);
void * aaaadd = NULL;
aaaadd = c_;
c_ = aaaadc;
incRef(c_);
decRef(aaaadd);
decRef(aaaaan);
	}
decRef(b_);
decRef(c_);



void * aaaaau = NULL;



if (r_!= NULL) {
(*(int *)r_)--;
}
return r_;
}
void* empty_(void *s_) {
incRef(s_);



void * c_ = NULL;
void * aaaabg = NULL;



void * aaaaav = NULL;




void* aaaade;
aaaade = remove_((void*) s_);
void * aaaadf = NULL;
aaaadf = c_;
c_ = aaaade;
incRef(c_);
decRef(aaaadf);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaadg = NULL;
aaaadg = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaadg);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaaw = NULL;
		aaaaaw = (Iterable *)c_;
		incRef(aaaaaw);
void * aaaadh = NULL;
aaaadh = c_;
		c_ = aaaaaw->value;
		incRef(c_);
		decRef(aaaadh);
decRef(c_);
decRef(aaaaaw);
		


void * aaaaaz = NULL;
void * a_ = NULL;
void * aaaabe = NULL;
void * aaaabf = NULL;
void * aaaaax = NULL;



void * aaaaay = NULL;




void* aaaadi;
aaaadi = remove_((void*) s_);
void * aaaadj = NULL;
aaaadj = aaaaaz;
aaaaaz = aaaadi;
incRef(aaaaaz);
decRef(aaaadj);
decRef(s_);




void* aaaadk;
aaaadk = empty_((void*) aaaaaz);
void * aaaadl = NULL;
aaaadl = a_;
a_ = aaaadk;
incRef(a_);
decRef(aaaadl);
decRef(aaaaaz);



void * aaaaba = NULL;
void * aaaabb = NULL;
void * b_ = NULL;



void * aaaabc = NULL;
void * aaaabd = NULL;



void *aaaadn;
aaaadn = a_;
if (aaaadn!=NULL) {
(*((int *)aaaadn))++;
if ((*((int *)a_+1)) == 0) {
decRef(aaaadn);
aaaadn = strToIter( ((String *)a_)->value, ((String *)a_)->len);
incRef(aaaadn);
}
}
void *aaaado;
aaaado = a_;
if (aaaado!=NULL) {
(*((int *)aaaado))++;
if ((*((int *)a_+1)) == 0) {
decRef(aaaado);
aaaado = strToIter( ((String *)a_)->value, ((String *)a_)->len);
incRef(aaaado);
}
}
Iterable* aaaadm;
aaaadm = concatenate((Iterable*)aaaadn, (Iterable*) aaaado);
decRef(aaaadn);
decRef(aaaado);
void * aaaadp = NULL;
aaaadp = aaaabe;
aaaabe = aaaadm;
incRef(aaaabe);
decRef(aaaadp);
decRef(a_);




	if (aaaabe!=NULL) {
		if ((*((int *)(aaaabe+1))) == 0) {
void * aaaadr = NULL;
aaaadr = aaaabe;
			aaaabe = strToIter( ((String *)aaaabe)->value, ((String *)aaaabe)->len);
incRef(aaaabe);
decRef(aaaadr);
		}
	}
void* aaaadq;
aaaadq = concatChars((Iterable*)aaaabe);
void * aaaads = NULL;
aaaads = aaaabf;
aaaabf = aaaadq;
incRef(aaaabf);
decRef(aaaads);
decRef(aaaabe);



if (aaaabf!= NULL) {
(*(int *)aaaabf)--;
}
return aaaabf;



void * aaaadt = NULL;
aaaadt = aaaaax;
aaaaax = aaaaaw;
incRef(aaaaax);
decRef(aaaadt);
decRef(aaaaax);




void* aaaadu;
aaaadu = iterGetNext((void*) aaaaax);
void * aaaadv = NULL;
aaaadv = c_;
c_ = aaaadu;
incRef(c_);
decRef(aaaadv);
decRef(c_);
	}
decRef(s_);
decRef(c_);






String* aaaadw;
aaaadw = (String *) x3malloc(sizeof(String));
aaaadw->isIter = 0;
aaaadw->value = (char*) x3malloc(sizeof(""));
aaaadw->nrefs = 0;
aaaadw->isStr = 1;
aaaadw->len = sizeof("") - 1;
mystrcpy(aaaadw->value, "");
void * aaaadx = NULL;
aaaadx = aaaabg;
aaaabg = aaaadw;
incRef(aaaabg);
decRef(aaaadx);



if (aaaabg!= NULL) {
(*(int *)aaaabg)--;
}
return aaaabg;
}


void* our_main()
{
void * aaaabh = NULL;
void * aaaabi = NULL;
void * c_ = NULL;
void * aaaabn = NULL;
void * aaaabo = NULL;






Integer* aaaady;
aaaady = (Integer*) x3malloc(sizeof(Integer));
aaaady->nrefs = 0;
aaaady->isStr = 0;
aaaady->isIter = 0;
aaaady->value = 10;
void * aaaadz = NULL;
aaaadz = aaaabh;
aaaabh = aaaady;
incRef(aaaabh);
decRef(aaaadz);




void* aaaaea;
aaaaea = build_((void*) aaaabh);
void * aaaaeb = NULL;
aaaaeb = aaaabi;
aaaabi = aaaaea;
incRef(aaaabi);
decRef(aaaaeb);
decRef(aaaabh);




void* aaaaec;
aaaaec = empty_((void*) aaaabi);
void * aaaaed = NULL;
aaaaed = c_;
c_ = aaaaec;
incRef(c_);
decRef(aaaaed);
decRef(aaaabi);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaaee = NULL;
aaaaee = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaaee);
		}
	}
	while (c_!=NULL) {
Iterable * aaaabj = NULL;
		aaaabj = (Iterable *)c_;
		incRef(aaaabj);
void * aaaaef = NULL;
aaaaef = c_;
		c_ = aaaabj->value;
		incRef(c_);
		decRef(aaaaef);
decRef(c_);
decRef(aaaabj);
		


void * aaaabl = NULL;
void * aaaabm = NULL;
void * aaaabk = NULL;



String* aaaaeg;
aaaaeg = (String *) x3malloc(sizeof(String));
aaaaeg->isIter = 0;
aaaaeg->value = (char*) x3malloc(sizeof("No"));
aaaaeg->nrefs = 0;
aaaaeg->isStr = 1;
aaaaeg->len = sizeof("No") - 1;
mystrcpy(aaaaeg->value, "No");
void * aaaaeh = NULL;
aaaaeh = aaaabl;
aaaabl = aaaaeg;
incRef(aaaabl);
decRef(aaaaeh);



Iterable* aaaaei;
aaaaei = (Iterable*) x3malloc(sizeof(Iterable));
aaaaei->isStr = 0;
aaaaei->isIter = 1;
aaaaei->nrefs = 1;
aaaaei->value = aaaabl;
aaaaei->additional = NULL;
aaaaei->next = NULL;
aaaaei->concat = NULL;
incRef(aaaabl);
aaaaei->nrefs = 0;
void * aaaaej = NULL;
aaaaej = aaaabm;
aaaabm = aaaaei;
incRef(aaaabm);
decRef(aaaaej);
decRef(aaaabl);



if (aaaabm!= NULL) {
(*(int *)aaaabm)--;
}
return aaaabm;



void * aaaaek = NULL;
aaaaek = aaaabk;
aaaabk = aaaabj;
incRef(aaaabk);
decRef(aaaaek);
decRef(aaaabk);




void* aaaael;
aaaael = iterGetNext((void*) aaaabk);
void * aaaaem = NULL;
aaaaem = c_;
c_ = aaaael;
incRef(c_);
decRef(aaaaem);
decRef(c_);
	}
decRef(c_);






String* aaaaen;
aaaaen = (String *) x3malloc(sizeof(String));
aaaaen->isIter = 0;
aaaaen->value = (char*) x3malloc(sizeof("Yes"));
aaaaen->nrefs = 0;
aaaaen->isStr = 1;
aaaaen->len = sizeof("Yes") - 1;
mystrcpy(aaaaen->value, "Yes");
void * aaaaeo = NULL;
aaaaeo = aaaabn;
aaaabn = aaaaen;
incRef(aaaabn);
decRef(aaaaeo);



Iterable* aaaaep;
aaaaep = (Iterable*) x3malloc(sizeof(Iterable));
aaaaep->isStr = 0;
aaaaep->isIter = 1;
aaaaep->nrefs = 1;
aaaaep->value = aaaabn;
aaaaep->additional = NULL;
aaaaep->next = NULL;
aaaaep->concat = NULL;
incRef(aaaabn);
aaaaep->nrefs = 0;
void * aaaaeq = NULL;
aaaaeq = aaaabo;
aaaabo = aaaaep;
incRef(aaaabo);
decRef(aaaaeq);
decRef(aaaabn);



if (aaaabo!= NULL) {
(*(int *)aaaabo)--;
}
return aaaabo;
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
