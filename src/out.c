#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* copy(void *i , void *its) {
incRef(i);
incRef(its);



void * out = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * x = NULL;






void * aaaacg = NULL;
aaaacg = out;
out = NULL;
incRef(out);
decRef(aaaacg);






Integer* aaaach;
aaaach = (Integer*) x3malloc(sizeof(Integer));
(aaaach->nrefs) = 0;
aaaach->value = 1;
void * aaaaci = NULL;
aaaaci = aaaaac;
aaaaac = aaaach;
incRef(aaaaac);
decRef(aaaaci);



void * aaaacj = NULL;
aaaacj = aaaaad;
aaaaad = i;
incRef(aaaaad);
decRef(aaaacj);
decRef(i);



Iterable* aaaack;
aaaack = (Iterable*) x3malloc(sizeof(Iterable));
aaaack->isIter = 1;
aaaack->nrefs = 0;
aaaack->value = aaaaac;
aaaack->additional = aaaaad;
aaaack->next = &Integer_through;
aaaack->concat = NULL;
incRef(aaaaac);
incRef(aaaaad);
void * aaaacl = NULL;
aaaacl = x;
x = checkIter(aaaack);
incRef(x);
decRef(aaaacl);
decRef(aaaaac);
decRef(aaaaad);
	if (x!=NULL) {
		if ((*((int *)(x+1))) == 0) {
void * aaaacm = NULL;
aaaacm = x;
			x = strToIter( ((String *)x)->value, ((String *)x)->len);
incRef(x);
decRef(aaaacm);
		}
	}
	while (x!=NULL) {
Iterable * aaaaae = NULL;
		aaaaae = (Iterable *)x;
		incRef(aaaaae);
void * aaaacn = NULL;
aaaacn = x;
		x = aaaaae->value;
		incRef(x);
		decRef(aaaacn);
decRef(x);
		


void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaaf = NULL;






void * aaaaco = NULL;
aaaaco = aaaaag;
aaaaag = out;
incRef(aaaaag);
decRef(aaaaco);
decRef(out);



void * aaaacp = NULL;
aaaacp = aaaaah;
aaaaah = its;
incRef(aaaaah);
decRef(aaaacp);



void *aaaacr;
aaaacr = aaaaag;
if (aaaacr!=NULL) {
(*((int *)aaaacr))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaacr);
aaaacr = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaacr);
}
}
void *aaaacs;
aaaacs = aaaaah;
if (aaaacs!=NULL) {
(*((int *)aaaacs))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaacs);
aaaacs = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaacs);
}
}
Iterable* aaaacq;
aaaacq = concatenate((Iterable*)aaaacr, (Iterable*) aaaacs);
decRef(aaaacr);
decRef(aaaacs);
void * aaaact = NULL;
aaaact = out;
out = aaaacq;
incRef(out);
decRef(aaaact);
decRef(aaaaag);
decRef(aaaaah);



void * aaaacu = NULL;
aaaacu = aaaaaf;
aaaaaf = aaaaae;
incRef(aaaaaf);
decRef(aaaacu);
decRef(aaaaae);




void* aaaacv;
aaaacv = iterGetNext((void*) aaaaaf);
void * aaaacw = NULL;
aaaacw = x;
x = aaaacv;
incRef(x);
decRef(aaaacw);
decRef(aaaaaf);
	}
decRef(its);
decRef(x);






