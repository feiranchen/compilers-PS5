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
void * aaaaba = NULL;






Integer* aaaabb;
aaaabb = (Integer*) x3malloc(sizeof(Integer));
(aaaabb->nrefs) = 0;
aaaabb->value = 1;
void * aaaabc = NULL;
aaaabc = aaaaac;
aaaaac = aaaabb;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaabc!= NULL) {
	(*(int *)aaaabc)--;
	if ((*(int *)aaaabc) < 0)
		printf("aaaabc ref count is smaller than 0\n");
	if ((*(int *)aaaabc) == 0)
		x3free(aaaabc);
	aaaabc = NULL;
}



Integer* aaaabd;
aaaabd = (Integer*) x3malloc(sizeof(Integer));
(aaaabd->nrefs) = 0;
aaaabd->value = 2;
void * aaaabe = NULL;
aaaabe = aaaaad;
aaaaad = aaaabd;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaabe!= NULL) {
	(*(int *)aaaabe)--;
	if ((*(int *)aaaabe) < 0)
		printf("aaaabe ref count is smaller than 0\n");
	if ((*(int *)aaaabe) == 0)
		x3free(aaaabe);
	aaaabe = NULL;
}




Integer* aaaabf;
aaaabf  = (Integer*) x3malloc(sizeof(Integer));
aaaabf->nrefs = 0;
aaaabf->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
void * aaaabg = NULL;
aaaabg = aaaaae;
aaaaae = aaaabf;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaabg!= NULL) {
	(*(int *)aaaabg)--;
	if ((*(int *)aaaabg) < 0)
		printf("aaaabg ref count is smaller than 0\n");
	if ((*(int *)aaaabg) == 0)
		x3free(aaaabg);
	aaaabg = NULL;
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0\n");
	if ((*(int *)aaaaac) == 0)
		x3free(aaaaac);
	aaaaac = NULL;
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	aaaaad = NULL;
}



void * aaaabh = NULL;
aaaabh = aaaaaf;
aaaaaf = aaaaad;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaabh!= NULL) {
	(*(int *)aaaabh)--;
	if ((*(int *)aaaabh) < 0)
		printf("aaaabh ref count is smaller than 0\n");
	if ((*(int *)aaaabh) == 0)
		x3free(aaaabh);
	aaaabh = NULL;
}



Integer* aaaabi;
aaaabi = (Integer*) x3malloc(sizeof(Integer));
(aaaabi->nrefs) = 0;
aaaabi->value = 3;
void * aaaabj = NULL;
aaaabj = aaaaag;
aaaaag = aaaabi;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaabj!= NULL) {
	(*(int *)aaaabj)--;
	if ((*(int *)aaaabj) < 0)
		printf("aaaabj ref count is smaller than 0\n");
	if ((*(int *)aaaabj) == 0)
		x3free(aaaabj);
	aaaabj = NULL;
}



Integer* aaaabk;
aaaabk = (Integer*) x3malloc(sizeof(Integer));
(aaaabk->nrefs) = 0;
aaaabk->value = 4;
void * aaaabl = NULL;
aaaabl = aaaaah;
aaaaah = aaaabk;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabl!= NULL) {
	(*(int *)aaaabl)--;
	if ((*(int *)aaaabl) < 0)
		printf("aaaabl ref count is smaller than 0\n");
	if ((*(int *)aaaabl) == 0)
		x3free(aaaabl);
	aaaabl = NULL;
}



Iterable* aaaabp;
aaaabp = (Iterable*) x3malloc(sizeof(Iterable));
aaaabp->isIter = 1;
aaaabp->nrefs = 0;
aaaabp->value = aaaaah;
aaaabp->additional = NULL;
aaaabp->next = NULL;
aaaabp->concat = NULL;
Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 0;
aaaabo->value = aaaaag;
aaaabo->additional = aaaabp;
aaaabo->next = NULL;
aaaabo->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 0;
aaaabn->value = aaaaad;
aaaabn->additional = aaaabo;
aaaabn->next = NULL;
aaaabn->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabm;
aaaabm = (Iterable*) x3malloc(sizeof(Iterable));
aaaabm->isIter = 1;
aaaabm->nrefs = 0;
aaaabm->value = aaaaae;
aaaabm->additional = aaaabn;
aaaabm->next = NULL;
aaaabm->concat = NULL;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
void * aaaabq = NULL;
aaaabq = lst;
lst = aaaabm;
if (lst!= NULL) {
	(*(int *)lst)++;
}
if (aaaabq!= NULL) {
	(*(int *)aaaabq)--;
	if ((*(int *)aaaabq) < 0)
		printf("aaaabq ref count is smaller than 0\n");
	if ((*(int *)aaaabq) == 0)
		x3free(aaaabq);
	aaaabq = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	aaaaaf = NULL;
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0\n");
	if ((*(int *)aaaaag) == 0)
		x3free(aaaaag);
	aaaaag = NULL;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	aaaaah = NULL;
}
if (lst!= NULL) {
	(*(int *)lst)--;
	if ((*(int *)lst) < 0)
		printf("lst ref count is smaller than 0\n");
	if ((*(int *)lst) == 0)
		freeIter(lst);
	lst = NULL;
}






