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
void * aaaaas = NULL;






Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 1;
aaaaat->value = 1;
void * aaaaau = NULL;
aaaaau = aaaaac;
aaaaac = aaaaat;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) == 0)
		x3free(aaaaau);
	aaaaau = NULL;
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0\n");
	aaaaau = NULL;
}



Integer* aaaaav;
aaaaav = (Integer*) x3malloc(sizeof(Integer));
(aaaaav->nrefs) = 1;
aaaaav->value = 2;
void * aaaaaw = NULL;
aaaaaw = aaaaad;
aaaaad = aaaaav;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	aaaaaw = NULL;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
	aaaaaw = NULL;
}




Integer* aaaaax;
aaaaax  = (Integer*) x3malloc(sizeof(Integer));
aaaaax->nrefs = 0;
aaaaax->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
void * aaaaay = NULL;
aaaaay = aaaaae;
aaaaae = aaaaax;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	aaaaay = NULL;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
	aaaaay = NULL;
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) == 0)
		x3free(aaaaac);
	aaaaac = NULL;
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0\n");
	aaaaac = NULL;
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	aaaaad = NULL;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
	aaaaad = NULL;
}



Integer* aaaaaz;
aaaaaz = (Integer*) x3malloc(sizeof(Integer));
(aaaaaz->nrefs) = 1;
aaaaaz->value = 2;
void * aaaaba = NULL;
aaaaba = aaaaaf;
aaaaaf = aaaaaz;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	aaaaba = NULL;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	aaaaba = NULL;
}



Integer* aaaabb;
aaaabb = (Integer*) x3malloc(sizeof(Integer));
(aaaabb->nrefs) = 1;
aaaabb->value = 3;
void * aaaabc = NULL;
aaaabc = aaaaag;
aaaaag = aaaabb;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaabc!= NULL) {
	(*(int *)aaaabc)--;
	if ((*(int *)aaaabc) == 0)
		x3free(aaaabc);
	aaaabc = NULL;
	if ((*(int *)aaaabc) < 0)
		printf("aaaabc ref count is smaller than 0\n");
	aaaabc = NULL;
}



Integer* aaaabd;
aaaabd = (Integer*) x3malloc(sizeof(Integer));
(aaaabd->nrefs) = 1;
aaaabd->value = 4;
void * aaaabe = NULL;
aaaabe = aaaaah;
aaaaah = aaaabd;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabe!= NULL) {
	(*(int *)aaaabe)--;
	if ((*(int *)aaaabe) == 0)
		x3free(aaaabe);
	aaaabe = NULL;
	if ((*(int *)aaaabe) < 0)
		printf("aaaabe ref count is smaller than 0\n");
	aaaabe = NULL;
}



Iterable* aaaabi;
aaaabi = (Iterable*) x3malloc(sizeof(Iterable));
aaaabi->isIter = 1;
aaaabi->nrefs = 0;
aaaabi->value = aaaaah;
aaaabi->additional = NULL;
aaaabi->next = NULL;
aaaabi->concat = NULL;
Iterable* aaaabh;
aaaabh = (Iterable*) x3malloc(sizeof(Iterable));
aaaabh->isIter = 1;
aaaabh->nrefs = 0;
aaaabh->value = aaaaag;
aaaabh->additional = aaaabi;
aaaabh->next = NULL;
aaaabh->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabg;
aaaabg = (Iterable*) x3malloc(sizeof(Iterable));
aaaabg->isIter = 1;
aaaabg->nrefs = 0;
aaaabg->value = aaaaaf;
aaaabg->additional = aaaabh;
aaaabg->next = NULL;
aaaabg->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 0;
aaaabf->value = aaaaae;
aaaabf->additional = aaaabg;
aaaabf->next = NULL;
aaaabf->concat = NULL;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
void * aaaabj = NULL;
aaaabj = lst;
lst = aaaabf;
if (lst!= NULL) {
	(*(int *)lst)++;
}
if (aaaabj!= NULL) {
	(*(int *)aaaabj)--;
	if ((*(int *)aaaabj) == 0)
		x3free(aaaabj);
	aaaabj = NULL;
	if ((*(int *)aaaabj) < 0)
		printf("aaaabj ref count is smaller than 0\n");
	aaaabj = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	aaaaae = NULL;
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	aaaaaf = NULL;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
	aaaaaf = NULL;
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) == 0)
		x3free(aaaaag);
	aaaaag = NULL;
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0\n");
	aaaaag = NULL;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	aaaaah = NULL;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
	aaaaah = NULL;
}






