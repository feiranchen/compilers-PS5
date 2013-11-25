#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* safeDiv(void *l , void *r , void *d) {
incRef(l);
incRef(r);
incRef(d);



void * m = NULL;
void * i = NULL;







Iterable* aaaczl;
Integer* aaaczm;
if(((Integer*)r)->value == 0) 
	aaaczl = NULL;
else {
	aaaczm  = (Integer*) x3malloc(sizeof(Integer));
	aaaczm->nrefs = 0;
	aaaczm->value=((Integer*)l)->value / ((Integer*)r)->value;
	aaaczl = (Iterable*) x3malloc(sizeof(Iterable));
	aaaczl->isIter = 1;
aaaczl->nrefs = 0;
	aaaczl->value = aaaczm;
	aaaczl->additional = NULL;
	aaaczl->next = NULL;
	aaaczl->concat = NULL;
incRef(aaaczm);
}
void * aaaczn = NULL;
aaaczn = m;
m = aaaczl;
incRef(m);
decRef(aaaczn);
decRef(l);
decRef(r);






void * aaaczo = NULL;
aaaczo = i;
i = m;
incRef(i);
decRef(aaaczo);
decRef(m);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaczp = NULL;
aaaczp = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaczp);
		}
	}
	while (i!=NULL) {
Iterable * aaaabh = NULL;
		aaaabh = (Iterable *)i;
		incRef(aaaabh);
void * aaaczq = NULL;
aaaczq = i;
		i = aaaabh->value;
		incRef(i);
		decRef(aaaczq);
decRef(d);
decRef(aaaabh);
		


void * aaaabk = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaaczr = NULL;
aaaczr = aaaabk;
aaaabk = aaaabh;
incRef(aaaabk);
decRef(aaaczr);
decRef(aaaabk);




void* aaaczs;
aaaczs = iterGetNext((void*) aaaabk);
void * aaaczt = NULL;
aaaczt = i;
i = aaaczs;
incRef(i);
decRef(aaaczt);
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



void * m = NULL;
void * i = NULL;







Iterable* aaaczu = NULL;
Integer* aaaczv = NULL;
if(((Integer*)r)->value == 0) 
	aaaczu = NULL;
else {
	aaaczv  = (Integer*) x3malloc(sizeof(Integer));
	aaaczv->nrefs = 0;
	aaaczv->value=((Integer*)l)->value % ((Integer*)r)->value;
	aaaczu = (Iterable*) x3malloc(sizeof(Iterable));
	aaaczu->isIter = 1;
aaaczu->nrefs = 0;
	aaaczu->value = aaaczv;
	aaaczu->additional = NULL;
	aaaczu->next = NULL;
	aaaczu->concat = NULL;
incRef(aaaczv);
}
void * aaaczw = NULL;
aaaczw = m;
m = aaaczu;
incRef(m);
decRef(aaaczw);
decRef(l);
decRef(r);






void * aaaczx = NULL;
aaaczx = i;
i = m;
incRef(i);
decRef(aaaczx);
decRef(m);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaczy = NULL;
aaaczy = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaczy);
		}
	}
	while (i!=NULL) {
Iterable * aaaabr = NULL;
		aaaabr = (Iterable *)i;
		incRef(aaaabr);
void * aaaczz = NULL;
aaaczz = i;
		i = aaaabr->value;
		incRef(i);
		decRef(aaaczz);
decRef(d);
decRef(aaaabr);
		


void * aaaabu = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaadaa = NULL;
aaadaa = aaaabu;
aaaabu = aaaabr;
incRef(aaaabu);
decRef(aaadaa);
decRef(aaaabu);




void* aaadab;
aaadab = iterGetNext((void*) aaaabu);
void * aaadac = NULL;
aaadac = i;
i = aaadab;
incRef(i);
decRef(aaadac);
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
void * aaaacl = NULL;
void * aaaach = NULL;
void * aaaaci = NULL;
void * aaaacs = NULL;
void * aaaacv = NULL;
void * ret = NULL;
void * aaaacx = NULL;
void * aaaacy = NULL;
void * aaaaeg = NULL;






String* aaadad;
aaadad = (String *) x3malloc(sizeof(String));
(aaadad->isIter) = 0;
aaadad->value = (char*) x3malloc(sizeof(""));
(aaadad->nrefs) = 0;
(aaadad->isStr) = 1;
aaadad->len = sizeof("") - 1;
mystrcpy(aaadad->value, "");
void * aaadae = NULL;
aaadae = pref;
pref = aaadad;
incRef(pref);
decRef(aaadae);






void * aaadaf = NULL;
aaadaf = aaaabx;
aaaabx = i;
incRef(aaaabx);
decRef(aaadaf);



Integer* aaadag;
aaadag = (Integer*) x3malloc(sizeof(Integer));
(aaadag->nrefs) = 0;
aaadag->value = 0;
void * aaadah = NULL;
aaadah = aaaaby;
aaaaby = aaadag;
incRef(aaaaby);
decRef(aaadah);




if (((Integer*) i)->value < ((Integer*) aaaaby)->value) {
decRef(pref);



void * aaaacd = NULL;
void * aaaacc = NULL;






String* aaadai;
aaadai = (String *) x3malloc(sizeof(String));
(aaadai->isIter) = 0;
aaadai->value = (char*) x3malloc(sizeof("-"));
(aaadai->nrefs) = 0;
(aaadai->isStr) = 1;
aaadai->len = sizeof("-") - 1;
mystrcpy(aaadai->value, "-");
void * aaadaj = NULL;
aaadaj = pref;
pref = aaadai;
incRef(pref);
decRef(aaadaj);






Integer* aaadak;
aaadak = (Integer*) x3malloc(sizeof(Integer));
(aaadak->nrefs) = 0;
aaadak->value = 1;
void * aaadal = NULL;
aaadal = aaaacd;
aaaacd = aaadak;
incRef(aaaacd);
decRef(aaadal);




Integer* aaadam;
aaadam  = (Integer*) x3malloc(sizeof(Integer));
aaadam->nrefs = 0;
aaadam->value=-(((Integer*)aaaacd)->value);
void * aaadan = NULL;
aaadan = aaaacc;
aaaacc = aaadam;
incRef(aaaacc);
decRef(aaadan);
decRef(aaaacd);




Integer* aaadao;
aaadao  = (Integer*) x3malloc(sizeof(Integer));
aaadao->nrefs = 0;
aaadao->value=((Integer*)i)->value * ((Integer*)aaaacc)->value;
void * aaadap = NULL;
aaadap = i;
i = aaadao;
incRef(i);
decRef(aaadap);
decRef(aaaacc);
}
decRef(i);






Integer* aaadaq;
aaadaq = (Integer*) x3malloc(sizeof(Integer));
(aaadaq->nrefs) = 0;
aaadaq->value = 10;
void * aaadar = NULL;
aaadar = aaaacl;
aaaacl = aaadaq;
incRef(aaaacl);
decRef(aaadar);



Integer* aaadas;
aaadas = (Integer*) x3malloc(sizeof(Integer));
(aaadas->nrefs) = 0;
aaadas->value = 48;
void * aaadat = NULL;
aaadat = aaaach;
aaaach = aaadas;
incRef(aaaach);
decRef(aaadat);




void* aaadau;
aaadau = safeModulo((void*) aaaabx, (void*) aaaacl, (void*) aaaaby);
void * aaadav = NULL;
aaadav = aaaaci;
aaaaci = aaadau;
incRef(aaaaci);
decRef(aaadav);




Integer* aaadaw;
aaadaw  = (Integer*) x3malloc(sizeof(Integer));
aaadaw->nrefs = 0;
aaadaw->value=((Integer*)aaaach)->value + ((Integer*)aaaaci)->value;
void * aaadax = NULL;
aaadax = aaaacs;
aaaacs = aaadaw;
incRef(aaaacs);
decRef(aaadax);
decRef(aaaaci);




Character* aaaday;
aaaday = (Character*) x3malloc(sizeof(Character));
aaaday->value = unichar (((Integer*)aaaacs)->value);
void * aaadaz = NULL;
aaadaz = aaaacv;
aaaacv = aaaday;
incRef(aaaacv);
decRef(aaadaz);
decRef(aaaacs);



Iterable* aaadba;
aaadba = (Iterable*) x3malloc(sizeof(Iterable));
aaadba->isIter = 1;
aaadba->nrefs = 1;
aaadba->value = aaaacv;
aaadba->additional = NULL;
aaadba->next = NULL;
aaadba->concat = NULL;
incRef(aaaacv);
aaadba->nrefs = 0;
void * aaadbb = NULL;
aaadbb = ret;
ret = aaadba;
incRef(ret);
decRef(aaadbb);
decRef(aaaacv);






void * aaadbc = NULL;
aaadbc = aaaacx;
aaaacx = aaaabx;
incRef(aaaacx);
decRef(aaadbc);



void * aaadbd = NULL;
aaadbd = aaaacy;
aaaacy = aaaaby;
incRef(aaaacy);
decRef(aaadbd);




while (((Integer*) aaaacx)->value > ((Integer*) aaaacy)->value) {
decRef(aaaacx);
decRef(aaaacy);



void * aaaadl = NULL;
void * aaaadv = NULL;
void * aaaady = NULL;
void * aaaadi = NULL;







void* aaadbe;
aaadbe = safeDiv((void*) aaaabx, (void*) aaaacl, (void*) aaaaby);
void * aaadbf = NULL;
aaadbf = i;
i = aaadbe;
incRef(i);
decRef(aaadbf);







void* aaadbg;
aaadbg = safeModulo((void*) i, (void*) aaaacl, (void*) aaaaby);
void * aaadbh = NULL;
aaadbh = aaaadl;
aaaadl = aaadbg;
incRef(aaaadl);
decRef(aaadbh);
decRef(i);




Integer* aaadbi;
aaadbi  = (Integer*) x3malloc(sizeof(Integer));
aaadbi->nrefs = 0;
aaadbi->value=((Integer*)aaaach)->value + ((Integer*)aaaadl)->value;
void * aaadbj = NULL;
aaadbj = aaaadv;
aaaadv = aaadbi;
incRef(aaaadv);
decRef(aaadbj);
decRef(aaaadl);




Character* aaadbk;
aaadbk = (Character*) x3malloc(sizeof(Character));
aaadbk->value = unichar (((Integer*)aaaadv)->value);
void * aaadbl = NULL;
aaadbl = aaaady;
aaaady = aaadbk;
incRef(aaaady);
decRef(aaadbl);
decRef(aaaadv);



Iterable* aaadbm;
aaadbm = (Iterable*) x3malloc(sizeof(Iterable));
aaadbm->isIter = 1;
aaadbm->nrefs = 1;
aaadbm->value = aaaady;
aaadbm->additional = NULL;
aaadbm->next = NULL;
aaadbm->concat = NULL;
incRef(aaaady);
aaadbm->nrefs = 0;
void * aaadbn = NULL;
aaadbn = aaaadi;
aaaadi = aaadbm;
incRef(aaaadi);
decRef(aaadbn);
decRef(aaaady);



void *aaadbp;
aaadbp = aaaadi;
if (aaadbp!=NULL) {
(*((int *)aaadbp))++;
if ((*((int *)aaaadi+1)) == 0) {
decRef(aaadbp);
aaadbp = strToIter( ((String *)aaaadi)->value, ((String *)aaaadi)->len);
}
}
void *aaadbq;
aaadbq = ret;
if (aaadbq!=NULL) {
(*((int *)aaadbq))++;
if ((*((int *)ret+1)) == 0) {
decRef(aaadbq);
aaadbq = strToIter( ((String *)ret)->value, ((String *)ret)->len);
}
}
Iterable* aaadbo;
aaadbo = concatenate((Iterable*)aaadbp, (Iterable*) aaadbq);
decRef(aaadbp);
decRef(aaadbq);
void * aaadbr = NULL;
aaadbr = ret;
ret = aaadbo;
incRef(ret);
decRef(aaadbr);
decRef(aaaadi);



void * aaadbs = NULL;
aaadbs = aaaacx;
aaaacx = aaaabx;
incRef(aaaacx);
decRef(aaadbs);



void * aaadbt = NULL;
aaadbt = aaaacy;
aaaacy = aaaaby;
incRef(aaaacy);
decRef(aaadbt);
}
decRef(aaaaby);
decRef(aaaabx);
decRef(aaaach);
decRef(aaaacl);
decRef(aaaacx);
decRef(aaaacy);






void *aaadbv;
aaadbv = pref;
if (aaadbv!=NULL) {
(*((int *)aaadbv))++;
if ((*((int *)pref+1)) == 0) {
decRef(aaadbv);
aaadbv = strToIter( ((String *)pref)->value, ((String *)pref)->len);
}
}
void *aaadbw;
aaadbw = ret;
if (aaadbw!=NULL) {
(*((int *)aaadbw))++;
if ((*((int *)ret+1)) == 0) {
decRef(aaadbw);
aaadbw = strToIter( ((String *)ret)->value, ((String *)ret)->len);
}
}
Iterable* aaadbu;
aaadbu = concatenate((Iterable*)aaadbv, (Iterable*) aaadbw);
decRef(aaadbv);
decRef(aaadbw);
void * aaadbx = NULL;
aaadbx = aaaaeg;
aaaaeg = aaadbu;
incRef(aaaaeg);
decRef(aaadbx);
decRef(pref);
decRef(ret);




void* aaadby;
aaadby = concatChars((Iterable*)aaaaeg);
decRef(aaaaeg);
return aaadby;
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






Integer* aaadbz;
aaadbz = (Integer*) x3malloc(sizeof(Integer));
(aaadbz->nrefs) = 0;
aaadbz->value = 1;
void * aaadca = NULL;
aaadca = aaaael;
aaaael = aaadbz;
incRef(aaaael);
decRef(aaadca);



Integer* aaadcb;
aaadcb = (Integer*) x3malloc(sizeof(Integer));
(aaadcb->nrefs) = 0;
aaadcb->value = 5;
void * aaadcc = NULL;
aaadcc = aaaaem;
aaaaem = aaadcb;
incRef(aaaaem);
decRef(aaadcc);



Integer* aaadcd;
aaadcd = (Integer*) x3malloc(sizeof(Integer));
(aaadcd->nrefs) = 0;
aaadcd->value = 6;
void * aaadce = NULL;
aaadce = aaaaep;
aaaaep = aaadcd;
incRef(aaaaep);
decRef(aaadce);



Iterable* aaadcf;
aaadcf = (Iterable*) x3malloc(sizeof(Iterable));
aaadcf->isIter = 1;
aaadcf->nrefs = 0;
aaadcf->value = aaaael;
aaadcf->additional = aaaaem;
aaadcf->next = &Integer_through;
aaadcf->concat = NULL;
incRef(aaaael);
incRef(aaaaem);
void * aaadcg = NULL;
aaadcg = aaaaej;
aaaaej = checkIter(aaadcf);
incRef(aaaaej);
decRef(aaadcg);
decRef(aaaael);
decRef(aaaaem);



Iterable* aaadch;
aaadch = (Iterable*) x3malloc(sizeof(Iterable));
aaadch->isIter = 1;
aaadch->nrefs = 1;
aaadch->value = aaaaep;
aaadch->additional = NULL;
aaadch->next = NULL;
aaadch->concat = NULL;
incRef(aaaaep);
aaadch->nrefs = 0;
void * aaadci = NULL;
aaadci = aaaaek;
aaaaek = aaadch;
incRef(aaaaek);
decRef(aaadci);
decRef(aaaaep);



void *aaadck;
aaadck = aaaaej;
if (aaadck!=NULL) {
(*((int *)aaadck))++;
if ((*((int *)aaaaej+1)) == 0) {
decRef(aaadck);
aaadck = strToIter( ((String *)aaaaej)->value, ((String *)aaaaej)->len);
}
}
void *aaadcl;
aaadcl = aaaaek;
if (aaadcl!=NULL) {
(*((int *)aaadcl))++;
if ((*((int *)aaaaek+1)) == 0) {
decRef(aaadcl);
aaadcl = strToIter( ((String *)aaaaek)->value, ((String *)aaaaek)->len);
}
}
Iterable* aaadcj;
aaadcj = concatenate((Iterable*)aaadck, (Iterable*) aaadcl);
decRef(aaadck);
decRef(aaadcl);
void * aaadcm = NULL;
aaadcm = i;
i = aaadcj;
incRef(i);
decRef(aaadcm);
decRef(aaaaej);
decRef(aaaaek);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaadcn = NULL;
aaadcn = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaadcn);
		}
	}
	while (i!=NULL) {
Iterable * aaaaet = NULL;
		aaaaet = (Iterable *)i;
		incRef(aaaaet);
void * aaadco = NULL;
aaadco = i;
		i = aaaaet->value;
		incRef(i);
		decRef(aaadco);
decRef(aaaaet);
		


void * aaaafc = NULL;
void * aaaaew = NULL;




void* aaadcp;
aaadcp = intToStr((void*) i);
void * aaadcq = NULL;
aaadcq = aaaafc;
aaaafc = aaadcp;
incRef(aaaafc);
decRef(aaadcq);
decRef(i);



Iterable* aaadcr;
aaadcr = (Iterable*) x3malloc(sizeof(Iterable));
aaadcr->isIter = 1;
aaadcr->nrefs = 1;
aaadcr->value = aaaafc;
aaadcr->additional = NULL;
aaadcr->next = NULL;
aaadcr->concat = NULL;
incRef(aaaafc);
aaadcr->nrefs = 0;
decRef(aaaafc);
return aaadcr;



void * aaadcs = NULL;
aaadcs = aaaaew;
aaaaew = aaaaet;
incRef(aaaaew);
decRef(aaadcs);
decRef(aaaaew);




void* aaadct;
aaadct = iterGetNext((void*) aaaaew);
void * aaadcu = NULL;
aaadcu = i;
i = aaadct;
incRef(i);
decRef(aaadcu);
decRef(i);
	}
decRef(i);






String* aaadcv;
aaadcv = (String *) x3malloc(sizeof(String));
(aaadcv->isIter) = 0;
aaadcv->value = (char*) x3malloc(sizeof("nope"));
(aaadcv->nrefs) = 0;
(aaadcv->isStr) = 1;
aaadcv->len = sizeof("nope") - 1;
mystrcpy(aaadcv->value, "nope");
void * aaadcw = NULL;
aaadcw = aaaafe;
aaaafe = aaadcv;
incRef(aaaafe);
decRef(aaadcw);



Iterable* aaadcx;
aaadcx = (Iterable*) x3malloc(sizeof(Iterable));
aaadcx->isIter = 1;
aaadcx->nrefs = 1;
aaadcx->value = aaaafe;
aaadcx->additional = NULL;
aaadcx->next = NULL;
aaadcx->concat = NULL;
incRef(aaaafe);
aaadcx->nrefs = 0;
decRef(aaaafe);
return aaadcx;
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
