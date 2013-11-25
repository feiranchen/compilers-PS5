#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* safeDiv(void *l , void *r , void *d) {
incRef(l);
incRef(r);
incRef(d);



void * aaaabd = NULL;
void * aaaabe = NULL;
void * m = NULL;
void * i = NULL;






void * aaaafg = NULL;
aaaafg = aaaabd;
aaaabd = l;
incRef(aaaabd);
decRef(aaaafg);
decRef(l);



void * aaaafh = NULL;
aaaafh = aaaabe;
aaaabe = r;
incRef(aaaabe);
decRef(aaaafh);
decRef(r);




Iterable* aaaafi;
Integer* aaaafj;
if(((Integer*)aaaabe)->value == 0) 
	aaaafi = NULL;
else {
	aaaafj  = (Integer*) x3malloc(sizeof(Integer));
	aaaafj->nrefs = 0;
	aaaafj->value=((Integer*)aaaabd)->value / ((Integer*)aaaabe)->value;
	aaaafi = (Iterable*) x3malloc(sizeof(Iterable));
	aaaafi->isIter = 1;
aaaafi->nrefs = 0;
	aaaafi->value = aaaafj;
	aaaafi->additional = NULL;
	aaaafi->next = NULL;
	aaaafi->concat = NULL;
incRef(aaaafj);
}
void * aaaafk = NULL;
aaaafk = m;
m = aaaafi;
incRef(m);
decRef(aaaafk);
decRef(aaaabd);
decRef(aaaabe);






void * aaaafl = NULL;
aaaafl = i;
i = m;
incRef(i);
decRef(aaaafl);
decRef(m);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaafm = NULL;
aaaafm = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaafm);
		}
	}
	while (i!=NULL) {
Iterable * aaaabh = NULL;
		aaaabh = (Iterable *)i;
		incRef(aaaabh);
void * aaaafn = NULL;
aaaafn = i;
		i = aaaabh->value;
		incRef(i);
		decRef(aaaafn);
decRef(d);
decRef(aaaabh);
		


void * aaaabk = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaaafo = NULL;
aaaafo = aaaabk;
aaaabk = aaaabh;
incRef(aaaabk);
decRef(aaaafo);
decRef(aaaabk);




void* aaaafp;
aaaafp = iterGetNext((void*) aaaabk);
void * aaaafq = NULL;
aaaafq = i;
i = aaaafp;
incRef(i);
decRef(aaaafq);
decRef(i);
	}
decRef(i);






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}
void* safeModulo(void *l , void *r , void *d) {
incRef(l);
incRef(r);
incRef(d);



void * aaaabn = NULL;
void * aaaabo = NULL;
void * m = NULL;
void * i = NULL;






void * aaaafr = NULL;
aaaafr = aaaabn;
aaaabn = l;
incRef(aaaabn);
decRef(aaaafr);
decRef(l);



void * aaaafs = NULL;
aaaafs = aaaabo;
aaaabo = r;
incRef(aaaabo);
decRef(aaaafs);
decRef(r);




Iterable* aaaaft = NULL;
Integer* aaaafu = NULL;
if(((Integer*)aaaabo)->value == 0) 
	aaaaft = NULL;
else {
	aaaafu  = (Integer*) x3malloc(sizeof(Integer));
	aaaafu->nrefs = 0;
	aaaafu->value=((Integer*)aaaabn)->value % ((Integer*)aaaabo)->value;
	aaaaft = (Iterable*) x3malloc(sizeof(Iterable));
	aaaaft->isIter = 1;
aaaaft->nrefs = 0;
	aaaaft->value = aaaafu;
	aaaaft->additional = NULL;
	aaaaft->next = NULL;
	aaaaft->concat = NULL;
incRef(aaaafu);
}
void * aaaafv = NULL;
aaaafv = m;
m = aaaaft;
incRef(m);
decRef(aaaafv);
decRef(aaaabn);
decRef(aaaabo);






void * aaaafw = NULL;
aaaafw = i;
i = m;
incRef(i);
decRef(aaaafw);
decRef(m);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaafx = NULL;
aaaafx = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaafx);
		}
	}
	while (i!=NULL) {
Iterable * aaaabr = NULL;
		aaaabr = (Iterable *)i;
		incRef(aaaabr);
void * aaaafy = NULL;
aaaafy = i;
		i = aaaabr->value;
		incRef(i);
		decRef(aaaafy);
decRef(d);
decRef(aaaabr);
		


void * aaaabu = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaaafz = NULL;
aaaafz = aaaabu;
aaaabu = aaaabr;
incRef(aaaabu);
decRef(aaaafz);
decRef(aaaabu);




void* aaaaga;
aaaaga = iterGetNext((void*) aaaabu);
void * aaaagb = NULL;
aaaagb = i;
i = aaaaga;
incRef(i);
decRef(aaaagb);
decRef(i);
	}