Integer* aaaabk;
aaaabk = (Integer*) x3malloc(sizeof(Integer));
(aaaabk->nrefs) = 1;
aaaabk->value = 1;
void * aaaabl = NULL;
aaaabl = aaaaai;
aaaaai = aaaabk;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabl!= NULL) {
	(*(int *)aaaabl)--;
	if ((*(int *)aaaabl) == 0)
		x3free(aaaabl);
	aaaabl = NULL;
	if ((*(int *)aaaabl) < 0)
		printf("aaaabl ref count is smaller than 0\n");
	aaaabl = NULL;
}



Integer* aaaabm;
aaaabm = (Integer*) x3malloc(sizeof(Integer));
(aaaabm->nrefs) = 1;
aaaabm->value = 4;
void * aaaabn = NULL;
aaaabn = aaaaaj;
aaaaaj = aaaabm;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaabn!= NULL) {
	(*(int *)aaaabn)--;
	if ((*(int *)aaaabn) == 0)
		x3free(aaaabn);
	aaaabn = NULL;
	if ((*(int *)aaaabn) < 0)
		printf("aaaabn ref count is smaller than 0\n");
	aaaabn = NULL;
}



Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 0;
aaaabo->value = aaaaai;
aaaabo->additional = aaaaaj;
aaaabo->next = &Integer_through;
aaaabo->concat = NULL;
void * aaaabp = NULL;
aaaabp = lst2;
lst2 = checkIter(aaaabo);
if (lst2!= NULL) {
	(*(int *)lst2)++;
}
if (aaaabp!= NULL) {
	(*(int *)aaaabp)--;
	if ((*(int *)aaaabp) == 0)
		x3free(aaaabp);
	aaaabp = NULL;
	if ((*(int *)aaaabp) < 0)
		printf("aaaabp ref count is smaller than 0\n");
	aaaabp = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	aaaaai = NULL;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) == 0)
		x3free(aaaaaj);
	aaaaaj = NULL;
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
	aaaaaj = NULL;
}
if (lst2!= NULL) {
	(*(int *)lst2)--;
	if ((*(int *)lst2) == 0)
		freeIter(lst2);
	lst2 = NULL;
	if ((*(int *)lst2) < 0)
		printf("lst2 ref count is smaller than 0\n");
	lst2 = NULL;
}






Integer* aaaabq;
aaaabq = (Integer*) x3malloc(sizeof(Integer));
(aaaabq->nrefs) = 1;
aaaabq->value = 0;
void * aaaabr = NULL;
aaaabr = sum;
sum = aaaabq;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabr!= NULL) {
	(*(int *)aaaabr)--;
	if ((*(int *)aaaabr) == 0)
		x3free(aaaabr);
	aaaabr = NULL;
	if ((*(int *)aaaabr) < 0)
		printf("aaaabr ref count is smaller than 0\n");
	aaaabr = NULL;
}






void * aaaabs = NULL;
aaaabs = v;
v = lst;
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
	aaaabs = NULL;
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaabt = NULL;
aaaabt = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabt!= NULL) {
	(*(int *)aaaabt)--;
	if ((*(int *)aaaabt) == 0)
		x3free(aaaabt);
	aaaabt = NULL;
	if ((*(int *)aaaabt) < 0)
		printf("aaaabt ref count is smaller than 0\n");
	aaaabt = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaak = NULL;
		aaaaak = (Iterable *)v;
		if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
void * aaaabu = NULL;
aaaabu = v;
		v = aaaaak->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaabu!= NULL) {
	(*(int *)aaaabu)--;
	if ((*(int *)aaaabu) == 0)
		x3free(aaaabu);
	aaaabu = NULL;
	if ((*(int *)aaaabu) < 0)
		printf("aaaabu ref count is smaller than 0\n");
	aaaabu = NULL;
}
		


void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaal = NULL;






