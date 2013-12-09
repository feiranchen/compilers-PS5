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






void * aaaacx = NULL;
aaaacx = out;
out = NULL;
incRef(out);
decRef(aaaacx);






Integer* aaaacy;
aaaacy = (Integer*) x3malloc(sizeof(Integer));
(aaaacy->nrefs) = 0;
aaaacy->value = 1;
void * aaaacz = NULL;
aaaacz = aaaaac;
aaaaac = aaaacy;
incRef(aaaaac);
decRef(aaaacz);



void * aaaada = NULL;
aaaada = aaaaad;
aaaaad = i;
incRef(aaaaad);
decRef(aaaada);
decRef(i);



Iterable* aaaadb;
aaaadb = (Iterable*) x3malloc(sizeof(Iterable));
aaaadb->isIter = 1;
aaaadb->nrefs = 0;
aaaadb->value = aaaaac;
aaaadb->additional = aaaaad;
aaaadb->next = &Integer_through;
aaaadb->concat = NULL;
incRef(aaaaac);
incRef(aaaaad);
void * aaaadc = NULL;
aaaadc = x;
x = checkIter(aaaadb);
incRef(x);
decRef(aaaadc);
decRef(aaaaac);
decRef(aaaaad);
	if (x!=NULL) {
		if ((*((int *)(x+1))) == 0) {
void * aaaadd = NULL;
aaaadd = x;
			x = strToIter( ((String *)x)->value, ((String *)x)->len);
incRef(x);
decRef(aaaadd);
		}
	}
	while (x!=NULL) {
Iterable * aaaaae = NULL;
		aaaaae = (Iterable *)x;
		incRef(aaaaae);
void * aaaade = NULL;
aaaade = x;
		x = aaaaae->value;
		incRef(x);
		decRef(aaaade);
decRef(x);
		


void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaaf = NULL;






void * aaaadf = NULL;
aaaadf = aaaaag;
aaaaag = out;
incRef(aaaaag);
decRef(aaaadf);
decRef(out);



void * aaaadg = NULL;
aaaadg = aaaaah;
aaaaah = its;
incRef(aaaaah);
decRef(aaaadg);



void *aaaadi;
aaaadi = aaaaag;
if (aaaadi!=NULL) {
(*((int *)aaaadi))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaadi);
aaaadi = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaadi);
}
}
void *aaaadj;
aaaadj = aaaaah;
if (aaaadj!=NULL) {
(*((int *)aaaadj))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaadj);
aaaadj = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaadj);
}
}
Iterable* aaaadh;
aaaadh = concatenate((Iterable*)aaaadi, (Iterable*) aaaadj);
decRef(aaaadi);
decRef(aaaadj);
void * aaaadk = NULL;
aaaadk = out;
out = aaaadh;
incRef(out);
decRef(aaaadk);
decRef(aaaaag);
decRef(aaaaah);



void * aaaadl = NULL;
aaaadl = aaaaaf;
aaaaaf = aaaaae;
incRef(aaaaaf);
decRef(aaaadl);
decRef(aaaaae);




void* aaaadm;
aaaadm = iterGetNext((void*) aaaaaf);
void * aaaadn = NULL;
aaaadn = x;
x = aaaadm;
incRef(x);
decRef(aaaadn);
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






void * aaaado = NULL;
aaaado = aaaaai;
aaaaai = i;
incRef(aaaaai);
decRef(aaaado);



Integer* aaaadp;
aaaadp = (Integer*) x3malloc(sizeof(Integer));
(aaaadp->nrefs) = 0;
aaaadp->value = 0;
void * aaaadq = NULL;
aaaadq = aaaaaj;
aaaaaj = aaaadp;
incRef(aaaaaj);
decRef(aaaadq);




Boolean* aaaadr = (Boolean*) x3malloc(sizeof(Boolean));
aaaadr->nrefs = 0;
aaaadr->value = ((Integer*) aaaaai)->value == ((Integer*) aaaaaj)->value;
void * aaaads = NULL;
aaaads = aaaaak;
aaaaak = aaaadr;
incRef(aaaaak);
decRef(aaaads);
decRef(aaaaai);
decRef(aaaaaj);



if ( ((Boolean *)aaaaak)->value) {
decRef(i);
decRef(aaaaak);









String* aaaadt;
aaaadt = (String *) x3malloc(sizeof(String));
(aaaadt->isIter) = 0;
aaaadt->value = (char*) x3malloc(sizeof("0"));
(aaaadt->nrefs) = 0;
(aaaadt->isStr) = 1;
aaaadt->len = sizeof("0") - 1;
mystrcpy(aaaadt->value, "0");
return aaaadt;
}
decRef(aaaaak);






Boolean* aaaadu;
aaaadu = (Boolean *) x3malloc(sizeof(Boolean));
(aaaadu->nrefs) = 0;
aaaadu->value = 0;
void * aaaadv = NULL;
aaaadv = neg;
neg = aaaadu;
incRef(neg);
decRef(aaaadv);






void * aaaadw = NULL;
aaaadw = aaaaal;
aaaaal = i;
incRef(aaaaal);
decRef(aaaadw);



Integer* aaaadx;
aaaadx = (Integer*) x3malloc(sizeof(Integer));
(aaaadx->nrefs) = 0;
aaaadx->value = 0;
void * aaaady = NULL;
aaaady = aaaaam;
aaaaam = aaaadx;
incRef(aaaaam);
decRef(aaaady);