decRef(i);






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}
void* intToStr(void *i) {
incRef(i);



void * pref = NULL;
void * aaaabx = NULL;
void * aaaaby = NULL;
void * aaaacj = NULL;
void * aaaacl = NULL;
void * aaaacn = NULL;
void * aaaach = NULL;
void * aaaaci = NULL;
void * aaaacs = NULL;
void * aaaacv = NULL;
void * ret = NULL;
void * aaaacx = NULL;
void * aaaacy = NULL;
void * aaaaec = NULL;
void * aaaaed = NULL;
void * aaaaeg = NULL;






String* aaaagc;
aaaagc = (String *) x3malloc(sizeof(String));
(aaaagc->isIter) = 0;
aaaagc->value = (char*) x3malloc(sizeof(""));
(aaaagc->nrefs) = 0;
(aaaagc->isStr) = 1;
aaaagc->len = sizeof("") - 1;
mystrcpy(aaaagc->value, "");
void * aaaagd = NULL;
aaaagd = pref;
pref = aaaagc;
incRef(pref);
decRef(aaaagd);






void * aaaage = NULL;
aaaage = aaaabx;
aaaabx = i;
incRef(aaaabx);
decRef(aaaage);



Integer* aaaagf;
aaaagf = (Integer*) x3malloc(sizeof(Integer));
(aaaagf->nrefs) = 0;
aaaagf->value = 0;
void * aaaagg = NULL;
aaaagg = aaaaby;
aaaaby = aaaagf;
incRef(aaaaby);
decRef(aaaagg);




if (((Integer*) aaaabx)->value < ((Integer*) aaaaby)->value) {
decRef(pref);
decRef(aaaabx);
decRef(aaaaby);



void * aaaacd = NULL;
void * aaaacb = NULL;
void * aaaacc = NULL;






String* aaaagh;
aaaagh = (String *) x3malloc(sizeof(String));
(aaaagh->isIter) = 0;
aaaagh->value = (char*) x3malloc(sizeof("-"));
(aaaagh->nrefs) = 0;
(aaaagh->isStr) = 1;
aaaagh->len = sizeof("-") - 1;
mystrcpy(aaaagh->value, "-");
void * aaaagi = NULL;
aaaagi = pref;
pref = aaaagh;
incRef(pref);
decRef(aaaagi);






Integer* aaaagj;
aaaagj = (Integer*) x3malloc(sizeof(Integer));
(aaaagj->nrefs) = 0;
aaaagj->value = 1;
void * aaaagk = NULL;
aaaagk = aaaacd;
aaaacd = aaaagj;
incRef(aaaacd);
decRef(aaaagk);



void * aaaagl = NULL;
aaaagl = aaaacb;
aaaacb = i;
incRef(aaaacb);
decRef(aaaagl);
decRef(i);




Integer* aaaagm;
aaaagm  = (Integer*) x3malloc(sizeof(Integer));
aaaagm->nrefs = 0;
aaaagm->value=-(((Integer*)aaaacd)->value);
void * aaaagn = NULL;
aaaagn = aaaacc;
aaaacc = aaaagm;
incRef(aaaacc);
decRef(aaaagn);
decRef(aaaacd);




Integer* aaaago;
aaaago  = (Integer*) x3malloc(sizeof(Integer));
aaaago->nrefs = 0;
aaaago->value=((Integer*)aaaacb)->value * ((Integer*)aaaacc)->value;
void * aaaagp = NULL;
aaaagp = i;
i = aaaago;
incRef(i);
decRef(aaaagp);
decRef(aaaacb);
decRef(aaaacc);
}
decRef(aaaabx);
decRef(aaaaby);






void * aaaagq = NULL;
aaaagq = aaaacj;
aaaacj = i;
incRef(aaaacj);
decRef(aaaagq);



Integer* aaaagr;
aaaagr = (Integer*) x3malloc(sizeof(Integer));
(aaaagr->nrefs) = 0;
aaaagr->value = 10;
void * aaaags = NULL;
aaaags = aaaacl;
aaaacl = aaaagr;
incRef(aaaacl);
decRef(aaaags);



Integer* aaaagt;
aaaagt = (Integer*) x3malloc(sizeof(Integer));
(aaaagt->nrefs) = 0;
aaaagt->value = 0;
void * aaaagu = NULL;
aaaagu = aaaacn;
aaaacn = aaaagt;
incRef(aaaacn);
decRef(aaaagu);



Integer* aaaagv;
aaaagv = (Integer*) x3malloc(sizeof(Integer));
(aaaagv->nrefs) = 0;
aaaagv->value = 48;
void * aaaagw = NULL;
aaaagw = aaaach;
aaaach = aaaagv;
incRef(aaaach);
decRef(aaaagw);




void* aaaagx;
aaaagx = safeModulo((void*) aaaacj, (void*) aaaacl, (void*) aaaacn);
void * aaaagy = NULL;
aaaagy = aaaaci;
aaaaci = aaaagx;
incRef(aaaaci);
decRef(aaaagy);
decRef(aaaacj);
decRef(aaaacl);
decRef(aaaacn);




Integer* aaaagz;
aaaagz  = (Integer*) x3malloc(sizeof(Integer));
aaaagz->nrefs = 0;
aaaagz->value=((Integer*)aaaach)->value + ((Integer*)aaaaci)->value;
void * aaaaha = NULL;
aaaaha = aaaacs;
aaaacs = aaaagz;
incRef(aaaacs);
decRef(aaaaha);
decRef(aaaach);
decRef(aaaaci);




Character* aaaahb;
aaaahb = (Character*) x3malloc(sizeof(Character));
aaaahb->value = unichar (((Integer*)aaaacs)->value);
void * aaaahc = NULL;
aaaahc = aaaacv;
aaaacv = aaaahb;
incRef(aaaacv);
decRef(aaaahc);
decRef(aaaacs);



Iterable* aaaahd;
aaaahd = (Iterable*) x3malloc(sizeof(Iterable));
aaaahd->isIter = 1;
aaaahd->nrefs = 1;
aaaahd->value = aaaacv;
aaaahd->additional = NULL;
aaaahd->next = NULL;
aaaahd->concat = NULL;
incRef(aaaacv);
aaaahd->nrefs = 0;
void * aaaahe = NULL;
aaaahe = ret;
ret = aaaahd;
incRef(ret);
decRef(aaaahe);
decRef(aaaacv);






void * aaaahf = NULL;
aaaahf = aaaacx;
aaaacx = i;
incRef(aaaacx);
decRef(aaaahf);



Integer* aaaahg;
aaaahg = (Integer*) x3malloc(sizeof(Integer));
(aaaahg->nrefs) = 0;
aaaahg->value = 0;
void * aaaahh = NULL;
aaaahh = aaaacy;
aaaacy = aaaahg;
incRef(aaaacy);
decRef(aaaahh);




while (((Integer*) aaaacx)->value > ((Integer*) aaaacy)->value) {
decRef(aaaacx);
decRef(aaaacy);



void * aaaadb = NULL;
void * aaaadd = NULL;
void * aaaadf = NULL;
void * aaaadm = NULL;
void * aaaado = NULL;
void * aaaadq = NULL;
void * aaaadk = NULL;
void * aaaadl = NULL;
void * aaaadv = NULL;
void * aaaady = NULL;
void * aaaadi = NULL;
void * aaaadj = NULL;






void * aaaahi = NULL;
aaaahi = aaaadb;
aaaadb = i;
incRef(aaaadb);
decRef(aaaahi);
decRef(i);



Integer* aaaahj;
aaaahj = (Integer*) x3malloc(sizeof(Integer));
(aaaahj->nrefs) = 0;
aaaahj->value = 10;
void * aaaahk = NULL;
aaaahk = aaaadd;
aaaadd = aaaahj;
incRef(aaaadd);
decRef(aaaahk);



Integer* aaaahl;
aaaahl = (Integer*) x3malloc(sizeof(Integer));
(aaaahl->nrefs) = 0;
aaaahl->value = 0;
void * aaaahm = NULL;
aaaahm = aaaadf;
aaaadf = aaaahl;
incRef(aaaadf);
decRef(aaaahm);




void* aaaahn;
aaaahn = safeDiv((void*) aaaadb, (void*) aaaadd, (void*) aaaadf);
void * aaaaho = NULL;
aaaaho = i;
i = aaaahn;
incRef(i);
decRef(aaaaho);
decRef(aaaadb);
decRef(aaaadd);
decRef(aaaadf);






void * aaaahp = NULL;
aaaahp = aaaadm;
aaaadm = i;
incRef(aaaadm);
decRef(aaaahp);



Integer* aaaahq;
aaaahq = (Integer*) x3malloc(sizeof(Integer));
(aaaahq->nrefs) = 0;
aaaahq->value = 10;
void * aaaahr = NULL;
aaaahr = aaaado;
aaaado = aaaahq;
incRef(aaaado);
decRef(aaaahr);



Integer* aaaahs;
aaaahs = (Integer*) x3malloc(sizeof(Integer));
(aaaahs->nrefs) = 0;
aaaahs->value = 0;
void * aaaaht = NULL;
aaaaht = aaaadq;
aaaadq = aaaahs;
incRef(aaaadq);
decRef(aaaaht);



Integer* aaaahu;
aaaahu = (Integer*) x3malloc(sizeof(Integer));
(aaaahu->nrefs) = 0;
aaaahu->value = 48;
void * aaaahv = NULL;
aaaahv = aaaadk;
aaaadk = aaaahu;
incRef(aaaadk);
decRef(aaaahv);




void* aaaahw;
aaaahw = safeModulo((void*) aaaadm, (void*) aaaado, (void*) aaaadq);
void * aaaahx = NULL;
aaaahx = aaaadl;
aaaadl = aaaahw;
incRef(aaaadl);
decRef(aaaahx);
decRef(aaaadm);
decRef(aaaado);
decRef(aaaadq);




Integer* aaaahy;
aaaahy  = (Integer*) x3malloc(sizeof(Integer));
aaaahy->nrefs = 0;
aaaahy->value=((Integer*)aaaadk)->value + ((Integer*)aaaadl)->value;
void * aaaahz = NULL;
aaaahz = aaaadv;
aaaadv = aaaahy;
incRef(aaaadv);
decRef(aaaahz);
decRef(aaaadk);
decRef(aaaadl);




Character* aaaaia;
aaaaia = (Character*) x3malloc(sizeof(Character));
aaaaia->value = unichar (((Integer*)aaaadv)->value);
void * aaaaib = NULL;
aaaaib = aaaady;
aaaady = aaaaia;
incRef(aaaady);
decRef(aaaaib);
decRef(aaaadv);



Iterable* aaaaic;
aaaaic = (Iterable*) x3malloc(sizeof(Iterable));
aaaaic->isIter = 1;
aaaaic->nrefs = 1;
aaaaic->value = aaaady;
aaaaic->additional = NULL;
aaaaic->next = NULL;
aaaaic->concat = NULL;
incRef(aaaady);
aaaaic->nrefs = 0;
void * aaaaid = NULL;
aaaaid = aaaadi;
aaaadi = aaaaic;
incRef(aaaadi);
decRef(aaaaid);
decRef(aaaady);



void * aaaaie = NULL;
aaaaie = aaaadj;
aaaadj = ret;
incRef(aaaadj);
decRef(aaaaie);
decRef(ret);



void *aaaaig;
aaaaig = aaaadi;
if (aaaaig!=NULL) {
(*((int *)aaaaig))++;
if ((*((int *)aaaadi+1)) == 0) {
decRef(aaaaig);
aaaaig = strToIter( ((String *)aaaadi)->value, ((String *)aaaadi)->len);
}
}
void *aaaaih;
aaaaih = aaaadj;
if (aaaaih!=NULL) {
(*((int *)aaaaih))++;
if ((*((int *)aaaadj+1)) == 0) {
decRef(aaaaih);
aaaaih = strToIter( ((String *)aaaadj)->value, ((String *)aaaadj)->len);
}
}
Iterable* aaaaif;
aaaaif = concatenate((Iterable*)aaaaig, (Iterable*) aaaaih);
decRef(aaaaig);
decRef(aaaaih);
void * aaaaii = NULL;
aaaaii = ret;
ret = aaaaif;
incRef(ret);
decRef(aaaaii);
decRef(aaaadi);
decRef(aaaadj);



void * aaaaij = NULL;
aaaaij = aaaacx;
aaaacx = i;
incRef(aaaacx);
decRef(aaaaij);



Integer* aaaaik;
aaaaik = (Integer*) x3malloc(sizeof(Integer));
(aaaaik->nrefs) = 0;
aaaaik->value = 0;
void * aaaail = NULL;
aaaail = aaaacy;
aaaacy = aaaaik;
incRef(aaaacy);
decRef(aaaail);
}
decRef(i);
decRef(aaaacx);
decRef(aaaacy);






void * aaaaim = NULL;
aaaaim = aaaaec;
aaaaec = pref;
incRef(aaaaec);
decRef(aaaaim);
decRef(pref);



void * aaaain = NULL;
aaaain = aaaaed;
aaaaed = ret;
incRef(aaaaed);
decRef(aaaain);
decRef(ret);



void *aaaaip;
aaaaip = aaaaec;
if (aaaaip!=NULL) {
(*((int *)aaaaip))++;
if ((*((int *)aaaaec+1)) == 0) {
decRef(aaaaip);
aaaaip = strToIter( ((String *)aaaaec)->value, ((String *)aaaaec)->len);
}
}
void *aaaaiq;
aaaaiq = aaaaed;
if (aaaaiq!=NULL) {
(*((int *)aaaaiq))++;
if ((*((int *)aaaaed+1)) == 0) {
decRef(aaaaiq);
aaaaiq = strToIter( ((String *)aaaaed)->value, ((String *)aaaaed)->len);
}
}
Iterable* aaaaio;
aaaaio = concatenate((Iterable*)aaaaip, (Iterable*) aaaaiq);
decRef(aaaaip);
decRef(aaaaiq);
void * aaaair = NULL;
aaaair = aaaaeg;
aaaaeg = aaaaio;
incRef(aaaaeg);
decRef(aaaair);
decRef(aaaaec);
decRef(aaaaed);




void* aaaais;
aaaais = concatChars((Iterable*)aaaaeg);
decRef(aaaaeg);
return aaaais;
}