void * aaaabr = NULL;
aaaabr = aaaaai;
aaaaai = aaaaac;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabr!= NULL) {
	(*(int *)aaaabr)--;
	if ((*(int *)aaaabr) < 0)
		printf("aaaabr ref count is smaller than 0\n");
	if ((*(int *)aaaabr) == 0)
		x3free(aaaabr);
	aaaabr = NULL;
}



void * aaaabs = NULL;
aaaabs = aaaaaj;
aaaaaj = aaaaah;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaabs!= NULL) {
	(*(int *)aaaabs)--;
	if ((*(int *)aaaabs) < 0)
		printf("aaaabs ref count is smaller than 0\n");
	if ((*(int *)aaaabs) == 0)
		x3free(aaaabs);
	aaaabs = NULL;
}



Iterable* aaaabt;
aaaabt = (Iterable*) x3malloc(sizeof(Iterable));
aaaabt->isIter = 1;
aaaabt->nrefs = 0;
aaaabt->value = aaaaac;
aaaabt->additional = aaaaah;
aaaabt->next = &Integer_through;
aaaabt->concat = NULL;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
void * aaaabu = NULL;
aaaabu = lst2;
lst2 = checkIter(aaaabt);
if (lst2!= NULL) {
	(*(int *)lst2)++;
}
if (aaaabu!= NULL) {
	(*(int *)aaaabu)--;
	if ((*(int *)aaaabu) < 0)
		printf("aaaabu ref count is smaller than 0\n");
	if ((*(int *)aaaabu) == 0)
		x3free(aaaabu);
	aaaabu = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
	if ((*(int *)aaaaaj) == 0)
		x3free(aaaaaj);
	aaaaaj = NULL;
}
if (lst2!= NULL) {
	(*(int *)lst2)--;
	if ((*(int *)lst2) < 0)
		printf("lst2 ref count is smaller than 0\n");
	if ((*(int *)lst2) == 0)
		freeIter(lst2);
	lst2 = NULL;
}






Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
(aaaabv->nrefs) = 0;
aaaabv->value = 0;
void * aaaabw = NULL;
aaaabw = sum;
sum = aaaabv;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabw!= NULL) {
	(*(int *)aaaabw)--;
	if ((*(int *)aaaabw) < 0)
		printf("aaaabw ref count is smaller than 0\n");
	if ((*(int *)aaaabw) == 0)
		x3free(aaaabw);
	aaaabw = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
}






void * aaaabx = NULL;
aaaabx = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabx!= NULL) {
	(*(int *)aaaabx)--;
	if ((*(int *)aaaabx) < 0)
		printf("aaaabx ref count is smaller than 0\n");
	if ((*(int *)aaaabx) == 0)
		x3free(aaaabx);
	aaaabx = NULL;
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaaby = NULL;
aaaaby = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaaby!= NULL) {
	(*(int *)aaaaby)--;
	if ((*(int *)aaaaby) < 0)
		printf("aaaaby ref count is smaller than 0\n");
	if ((*(int *)aaaaby) == 0)
		x3free(aaaaby);
	aaaaby = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaal = NULL;
		aaaaal = (Iterable *)v;
		if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
void * aaaabz = NULL;
aaaabz = v;
		v = aaaaal->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
	if ((*(int *)aaaabz) == 0)
		x3free(aaaabz);
	aaaabz = NULL;
}
		


void * aaaaao = NULL;
void * aaaaap = NULL;
void * aaaaan = NULL;