void * aaaabv = NULL;
aaaabv = aaaaam;
aaaaam = sum;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
}
if (aaaabv!= NULL) {
	(*(int *)aaaabv)--;
	if ((*(int *)aaaabv) == 0)
		x3free(aaaabv);
	aaaabv = NULL;
	if ((*(int *)aaaabv) < 0)
		printf("aaaabv ref count is smaller than 0\n");
	aaaabv = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	sum = NULL;
}



void * aaaabw = NULL;
aaaabw = aaaaan;
aaaaan = v;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
}
if (aaaabw!= NULL) {
	(*(int *)aaaabw)--;
	if ((*(int *)aaaabw) == 0)
		x3free(aaaabw);
	aaaabw = NULL;
	if ((*(int *)aaaabw) < 0)
		printf("aaaabw ref count is smaller than 0\n");
	aaaabw = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}




Integer* aaaabx;
aaaabx  = (Integer*) x3malloc(sizeof(Integer));
aaaabx->nrefs = 0;
aaaabx->value=((Integer*)aaaaam)->value + ((Integer*)aaaaan)->value;
void * aaaaby = NULL;
aaaaby = sum;
sum = aaaabx;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaaby!= NULL) {
	(*(int *)aaaaby)--;
	if ((*(int *)aaaaby) == 0)
		x3free(aaaaby);
	aaaaby = NULL;
	if ((*(int *)aaaaby) < 0)
		printf("aaaaby ref count is smaller than 0\n");
	aaaaby = NULL;
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	aaaaam = NULL;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
	aaaaam = NULL;
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) == 0)
		x3free(aaaaan);
	aaaaan = NULL;
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0\n");
	aaaaan = NULL;
}



void * aaaabz = NULL;
aaaabz = aaaaal;
aaaaal = aaaaak;
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) == 0)
		x3free(aaaabz);
	aaaabz = NULL;
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
	aaaabz = NULL;
}
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) == 0)
		x3free(aaaaak);
	aaaaak = NULL;
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0\n");
	aaaaak = NULL;
}




void* aaaaca;
aaaaca = iterGetNext((void*) aaaaal);
void * aaaacb = NULL;
aaaacb = v;
v = aaaaca;
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
	aaaacb = NULL;
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) == 0)
		x3free(aaaaal);
	aaaaal = NULL;
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
	aaaaal = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}






void * aaaacc = NULL;
aaaacc = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacc!= NULL) {
	(*(int *)aaaacc)--;
	if ((*(int *)aaaacc) == 0)
		x3free(aaaacc);
	aaaacc = NULL;
	if ((*(int *)aaaacc) < 0)
		printf("aaaacc ref count is smaller than 0\n");
	aaaacc = NULL;
}
if (lst!= NULL) {
	(*(int *)lst)--;
	if ((*(int *)lst) == 0)
		freeIter(lst);
	lst = NULL;
	if ((*(int *)lst) < 0)
		printf("lst ref count is smaller than 0\n");
	lst = NULL;
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaacd = NULL;
aaaacd = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacd!= NULL) {
	(*(int *)aaaacd)--;
	if ((*(int *)aaaacd) == 0)
		x3free(aaaacd);
	aaaacd = NULL;
	if ((*(int *)aaaacd) < 0)
		printf("aaaacd ref count is smaller than 0\n");
	aaaacd = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaao = NULL;
		aaaaao = (Iterable *)v;
		if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
}
void * aaaace = NULL;
aaaace = v;
		v = aaaaao->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaace!= NULL) {
	(*(int *)aaaace)--;
	if ((*(int *)aaaace) == 0)
		x3free(aaaace);
	aaaace = NULL;
	if ((*(int *)aaaace) < 0)
		printf("aaaace ref count is smaller than 0\n");
	aaaace = NULL;
}
		


void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaap = NULL;



void * aaaacf = NULL;
aaaacf = aaaaaq;
aaaaaq = sum;
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)++;
}
if (aaaacf!= NULL) {
	(*(int *)aaaacf)--;
	if ((*(int *)aaaacf) == 0)
		x3free(aaaacf);
	aaaacf = NULL;
	if ((*(int *)aaaacf) < 0)
		printf("aaaacf ref count is smaller than 0\n");
	aaaacf = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	sum = NULL;
}



