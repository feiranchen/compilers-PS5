#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * aaaaac = NULL;
void * aaaaad = NULL;
void * aaaaae = NULL;
void * aaaaaf = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * lst = NULL;
void * aaaaai = NULL;
void * aaaaaj = NULL;
void * lst2 = NULL;
void * sum = NULL;
void * v = NULL;
void * aaaaao = NULL;






Integer* aaaaap;
aaaaap = (Integer*) x3malloc(sizeof(Integer));
(aaaaap->nrefs) = 1;
aaaaap->value = 1;
void * aaaaaq = NULL;
aaaaaq = aaaaac;
aaaaac = aaaaap;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
	aaaaaq = NULL;
}



Integer* aaaaar;
aaaaar = (Integer*) x3malloc(sizeof(Integer));
(aaaaar->nrefs) = 1;
aaaaar->value = 2;
void * aaaaas = NULL;
aaaaas = aaaaad;
aaaaad = aaaaar;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) == 0)
		x3free(aaaaas);
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
	aaaaas = NULL;
}




Integer* aaaaat;
aaaaat  = (Integer*) x3malloc(sizeof(Integer));
aaaaat->nrefs = 1;
aaaaat->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
void * aaaaau = NULL;
aaaaau = aaaaae;
aaaaae = aaaaat;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) == 0)
		x3free(aaaaau);
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0\n");
	aaaaau = NULL;
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) == 0)
		x3free(aaaaac);
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0\n");
	aaaaac = NULL;
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
	aaaaad = NULL;
}



Integer* aaaaav;
aaaaav = (Integer*) x3malloc(sizeof(Integer));
(aaaaav->nrefs) = 1;
aaaaav->value = 2;
void * aaaaaw = NULL;
aaaaaw = aaaaaf;
aaaaaf = aaaaav;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
	aaaaaw = NULL;
}



Integer* aaaaax;
aaaaax = (Integer*) x3malloc(sizeof(Integer));
(aaaaax->nrefs) = 1;
aaaaax->value = 3;
void * aaaaay = NULL;
aaaaay = aaaaag;
aaaaag = aaaaax;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
	aaaaay = NULL;
}



Integer* aaaaaz;
aaaaaz = (Integer*) x3malloc(sizeof(Integer));
(aaaaaz->nrefs) = 1;
aaaaaz->value = 4;
void * aaaaba = NULL;
aaaaba = aaaaah;
aaaaah = aaaaaz;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	aaaaba = NULL;
}



Iterable* aaaabe;
aaaabe = (Iterable*) x3malloc(sizeof(Iterable));
aaaabe->isIter = 1;
aaaabe->nrefs = 1;
aaaabe->value = aaaaah;
aaaabe->additional = NULL;
aaaabe->next = NULL;
aaaabe->concat = NULL;
Iterable* aaaabd;
aaaabd = (Iterable*) x3malloc(sizeof(Iterable));
aaaabd->isIter = 1;
aaaabd->nrefs = 1;
aaaabd->value = aaaaag;
aaaabd->additional = aaaabe;
aaaabd->next = NULL;
aaaabd->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabc;
aaaabc = (Iterable*) x3malloc(sizeof(Iterable));
aaaabc->isIter = 1;
aaaabc->nrefs = 1;
aaaabc->value = aaaaaf;
aaaabc->additional = aaaabd;
aaaabc->next = NULL;
aaaabc->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabb;
aaaabb = (Iterable*) x3malloc(sizeof(Iterable));
aaaabb->isIter = 1;
aaaabb->nrefs = 1;
aaaabb->value = aaaaae;
aaaabb->additional = aaaabc;
aaaabb->next = NULL;
aaaabb->concat = NULL;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
void * aaaabf = NULL;
aaaabf = lst;
lst = aaaabb;
if (lst!= NULL) {
	(*(int *)lst)++;
}
if (aaaabf!= NULL) {
	(*(int *)aaaabf)--;
	if ((*(int *)aaaabf) == 0)
		x3free(aaaabf);
	if ((*(int *)aaaabf) < 0)
		printf("aaaabf ref count is smaller than 0\n");
	aaaabf = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	aaaaae = NULL;
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
	aaaaaf = NULL;
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) == 0)
		x3free(aaaaag);
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0\n");
	aaaaag = NULL;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
	aaaaah = NULL;
}






