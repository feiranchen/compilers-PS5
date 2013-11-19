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
void * aaaaaq = NULL;






Integer* aaaaar;
aaaaar = (Integer*) x3malloc(sizeof(Integer));
(aaaaar->nrefs) = 1;
aaaaar->value = 1;
void * aaaaas = NULL;
aaaaas = aaaaac;
aaaaac = aaaaar;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) == 0)
		x3free(aaaaas);
	aaaaas = NULL;
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) == 0)
		x3free(aaaaac);
	aaaaac = NULL;
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0\n");
}



Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 1;
aaaaat->value = 2;
void * aaaaau = NULL;
aaaaau = aaaaad;
aaaaad = aaaaat;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) == 0)
		x3free(aaaaau);
	aaaaau = NULL;
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0\n");
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	aaaaad = NULL;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
}




Integer* aaaaav;
aaaaav  = (Integer*) x3malloc(sizeof(Integer));
aaaaav->nrefs = 1;
aaaaav->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
void * aaaaaw = NULL;
aaaaaw = aaaaae;
aaaaae = aaaaav;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	aaaaaw = NULL;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
}



Integer* aaaaax;
aaaaax = (Integer*) x3malloc(sizeof(Integer));
(aaaaax->nrefs) = 1;
aaaaax->value = 2;
void * aaaaay = NULL;
aaaaay = aaaaaf;
aaaaaf = aaaaax;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	aaaaay = NULL;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	aaaaaf = NULL;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
}



Integer* aaaaaz;
aaaaaz = (Integer*) x3malloc(sizeof(Integer));
(aaaaaz->nrefs) = 1;
aaaaaz->value = 3;
void * aaaaba = NULL;
aaaaba = aaaaag;
aaaaag = aaaaaz;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	aaaaba = NULL;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) == 0)
		x3free(aaaaag);
	aaaaag = NULL;
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0\n");
}



Integer* aaaabb;
aaaabb = (Integer*) x3malloc(sizeof(Integer));
(aaaabb->nrefs) = 1;
aaaabb->value = 4;
void * aaaabc = NULL;
aaaabc = aaaaah;
aaaaah = aaaabb;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabc!= NULL) {
	(*(int *)aaaabc)--;
	if ((*(int *)aaaabc) == 0)
		x3free(aaaabc);
	aaaabc = NULL;
	if ((*(int *)aaaabc) < 0)
		printf("aaaabc ref count is smaller than 0\n");
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	aaaaah = NULL;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
}



Iterable* aaaabg;
aaaabg = (Iterable*) x3malloc(sizeof(Iterable));
aaaabg->isIter = 1;
aaaabg->nrefs = 1;
aaaabg->value = aaaaah;
aaaabg->additional = NULL;
aaaabg->next = NULL;
aaaabg->concat = NULL;
Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 1;
aaaabf->value = aaaaag;
aaaabf->additional = aaaabg;
aaaabf->next = NULL;
aaaabf->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabe;
aaaabe = (Iterable*) x3malloc(sizeof(Iterable));
aaaabe->isIter = 1;
aaaabe->nrefs = 1;
aaaabe->value = aaaaaf;
aaaabe->additional = aaaabf;
aaaabe->next = NULL;
aaaabe->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabd;
aaaabd = (Iterable*) x3malloc(sizeof(Iterable));
aaaabd->isIter = 1;
aaaabd->nrefs = 1;
aaaabd->value = aaaaae;
aaaabd->additional = aaaabe;
aaaabd->next = NULL;
aaaabd->concat = NULL;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
void * aaaabh = NULL;
aaaabh = lst;
lst = aaaabd;
if (lst!= NULL) {
	(*(int *)lst)++;
}
if (aaaabh!= NULL) {
	(*(int *)aaaabh)--;
	if ((*(int *)aaaabh) == 0)
		x3free(aaaabh);
	aaaabh = NULL;
	if ((*(int *)aaaabh) < 0)
		printf("aaaabh ref count is smaller than 0\n");
}
if (lst!= NULL) {
	(*(int *)lst)--;
	if ((*(int *)lst) == 0)
		x3free(lst);
	lst = NULL;
	if ((*(int *)lst) < 0)
		printf("lst ref count is smaller than 0\n");
}






Integer* aaaabi;
aaaabi = (Integer*) x3malloc(sizeof(Integer));
(aaaabi->nrefs) = 1;
aaaabi->value = 1;
void * aaaabj = NULL;
aaaabj = aaaaai;
aaaaai = aaaabi;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabj!= NULL) {
	(*(int *)aaaabj)--;
	if ((*(int *)aaaabj) == 0)
		x3free(aaaabj);
	aaaabj = NULL;
	if ((*(int *)aaaabj) < 0)
		printf("aaaabj ref count is smaller than 0\n");
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
}



