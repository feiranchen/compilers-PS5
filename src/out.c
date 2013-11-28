#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * aaaaai = NULL;
void * aaaaak = NULL;
void * aaaaam = NULL;
void * aaaaao = NULL;
void * lst = NULL;
void * sum = NULL;
void * v = NULL;
void * aaaabo = NULL;






Integer* aaaabq;
aaaabq = (Integer*) x3malloc(sizeof(Integer));
(aaaabq->nrefs) = 0;
aaaabq->value = 1;
void * aaaabr = NULL;
aaaabr = aaaaai;
aaaaai = aaaabq;
incRef(aaaaai);
decRef(aaaabr);



Integer* aaaabs;
aaaabs = (Integer*) x3malloc(sizeof(Integer));
(aaaabs->nrefs) = 0;
aaaabs->value = 2;
void * aaaabt = NULL;
aaaabt = aaaaak;
aaaaak = aaaabs;
incRef(aaaaak);
decRef(aaaabt);



Integer* aaaabu;
aaaabu = (Integer*) x3malloc(sizeof(Integer));
(aaaabu->nrefs) = 0;
aaaabu->value = 3;
void * aaaabv = NULL;
aaaabv = aaaaam;
aaaaam = aaaabu;
incRef(aaaaam);
decRef(aaaabv);



Integer* aaaabw;
aaaabw = (Integer*) x3malloc(sizeof(Integer));
(aaaabw->nrefs) = 0;
aaaabw->value = 4;
void * aaaabx = NULL;
aaaabx = aaaaao;
aaaaao = aaaabw;
incRef(aaaaao);
decRef(aaaabx);



Iterable* aaaacb;
aaaacb = (Iterable*) x3malloc(sizeof(Iterable));
aaaacb->isIter = 1;
aaaacb->nrefs = 1;
aaaacb->value = aaaaao;
aaaacb->additional = NULL;
aaaacb->next = NULL;
aaaacb->concat = NULL;
incRef(aaaaao);
Iterable* aaaaca;
aaaaca = (Iterable*) x3malloc(sizeof(Iterable));
aaaaca->isIter = 1;
aaaaca->nrefs = 1;
aaaaca->value = aaaaam;
aaaaca->additional = aaaacb;
aaaaca->next = NULL;
aaaaca->concat = NULL;
incRef(aaaaam);
Iterable* aaaabz;
aaaabz = (Iterable*) x3malloc(sizeof(Iterable));
aaaabz->isIter = 1;
aaaabz->nrefs = 1;
aaaabz->value = aaaaak;
aaaabz->additional = aaaaca;
aaaabz->next = NULL;
aaaabz->concat = NULL;
incRef(aaaaak);
Iterable* aaaaby;
aaaaby = (Iterable*) x3malloc(sizeof(Iterable));
aaaaby->isIter = 1;
aaaaby->nrefs = 1;
aaaaby->value = aaaaai;
aaaaby->additional = aaaabz;
aaaaby->next = NULL;
aaaaby->concat = NULL;
incRef(aaaaai);
aaaaby->nrefs = 0;
void * aaaacc = NULL;
aaaacc = lst;
lst = aaaaby;
incRef(lst);
decRef(aaaacc);
decRef(aaaaai);
decRef(aaaaak);
decRef(aaaaam);
decRef(aaaaao);









Integer* aaaacd;
aaaacd = (Integer*) x3malloc(sizeof(Integer));
(aaaacd->nrefs) = 0;
aaaacd->value = 0;
void * aaaace = NULL;
aaaace = sum;
sum = aaaacd;
incRef(sum);
decRef(aaaace);