if (out!= NULL) {
(*(int *)out)--;
}
return out;
}
void* inttostring(void *i) {
incRef(i);



void * aaaaai = NULL;
void * aaaaaj = NULL;
void * aaaaak = NULL;
void * neg = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * retval = NULL;
void * aaaaap = NULL;
void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaabg = NULL;
void * aaaabj = NULL;






void * aaaacx = NULL;
aaaacx = aaaaai;
aaaaai = i;
incRef(aaaaai);
decRef(aaaacx);



Integer* aaaacy;
aaaacy = (Integer*) x3malloc(sizeof(Integer));
(aaaacy->nrefs) = 0;
aaaacy->value = 0;
void * aaaacz = NULL;
aaaacz = aaaaaj;
aaaaaj = aaaacy;
incRef(aaaaaj);
decRef(aaaacz);




Boolean* aaaada = (Boolean*) x3malloc(sizeof(Boolean));
aaaada->nrefs = 0;
aaaada->value = ((Integer*) aaaaai)->value == ((Integer*) aaaaaj)->value;
void * aaaadb = NULL;
aaaadb = aaaaak;
aaaaak = aaaada;
incRef(aaaaak);
decRef(aaaadb);
decRef(aaaaai);
decRef(aaaaaj);



if ( ((Boolean *)aaaaak)->value) {
decRef(i);
decRef(aaaaak);









String* aaaadc;
aaaadc = (String *) x3malloc(sizeof(String));
(aaaadc->isIter) = 0;
aaaadc->value = (char*) x3malloc(sizeof("0"));
(aaaadc->nrefs) = 0;
(aaaadc->isStr) = 1;
aaaadc->len = sizeof("0") - 1;
mystrcpy(aaaadc->value, "0");
return aaaadc;
}
decRef(aaaaak);






Boolean* aaaadd;
aaaadd = (Boolean *) x3malloc(sizeof(Boolean));
(aaaadd->nrefs) = 0;
aaaadd->value = 0;
void * aaaade = NULL;
aaaade = neg;
neg = aaaadd;
incRef(neg);
decRef(aaaade);






void * aaaadf = NULL;
aaaadf = aaaaal;
aaaaal = i;
incRef(aaaaal);
decRef(aaaadf);



Integer* aaaadg;
aaaadg = (Integer*) x3malloc(sizeof(Integer));
(aaaadg->nrefs) = 0;
aaaadg->value = 0;
void * aaaadh = NULL;
aaaadh = aaaaam;
aaaaam = aaaadg;
incRef(aaaaam);
decRef(aaaadh);




Boolean* aaaadi = (Boolean*) x3malloc(sizeof(Boolean));
aaaadi->nrefs = 0;
aaaadi->value = ((Integer*) aaaaal)->value < ((Integer*) aaaaam)->value;
void * aaaadj = NULL;
aaaadj = aaaaan;
aaaaan = aaaadi;
incRef(aaaaan);
decRef(aaaadj);
decRef(aaaaal);
decRef(aaaaam);



if ( ((Boolean *)aaaaan)->value) {
decRef(neg);
decRef(aaaaan);



void * aaaaao = NULL;






Boolean* aaaadk;
aaaadk = (Boolean *) x3malloc(sizeof(Boolean));
(aaaadk->nrefs) = 0;
aaaadk->value = 1;
void * aaaadl = NULL;
aaaadl = neg;
neg = aaaadk;
incRef(neg);
decRef(aaaadl);






void * aaaadm = NULL;
aaaadm = aaaaao;
aaaaao = i;
incRef(aaaaao);
decRef(aaaadm);
decRef(i);




Integer* aaaadn;
aaaadn  = (Integer*) x3malloc(sizeof(Integer));
aaaadn->nrefs = 0;
aaaadn->value=-(((Integer*)aaaaao)->value);
void * aaaado = NULL;
aaaado = i;
i = aaaadn;
incRef(i);
decRef(aaaado);
decRef(aaaaao);
}
decRef(aaaaan);






String* aaaadp;
aaaadp = (String *) x3malloc(sizeof(String));
(aaaadp->isIter) = 0;
aaaadp->value = (char*) x3malloc(sizeof(""));
(aaaadp->nrefs) = 0;
(aaaadp->isStr) = 1;
aaaadp->len = sizeof("") - 1;
mystrcpy(aaaadp->value, "");
void * aaaadq = NULL;
aaaadq = retval;
retval = aaaadp;
incRef(retval);
decRef(aaaadq);






void * aaaadr = NULL;
aaaadr = aaaaap;
aaaaap = i;
incRef(aaaaap);
decRef(aaaadr);



Integer* aaaads;
aaaads = (Integer*) x3malloc(sizeof(Integer));
(aaaads->nrefs) = 0;
aaaads->value = 0;
void * aaaadt = NULL;
aaaadt = aaaaaq;
aaaaaq = aaaads;
incRef(aaaaaq);
decRef(aaaadt);




Boolean* aaaadu = (Boolean*) x3malloc(sizeof(Boolean));
aaaadu->nrefs = 0;
aaaadu->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaadv = NULL;
aaaadv = aaaaar;
aaaaar = aaaadu;
incRef(aaaaar);
decRef(aaaadv);
decRef(aaaaap);
decRef(aaaaaq);



while (((Boolean *)aaaaar)->value) {
decRef(aaaaar);



void * aaaaas = NULL;
void * aaaaat = NULL;
void * mod = NULL;
void * m = NULL;
void * aaaabc = NULL;
void * aaaabd = NULL;
void * div = NULL;
void * t = NULL;






void * aaaadw = NULL;
aaaadw = aaaaas;
aaaaas = i;
incRef(aaaaas);
decRef(aaaadw);



Integer* aaaadx;
aaaadx = (Integer*) x3malloc(sizeof(Integer));
(aaaadx->nrefs) = 0;
aaaadx->value = 10;
void * aaaady = NULL;
aaaady = aaaaat;
aaaaat = aaaadx;
incRef(aaaaat);
decRef(aaaady);




Iterable* aaaadz = NULL;
Integer* aaaaea = NULL;
if(((Integer*)aaaaat)->value == 0) 
	aaaadz = NULL;
else {
	aaaaea  = (Integer*) x3malloc(sizeof(Integer));
	aaaaea->nrefs = 0;
	aaaaea->value=((Integer*)aaaaas)->value % ((Integer*)aaaaat)->value;
	aaaadz = (Iterable*) x3malloc(sizeof(Iterable));
	aaaadz->isIter = 1;
aaaadz->nrefs = 0;
	aaaadz->value = aaaaea;
	aaaadz->additional = NULL;
	aaaadz->next = NULL;
	aaaadz->concat = NULL;
incRef(aaaaea);
}
void * aaaaeb = NULL;
aaaaeb = mod;
mod = aaaadz;
incRef(mod);
decRef(aaaaeb);
decRef(aaaaas);
decRef(aaaaat);






void * aaaaec = NULL;
aaaaec = m;
m = mod;
incRef(m);
decRef(aaaaec);
decRef(mod);
	if (m!=NULL) {
		if ((*((int *)(m+1))) == 0) {
void * aaaaed = NULL;
aaaaed = m;
			m = strToIter( ((String *)m)->value, ((String *)m)->len);
incRef(m);
decRef(aaaaed);
		}
	}
	while (m!=NULL) {
Iterable * aaaaau = NULL;
		aaaaau = (Iterable *)m;
		incRef(aaaaau);
void * aaaaee = NULL;
aaaaee = m;
		m = aaaaau->value;
		incRef(m);
		decRef(aaaaee);
		


void * aaaaay = NULL;
void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaav = NULL;






void * aaaaef = NULL;
aaaaef = aaaaay;
aaaaay = m;
incRef(aaaaay);
decRef(aaaaef);
decRef(m);



Integer* aaaaeg;
aaaaeg = (Integer*) x3malloc(sizeof(Integer));
(aaaaeg->nrefs) = 0;
aaaaeg->value = 48;
void * aaaaeh = NULL;
aaaaeh = aaaaaz;
aaaaaz = aaaaeg;
incRef(aaaaaz);
decRef(aaaaeh);




Integer* aaaaei;
aaaaei  = (Integer*) x3malloc(sizeof(Integer));
aaaaei->nrefs = 0;
aaaaei->value=((Integer*)aaaaay)->value + ((Integer*)aaaaaz)->value;
void * aaaaej = NULL;
aaaaej = aaaaba;
aaaaba = aaaaei;
incRef(aaaaba);
decRef(aaaaej);
decRef(aaaaay);
decRef(aaaaaz);




Character* aaaaek;
aaaaek = (Character*) x3malloc(sizeof(Character));
aaaaek->value = unichar (((Integer*)aaaaba)->value);
void * aaaael = NULL;
aaaael = aaaabb;
aaaabb = aaaaek;
incRef(aaaabb);
decRef(aaaael);
decRef(aaaaba);



Iterable* aaaaem;
aaaaem = (Iterable*) x3malloc(sizeof(Iterable));
aaaaem->isIter = 1;
aaaaem->nrefs = 1;
aaaaem->value = aaaabb;
aaaaem->additional = NULL;
aaaaem->next = NULL;
aaaaem->concat = NULL;
incRef(aaaabb);
aaaaem->nrefs = 0;
void * aaaaen = NULL;
aaaaen = aaaaaw;
aaaaaw = aaaaem;
incRef(aaaaaw);
decRef(aaaaen);
decRef(aaaabb);



void * aaaaeo = NULL;
aaaaeo = aaaaax;
aaaaax = retval;
incRef(aaaaax);
decRef(aaaaeo);
decRef(retval);



void *aaaaeq;
aaaaeq = aaaaaw;
if (aaaaeq!=NULL) {
(*((int *)aaaaeq))++;
if ((*((int *)aaaaaw+1)) == 0) {
decRef(aaaaeq);
aaaaeq = strToIter( ((String *)aaaaaw)->value, ((String *)aaaaaw)->len);
incRef(aaaaeq);
}
}
void *aaaaer;
aaaaer = aaaaax;
if (aaaaer!=NULL) {
(*((int *)aaaaer))++;
if ((*((int *)aaaaax+1)) == 0) {
decRef(aaaaer);
aaaaer = strToIter( ((String *)aaaaax)->value, ((String *)aaaaax)->len);
incRef(aaaaer);
}
}
Iterable* aaaaep;
aaaaep = concatenate((Iterable*)aaaaeq, (Iterable*) aaaaer);
decRef(aaaaeq);
decRef(aaaaer);
void * aaaaes = NULL;
aaaaes = retval;
retval = aaaaep;
incRef(retval);
decRef(aaaaes);
decRef(aaaaaw);
decRef(aaaaax);



void * aaaaet = NULL;
aaaaet = aaaaav;
aaaaav = aaaaau;
incRef(aaaaav);
decRef(aaaaet);
decRef(aaaaau);




void* aaaaeu;
aaaaeu = iterGetNext((void*) aaaaav);
void * aaaaev = NULL;
aaaaev = m;
m = aaaaeu;
incRef(m);
decRef(aaaaev);
decRef(aaaaav);
	}
decRef(m);






void * aaaaew = NULL;
aaaaew = aaaabc;
aaaabc = i;
incRef(aaaabc);
decRef(aaaaew);



Integer* aaaaex;
aaaaex = (Integer*) x3malloc(sizeof(Integer));
(aaaaex->nrefs) = 0;
aaaaex->value = 10;
void * aaaaey = NULL;
aaaaey = aaaabd;
aaaabd = aaaaex;
incRef(aaaabd);
decRef(aaaaey);




Iterable* aaaaez;
Integer* aaaafa;
if(((Integer*)aaaabd)->value == 0) 
	aaaaez = NULL;
else {
	aaaafa  = (Integer*) x3malloc(sizeof(Integer));
	aaaafa->nrefs = 0;
	aaaafa->value=((Integer*)aaaabc)->value / ((Integer*)aaaabd)->value;
	aaaaez = (Iterable*) x3malloc(sizeof(Iterable));
	aaaaez->isIter = 1;
aaaaez->nrefs = 0;
	aaaaez->value = aaaafa;
	aaaaez->additional = NULL;
	aaaaez->next = NULL;
	aaaaez->concat = NULL;
incRef(aaaafa);
}
void * aaaafb = NULL;
aaaafb = div;
div = aaaaez;
incRef(div);
decRef(aaaafb);
decRef(aaaabc);
decRef(aaaabd);






void * aaaafc = NULL;
aaaafc = t;
t = div;
incRef(t);
decRef(aaaafc);
decRef(div);
	if (t!=NULL) {
		if ((*((int *)(t+1))) == 0) {
void * aaaafd = NULL;
aaaafd = t;
			t = strToIter( ((String *)t)->value, ((String *)t)->len);
incRef(t);
decRef(aaaafd);
		}
	}
	while (t!=NULL) {
Iterable * aaaabe = NULL;
		aaaabe = (Iterable *)t;
		incRef(aaaabe);
void * aaaafe = NULL;
aaaafe = t;
		t = aaaabe->value;
		incRef(t);
		decRef(aaaafe);
decRef(i);
		


void * aaaabf = NULL;






void * aaaaff = NULL;
aaaaff = i;
i = t;
incRef(i);
decRef(aaaaff);
decRef(t);



void * aaaafg = NULL;
aaaafg = aaaabf;
aaaabf = aaaabe;
incRef(aaaabf);
decRef(aaaafg);
decRef(aaaabe);




void* aaaafh;
aaaafh = iterGetNext((void*) aaaabf);
void * aaaafi = NULL;
aaaafi = t;
t = aaaafh;
incRef(t);
decRef(aaaafi);
decRef(aaaabf);
	}
decRef(t);



void * aaaafj = NULL;
aaaafj = aaaaap;
aaaaap = i;
incRef(aaaaap);
decRef(aaaafj);



Integer* aaaafk;
aaaafk = (Integer*) x3malloc(sizeof(Integer));
(aaaafk->nrefs) = 0;
aaaafk->value = 0;
void * aaaafl = NULL;
aaaafl = aaaaaq;
aaaaaq = aaaafk;
incRef(aaaaaq);
decRef(aaaafl);




Boolean* aaaadu = (Boolean*) x3malloc(sizeof(Boolean));
aaaadu->nrefs = 0;
aaaadu->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;

Boolean* aaaafm = (Boolean*) x3malloc(sizeof(Boolean));
aaaafm->nrefs = 0;
aaaafm->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaafn = NULL;
aaaafn = aaaaar;
aaaaar = aaaafm;
incRef(aaaaar);
decRef(aaaafn);
decRef(aaaaap);
decRef(aaaaaq);
}
decRef(i);
decRef(aaaaar);






void * aaaafo = NULL;
aaaafo = aaaabg;
aaaabg = neg;
incRef(aaaabg);
decRef(aaaafo);
decRef(neg);



if ( ((Boolean *)aaaabg)->value) {
decRef(aaaabg);



void * aaaabh = NULL;
void * aaaabi = NULL;






String* aaaafp;
aaaafp = (String *) x3malloc(sizeof(String));
(aaaafp->isIter) = 0;
aaaafp->value = (char*) x3malloc(sizeof("-"));
(aaaafp->nrefs) = 0;
(aaaafp->isStr) = 1;
aaaafp->len = sizeof("-") - 1;
mystrcpy(aaaafp->value, "-");
void * aaaafq = NULL;
aaaafq = aaaabh;
aaaabh = aaaafp;
incRef(aaaabh);
decRef(aaaafq);



void * aaaafr = NULL;
aaaafr = aaaabi;
aaaabi = retval;
incRef(aaaabi);
decRef(aaaafr);
decRef(retval);



void *aaaaft;
aaaaft = aaaabh;
if (aaaaft!=NULL) {
(*((int *)aaaaft))++;
if ((*((int *)aaaabh+1)) == 0) {
decRef(aaaaft);
aaaaft = strToIter( ((String *)aaaabh)->value, ((String *)aaaabh)->len);
incRef(aaaaft);
}
}
void *aaaafu;
aaaafu = aaaabi;
if (aaaafu!=NULL) {
(*((int *)aaaafu))++;
if ((*((int *)aaaabi+1)) == 0) {
decRef(aaaafu);
aaaafu = strToIter( ((String *)aaaabi)->value, ((String *)aaaabi)->len);
incRef(aaaafu);
}
}
Iterable* aaaafs;
aaaafs = concatenate((Iterable*)aaaaft, (Iterable*) aaaafu);
decRef(aaaaft);
decRef(aaaafu);
void * aaaafv = NULL;
aaaafv = retval;
retval = aaaafs;
incRef(retval);
decRef(aaaafv);
decRef(aaaabh);
decRef(aaaabi);
}
decRef(aaaabg);






void * aaaafw = NULL;
aaaafw = aaaabj;
aaaabj = retval;
incRef(aaaabj);
decRef(aaaafw);
decRef(retval);




	if (aaaabj!=NULL) {
		if ((*((int *)(aaaabj+1))) == 0) {
void * aaaafy = NULL;
aaaafy = aaaabj;
			aaaabj = strToIter( ((String *)aaaabj)->value, ((String *)aaaabj)->len);
incRef(aaaabj);
decRef(aaaafy);
		}
	}
void* aaaafx;
aaaafx = concatChars((Iterable*)aaaabj);
decRef(aaaabj);
return aaaafx;
}
void* intstostring(void *ints) {
incRef(ints);



void * retval = NULL;
void * i = NULL;
void * aaaabr = NULL;






String* aaaafz;
aaaafz = (String *) x3malloc(sizeof(String));
(aaaafz->isIter) = 0;
aaaafz->value = (char*) x3malloc(sizeof(""));
(aaaafz->nrefs) = 0;
(aaaafz->isStr) = 1;
aaaafz->len = sizeof("") - 1;
mystrcpy(aaaafz->value, "");
void * aaaaga = NULL;
aaaaga = retval;
retval = aaaafz;
incRef(retval);
decRef(aaaaga);






void * aaaagb = NULL;
aaaagb = i;
i = ints;
incRef(i);
decRef(aaaagb);
decRef(ints);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaagc = NULL;
aaaagc = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaagc);
		}
	}
	while (i!=NULL) {
Iterable * aaaabk = NULL;
		aaaabk = (Iterable *)i;
		incRef(aaaabk);
void * aaaagd = NULL;
aaaagd = i;
		i = aaaabk->value;
		incRef(i);
		decRef(aaaagd);
		


void * aaaabq = NULL;
void * aaaabo = NULL;
void * aaaabp = NULL;
void * aaaabm = NULL;
void * aaaabn = NULL;
void * aaaabl = NULL;






void * aaaage = NULL;
aaaage = aaaabq;
aaaabq = i;
incRef(aaaabq);
decRef(aaaage);
decRef(i);



void * aaaagf = NULL;
aaaagf = aaaabo;
aaaabo = retval;
incRef(aaaabo);
decRef(aaaagf);
decRef(retval);




void* aaaagg;
aaaagg = inttostring((void*) aaaabq);
void * aaaagh = NULL;
aaaagh = aaaabp;
aaaabp = aaaagg;
incRef(aaaabp);
decRef(aaaagh);
decRef(aaaabq);



void *aaaagj;
aaaagj = aaaabo;
if (aaaagj!=NULL) {
(*((int *)aaaagj))++;
if ((*((int *)aaaabo+1)) == 0) {
decRef(aaaagj);
aaaagj = strToIter( ((String *)aaaabo)->value, ((String *)aaaabo)->len);
incRef(aaaagj);
}
}
void *aaaagk;
aaaagk = aaaabp;
if (aaaagk!=NULL) {
(*((int *)aaaagk))++;
if ((*((int *)aaaabp+1)) == 0) {
decRef(aaaagk);
aaaagk = strToIter( ((String *)aaaabp)->value, ((String *)aaaabp)->len);
incRef(aaaagk);
}
}
Iterable* aaaagi;
aaaagi = concatenate((Iterable*)aaaagj, (Iterable*) aaaagk);
decRef(aaaagj);
decRef(aaaagk);
void * aaaagl = NULL;
aaaagl = aaaabm;
aaaabm = aaaagi;
incRef(aaaabm);
decRef(aaaagl);
decRef(aaaabo);
decRef(aaaabp);



String* aaaagm;
aaaagm = (String *) x3malloc(sizeof(String));
(aaaagm->isIter) = 0;
aaaagm->value = (char*) x3malloc(sizeof(", "));
(aaaagm->nrefs) = 0;
(aaaagm->isStr) = 1;
aaaagm->len = sizeof(", ") - 1;
mystrcpy(aaaagm->value, ", ");
void * aaaagn = NULL;
aaaagn = aaaabn;
aaaabn = aaaagm;
incRef(aaaabn);
decRef(aaaagn);



void *aaaagp;
aaaagp = aaaabm;
if (aaaagp!=NULL) {
(*((int *)aaaagp))++;
if ((*((int *)aaaabm+1)) == 0) {
decRef(aaaagp);
aaaagp = strToIter( ((String *)aaaabm)->value, ((String *)aaaabm)->len);
incRef(aaaagp);
}
}
void *aaaagq;
aaaagq = aaaabn;
if (aaaagq!=NULL) {
(*((int *)aaaagq))++;
if ((*((int *)aaaabn+1)) == 0) {
decRef(aaaagq);
aaaagq = strToIter( ((String *)aaaabn)->value, ((String *)aaaabn)->len);
incRef(aaaagq);
}
}
Iterable* aaaago;
aaaago = concatenate((Iterable*)aaaagp, (Iterable*) aaaagq);
decRef(aaaagp);
decRef(aaaagq);
void * aaaagr = NULL;
aaaagr = retval;
retval = aaaago;
incRef(retval);
decRef(aaaagr);
decRef(aaaabm);
decRef(aaaabn);



void * aaaags = NULL;
aaaags = aaaabl;
aaaabl = aaaabk;
incRef(aaaabl);
decRef(aaaags);
decRef(aaaabk);




void* aaaagt;
aaaagt = iterGetNext((void*) aaaabl);
void * aaaagu = NULL;
aaaagu = i;
i = aaaagt;
incRef(i);
decRef(aaaagu);
decRef(aaaabl);
	}