Integer* aaaabk;
aaaabk = (Integer*) x3malloc(sizeof(Integer));
(aaaabk->nrefs) = 1;
aaaabk->value = 4;
void * aaaabl = NULL;
aaaabl = aaaaaj;
aaaaaj = aaaabk;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaabl!= NULL) {
	(*(int *)aaaabl)--;
	if ((*(int *)aaaabl) == 0)
		x3free(aaaabl);
	aaaabl = NULL;
	if ((*(int *)aaaabl) < 0)
		printf("aaaabl ref count is smaller than 0\n");
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) == 0)
		x3free(aaaaaj);
	aaaaaj = NULL;
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
}



Iterable* aaaabm;
aaaabm = (Iterable*) x3malloc(sizeof(Iterable));
aaaabm->isIter = 1;
aaaabm->nrefs = 1;
aaaabm->value = aaaaai;
aaaabm->additional = aaaaaj;
aaaabm->next = &Integer_through;
aaaabm->concat = NULL;
void * aaaabn = NULL;
aaaabn = lst2;
lst2 = checkIter(aaaabm);
if (lst2!= NULL) {
	(*(int *)lst2)++;
}
if (aaaabn!= NULL) {
	(*(int *)aaaabn)--;
	if ((*(int *)aaaabn) == 0)
		x3free(aaaabn);
	aaaabn = NULL;
	if ((*(int *)aaaabn) < 0)
		printf("aaaabn ref count is smaller than 0\n");
}
if (lst2!= NULL) {
	(*(int *)lst2)--;
	if ((*(int *)lst2) == 0)
		x3free(lst2);
	lst2 = NULL;
	if ((*(int *)lst2) < 0)
		printf("lst2 ref count is smaller than 0\n");
}






Integer* aaaabo;
aaaabo = (Integer*) x3malloc(sizeof(Integer));
(aaaabo->nrefs) = 1;
aaaabo->value = 0;
void * aaaabp = NULL;
aaaabp = sum;
sum = aaaabo;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabp!= NULL) {
	(*(int *)aaaabp)--;
	if ((*(int *)aaaabp) == 0)
		x3free(aaaabp);
	aaaabp = NULL;
	if ((*(int *)aaaabp) < 0)
		printf("aaaabp ref count is smaller than 0\n");
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
}






void * aaaabq = NULL;
aaaabq = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabq!= NULL) {
	(*(int *)aaaabq)--;
	if ((*(int *)aaaabq) == 0)
		x3free(aaaabq);
	aaaabq = NULL;
	if ((*(int *)aaaabq) < 0)
		printf("aaaabq ref count is smaller than 0\n");
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaabr = NULL;
aaaabr = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabr!= NULL) {
	(*(int *)aaaabr)--;
	if ((*(int *)aaaabr) == 0)
		x3free(aaaabr);
	aaaabr = NULL;
	if ((*(int *)aaaabr) < 0)
		printf("aaaabr ref count is smaller than 0\n");
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaak = NULL;
		aaaaak = (Iterable *)v;
		if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
void * aaaabs = NULL;
aaaabs = v;
		v = aaaaak->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaabs!= NULL) {
	(*(int *)aaaabs)--;
	if ((*(int *)aaaabs) == 0)
		x3free(aaaabs);
	aaaabs = NULL;
	if ((*(int *)aaaabs) < 0)
		printf("aaaabs ref count is smaller than 0\n");
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
}
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) == 0)
		x3free(aaaaak);
	aaaaak = NULL;
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0\n");
}
		


void * aaaaal = NULL;
void * aaaaam = NULL;






void * aaaabt = NULL;
aaaabt = aaaaal;
aaaaal = sum;
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
if (aaaabt!= NULL) {
	(*(int *)aaaabt)--;
	if ((*(int *)aaaabt) == 0)
		x3free(aaaabt);
	aaaabt = NULL;
	if ((*(int *)aaaabt) < 0)
		printf("aaaabt ref count is smaller than 0\n");
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) == 0)
		x3free(aaaaal);
	aaaaal = NULL;
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
}



void * aaaabu = NULL;
aaaabu = aaaaam;
aaaaam = v;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
}
if (aaaabu!= NULL) {
	(*(int *)aaaabu)--;
	if ((*(int *)aaaabu) == 0)
		x3free(aaaabu);
	aaaabu = NULL;
	if ((*(int *)aaaabu) < 0)
		printf("aaaabu ref count is smaller than 0\n");
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	aaaaam = NULL;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
}




Integer* aaaabv;
aaaabv  = (Integer*) x3malloc(sizeof(Integer));
aaaabv->nrefs = 1;
aaaabv->value=((Integer*)aaaaal)->value + ((Integer*)aaaaam)->value;
void * aaaabw = NULL;
aaaabw = sum;
sum = aaaabv;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabw!= NULL) {
	(*(int *)aaaabw)--;
	if ((*(int *)aaaabw) == 0)
		x3free(aaaabw);
	aaaabw = NULL;
	if ((*(int *)aaaabw) < 0)
		printf("aaaabw ref count is smaller than 0\n");
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
}