void * aaaacf = NULL;
aaaacf = v;
v = lst;
incRef(v);
decRef(aaaacf);
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaacg = NULL;
aaaacg = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
incRef(v);
decRef(aaaacg);
		}
	}
	while (v!=NULL) {
Iterable * aaaaau = NULL;
		aaaaau = (Iterable *)v;
		incRef(aaaaau);
void * aaaach = NULL;
aaaach = v;
		v = aaaaau->value;
		incRef(v);
		decRef(aaaach);
		


void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaaax = NULL;






void * aaaaci = NULL;
aaaaci = aaaaba;
aaaaba = sum;
incRef(aaaaba);
decRef(aaaaci);
decRef(sum);



void * aaaacj = NULL;
aaaacj = aaaabb;
aaaabb = v;
incRef(aaaabb);
decRef(aaaacj);
decRef(v);




Integer* aaaack;
aaaack  = (Integer*) x3malloc(sizeof(Integer));
aaaack->nrefs = 0;
aaaack->value=((Integer*)aaaaba)->value + ((Integer*)aaaabb)->value;
void * aaaacl = NULL;
aaaacl = sum;
sum = aaaack;
incRef(sum);
decRef(aaaacl);
decRef(aaaaba);
decRef(aaaabb);



void * aaaacm = NULL;
aaaacm = aaaaax;
aaaaax = aaaaau;
incRef(aaaaax);
decRef(aaaacm);
decRef(aaaaau);




void* aaaacn;
aaaacn = iterGetNext((void*) aaaaax);
void * aaaaco = NULL;
aaaaco = v;
v = aaaacn;
incRef(v);
decRef(aaaaco);
decRef(aaaaax);
	}
decRef(v);






void * aaaacp = NULL;
aaaacp = v;
v = lst;
incRef(v);
decRef(aaaacp);
decRef(lst);
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaacq = NULL;
aaaacq = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
incRef(v);
decRef(aaaacq);
		}
	}
	while (v!=NULL) {
Iterable * aaaabe = NULL;
		aaaabe = (Iterable *)v;
		incRef(aaaabe);
void * aaaacr = NULL;
aaaacr = v;
		v = aaaabe->value;
		incRef(v);
		decRef(aaaacr);
		


void * aaaabk = NULL;
void * aaaabl = NULL;
void * aaaabh = NULL;



void * aaaacs = NULL;
aaaacs = aaaabk;
aaaabk = sum;
incRef(aaaabk);
decRef(aaaacs);
decRef(sum);



void * aaaact = NULL;
aaaact = aaaabl;
aaaabl = v;
incRef(aaaabl);
decRef(aaaact);
decRef(v);




Integer* aaaacu;
aaaacu  = (Integer*) x3malloc(sizeof(Integer));
aaaacu->nrefs = 0;
aaaacu->value=((Integer*)aaaabk)->value + ((Integer*)aaaabl)->value;
void * aaaacv = NULL;
aaaacv = sum;
sum = aaaacu;
incRef(sum);
decRef(aaaacv);
decRef(aaaabk);
decRef(aaaabl);



void * aaaacw = NULL;
aaaacw = aaaabh;
aaaabh = aaaabe;
incRef(aaaabh);
decRef(aaaacw);
decRef(aaaabe);




void* aaaacx;
aaaacx = iterGetNext((void*) aaaabh);
void * aaaacy = NULL;
aaaacy = v;
v = aaaacx;
incRef(v);
decRef(aaaacy);
decRef(aaaabh);
	}
decRef(v);
decRef(sum);






String* aaaacz;
aaaacz = (String *) x3malloc(sizeof(String));
(aaaacz->isIter) = 0;
aaaacz->value = (char*) x3malloc(sizeof("20"));
(aaaacz->nrefs) = 0;
(aaaacz->isStr) = 1;
aaaacz->len = sizeof("20") - 1;
mystrcpy(aaaacz->value, "20");
void * aaaada = NULL;
aaaada = aaaabo;
aaaabo = aaaacz;
incRef(aaaabo);
decRef(aaaada);



Iterable* aaaadb;
aaaadb = (Iterable*) x3malloc(sizeof(Iterable));
aaaadb->isIter = 1;
aaaadb->nrefs = 1;
aaaadb->value = aaaabo;
aaaadb->additional = NULL;
aaaadb->next = NULL;
aaaadb->concat = NULL;
incRef(aaaabo);
aaaadb->nrefs = 0;
decRef(aaaabo);
return aaaadb;
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