decRef(i);






void * aaaagv = NULL;
aaaagv = aaaabr;
aaaabr = retval;
incRef(aaaabr);
decRef(aaaagv);
decRef(retval);




	if (aaaabr!=NULL) {
		if ((*((int *)(aaaabr+1))) == 0) {
void * aaaagx = NULL;
aaaagx = aaaabr;
			aaaabr = strToIter( ((String *)aaaabr)->value, ((String *)aaaabr)->len);
incRef(aaaabr);
decRef(aaaagx);
		}
	}
void* aaaagw;
aaaagw = concatChars((Iterable*)aaaabr);
decRef(aaaabr);
return aaaagw;
}


void* our_main()
{
void * aaaabs = NULL;
void * aaaabt = NULL;
void * aaaabu = NULL;
void * aaaabv = NULL;
void * aaaabw = NULL;
void * aaaabx = NULL;
void * retval = NULL;
void * i = NULL;






Integer* aaaagy;
aaaagy = (Integer*) x3malloc(sizeof(Integer));
(aaaagy->nrefs) = 0;
aaaagy->value = 2;
void * aaaagz = NULL;
aaaagz = aaaabs;
aaaabs = aaaagy;
incRef(aaaabs);
decRef(aaaagz);



Integer* aaaaha;
aaaaha = (Integer*) x3malloc(sizeof(Integer));
(aaaaha->nrefs) = 0;
aaaaha->value = 38;
void * aaaahb = NULL;
aaaahb = aaaabt;
aaaabt = aaaaha;
incRef(aaaabt);
decRef(aaaahb);



Integer* aaaahc;
aaaahc = (Integer*) x3malloc(sizeof(Integer));
(aaaahc->nrefs) = 0;
aaaahc->value = 40;
void * aaaahd = NULL;
aaaahd = aaaabu;
aaaabu = aaaahc;
incRef(aaaabu);
decRef(aaaahd);



Integer* aaaahf;
aaaahf = (Integer*) x3malloc(sizeof(Integer));
aaaahf->value = ((Integer *)aaaabt)->value + 1;
aaaahf->nrefs = 1;
Iterable* aaaahe;
aaaahe = (Iterable*) x3malloc(sizeof(Iterable));
aaaahe->isIter = 1;
aaaahe->nrefs = 0;
aaaahe->value = aaaahf;
aaaahe->additional = aaaabu;
aaaahe->next = &Integer_through;
aaaahe->concat = NULL;
incRef(aaaabu);
void * aaaahg = NULL;
aaaahg = aaaabv;
aaaabv = checkIter(aaaahe);
incRef(aaaabv);
decRef(aaaahg);
decRef(aaaabt);
decRef(aaaabu);




void* aaaahh;
aaaahh = copy((void*) aaaabs, (void*) aaaabv);
void * aaaahi = NULL;
aaaahi = aaaabw;
aaaabw = aaaahh;
incRef(aaaabw);
decRef(aaaahi);
decRef(aaaabs);
decRef(aaaabv);




void* aaaahj;
aaaahj = intstostring((void*) aaaabw);
void * aaaahk = NULL;
aaaahk = aaaabx;
aaaabx = aaaahj;
incRef(aaaabx);
decRef(aaaahk);
decRef(aaaabw);



Iterable* aaaahl;
aaaahl = (Iterable*) x3malloc(sizeof(Iterable));
aaaahl->isIter = 1;
aaaahl->nrefs = 1;
aaaahl->value = aaaabx;
aaaahl->additional = NULL;
aaaahl->next = NULL;
aaaahl->concat = NULL;
incRef(aaaabx);
aaaahl->nrefs = 0;
void * aaaahm = NULL;
aaaahm = retval;
retval = aaaahl;
incRef(retval);
decRef(aaaahm);
decRef(aaaabx);






int aaaahn;
String* aaaaab= NULL;
aaaahn = next_line_len();
if(aaaahn == 0) {
	input = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaahn * sizeof(char));
	aaaaab->len = aaaahn;
	read_line(aaaaab->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 1;
	input->value = aaaaab;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaaho = NULL;
aaaaho = i;
i = input;
incRef(i);
decRef(aaaaho);
decRef(input);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaahp = NULL;
aaaahp = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaahp);
		}
	}
	while (i!=NULL) {
Iterable * aaaaby = NULL;
		aaaaby = (Iterable *)i;
		incRef(aaaaby);
void * aaaahq = NULL;
aaaahq = i;
		i = aaaaby->value;
		incRef(i);
		decRef(aaaahq);
		


void * aaaacc = NULL;
void * aaaacd = NULL;
void * aaaace = NULL;
void * aaaacf = NULL;
void * aaaaca = NULL;
void * aaaacb = NULL;
void * aaaabz = NULL;






Integer* aaaahr;
aaaahr = (Integer*) x3malloc(sizeof(Integer));
(aaaahr->nrefs) = 0;
aaaahr->value = 10;
void * aaaahs = NULL;
aaaahs = aaaacc;
aaaacc = aaaahr;
incRef(aaaacc);
decRef(aaaahs);



void * aaaaht = NULL;
aaaaht = aaaacd;
aaaacd = i;
incRef(aaaacd);
decRef(aaaaht);
decRef(i);




void* aaaahu;
aaaahu = copy((void*) aaaacc, (void*) aaaacd);
void * aaaahv = NULL;
aaaahv = aaaace;
aaaace = aaaahu;
incRef(aaaace);
decRef(aaaahv);
decRef(aaaacc);
decRef(aaaacd);




	if (aaaace!=NULL) {
		if ((*((int *)(aaaace+1))) == 0) {
void * aaaahx = NULL;
aaaahx = aaaace;
			aaaace = strToIter( ((String *)aaaace)->value, ((String *)aaaace)->len);
incRef(aaaace);
decRef(aaaahx);
		}
	}
void* aaaahw;
aaaahw = concatChars((Iterable*)aaaace);
void * aaaahy = NULL;
aaaahy = aaaacf;
aaaacf = aaaahw;
incRef(aaaacf);
decRef(aaaahy);
decRef(aaaace);



void * aaaahz = NULL;
aaaahz = aaaaca;
aaaaca = retval;
incRef(aaaaca);
decRef(aaaahz);
decRef(retval);



Iterable* aaaaia;
aaaaia = (Iterable*) x3malloc(sizeof(Iterable));
aaaaia->isIter = 1;
aaaaia->nrefs = 1;
aaaaia->value = aaaacf;
aaaaia->additional = NULL;
aaaaia->next = NULL;
aaaaia->concat = NULL;
incRef(aaaacf);
aaaaia->nrefs = 0;
void * aaaaib = NULL;
aaaaib = aaaacb;
aaaacb = aaaaia;
incRef(aaaacb);
decRef(aaaaib);
decRef(aaaacf);



void *aaaaid;
aaaaid = aaaaca;
if (aaaaid!=NULL) {
(*((int *)aaaaid))++;
if ((*((int *)aaaaca+1)) == 0) {
decRef(aaaaid);
aaaaid = strToIter( ((String *)aaaaca)->value, ((String *)aaaaca)->len);
incRef(aaaaid);
}
}
void *aaaaie;
aaaaie = aaaacb;
if (aaaaie!=NULL) {
(*((int *)aaaaie))++;
if ((*((int *)aaaacb+1)) == 0) {
decRef(aaaaie);
aaaaie = strToIter( ((String *)aaaacb)->value, ((String *)aaaacb)->len);
incRef(aaaaie);
}
}
Iterable* aaaaic;
aaaaic = concatenate((Iterable*)aaaaid, (Iterable*) aaaaie);
decRef(aaaaid);
decRef(aaaaie);
void * aaaaif = NULL;
aaaaif = retval;
retval = aaaaic;
incRef(retval);
decRef(aaaaif);
decRef(aaaaca);
decRef(aaaacb);



void * aaaaig = NULL;
aaaaig = aaaabz;
aaaabz = aaaaby;
incRef(aaaabz);
decRef(aaaaig);
decRef(aaaaby);




void* aaaaih;
aaaaih = iterGetNext((void*) aaaabz);
void * aaaaii = NULL;
aaaaii = i;
i = aaaaih;
incRef(i);
decRef(aaaaii);
decRef(aaaabz);
	}
decRef(i);






if (retval!= NULL) {
(*(int *)retval)--;
}
return retval;
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