Boolean* aaaadz = (Boolean*) x3malloc(sizeof(Boolean));
aaaadz->nrefs = 0;
aaaadz->value = ((Integer*) aaaaal)->value < ((Integer*) aaaaam)->value;
void * aaaaea = NULL;
aaaaea = aaaaan;
aaaaan = aaaadz;
incRef(aaaaan);
decRef(aaaaea);
decRef(aaaaal);
decRef(aaaaam);



if ( ((Boolean *)aaaaan)->value) {
decRef(neg);
decRef(aaaaan);



void * aaaaao = NULL;






Boolean* aaaaeb;
aaaaeb = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaeb->nrefs) = 0;
aaaaeb->value = 1;
void * aaaaec = NULL;
aaaaec = neg;
neg = aaaaeb;
incRef(neg);
decRef(aaaaec);






void * aaaaed = NULL;
aaaaed = aaaaao;
aaaaao = i;
incRef(aaaaao);
decRef(aaaaed);
decRef(i);




Integer* aaaaee;
aaaaee  = (Integer*) x3malloc(sizeof(Integer));
aaaaee->nrefs = 0;
aaaaee->value=-(((Integer*)aaaaao)->value);
void * aaaaef = NULL;
aaaaef = i;
i = aaaaee;
incRef(i);
decRef(aaaaef);
decRef(aaaaao);
}
decRef(aaaaan);






String* aaaaeg;
aaaaeg = (String *) x3malloc(sizeof(String));
(aaaaeg->isIter) = 0;
aaaaeg->value = (char*) x3malloc(sizeof(""));
(aaaaeg->nrefs) = 0;
(aaaaeg->isStr) = 1;
aaaaeg->len = sizeof("") - 1;
mystrcpy(aaaaeg->value, "");
void * aaaaeh = NULL;
aaaaeh = retval;
retval = aaaaeg;
incRef(retval);
decRef(aaaaeh);






void * aaaaei = NULL;
aaaaei = aaaaap;
aaaaap = i;
incRef(aaaaap);
decRef(aaaaei);



Integer* aaaaej;
aaaaej = (Integer*) x3malloc(sizeof(Integer));
(aaaaej->nrefs) = 0;
aaaaej->value = 0;
void * aaaaek = NULL;
aaaaek = aaaaaq;
aaaaaq = aaaaej;
incRef(aaaaaq);
decRef(aaaaek);




Boolean* aaaael = (Boolean*) x3malloc(sizeof(Boolean));
aaaael->nrefs = 0;
aaaael->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaaem = NULL;
aaaaem = aaaaar;
aaaaar = aaaael;
incRef(aaaaar);
decRef(aaaaem);
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






void * aaaaen = NULL;
aaaaen = aaaaas;
aaaaas = i;
incRef(aaaaas);
decRef(aaaaen);



Integer* aaaaeo;
aaaaeo = (Integer*) x3malloc(sizeof(Integer));
(aaaaeo->nrefs) = 0;
aaaaeo->value = 10;
void * aaaaep = NULL;
aaaaep = aaaaat;
aaaaat = aaaaeo;
incRef(aaaaat);
decRef(aaaaep);




Iterable* aaaaeq = NULL;
Integer* aaaaer = NULL;
if(((Integer*)aaaaat)->value == 0) 
	aaaaeq = NULL;
else {
	aaaaer  = (Integer*) x3malloc(sizeof(Integer));
	aaaaer->nrefs = 0;
	aaaaer->value=((Integer*)aaaaas)->value % ((Integer*)aaaaat)->value;
	aaaaeq = (Iterable*) x3malloc(sizeof(Iterable));
	aaaaeq->isIter = 1;
aaaaeq->nrefs = 0;
	aaaaeq->value = aaaaer;
	aaaaeq->additional = NULL;
	aaaaeq->next = NULL;
	aaaaeq->concat = NULL;
incRef(aaaaer);
}
void * aaaaes = NULL;
aaaaes = mod;
mod = aaaaeq;
incRef(mod);
decRef(aaaaes);
decRef(aaaaas);
decRef(aaaaat);