Integer* aaaabg;
aaaabg = (Integer*) x3malloc(sizeof(Integer));
(aaaabg->nrefs) = 1;
aaaabg->value = 1;
void * aaaabh = NULL;
aaaabh = aaaaai;
aaaaai = aaaabg;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabh!= NULL) {
	(*(int *)aaaabh)--;
	if ((*(int *)aaaabh) == 0)
		x3free(aaaabh);
	if ((*(int *)aaaabh) < 0)
		printf("aaaabh ref count is smaller than 0\n");
	aaaabh = NULL;
}



Integer* aaaabi;
aaaabi = (Integer*) x3malloc(sizeof(Integer));
(aaaabi->nrefs) = 1;
aaaabi->value = 4;
void * aaaabj = NULL;
aaaabj = aaaaaj;
aaaaaj = aaaabi;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaabj!= NULL) {
	(*(int *)aaaabj)--;
	if ((*(int *)aaaabj) == 0)
		x3free(aaaabj);
	if ((*(int *)aaaabj) < 0)
		printf("aaaabj ref count is smaller than 0\n");
	aaaabj = NULL;
}



Iterable* aaaabk;
aaaabk = (Iterable*) x3malloc(sizeof(Iterable));
aaaabk->isIter = 1;
aaaabk->nrefs = 1;
aaaabk->value = aaaaai;
aaaabk->additional = aaaaaj;
aaaabk->next = &Integer_through;
aaaabk->concat = NULL;
void * aaaabl = NULL;
aaaabl = lst2;
lst2 = checkIter(aaaabk);
if (lst2!= NULL) {
	(*(int *)lst2)++;
}
if (aaaabl!= NULL) {
	(*(int *)aaaabl)--;
	if ((*(int *)aaaabl) == 0)
		x3free(aaaabl);
	if ((*(int *)aaaabl) < 0)
		printf("aaaabl ref count is smaller than 0\n");
	aaaabl = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	aaaaai = NULL;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) == 0)
		x3free(aaaaaj);
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
	aaaaaj = NULL;
}
if (lst2!= NULL) {
	(*(int *)lst2)--;
	if ((*(int *)lst2) == 0)
		x3free(lst2);
	if ((*(int *)lst2) < 0)
		printf("lst2 ref count is smaller than 0\n");
	lst2 = NULL;
}






Integer* aaaabm;
aaaabm = (Integer*) x3malloc(sizeof(Integer));
(aaaabm->nrefs) = 1;
aaaabm->value = 0;
void * aaaabn = NULL;
aaaabn = sum;
sum = aaaabm;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabn!= NULL) {
	(*(int *)aaaabn)--;
	if ((*(int *)aaaabn) == 0)
		x3free(aaaabn);
	if ((*(int *)aaaabn) < 0)
		printf("aaaabn ref count is smaller than 0\n");
	aaaabn = NULL;
}






void * aaaabo = NULL;
aaaabo = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabo!= NULL) {
	(*(int *)aaaabo)--;
	if ((*(int *)aaaabo) == 0)
		x3free(aaaabo);
	if ((*(int *)aaaabo) < 0)
		printf("aaaabo ref count is smaller than 0\n");
	aaaabo = NULL;
}
if (lst!= NULL) {
	(*(int *)lst)--;
	if ((*(int *)lst) == 0)
		x3free(lst);
	if ((*(int *)lst) < 0)
		printf("lst ref count is smaller than 0\n");
	lst = NULL;
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaabp = NULL;
aaaabp = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabp!= NULL) {
	(*(int *)aaaabp)--;
	if ((*(int *)aaaabp) == 0)
		x3free(aaaabp);
	if ((*(int *)aaaabp) < 0)
		printf("aaaabp ref count is smaller than 0\n");
	aaaabp = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaak = NULL;
		aaaaak = (Iterable *)v;
		if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
void * aaaabq = NULL;
aaaabq = v;
		v = aaaaak->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaabq!= NULL) {
	(*(int *)aaaabq)--;
	if ((*(int *)aaaabq) == 0)
		x3free(aaaabq);
	if ((*(int *)aaaabq) < 0)
		printf("aaaabq ref count is smaller than 0\n");
	aaaabq = NULL;
}
		