void * aaaacg = NULL;
aaaacg = aaaaar;
aaaaar = v;
if (aaaaar!= NULL) {
	(*(int *)aaaaar)++;
}
if (aaaacg!= NULL) {
	(*(int *)aaaacg)--;
	if ((*(int *)aaaacg) == 0)
		x3free(aaaacg);
	aaaacg = NULL;
	if ((*(int *)aaaacg) < 0)
		printf("aaaacg ref count is smaller than 0\n");
	aaaacg = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}




Integer* aaaach;
aaaach  = (Integer*) x3malloc(sizeof(Integer));
aaaach->nrefs = 0;
aaaach->value=((Integer*)aaaaaq)->value + ((Integer*)aaaaar)->value;
void * aaaaci = NULL;
aaaaci = sum;
sum = aaaach;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaaci!= NULL) {
	(*(int *)aaaaci)--;
	if ((*(int *)aaaaci) == 0)
		x3free(aaaaci);
	aaaaci = NULL;
	if ((*(int *)aaaaci) < 0)
		printf("aaaaci ref count is smaller than 0\n");
	aaaaci = NULL;
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	aaaaaq = NULL;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
	aaaaaq = NULL;
}
if (aaaaar!= NULL) {
	(*(int *)aaaaar)--;
	if ((*(int *)aaaaar) == 0)
		x3free(aaaaar);
	aaaaar = NULL;
	if ((*(int *)aaaaar) < 0)
		printf("aaaaar ref count is smaller than 0\n");
	aaaaar = NULL;
}



void * aaaacj = NULL;
aaaacj = aaaaap;
aaaaap = aaaaao;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
}
if (aaaacj!= NULL) {
	(*(int *)aaaacj)--;
	if ((*(int *)aaaacj) == 0)
		x3free(aaaacj);
	aaaacj = NULL;
	if ((*(int *)aaaacj) < 0)
		printf("aaaacj ref count is smaller than 0\n");
	aaaacj = NULL;
}
if (aaaaao!= NULL) {
	(*(int *)aaaaao)--;
	if ((*(int *)aaaaao) == 0)
		x3free(aaaaao);
	aaaaao = NULL;
	if ((*(int *)aaaaao) < 0)
		printf("aaaaao ref count is smaller than 0\n");
	aaaaao = NULL;
}




void* aaaack;
aaaack = iterGetNext((void*) aaaaap);
void * aaaacl = NULL;
aaaacl = v;
v = aaaack;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacl!= NULL) {
	(*(int *)aaaacl)--;
	if ((*(int *)aaaacl) == 0)
		x3free(aaaacl);
	aaaacl = NULL;
	if ((*(int *)aaaacl) < 0)
		printf("aaaacl ref count is smaller than 0\n");
	aaaacl = NULL;
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) == 0)
		x3free(aaaaap);
	aaaaap = NULL;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0\n");
	aaaaap = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	v = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	sum = NULL;
}






String* aaaacm;
aaaacm = (String *) x3malloc(sizeof(String));
(aaaacm->isIter) = 0;
aaaacm->value = (char*) x3malloc(sizeof("20"));
(aaaacm->nrefs) = 1;
aaaacm->len = sizeof("20") - 1;
mystrcpy(aaaacm->value, "20");
void * aaaacn = NULL;
aaaacn = aaaaas;
aaaaas = aaaacm;
if (aaaaas!= NULL) {
	(*(int *)aaaaas)++;
}
if (aaaacn!= NULL) {
	(*(int *)aaaacn)--;
	if ((*(int *)aaaacn) == 0)
		x3free(aaaacn);
	aaaacn = NULL;
	if ((*(int *)aaaacn) < 0)
		printf("aaaacn ref count is smaller than 0\n");
	aaaacn = NULL;
}



Iterable* aaaaco;
aaaaco = (Iterable*) x3malloc(sizeof(Iterable));
aaaaco->isIter = 1;
aaaaco->nrefs = 0;
aaaaco->value = aaaaas;
aaaaco->additional = NULL;
aaaaco->next = NULL;
aaaaco->concat = NULL;
if (aaaaas!= NULL) {
	(*(int *)aaaaas)++;
}
if (aaaaco!= NULL) {
(*(int *)aaaaco)--;
}
return aaaaco;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