void * aaaaet = NULL;
aaaaet = m;
m = mod;
incRef(m);
decRef(aaaaet);
decRef(mod);
	if (m!=NULL) {
		if ((*((int *)(m+1))) == 0) {
void * aaaaeu = NULL;
aaaaeu = m;
			m = strToIter( ((String *)m)->value, ((String *)m)->len);
incRef(m);
decRef(aaaaeu);
		}
	}
	while (m!=NULL) {
Iterable * aaaaau = NULL;
		aaaaau = (Iterable *)m;
		incRef(aaaaau);
void * aaaaev = NULL;
aaaaev = m;
		m = aaaaau->value;
		incRef(m);
		decRef(aaaaev);
		


void * aaaaay = NULL;
void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaav = NULL;






void * aaaaew = NULL;
aaaaew = aaaaay;
aaaaay = m;
incRef(aaaaay);
decRef(aaaaew);
decRef(m);



Integer* aaaaex;
aaaaex = (Integer*) x3malloc(sizeof(Integer));
(aaaaex->nrefs) = 0;
aaaaex->value = 48;
void * aaaaey = NULL;
aaaaey = aaaaaz;
aaaaaz = aaaaex;
incRef(aaaaaz);
decRef(aaaaey);




Integer* aaaaez;
aaaaez  = (Integer*) x3malloc(sizeof(Integer));
aaaaez->nrefs = 0;
aaaaez->value=((Integer*)aaaaay)->value + ((Integer*)aaaaaz)->value;
void * aaaafa = NULL;
aaaafa = aaaaba;
aaaaba = aaaaez;
incRef(aaaaba);
decRef(aaaafa);
decRef(aaaaay);
decRef(aaaaaz);




Character* aaaafb;
aaaafb = (Character*) x3malloc(sizeof(Character));
aaaafb->value = unichar (((Integer*)aaaaba)->value);
void * aaaafc = NULL;
aaaafc = aaaabb;
aaaabb = aaaafb;
incRef(aaaabb);
decRef(aaaafc);
decRef(aaaaba);



Iterable* aaaafd;
aaaafd = (Iterable*) x3malloc(sizeof(Iterable));
aaaafd->isIter = 1;
aaaafd->nrefs = 1;
aaaafd->value = aaaabb;
aaaafd->additional = NULL;
aaaafd->next = NULL;
aaaafd->concat = NULL;
incRef(aaaabb);
aaaafd->nrefs = 0;
void * aaaafe = NULL;
aaaafe = aaaaaw;
aaaaaw = aaaafd;
incRef(aaaaaw);
decRef(aaaafe);
decRef(aaaabb);



void * aaaaff = NULL;
aaaaff = aaaaax;
aaaaax = retval;
incRef(aaaaax);
decRef(aaaaff);
decRef(retval);



void *aaaafh;
aaaafh = aaaaaw;
if (aaaafh!=NULL) {
(*((int *)aaaafh))++;
if ((*((int *)aaaaaw+1)) == 0) {
decRef(aaaafh);
aaaafh = strToIter( ((String *)aaaaaw)->value, ((String *)aaaaaw)->len);
incRef(aaaafh);
}
}
void *aaaafi;
aaaafi = aaaaax;
if (aaaafi!=NULL) {
(*((int *)aaaafi))++;
if ((*((int *)aaaaax+1)) == 0) {
decRef(aaaafi);
aaaafi = strToIter( ((String *)aaaaax)->value, ((String *)aaaaax)->len);
incRef(aaaafi);
}
}
Iterable* aaaafg;
aaaafg = concatenate((Iterable*)aaaafh, (Iterable*) aaaafi);
decRef(aaaafh);
decRef(aaaafi);
void * aaaafj = NULL;
aaaafj = retval;
retval = aaaafg;
incRef(retval);
decRef(aaaafj);
decRef(aaaaaw);
decRef(aaaaax);



void * aaaafk = NULL;
aaaafk = aaaaav;
aaaaav = aaaaau;
incRef(aaaaav);
decRef(aaaafk);
decRef(aaaaau);




void* aaaafl;
aaaafl = iterGetNext((void*) aaaaav);
void * aaaafm = NULL;
aaaafm = m;
m = aaaafl;
incRef(m);
decRef(aaaafm);
decRef(aaaaav);
	}
decRef(m);






void * aaaafn = NULL;
aaaafn = aaaabc;
aaaabc = i;
incRef(aaaabc);
decRef(aaaafn);



Integer* aaaafo;
aaaafo = (Integer*) x3malloc(sizeof(Integer));
(aaaafo->nrefs) = 0;
aaaafo->value = 10;
void * aaaafp = NULL;
aaaafp = aaaabd;
aaaabd = aaaafo;
incRef(aaaabd);
decRef(aaaafp);




Iterable* aaaafq;
Integer* aaaafr;
if(((Integer*)aaaabd)->value == 0) 
	aaaafq = NULL;
else {
	aaaafr  = (Integer*) x3malloc(sizeof(Integer));
	aaaafr->nrefs = 0;
	aaaafr->value=((Integer*)aaaabc)->value / ((Integer*)aaaabd)->value;
	aaaafq = (Iterable*) x3malloc(sizeof(Iterable));
	aaaafq->isIter = 1;
aaaafq->nrefs = 0;
	aaaafq->value = aaaafr;
	aaaafq->additional = NULL;
	aaaafq->next = NULL;
	aaaafq->concat = NULL;
incRef(aaaafr);
}
void * aaaafs = NULL;
aaaafs = div;
div = aaaafq;
incRef(div);
decRef(aaaafs);
decRef(aaaabc);
decRef(aaaabd);






void * aaaaft = NULL;
aaaaft = t;
t = div;
incRef(t);
decRef(aaaaft);
decRef(div);
	if (t!=NULL) {
		if ((*((int *)(t+1))) == 0) {
void * aaaafu = NULL;
aaaafu = t;
			t = strToIter( ((String *)t)->value, ((String *)t)->len);
incRef(t);
decRef(aaaafu);
		}
	}
	while (t!=NULL) {
Iterable * aaaabe = NULL;
		aaaabe = (Iterable *)t;
		incRef(aaaabe);
void * aaaafv = NULL;
aaaafv = t;
		t = aaaabe->value;
		incRef(t);
		decRef(aaaafv);
decRef(i);
		


void * aaaabf = NULL;






void * aaaafw = NULL;
aaaafw = i;
i = t;
incRef(i);
decRef(aaaafw);
decRef(t);



void * aaaafx = NULL;
aaaafx = aaaabf;
aaaabf = aaaabe;
incRef(aaaabf);
decRef(aaaafx);
decRef(aaaabe);




void* aaaafy;
aaaafy = iterGetNext((void*) aaaabf);
void * aaaafz = NULL;
aaaafz = t;
t = aaaafy;
incRef(t);
decRef(aaaafz);
decRef(aaaabf);
	}