void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaal = NULL;






void * aaaabr = NULL;
aaaabr = aaaaam;
aaaaam = sum;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
}
if (aaaabr!= NULL) {
	(*(int *)aaaabr)--;
	if ((*(int *)aaaabr) == 0)
		x3free(aaaabr);
	if ((*(int *)aaaabr) < 0)
		printf("aaaabr ref count is smaller than 0\n");
	aaaabr = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	sum = NULL;
}



void * aaaabs = NULL;
aaaabs = aaaaan;
aaaaan = v;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
}
if (aaaabs!= NULL) {
	(*(int *)aaaabs)--;
	if ((*(int *)aaaabs) == 0)
		x3free(aaaabs);
	if ((*(int *)aaaabs) < 0)
		printf("aaaabs ref count is smaller than 0\n");
	aaaabs = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}




Integer* aaaabt;
aaaabt  = (Integer*) x3malloc(sizeof(Integer));
aaaabt->nrefs = 1;
aaaabt->value=((Integer*)aaaaam)->value + ((Integer*)aaaaan)->value;
void * aaaabu = NULL;
aaaabu = sum;
sum = aaaabt;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabu!= NULL) {
	(*(int *)aaaabu)--;
	if ((*(int *)aaaabu) == 0)
		x3free(aaaabu);
	if ((*(int *)aaaabu) < 0)
		printf("aaaabu ref count is smaller than 0\n");
	aaaabu = NULL;
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
	aaaaam = NULL;
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) == 0)
		x3free(aaaaan);
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0\n");
	aaaaan = NULL;
}



void * aaaabv = NULL;
aaaabv = aaaaal;
aaaaal = aaaaak;
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
if (aaaabv!= NULL) {
	(*(int *)aaaabv)--;
	if ((*(int *)aaaabv) == 0)
		x3free(aaaabv);
	if ((*(int *)aaaabv) < 0)
		printf("aaaabv ref count is smaller than 0\n");
	aaaabv = NULL;
}
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) == 0)
		x3free(aaaaak);
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0\n");
	aaaaak = NULL;
}




void* aaaabw;
aaaabw = iterGetNext((void*) aaaaal);
void * aaaabx = NULL;
aaaabx = v;
v = aaaabw;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabx!= NULL) {
	(*(int *)aaaabx)--;
	if ((*(int *)aaaabx) == 0)
		x3free(aaaabx);
	if ((*(int *)aaaabx) < 0)
		printf("aaaabx ref count is smaller than 0\n");
	aaaabx = NULL;
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) == 0)
		x3free(aaaaal);
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
	aaaaal = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	sum = NULL;
}






String* aaaaby;
aaaaby = (String *) x3malloc(sizeof(String));
(aaaaby->isIter) = 0;
aaaaby->value = (char*) x3malloc(sizeof("20"));
(aaaaby->nrefs) = 1;
aaaaby->len = sizeof("20") - 1;
mystrcpy(aaaaby->value, "20");
void * aaaabz = NULL;
aaaabz = aaaaao;
aaaaao = aaaaby;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
}
if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) == 0)
		x3free(aaaabz);
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
	aaaabz = NULL;
}



Iterable* aaaaca;
aaaaca = (Iterable*) x3malloc(sizeof(Iterable));
aaaaca->isIter = 1;
aaaaca->nrefs = 1;
aaaaca->value = aaaaao;
aaaaca->additional = NULL;
aaaaca->next = NULL;
aaaaca->concat = NULL;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
}
if (aaaaca!= NULL) {
(*(int *)aaaaca)--;
}
return aaaaca;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