void* aaaabx;
aaaabx = iterGetNext((void*) aaaaak);
void * aaaaby = NULL;
aaaaby = v;
v = aaaabx;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaaby!= NULL) {
	(*(int *)aaaaby)--;
	if ((*(int *)aaaaby) == 0)
		x3free(aaaaby);
	aaaaby = NULL;
	if ((*(int *)aaaaby) < 0)
		printf("aaaaby ref count is smaller than 0\n");
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
}






void * aaaabz = NULL;
aaaabz = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) == 0)
		x3free(aaaabz);
	aaaabz = NULL;
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaaca = NULL;
aaaaca = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaaca!= NULL) {
	(*(int *)aaaaca)--;
	if ((*(int *)aaaaca) == 0)
		x3free(aaaaca);
	aaaaca = NULL;
	if ((*(int *)aaaaca) < 0)
		printf("aaaaca ref count is smaller than 0\n");
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaan = NULL;
		aaaaan = (Iterable *)v;
		if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
}
void * aaaacb = NULL;
aaaacb = v;
		v = aaaaan->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaacb!= NULL) {
	(*(int *)aaaacb)--;
	if ((*(int *)aaaacb) == 0)
		x3free(aaaacb);
	aaaacb = NULL;
	if ((*(int *)aaaacb) < 0)
		printf("aaaacb ref count is smaller than 0\n");
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) == 0)
		x3free(aaaaan);
	aaaaan = NULL;
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0\n");
}
		


void * aaaaao = NULL;
void * aaaaap = NULL;



void * aaaacc = NULL;
aaaacc = aaaaao;
aaaaao = sum;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
}
if (aaaacc!= NULL) {
	(*(int *)aaaacc)--;
	if ((*(int *)aaaacc) == 0)
		x3free(aaaacc);
	aaaacc = NULL;
	if ((*(int *)aaaacc) < 0)
		printf("aaaacc ref count is smaller than 0\n");
}
if (aaaaao!= NULL) {
	(*(int *)aaaaao)--;
	if ((*(int *)aaaaao) == 0)
		x3free(aaaaao);
	aaaaao = NULL;
	if ((*(int *)aaaaao) < 0)
		printf("aaaaao ref count is smaller than 0\n");
}



void * aaaacd = NULL;
aaaacd = aaaaap;
aaaaap = v;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
}
if (aaaacd!= NULL) {
	(*(int *)aaaacd)--;
	if ((*(int *)aaaacd) == 0)
		x3free(aaaacd);
	aaaacd = NULL;
	if ((*(int *)aaaacd) < 0)
		printf("aaaacd ref count is smaller than 0\n");
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) == 0)
		x3free(aaaaap);
	aaaaap = NULL;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0\n");
}




Integer* aaaace;
aaaace  = (Integer*) x3malloc(sizeof(Integer));
aaaace->nrefs = 1;
aaaace->value=((Integer*)aaaaao)->value + ((Integer*)aaaaap)->value;
void * aaaacf = NULL;
aaaacf = sum;
sum = aaaace;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaacf!= NULL) {
	(*(int *)aaaacf)--;
	if ((*(int *)aaaacf) == 0)
		x3free(aaaacf);
	aaaacf = NULL;
	if ((*(int *)aaaacf) < 0)
		printf("aaaacf ref count is smaller than 0\n");
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
}




void* aaaacg;
aaaacg = iterGetNext((void*) aaaaan);
void * aaaach = NULL;
aaaach = v;
v = aaaacg;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaach!= NULL) {
	(*(int *)aaaach)--;
	if ((*(int *)aaaach) == 0)
		x3free(aaaach);
	aaaach = NULL;
	if ((*(int *)aaaach) < 0)
		printf("aaaach ref count is smaller than 0\n");
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
}






String* aaaaci;
aaaaci = (String *) x3malloc(sizeof(String));
(aaaaci->isIter) = 0;
aaaaci->value = (char*) x3malloc(sizeof("20"));
(aaaaci->nrefs) = 1;
aaaaci->len = sizeof("20") - 1;
mystrcpy(aaaaci->value, "20");
void * aaaacj = NULL;
aaaacj = aaaaaq;
aaaaaq = aaaaci;
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)++;
}
if (aaaacj!= NULL) {
	(*(int *)aaaacj)--;
	if ((*(int *)aaaacj) == 0)
		x3free(aaaacj);
	aaaacj = NULL;
	if ((*(int *)aaaacj) < 0)
		printf("aaaacj ref count is smaller than 0\n");
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	aaaaaq = NULL;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
}



Iterable* aaaack;
aaaack = (Iterable*) x3malloc(sizeof(Iterable));
aaaack->isIter = 1;
aaaack->nrefs = 1;
aaaack->value = aaaaaq;
aaaack->additional = NULL;
aaaack->next = NULL;
aaaack->concat = NULL;
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)++;
}
if (aaaack!= NULL) {
(*(int *)aaaack)--;
}
return aaaack;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