decRef(t);



void * aaaaga = NULL;
aaaaga = aaaaap;
aaaaap = i;
incRef(aaaaap);
decRef(aaaaga);



Integer* aaaagb;
aaaagb = (Integer*) x3malloc(sizeof(Integer));
(aaaagb->nrefs) = 0;
aaaagb->value = 0;
void * aaaagc = NULL;
aaaagc = aaaaaq;
aaaaaq = aaaagb;
incRef(aaaaaq);
decRef(aaaagc);




Boolean* aaaael = (Boolean*) x3malloc(sizeof(Boolean));
aaaael->nrefs = 0;
aaaael->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;

Boolean* aaaagd = (Boolean*) x3malloc(sizeof(Boolean));
aaaagd->nrefs = 0;
aaaagd->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaage = NULL;
aaaage = aaaaar;
aaaaar = aaaagd;
incRef(aaaaar);
decRef(aaaage);
decRef(aaaaap);
decRef(aaaaaq);
}
decRef(i);
decRef(aaaaar);






void * aaaagf = NULL;
aaaagf = aaaabg;
aaaabg = neg;
incRef(aaaabg);
decRef(aaaagf);
decRef(neg);



if ( ((Boolean *)aaaabg)->value) {
decRef(aaaabg);



void * aaaabh = NULL;
void * aaaabi = NULL;






String* aaaagg;
aaaagg = (String *) x3malloc(sizeof(String));
(aaaagg->isIter) = 0;
aaaagg->value = (char*) x3malloc(sizeof("-"));
(aaaagg->nrefs) = 0;
(aaaagg->isStr) = 1;
aaaagg->len = sizeof("-") - 1;
mystrcpy(aaaagg->value, "-");
void * aaaagh = NULL;
aaaagh = aaaabh;
aaaabh = aaaagg;
incRef(aaaabh);
decRef(aaaagh);



void * aaaagi = NULL;
aaaagi = aaaabi;
aaaabi = retval;
incRef(aaaabi);
decRef(aaaagi);
decRef(retval);



void *aaaagk;
aaaagk = aaaabh;
if (aaaagk!=NULL) {
(*((int *)aaaagk))++;
if ((*((int *)aaaabh+1)) == 0) {
decRef(aaaagk);
aaaagk = strToIter( ((String *)aaaabh)->value, ((String *)aaaabh)->len);
incRef(aaaagk);
}
}
void *aaaagl;
aaaagl = aaaabi;
if (aaaagl!=NULL) {
(*((int *)aaaagl))++;
if ((*((int *)aaaabi+1)) == 0) {
decRef(aaaagl);
aaaagl = strToIter( ((String *)aaaabi)->value, ((String *)aaaabi)->len);
incRef(aaaagl);
}
}
Iterable* aaaagj;
aaaagj = concatenate((Iterable*)aaaagk, (Iterable*) aaaagl);
decRef(aaaagk);
decRef(aaaagl);
void * aaaagm = NULL;
aaaagm = retval;
retval = aaaagj;
incRef(retval);
decRef(aaaagm);
decRef(aaaabh);
decRef(aaaabi);
}
decRef(aaaabg);






void * aaaagn = NULL;
aaaagn = aaaabj;
aaaabj = retval;
incRef(aaaabj);
decRef(aaaagn);
decRef(retval);




	if (aaaabj!=NULL) {
		if ((*((int *)(aaaabj+1))) == 0) {
void * aaaagp = NULL;
aaaagp = aaaabj;
			aaaabj = strToIter( ((String *)aaaabj)->value, ((String *)aaaabj)->len);
incRef(aaaabj);
decRef(aaaagp);
		}
	}