void * aaaaca = NULL;
aaaaca = aaaaao;
aaaaao = sum;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
}
if (aaaaca!= NULL) {
	(*(int *)aaaaca)--;
	if ((*(int *)aaaaca) < 0)
		printf("aaaaca ref count is smaller than 0\n");
	if ((*(int *)aaaaca) == 0)
		x3free(aaaaca);
	aaaaca = NULL;
}



void * aaaacb = NULL;
aaaacb = aaaaap;
aaaaap = v;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
}
if (aaaacb!= NULL) {
	(*(int *)aaaacb)--;
	if ((*(int *)aaaacb) < 0)
		printf("aaaacb ref count is smaller than 0\n");
	if ((*(int *)aaaacb) == 0)
		x3free(aaaacb);
	aaaacb = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
}




Integer* aaaacc;
aaaacc  = (Integer*) x3malloc(sizeof(Integer));
aaaacc->nrefs = 0;
aaaacc->value=((Integer*)aaaaao)->value + ((Integer*)aaaaap)->value;
void * aaaacd = NULL;
aaaacd = sum;
sum = aaaacc;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaacd!= NULL) {
	(*(int *)aaaacd)--;
	if ((*(int *)aaaacd) < 0)
		printf("aaaacd ref count is smaller than 0\n");
	if ((*(int *)aaaacd) == 0)
		x3free(aaaacd);
	aaaacd = NULL;
}
if (aaaaao!= NULL) {
	(*(int *)aaaaao)--;
	if ((*(int *)aaaaao) < 0)
		printf("aaaaao ref count is smaller than 0\n");
	if ((*(int *)aaaaao) == 0)
		x3free(aaaaao);
	aaaaao = NULL;
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0\n");
	if ((*(int *)aaaaap) == 0)
		x3free(aaaaap);
	aaaaap = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
}



void * aaaace = NULL;
aaaace = aaaaan;
aaaaan = aaaaal;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
}
if (aaaace!= NULL) {
	(*(int *)aaaace)--;
	if ((*(int *)aaaace) < 0)
		printf("aaaace ref count is smaller than 0\n");
	if ((*(int *)aaaace) == 0)
		x3free(aaaace);
	aaaace = NULL;
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
	if ((*(int *)aaaaal) == 0)
		x3free(aaaaal);
	aaaaal = NULL;
}




void* aaaacf;
aaaacf = iterGetNext((void*) aaaaan);
void * aaaacg = NULL;
aaaacg = v;
v = aaaacf;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacg!= NULL) {
	(*(int *)aaaacg)--;
	if ((*(int *)aaaacg) < 0)
		printf("aaaacg ref count is smaller than 0\n");
	if ((*(int *)aaaacg) == 0)
		x3free(aaaacg);
	aaaacg = NULL;
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0\n");
	if ((*(int *)aaaaan) == 0)
		x3free(aaaaan);
	aaaaan = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
}






void * aaaach = NULL;
aaaach = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaach!= NULL) {
	(*(int *)aaaach)--;
	if ((*(int *)aaaach) < 0)
		printf("aaaach ref count is smaller than 0\n");
	if ((*(int *)aaaach) == 0)
		x3free(aaaach);
	aaaach = NULL;
}
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaaci = NULL;
aaaaci = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaaci!= NULL) {
	(*(int *)aaaaci)--;
	if ((*(int *)aaaaci) < 0)
		printf("aaaaci ref count is smaller than 0\n");
	if ((*(int *)aaaaci) == 0)
		x3free(aaaaci);
	aaaaci = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaat = NULL;
		aaaaat = (Iterable *)v;
		if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
void * aaaacj = NULL;
aaaacj = v;
		v = aaaaat->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaacj!= NULL) {
	(*(int *)aaaacj)--;
	if ((*(int *)aaaacj) < 0)
		printf("aaaacj ref count is smaller than 0\n");
	if ((*(int *)aaaacj) == 0)
		x3free(aaaacj);
	aaaacj = NULL;
}
		


void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaav = NULL;



void * aaaack = NULL;
aaaack = aaaaaw;
aaaaaw = sum;
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)++;
}
if (aaaack!= NULL) {
	(*(int *)aaaack)--;
	if ((*(int *)aaaack) < 0)
		printf("aaaack ref count is smaller than 0\n");
	if ((*(int *)aaaack) == 0)
		x3free(aaaack);
	aaaack = NULL;
}



