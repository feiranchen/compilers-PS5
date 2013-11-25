#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* safeDiv(void *l , void *r , void *d) {









	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaacu = NULL;
aaaacu = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaacu);
		}
	}
	while (i!=NULL) {
Iterable * aaaaah = NULL;
		aaaaah = (Iterable *)i;
		incRef(aaaaah);
void * aaaacv = NULL;
aaaacv = i;
		i = aaaaah->value;
		incRef(i);
		decRef(aaaacv);
		


void * aaaaaj = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaaacw = NULL;
aaaacw = aaaaaj;
aaaaaj = aaaaah;
incRef(aaaaaj);
decRef(aaaacw);




void* aaaacx;
aaaacx = iterGetNext((void*) aaaaaj);
void * aaaacy = NULL;
aaaacy = i;
i = aaaacx;
incRef(i);
decRef(aaaacy);
	}






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}
void* safeModulo(void *l , void *r , void *d) {









	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaacz = NULL;
aaaacz = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaacz);
		}
	}
	while (i!=NULL) {
Iterable * aaaaar = NULL;
		aaaaar = (Iterable *)i;
		incRef(aaaaar);
void * aaaada = NULL;
aaaada = i;
		i = aaaaar->value;
		incRef(i);
		decRef(aaaada);
		


void * aaaaat = NULL;






if (i!= NULL) {
(*(int *)i)--;
}
return i;



void * aaaadb = NULL;
aaaadb = aaaaat;
aaaaat = aaaaar;
incRef(aaaaat);
decRef(aaaadb);




void* aaaadc;
aaaadc = iterGetNext((void*) aaaaat);
void * aaaadd = NULL;
aaaadd = i;
i = aaaadc;
incRef(i);
decRef(aaaadd);
	}






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}
void* intToStr(void *i) {













if (((*) aaaaaw)->value < ((*) aaaaax)->value) {









}










while (((*) aaaabl)->value > ((*) aaaabm)->value) {









}







void* aaaade;
aaaade = concatChars((Iterable*)aaaach);
return aaaade;
}