void* aaaago;
aaaago = concatChars((Iterable*)aaaabj);
decRef(aaaabj);
return aaaago;
}
void* intstostring(void *ints) {
incRef(ints);



void * retval = NULL;
void * i = NULL;
void * aaaabr = NULL;






String* aaaagq;
aaaagq = (String *) x3malloc(sizeof(String));
(aaaagq->isIter) = 0;
aaaagq->value = (char*) x3malloc(sizeof(""));
(aaaagq->nrefs) = 0;
(aaaagq->isStr) = 1;
aaaagq->len = sizeof("") - 1;
mystrcpy(aaaagq->value, "");
void * aaaagr = NULL;
aaaagr = retval;
retval = aaaagq;
incRef(retval);
decRef(aaaagr);






void * aaaags = NULL;
aaaags = i;
i = ints;
incRef(i);
decRef(aaaags);
decRef(ints);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaagt = NULL;
aaaagt = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaagt);
		}
	}
	while (i!=NULL) {
Iterable * aaaabk = NULL;
		aaaabk = (Iterable *)i;
		incRef(aaaabk);
void * aaaagu = NULL;
aaaagu = i;
		i = aaaabk->value;
		incRef(i);
		decRef(aaaagu);
		


void * aaaabq = NULL;
void * aaaabo = NULL;
void * aaaabp = NULL;
void * aaaabm = NULL;
void * aaaabn = NULL;
void * aaaabl = NULL;






void * aaaagv = NULL;
aaaagv = aaaabq;
aaaabq = i;
incRef(aaaabq);
decRef(aaaagv);
decRef(i);



void * aaaagw = NULL;
aaaagw = aaaabo;
aaaabo = retval;
incRef(aaaabo);
decRef(aaaagw);
decRef(retval);




void* aaaagx;
aaaagx = inttostring((void*) aaaabq);
void * aaaagy = NULL;
aaaagy = aaaabp;
aaaabp = aaaagx;
incRef(aaaabp);
decRef(aaaagy);
decRef(aaaabq);



void *aaaaha;
aaaaha = aaaabo;
if (aaaaha!=NULL) {
(*((int *)aaaaha))++;
if ((*((int *)aaaabo+1)) == 0) {
decRef(aaaaha);
aaaaha = strToIter( ((String *)aaaabo)->value, ((String *)aaaabo)->len);
incRef(aaaaha);
}
}
void *aaaahb;
aaaahb = aaaabp;
if (aaaahb!=NULL) {
(*((int *)aaaahb))++;
if ((*((int *)aaaabp+1)) == 0) {
decRef(aaaahb);
aaaahb = strToIter( ((String *)aaaabp)->value, ((String *)aaaabp)->len);
incRef(aaaahb);
}
}
Iterable* aaaagz;
aaaagz = concatenate((Iterable*)aaaaha, (Iterable*) aaaahb);
decRef(aaaaha);
decRef(aaaahb);
void * aaaahc = NULL;
aaaahc = aaaabm;
aaaabm = aaaagz;
incRef(aaaabm);
decRef(aaaahc);
decRef(aaaabo);
decRef(aaaabp);



String* aaaahd;
aaaahd = (String *) x3malloc(sizeof(String));
(aaaahd->isIter) = 0;
aaaahd->value = (char*) x3malloc(sizeof(", "));
(aaaahd->nrefs) = 0;
(aaaahd->isStr) = 1;
aaaahd->len = sizeof(", ") - 1;
mystrcpy(aaaahd->value, ", ");
void * aaaahe = NULL;
aaaahe = aaaabn;
aaaabn = aaaahd;
incRef(aaaabn);
decRef(aaaahe);



void *aaaahg;
aaaahg = aaaabm;
if (aaaahg!=NULL) {
(*((int *)aaaahg))++;
if ((*((int *)aaaabm+1)) == 0) {
decRef(aaaahg);
aaaahg = strToIter( ((String *)aaaabm)->value, ((String *)aaaabm)->len);
incRef(aaaahg);
}
}
void *aaaahh;
aaaahh = aaaabn;
if (aaaahh!=NULL) {
(*((int *)aaaahh))++;
if ((*((int *)aaaabn+1)) == 0) {
decRef(aaaahh);
aaaahh = strToIter( ((String *)aaaabn)->value, ((String *)aaaabn)->len);
incRef(aaaahh);
}
}
Iterable* aaaahf;
aaaahf = concatenate((Iterable*)aaaahg, (Iterable*) aaaahh);
decRef(aaaahg);
decRef(aaaahh);
void * aaaahi = NULL;
aaaahi = retval;
retval = aaaahf;
incRef(retval);
decRef(aaaahi);
decRef(aaaabm);
decRef(aaaabn);



void * aaaahj = NULL;
aaaahj = aaaabl;
aaaabl = aaaabk;
incRef(aaaabl);
decRef(aaaahj);
decRef(aaaabk);




void* aaaahk;
aaaahk = iterGetNext((void*) aaaabl);
void * aaaahl = NULL;
aaaahl = i;
i = aaaahk;
incRef(i);
decRef(aaaahl);
decRef(aaaabl);
	}
decRef(i);






void * aaaahm = NULL;
aaaahm = aaaabr;
aaaabr = retval;
incRef(aaaabr);
decRef(aaaahm);
decRef(retval);




	if (aaaabr!=NULL) {
		if ((*((int *)(aaaabr+1))) == 0) {
void * aaaaho = NULL;
aaaaho = aaaabr;
			aaaabr = strToIter( ((String *)aaaabr)->value, ((String *)aaaabr)->len);
incRef(aaaabr);
decRef(aaaaho);
		}
	}
void* aaaahn;
aaaahn = concatChars((Iterable*)aaaabr);
decRef(aaaabr);
return aaaahn;
}