void* our_main()
{
void * aaaael = NULL;
void * aaaaem = NULL;
void * aaaaep = NULL;
void * aaaaej = NULL;
void * aaaaek = NULL;
void * i = NULL;
void * aaaafe = NULL;






Integer* aaaait;
aaaait = (Integer*) x3malloc(sizeof(Integer));
(aaaait->nrefs) = 0;
aaaait->value = 1;
void * aaaaiu = NULL;
aaaaiu = aaaael;
aaaael = aaaait;
incRef(aaaael);
decRef(aaaaiu);



Integer* aaaaiv;
aaaaiv = (Integer*) x3malloc(sizeof(Integer));
(aaaaiv->nrefs) = 0;
aaaaiv->value = 5;
void * aaaaiw = NULL;
aaaaiw = aaaaem;
aaaaem = aaaaiv;
incRef(aaaaem);
decRef(aaaaiw);



Integer* aaaaix;
aaaaix = (Integer*) x3malloc(sizeof(Integer));
(aaaaix->nrefs) = 0;
aaaaix->value = 6;
void * aaaaiy = NULL;
aaaaiy = aaaaep;
aaaaep = aaaaix;
incRef(aaaaep);
decRef(aaaaiy);



Iterable* aaaaiz;
aaaaiz = (Iterable*) x3malloc(sizeof(Iterable));
aaaaiz->isIter = 1;
aaaaiz->nrefs = 0;
aaaaiz->value = aaaael;
aaaaiz->additional = aaaaem;
aaaaiz->next = &Integer_through;
aaaaiz->concat = NULL;
incRef(aaaael);
incRef(aaaaem);
void * aaaaja = NULL;
aaaaja = aaaaej;
aaaaej = checkIter(aaaaiz);
incRef(aaaaej);
decRef(aaaaja);
decRef(aaaael);
decRef(aaaaem);



Iterable* aaaajb;
aaaajb = (Iterable*) x3malloc(sizeof(Iterable));
aaaajb->isIter = 1;
aaaajb->nrefs = 1;
aaaajb->value = aaaaep;
aaaajb->additional = NULL;
aaaajb->next = NULL;
aaaajb->concat = NULL;
incRef(aaaaep);
aaaajb->nrefs = 0;
void * aaaajc = NULL;
aaaajc = aaaaek;
aaaaek = aaaajb;
incRef(aaaaek);
decRef(aaaajc);
decRef(aaaaep);



void *aaaaje;
aaaaje = aaaaej;
if (aaaaje!=NULL) {
(*((int *)aaaaje))++;
if ((*((int *)aaaaej+1)) == 0) {
decRef(aaaaje);
aaaaje = strToIter( ((String *)aaaaej)->value, ((String *)aaaaej)->len);
}
}
void *aaaajf;
aaaajf = aaaaek;
if (aaaajf!=NULL) {
(*((int *)aaaajf))++;
if ((*((int *)aaaaek+1)) == 0) {
decRef(aaaajf);
aaaajf = strToIter( ((String *)aaaaek)->value, ((String *)aaaaek)->len);
}
}
Iterable* aaaajd;
aaaajd = concatenate((Iterable*)aaaaje, (Iterable*) aaaajf);
decRef(aaaaje);
decRef(aaaajf);
void * aaaajg = NULL;
aaaajg = i;
i = aaaajd;
incRef(i);
decRef(aaaajg);
decRef(aaaaej);
decRef(aaaaek);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaajh = NULL;
aaaajh = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaajh);
		}
	}
	while (i!=NULL) {
Iterable * aaaaet = NULL;
		aaaaet = (Iterable *)i;
		incRef(aaaaet);
void * aaaaji = NULL;
aaaaji = i;
		i = aaaaet->value;
		incRef(i);
		decRef(aaaaji);
decRef(aaaaet);
		


void * aaaaez = NULL;
void * aaaafc = NULL;
void * aaaaew = NULL;



void * aaaajj = NULL;
aaaajj = aaaaez;
aaaaez = i;
incRef(aaaaez);
decRef(aaaajj);
decRef(i);




void* aaaajk;
aaaajk = intToStr((void*) aaaaez);
void * aaaajl = NULL;
aaaajl = aaaafc;
aaaafc = aaaajk;
incRef(aaaafc);
decRef(aaaajl);
decRef(aaaaez);



Iterable* aaaajm;
aaaajm = (Iterable*) x3malloc(sizeof(Iterable));
aaaajm->isIter = 1;
aaaajm->nrefs = 1;
aaaajm->value = aaaafc;
aaaajm->additional = NULL;
aaaajm->next = NULL;
aaaajm->concat = NULL;
incRef(aaaafc);
aaaajm->nrefs = 0;
decRef(aaaafc);
return aaaajm;



void * aaaajn = NULL;
aaaajn = aaaaew;
aaaaew = aaaaet;
incRef(aaaaew);
decRef(aaaajn);
decRef(aaaaew);




void* aaaajo;
aaaajo = iterGetNext((void*) aaaaew);
void * aaaajp = NULL;
aaaajp = i;
i = aaaajo;
incRef(i);
decRef(aaaajp);
decRef(i);
	}
decRef(i);






String* aaaajq;
aaaajq = (String *) x3malloc(sizeof(String));
(aaaajq->isIter) = 0;
aaaajq->value = (char*) x3malloc(sizeof("nope"));
(aaaajq->nrefs) = 0;
(aaaajq->isStr) = 1;
aaaajq->len = sizeof("nope") - 1;
mystrcpy(aaaajq->value, "nope");
void * aaaajr = NULL;
aaaajr = aaaafe;
aaaafe = aaaajq;
incRef(aaaafe);
decRef(aaaajr);



Iterable* aaaajs;
aaaajs = (Iterable*) x3malloc(sizeof(Iterable));
aaaajs->isIter = 1;
aaaajs->nrefs = 1;
aaaajs->value = aaaafe;
aaaajs->additional = NULL;
aaaajs->next = NULL;
aaaajs->concat = NULL;
incRef(aaaafe);
aaaajs->nrefs = 0;
decRef(aaaafe);
return aaaajs;
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