void* our_main()
{
void * aaaack = NULL;
void * aaaacl = NULL;
void * aaaacm = NULL;
void * aaaaci = NULL;
void * aaaacj = NULL;
void * i = NULL;
void * aaaact = NULL;






Integer* aaaadf;
aaaadf = (Integer*) x3malloc(sizeof(Integer));
(aaaadf->nrefs) = 0;
aaaadf->value = 1;
void * aaaadg = NULL;
aaaadg = aaaack;
aaaack = aaaadf;
incRef(aaaack);
decRef(aaaadg);



Integer* aaaadh;
aaaadh = (Integer*) x3malloc(sizeof(Integer));
(aaaadh->nrefs) = 0;
aaaadh->value = 5;
void * aaaadi = NULL;
aaaadi = aaaacl;
aaaacl = aaaadh;
incRef(aaaacl);
decRef(aaaadi);



Integer* aaaadj;
aaaadj = (Integer*) x3malloc(sizeof(Integer));
(aaaadj->nrefs) = 0;
aaaadj->value = 6;
void * aaaadk = NULL;
aaaadk = aaaacm;
aaaacm = aaaadj;
incRef(aaaacm);
decRef(aaaadk);



Iterable* aaaadl;
aaaadl = (Iterable*) x3malloc(sizeof(Iterable));
aaaadl->isIter = 1;
aaaadl->nrefs = 0;
aaaadl->value = aaaack;
aaaadl->additional = aaaacl;
aaaadl->next = &Integer_through;
aaaadl->concat = NULL;
incRef(aaaack);
incRef(aaaacl);
void * aaaadm = NULL;
aaaadm = aaaaci;
aaaaci = checkIter(aaaadl);
incRef(aaaaci);
decRef(aaaadm);
decRef(aaaack);
decRef(aaaacl);



Iterable* aaaadn;
aaaadn = (Iterable*) x3malloc(sizeof(Iterable));
aaaadn->isIter = 1;
aaaadn->nrefs = 1;
aaaadn->value = aaaacm;
aaaadn->additional = NULL;
aaaadn->next = NULL;
aaaadn->concat = NULL;
incRef(aaaacm);
aaaadn->nrefs = 0;
void * aaaado = NULL;
aaaado = aaaacj;
aaaacj = aaaadn;
incRef(aaaacj);
decRef(aaaado);
decRef(aaaacm);



void *aaaadq;
aaaadq = aaaaci;
if (aaaadq!=NULL) {
(*((int *)aaaadq))++;
if ((*((int *)aaaaci+1)) == 0) {
decRef(aaaadq);
aaaadq = strToIter( ((String *)aaaaci)->value, ((String *)aaaaci)->len);
}
}
void *aaaadr;
aaaadr = aaaacj;
if (aaaadr!=NULL) {
(*((int *)aaaadr))++;
if ((*((int *)aaaacj+1)) == 0) {
decRef(aaaadr);
aaaadr = strToIter( ((String *)aaaacj)->value, ((String *)aaaacj)->len);
}
}
Iterable* aaaadp;
aaaadp = concatenate((Iterable*)aaaadq, (Iterable*) aaaadr);
decRef(aaaadq);
decRef(aaaadr);
void * aaaads = NULL;
aaaads = i;
i = aaaadp;
incRef(i);
decRef(aaaads);
decRef(aaaaci);
decRef(aaaacj);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaadt = NULL;
aaaadt = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaadt);
		}
	}
	while (i!=NULL) {
Iterable * aaaacn = NULL;
		aaaacn = (Iterable *)i;
		incRef(aaaacn);
void * aaaadu = NULL;
aaaadu = i;
		i = aaaacn->value;
		incRef(i);
		decRef(aaaadu);
decRef(aaaacn);
		


void * aaaacr = NULL;
void * aaaacs = NULL;
void * aaaacp = NULL;



void * aaaadv = NULL;
aaaadv = aaaacr;
aaaacr = i;
incRef(aaaacr);
decRef(aaaadv);
decRef(i);




void* aaaadw;
aaaadw = intToStr((void*) aaaacr);
void * aaaadx = NULL;
aaaadx = aaaacs;
aaaacs = aaaadw;
incRef(aaaacs);
decRef(aaaadx);
decRef(aaaacr);



Iterable* aaaady;
aaaady = (Iterable*) x3malloc(sizeof(Iterable));
aaaady->isIter = 1;
aaaady->nrefs = 1;
aaaady->value = aaaacs;
aaaady->additional = NULL;
aaaady->next = NULL;
aaaady->concat = NULL;
incRef(aaaacs);
aaaady->nrefs = 0;
decRef(aaaacs);
return aaaady;



void * aaaadz = NULL;
aaaadz = aaaacp;
aaaacp = aaaacn;
incRef(aaaacp);
decRef(aaaadz);
decRef(aaaacp);




void* aaaaea;
aaaaea = iterGetNext((void*) aaaacp);
void * aaaaeb = NULL;
aaaaeb = i;
i = aaaaea;
incRef(i);
decRef(aaaaeb);
decRef(i);
	}
decRef(i);






String* aaaaec;
aaaaec = (String *) x3malloc(sizeof(String));
(aaaaec->isIter) = 0;
aaaaec->value = (char*) x3malloc(sizeof("nope"));
(aaaaec->nrefs) = 0;
(aaaaec->isStr) = 1;
aaaaec->len = sizeof("nope") - 1;
mystrcpy(aaaaec->value, "nope");
void * aaaaed = NULL;
aaaaed = aaaact;
aaaact = aaaaec;
incRef(aaaact);
decRef(aaaaed);



Iterable* aaaaee;
aaaaee = (Iterable*) x3malloc(sizeof(Iterable));
aaaaee->isIter = 1;
aaaaee->nrefs = 1;
aaaaee->value = aaaact;
aaaaee->additional = NULL;
aaaaee->next = NULL;
aaaaee->concat = NULL;
incRef(aaaact);
aaaaee->nrefs = 0;
decRef(aaaact);
return aaaaee;
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