void* our_main()
{
void * aaaabu = NULL;
void * aaaabv = NULL;
void * aaaabw = NULL;
void * aaaabx = NULL;
void * aaaaby = NULL;
void * aaaabz = NULL;
void * aaaaca = NULL;
void * aaaacb = NULL;
void * aaaacc = NULL;
void * aaaacd = NULL;
void * aaaace = NULL;
void * aaaacf = NULL;
void * aaaacg = NULL;
void * aaaach = NULL;
void * aaaaci = NULL;
void * aaaacj = NULL;
void * aaaack = NULL;
void * aaaacl = NULL;
void * aaaacm = NULL;
void * aaaacn = NULL;
void * aaaaco = NULL;
void * aaaabs = NULL;
void * aaaabt = NULL;
void * retval = NULL;
void * i = NULL;






Integer* aaaahp;
aaaahp = (Integer*) x3malloc(sizeof(Integer));
(aaaahp->nrefs) = 0;
aaaahp->value = 5;
void * aaaahq = NULL;
aaaahq = aaaabu;
aaaabu = aaaahp;
incRef(aaaabu);
decRef(aaaahq);




Integer* aaaahr;
aaaahr  = (Integer*) x3malloc(sizeof(Integer));
aaaahr->nrefs = 0;
aaaahr->value=-(((Integer*)aaaabu)->value);
void * aaaahs = NULL;
aaaahs = aaaabv;
aaaabv = aaaahr;
incRef(aaaabv);
decRef(aaaahs);
decRef(aaaabu);



Integer* aaaaht;
aaaaht = (Integer*) x3malloc(sizeof(Integer));
(aaaaht->nrefs) = 0;
aaaaht->value = 54;
void * aaaahu = NULL;
aaaahu = aaaabw;
aaaabw = aaaaht;
incRef(aaaabw);
decRef(aaaahu);



Integer* aaaahv;
aaaahv = (Integer*) x3malloc(sizeof(Integer));
(aaaahv->nrefs) = 0;
aaaahv->value = 9;
void * aaaahw = NULL;
aaaahw = aaaabx;
aaaabx = aaaahv;
incRef(aaaabx);
decRef(aaaahw);



Integer* aaaahx;
aaaahx = (Integer*) x3malloc(sizeof(Integer));
(aaaahx->nrefs) = 0;
aaaahx->value = 23;
void * aaaahy = NULL;
aaaahy = aaaaby;
aaaaby = aaaahx;
incRef(aaaaby);
decRef(aaaahy);



Integer* aaaahz;
aaaahz = (Integer*) x3malloc(sizeof(Integer));
(aaaahz->nrefs) = 0;
aaaahz->value = 87;
void * aaaaia = NULL;
aaaaia = aaaabz;
aaaabz = aaaahz;
incRef(aaaabz);
decRef(aaaaia);



Integer* aaaaib;
aaaaib = (Integer*) x3malloc(sizeof(Integer));
(aaaaib->nrefs) = 0;
aaaaib->value = 5;
void * aaaaic = NULL;
aaaaic = aaaaca;
aaaaca = aaaaib;
incRef(aaaaca);
decRef(aaaaic);



Integer* aaaaid;
aaaaid = (Integer*) x3malloc(sizeof(Integer));
(aaaaid->nrefs) = 0;
aaaaid->value = 587;
void * aaaaie = NULL;
aaaaie = aaaacb;
aaaacb = aaaaid;
incRef(aaaacb);
decRef(aaaaie);




Integer* aaaaif;
aaaaif  = (Integer*) x3malloc(sizeof(Integer));
aaaaif->nrefs = 0;
aaaaif->value=-(((Integer*)aaaacb)->value);
void * aaaaig = NULL;
aaaaig = aaaacc;
aaaacc = aaaaif;
incRef(aaaacc);
decRef(aaaaig);
decRef(aaaacb);



Integer* aaaaih;
aaaaih = (Integer*) x3malloc(sizeof(Integer));
(aaaaih->nrefs) = 0;
aaaaih->value = 432;
void * aaaaii = NULL;
aaaaii = aaaacd;
aaaacd = aaaaih;
incRef(aaaacd);
decRef(aaaaii);




Integer* aaaaij;
aaaaij  = (Integer*) x3malloc(sizeof(Integer));
aaaaij->nrefs = 0;
aaaaij->value=-(((Integer*)aaaacd)->value);
void * aaaaik = NULL;
aaaaik = aaaace;
aaaace = aaaaij;
incRef(aaaace);
decRef(aaaaik);
decRef(aaaacd);



Integer* aaaail;
aaaail = (Integer*) x3malloc(sizeof(Integer));
(aaaail->nrefs) = 0;
aaaail->value = 0;
void * aaaaim = NULL;
aaaaim = aaaacf;
aaaacf = aaaail;
incRef(aaaacf);
decRef(aaaaim);



Iterable* aaaaiu;
aaaaiu = (Iterable*) x3malloc(sizeof(Iterable));
aaaaiu->isIter = 1;
aaaaiu->nrefs = 1;
aaaaiu->value = aaaacf;
aaaaiu->additional = NULL;
aaaaiu->next = NULL;
aaaaiu->concat = NULL;
incRef(aaaacf);
Iterable* aaaait;
aaaait = (Iterable*) x3malloc(sizeof(Iterable));
aaaait->isIter = 1;
aaaait->nrefs = 1;
aaaait->value = aaaace;
aaaait->additional = aaaaiu;
aaaait->next = NULL;
aaaait->concat = NULL;
incRef(aaaace);
Iterable* aaaais;
aaaais = (Iterable*) x3malloc(sizeof(Iterable));
aaaais->isIter = 1;
aaaais->nrefs = 1;
aaaais->value = aaaacc;
aaaais->additional = aaaait;
aaaais->next = NULL;
aaaais->concat = NULL;
incRef(aaaacc);
Iterable* aaaair;
aaaair = (Iterable*) x3malloc(sizeof(Iterable));
aaaair->isIter = 1;
aaaair->nrefs = 1;
aaaair->value = aaaaca;
aaaair->additional = aaaais;
aaaair->next = NULL;
aaaair->concat = NULL;
incRef(aaaaca);
Iterable* aaaaiq;
aaaaiq = (Iterable*) x3malloc(sizeof(Iterable));
aaaaiq->isIter = 1;
aaaaiq->nrefs = 1;
aaaaiq->value = aaaabz;
aaaaiq->additional = aaaair;
aaaaiq->next = NULL;
aaaaiq->concat = NULL;
incRef(aaaabz);
Iterable* aaaaip;
aaaaip = (Iterable*) x3malloc(sizeof(Iterable));
aaaaip->isIter = 1;
aaaaip->nrefs = 1;
aaaaip->value = aaaaby;
aaaaip->additional = aaaaiq;
aaaaip->next = NULL;
aaaaip->concat = NULL;
incRef(aaaaby);
Iterable* aaaaio;
aaaaio = (Iterable*) x3malloc(sizeof(Iterable));
aaaaio->isIter = 1;
aaaaio->nrefs = 1;
aaaaio->value = aaaabx;
aaaaio->additional = aaaaip;
aaaaio->next = NULL;
aaaaio->concat = NULL;
incRef(aaaabx);
Iterable* aaaain;
aaaain = (Iterable*) x3malloc(sizeof(Iterable));
aaaain->isIter = 1;
aaaain->nrefs = 1;
aaaain->value = aaaabw;
aaaain->additional = aaaaio;
aaaain->next = NULL;
aaaain->concat = NULL;
incRef(aaaabw);
aaaain->nrefs = 0;
void * aaaaiv = NULL;
aaaaiv = aaaacg;
aaaacg = aaaain;
incRef(aaaacg);
decRef(aaaaiv);
decRef(aaaabw);
decRef(aaaabx);
decRef(aaaaby);
decRef(aaaabz);
decRef(aaaaca);
decRef(aaaacc);
decRef(aaaace);
decRef(aaaacf);




void* aaaaiw;
aaaaiw = copy((void*) aaaabv, (void*) aaaacg);
void * aaaaix = NULL;
aaaaix = aaaach;
aaaach = aaaaiw;
incRef(aaaach);
decRef(aaaaix);
decRef(aaaabv);
decRef(aaaacg);




void* aaaaiy;
aaaaiy = intstostring((void*) aaaach);
void * aaaaiz = NULL;
aaaaiz = aaaaci;
aaaaci = aaaaiy;
incRef(aaaaci);
decRef(aaaaiz);
decRef(aaaach);



Integer* aaaaja;
aaaaja = (Integer*) x3malloc(sizeof(Integer));
(aaaaja->nrefs) = 0;
aaaaja->value = 3;
void * aaaajb = NULL;
aaaajb = aaaacj;
aaaacj = aaaaja;
incRef(aaaacj);
decRef(aaaajb);



Integer* aaaajc;
aaaajc = (Integer*) x3malloc(sizeof(Integer));
(aaaajc->nrefs) = 0;
aaaajc->value = 35;
void * aaaajd = NULL;
aaaajd = aaaack;
aaaack = aaaajc;
incRef(aaaack);
decRef(aaaajd);



Integer* aaaaje;
aaaaje = (Integer*) x3malloc(sizeof(Integer));
(aaaaje->nrefs) = 0;
aaaaje->value = 40;
void * aaaajf = NULL;
aaaajf = aaaacl;
aaaacl = aaaaje;
incRef(aaaacl);
decRef(aaaajf);



Integer* aaaajh;
aaaajh = (Integer*) x3malloc(sizeof(Integer));
aaaajh->value = ((Integer *)aaaack)->value + 1;
aaaajh->nrefs = 1;
Iterable* aaaajg;
aaaajg = (Iterable*) x3malloc(sizeof(Iterable));
aaaajg->isIter = 1;
aaaajg->nrefs = 0;
aaaajg->value = aaaajh;
aaaajg->additional = aaaacl;
aaaajg->next = &Integer_through;
aaaajg->concat = NULL;
incRef(aaaacl);
void * aaaaji = NULL;
aaaaji = aaaacm;
aaaacm = checkIter(aaaajg);
incRef(aaaacm);
decRef(aaaaji);
decRef(aaaack);
decRef(aaaacl);




void* aaaajj;
aaaajj = copy((void*) aaaacj, (void*) aaaacm);
void * aaaajk = NULL;
aaaajk = aaaacn;
aaaacn = aaaajj;
incRef(aaaacn);
decRef(aaaajk);
decRef(aaaacj);
decRef(aaaacm);




void* aaaajl;
aaaajl = intstostring((void*) aaaacn);
void * aaaajm = NULL;
aaaajm = aaaaco;
aaaaco = aaaajl;
incRef(aaaaco);
decRef(aaaajm);
decRef(aaaacn);



Iterable* aaaajn;
aaaajn = (Iterable*) x3malloc(sizeof(Iterable));
aaaajn->isIter = 1;
aaaajn->nrefs = 1;
aaaajn->value = aaaaci;
aaaajn->additional = NULL;
aaaajn->next = NULL;
aaaajn->concat = NULL;
incRef(aaaaci);
aaaajn->nrefs = 0;
void * aaaajo = NULL;
aaaajo = aaaabs;
aaaabs = aaaajn;
incRef(aaaabs);
decRef(aaaajo);
decRef(aaaaci);



Iterable* aaaajp;
aaaajp = (Iterable*) x3malloc(sizeof(Iterable));
aaaajp->isIter = 1;
aaaajp->nrefs = 1;
aaaajp->value = aaaaco;
aaaajp->additional = NULL;
aaaajp->next = NULL;
aaaajp->concat = NULL;
incRef(aaaaco);
aaaajp->nrefs = 0;
void * aaaajq = NULL;
aaaajq = aaaabt;
aaaabt = aaaajp;
incRef(aaaabt);
decRef(aaaajq);
decRef(aaaaco);



void *aaaajs;
aaaajs = aaaabs;
if (aaaajs!=NULL) {
(*((int *)aaaajs))++;
if ((*((int *)aaaabs+1)) == 0) {
decRef(aaaajs);
aaaajs = strToIter( ((String *)aaaabs)->value, ((String *)aaaabs)->len);
incRef(aaaajs);
}
}
void *aaaajt;
aaaajt = aaaabt;
if (aaaajt!=NULL) {
(*((int *)aaaajt))++;
if ((*((int *)aaaabt+1)) == 0) {
decRef(aaaajt);
aaaajt = strToIter( ((String *)aaaabt)->value, ((String *)aaaabt)->len);
incRef(aaaajt);
}
}
Iterable* aaaajr;
aaaajr = concatenate((Iterable*)aaaajs, (Iterable*) aaaajt);
decRef(aaaajs);
decRef(aaaajt);
void * aaaaju = NULL;
aaaaju = retval;
retval = aaaajr;
incRef(retval);
decRef(aaaaju);
decRef(aaaabs);
decRef(aaaabt);






int aaaajv;
String* aaaaab= NULL;
aaaajv = next_line_len();
if(aaaajv == 0) {
	input = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaajv * sizeof(char));
	aaaaab->len = aaaajv;
	read_line(aaaaab->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 1;
	input->value = aaaaab;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaajw = NULL;
aaaajw = i;
i = input;
incRef(i);
decRef(aaaajw);
decRef(input);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaajx = NULL;
aaaajx = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaajx);
		}
	}
	while (i!=NULL) {
Iterable * aaaacp = NULL;
		aaaacp = (Iterable *)i;
		incRef(aaaacp);
void * aaaajy = NULL;
aaaajy = i;
		i = aaaacp->value;
		incRef(i);
		decRef(aaaajy);
		


void * aaaact = NULL;
void * aaaacu = NULL;
void * aaaacv = NULL;
void * aaaacw = NULL;
void * aaaacr = NULL;
void * aaaacs = NULL;
void * aaaacq = NULL;






Integer* aaaajz;
aaaajz = (Integer*) x3malloc(sizeof(Integer));
(aaaajz->nrefs) = 0;
aaaajz->value = 10;
void * aaaaka = NULL;
aaaaka = aaaact;
aaaact = aaaajz;
incRef(aaaact);
decRef(aaaaka);



void * aaaakb = NULL;
aaaakb = aaaacu;
aaaacu = i;
incRef(aaaacu);
decRef(aaaakb);
decRef(i);




void* aaaakc;
aaaakc = copy((void*) aaaact, (void*) aaaacu);
void * aaaakd = NULL;
aaaakd = aaaacv;
aaaacv = aaaakc;
incRef(aaaacv);
decRef(aaaakd);
decRef(aaaact);
decRef(aaaacu);




	if (aaaacv!=NULL) {
		if ((*((int *)(aaaacv+1))) == 0) {
void * aaaakf = NULL;
aaaakf = aaaacv;
			aaaacv = strToIter( ((String *)aaaacv)->value, ((String *)aaaacv)->len);
incRef(aaaacv);
decRef(aaaakf);
		}
	}
void* aaaake;
aaaake = concatChars((Iterable*)aaaacv);
void * aaaakg = NULL;
aaaakg = aaaacw;
aaaacw = aaaake;
incRef(aaaacw);
decRef(aaaakg);
decRef(aaaacv);



void * aaaakh = NULL;
aaaakh = aaaacr;
aaaacr = retval;
incRef(aaaacr);
decRef(aaaakh);
decRef(retval);



Iterable* aaaaki;
aaaaki = (Iterable*) x3malloc(sizeof(Iterable));
aaaaki->isIter = 1;
aaaaki->nrefs = 1;
aaaaki->value = aaaacw;
aaaaki->additional = NULL;
aaaaki->next = NULL;
aaaaki->concat = NULL;
incRef(aaaacw);
aaaaki->nrefs = 0;
void * aaaakj = NULL;
aaaakj = aaaacs;
aaaacs = aaaaki;
incRef(aaaacs);
decRef(aaaakj);
decRef(aaaacw);



void *aaaakl;
aaaakl = aaaacr;
if (aaaakl!=NULL) {
(*((int *)aaaakl))++;
if ((*((int *)aaaacr+1)) == 0) {
decRef(aaaakl);
aaaakl = strToIter( ((String *)aaaacr)->value, ((String *)aaaacr)->len);
incRef(aaaakl);
}
}
void *aaaakm;
aaaakm = aaaacs;
if (aaaakm!=NULL) {
(*((int *)aaaakm))++;
if ((*((int *)aaaacs+1)) == 0) {
decRef(aaaakm);
aaaakm = strToIter( ((String *)aaaacs)->value, ((String *)aaaacs)->len);
incRef(aaaakm);
}
}
Iterable* aaaakk;
aaaakk = concatenate((Iterable*)aaaakl, (Iterable*) aaaakm);
decRef(aaaakl);
decRef(aaaakm);
void * aaaakn = NULL;
aaaakn = retval;
retval = aaaakk;
incRef(retval);
decRef(aaaakn);
decRef(aaaacr);
decRef(aaaacs);



void * aaaako = NULL;
aaaako = aaaacq;
aaaacq = aaaacp;
incRef(aaaacq);
decRef(aaaako);
decRef(aaaacp);




void* aaaakp;
aaaakp = iterGetNext((void*) aaaacq);
void * aaaakq = NULL;
aaaakq = i;
i = aaaakp;
incRef(i);
decRef(aaaakq);
decRef(aaaacq);
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