void * aaaacl = NULL;
aaaacl = aaaaax;
aaaaax = v;
if (aaaaax!= NULL) {
	(*(int *)aaaaax)++;
}
if (aaaacl!= NULL) {
	(*(int *)aaaacl)--;
	if ((*(int *)aaaacl) < 0)
		printf("aaaacl ref count is smaller than 0\n");
	if ((*(int *)aaaacl) == 0)
		x3free(aaaacl);
	aaaacl = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
}




Integer* aaaacm;
aaaacm  = (Integer*) x3malloc(sizeof(Integer));
aaaacm->nrefs = 0;
aaaacm->value=((Integer*)aaaaaw)->value + ((Integer*)aaaaax)->value;
void * aaaacn = NULL;
aaaacn = sum;
sum = aaaacm;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaacn!= NULL) {
	(*(int *)aaaacn)--;
	if ((*(int *)aaaacn) < 0)
		printf("aaaacn ref count is smaller than 0\n");
	if ((*(int *)aaaacn) == 0)
		x3free(aaaacn);
	aaaacn = NULL;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	aaaaaw = NULL;
}
if (aaaaax!= NULL) {
	(*(int *)aaaaax)--;
	if ((*(int *)aaaaax) < 0)
		printf("aaaaax ref count is smaller than 0\n");
	if ((*(int *)aaaaax) == 0)
		x3free(aaaaax);
	aaaaax = NULL;
}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	if ((*(int *)sum) == 0)
		x3free(sum);
	sum = NULL;
}



void * aaaaco = NULL;
aaaaco = aaaaav;
aaaaav = aaaaat;
if (aaaaav!= NULL) {
	(*(int *)aaaaav)++;
}
if (aaaaco!= NULL) {
	(*(int *)aaaaco)--;
	if ((*(int *)aaaaco) < 0)
		printf("aaaaco ref count is smaller than 0\n");
	if ((*(int *)aaaaco) == 0)
		x3free(aaaaco);
	aaaaco = NULL;
}
if (aaaaat!= NULL) {
	(*(int *)aaaaat)--;
	if ((*(int *)aaaaat) < 0)
		printf("aaaaat ref count is smaller than 0\n");
	if ((*(int *)aaaaat) == 0)
		x3free(aaaaat);
	aaaaat = NULL;
}




void* aaaacp;
aaaacp = iterGetNext((void*) aaaaav);
void * aaaacq = NULL;
aaaacq = v;
v = aaaacp;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacq!= NULL) {
	(*(int *)aaaacq)--;
	if ((*(int *)aaaacq) < 0)
		printf("aaaacq ref count is smaller than 0\n");
	if ((*(int *)aaaacq) == 0)
		x3free(aaaacq);
	aaaacq = NULL;
}
if (aaaaav!= NULL) {
	(*(int *)aaaaav)--;
	if ((*(int *)aaaaav) < 0)
		printf("aaaaav ref count is smaller than 0\n");
	if ((*(int *)aaaaav) == 0)
		x3free(aaaaav);
	aaaaav = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0)
		x3free(v);
	v = NULL;
}






String* aaaacr;
aaaacr = (String *) x3malloc(sizeof(String));
(aaaacr->isIter) = 0;
aaaacr->value = (char*) x3malloc(sizeof("20"));
(aaaacr->nrefs) = 0;
(aaaacr->isStr) = 1;
aaaacr->len = sizeof("20") - 1;
mystrcpy(aaaacr->value, "20");
void * aaaacs = NULL;
aaaacs = aaaaba;
aaaaba = aaaacr;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
if (aaaacs!= NULL) {
	(*(int *)aaaacs)--;
	if ((*(int *)aaaacs) < 0)
		printf("aaaacs ref count is smaller than 0\n");
	if ((*(int *)aaaacs) == 0)
		x3free(aaaacs);
	aaaacs = NULL;
}



Iterable* aaaact;
aaaact = (Iterable*) x3malloc(sizeof(Iterable));
aaaact->isIter = 1;
aaaact->nrefs = 0;
aaaact->value = aaaaba;
aaaact->additional = NULL;
aaaact->next = NULL;
aaaact->concat = NULL;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	if ((*(int *)aaaaba) == 0)
		freeStr(aaaaba);
	aaaaba = NULL;
}
return aaaact;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
ourMain->nrefs++;
temp = ourMain;
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
