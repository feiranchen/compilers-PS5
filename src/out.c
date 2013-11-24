#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * aaaaac = NULL;
void * aaaaad = NULL;
void * aaaaae = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * lst = NULL;
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
	if ((*(int *)aaaabc) == 0) {
		if ((*((int*)aaaabc+2)) == 1)
			freeStr(aaaabc);
		else if ((*((int*)aaaabc+1)) == 1)
			freeIter(aaaabc);
		else
			x3free(aaaabc);
	}
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
	if ((*(int *)aaaabe) == 0) {
		if ((*((int*)aaaabe+2)) == 1)
			freeStr(aaaabe);
		else if ((*((int*)aaaabe+1)) == 1)
			freeIter(aaaabe);
		else
			x3free(aaaabe);
	}
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
	if ((*(int *)aaaabg) == 0) {
		if ((*((int*)aaaabg+2)) == 1)
			freeStr(aaaabg);
		else if ((*((int*)aaaabg+1)) == 1)
			freeIter(aaaabg);
		else
			x3free(aaaabg);
	}
	aaaabg = NULL;
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0\n");
	if ((*(int *)aaaaac) == 0) {
		if ((*((int*)aaaaac+2)) == 1)
			freeStr(aaaaac);
		else if ((*((int*)aaaaac+1)) == 1)
			freeIter(aaaaac);
		else
			x3free(aaaaac);
	}
	aaaaac = NULL;
}



Integer* aaaabh;
aaaabh = (Integer*) x3malloc(sizeof(Integer));
(aaaabh->nrefs) = 0;
aaaabh->value = 3;
void * aaaabi = NULL;
aaaabi = aaaaag;
aaaaag = aaaabh;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaabi!= NULL) {
	(*(int *)aaaabi)--;
	if ((*(int *)aaaabi) < 0)
		printf("aaaabi ref count is smaller than 0\n");
	if ((*(int *)aaaabi) == 0) {
		if ((*((int*)aaaabi+2)) == 1)
			freeStr(aaaabi);
		else if ((*((int*)aaaabi+1)) == 1)
			freeIter(aaaabi);
		else
			x3free(aaaabi);
	}
	aaaabi = NULL;
}



Integer* aaaabj;
aaaabj = (Integer*) x3malloc(sizeof(Integer));
(aaaabj->nrefs) = 0;
aaaabj->value = 4;
void * aaaabk = NULL;
aaaabk = aaaaah;
aaaaah = aaaabj;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabk!= NULL) {
	(*(int *)aaaabk)--;
	if ((*(int *)aaaabk) < 0)
		printf("aaaabk ref count is smaller than 0\n");
	if ((*(int *)aaaabk) == 0) {
		if ((*((int*)aaaabk+2)) == 1)
			freeStr(aaaabk);
		else if ((*((int*)aaaabk+1)) == 1)
			freeIter(aaaabk);
		else
			x3free(aaaabk);
	}
	aaaabk = NULL;
}



Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 1;
aaaabo->value = aaaaah;
aaaabo->additional = NULL;
aaaabo->next = NULL;
aaaabo->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 1;
aaaabn->value = aaaaag;
aaaabn->additional = aaaabo;
aaaabn->next = NULL;
aaaabn->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabm;
aaaabm = (Iterable*) x3malloc(sizeof(Iterable));
aaaabm->isIter = 1;
aaaabm->nrefs = 1;
aaaabm->value = aaaaad;
aaaabm->additional = aaaabn;
aaaabm->next = NULL;
aaaabm->concat = NULL;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
Iterable* aaaabl;
aaaabl = (Iterable*) x3malloc(sizeof(Iterable));
aaaabl->isIter = 1;
aaaabl->nrefs = 1;
aaaabl->value = aaaaae;
aaaabl->additional = aaaabm;
aaaabl->next = NULL;
aaaabl->concat = NULL;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
aaaabl->nrefs = 0;
void * aaaabp = NULL;
aaaabp = lst;
lst = aaaabl;
if (lst!= NULL) {
	(*(int *)lst)++;
}
if (aaaabp!= NULL) {
	(*(int *)aaaabp)--;
	if ((*(int *)aaaabp) < 0)
		printf("aaaabp ref count is smaller than 0\n");
	if ((*(int *)aaaabp) == 0) {
		if ((*((int*)aaaabp+2)) == 1)
			freeStr(aaaabp);
		else if ((*((int*)aaaabp+1)) == 1)
			freeIter(aaaabp);
		else
			x3free(aaaabp);
	}
	aaaabp = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	if ((*(int *)aaaaae) == 0) {
		if ((*((int*)aaaaae+2)) == 1)
			freeStr(aaaaae);
		else if ((*((int*)aaaaae+1)) == 1)
			freeIter(aaaaae);
		else
			x3free(aaaaae);
	}
	aaaaae = NULL;
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
	if ((*(int *)aaaaad) == 0) {
		if ((*((int*)aaaaad+2)) == 1)
			freeStr(aaaaad);
		else if ((*((int*)aaaaad+1)) == 1)
			freeIter(aaaaad);
		else
			x3free(aaaaad);
	}
	aaaaad = NULL;
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0\n");
	if ((*(int *)aaaaag) == 0) {
		if ((*((int*)aaaaag+2)) == 1)
			freeStr(aaaaag);
		else if ((*((int*)aaaaag+1)) == 1)
			freeIter(aaaaag);
		else
			x3free(aaaaag);
	}
	aaaaag = NULL;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
	if ((*(int *)aaaaah) == 0) {
		if ((*((int*)aaaaah+2)) == 1)
			freeStr(aaaaah);
		else if ((*((int*)aaaaah+1)) == 1)
			freeIter(aaaaah);
		else
			x3free(aaaaah);
	}
	aaaaah = NULL;
}









Integer* aaaabq;
aaaabq = (Integer*) x3malloc(sizeof(Integer));
(aaaabq->nrefs) = 0;
aaaabq->value = 0;
void * aaaabr = NULL;
aaaabr = sum;
sum = aaaabq;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaabr!= NULL) {
	(*(int *)aaaabr)--;
	if ((*(int *)aaaabr) < 0)
		printf("aaaabr ref count is smaller than 0\n");
	if ((*(int *)aaaabr) == 0) {
		if ((*((int*)aaaabr+2)) == 1)
			freeStr(aaaabr);
		else if ((*((int*)aaaabr+1)) == 1)
			freeIter(aaaabr);
		else
			x3free(aaaabr);
	}
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
	if ((*(int *)aaaabs) < 0)
		printf("aaaabs ref count is smaller than 0\n");
	if ((*(int *)aaaabs) == 0) {
		if ((*((int*)aaaabs+2)) == 1)
			freeStr(aaaabs);
		else if ((*((int*)aaaabs+1)) == 1)
			freeIter(aaaabs);
		else
			x3free(aaaabs);
	}
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
	if ((*(int *)aaaabt) < 0)
		printf("aaaabt ref count is smaller than 0\n");
	if ((*(int *)aaaabt) == 0) {
		if ((*((int*)aaaabt+2)) == 1)
			freeStr(aaaabt);
		else if ((*((int*)aaaabt+1)) == 1)
			freeIter(aaaabt);
		else
			x3free(aaaabt);
	}
	aaaabt = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaal = NULL;
		aaaaal = (Iterable *)v;
		if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
void * aaaabu = NULL;
aaaabu = v;
		v = aaaaal->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaabu!= NULL) {
	(*(int *)aaaabu)--;
	if ((*(int *)aaaabu) < 0)
		printf("aaaabu ref count is smaller than 0\n");
	if ((*(int *)aaaabu) == 0) {
		if ((*((int*)aaaabu+2)) == 1)
			freeStr(aaaabu);
		else if ((*((int*)aaaabu+1)) == 1)
			freeIter(aaaabu);
		else
			x3free(aaaabu);
	}
	aaaabu = NULL;
}
		









Integer* aaaabv;
aaaabv  = (Integer*) x3malloc(sizeof(Integer));
aaaabv->nrefs = 0;
aaaabv->value=((Integer*)sum)->value + ((Integer*)v)->value;
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
	if ((*(int *)aaaabw) == 0) {
		if ((*((int*)aaaabw+2)) == 1)
			freeStr(aaaabw);
		else if ((*((int*)aaaabw+1)) == 1)
			freeIter(aaaabw);
		else
			x3free(aaaabw);
	}
	aaaabw = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0) {
		if ((*((int*)v+2)) == 1)
			freeStr(v);
		else if ((*((int*)v+1)) == 1)
			freeIter(v);
		else
			x3free(v);
	}
	v = NULL;
}




void* aaaabx;
aaaabx = iterGetNext((void*) aaaaal);
void * aaaaby = NULL;
aaaaby = v;
v = aaaabx;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaaby!= NULL) {
	(*(int *)aaaaby)--;
	if ((*(int *)aaaaby) < 0)
		printf("aaaaby ref count is smaller than 0\n");
	if ((*(int *)aaaaby) == 0) {
		if ((*((int*)aaaaby+2)) == 1)
			freeStr(aaaaby);
		else if ((*((int*)aaaaby+1)) == 1)
			freeIter(aaaaby);
		else
			x3free(aaaaby);
	}
	aaaaby = NULL;
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
	if ((*(int *)aaaaal) == 0) {
		if ((*((int*)aaaaal+2)) == 1)
			freeStr(aaaaal);
		else if ((*((int*)aaaaal+1)) == 1)
			freeIter(aaaaal);
		else
			x3free(aaaaal);
	}
	aaaaal = NULL;
}
	}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0) {
		if ((*((int*)v+2)) == 1)
			freeStr(v);
		else if ((*((int*)v+1)) == 1)
			freeIter(v);
		else
			x3free(v);
	}
	v = NULL;
}






void * aaaabz = NULL;
aaaabz = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
	if ((*(int *)aaaabz) == 0) {
		if ((*((int*)aaaabz+2)) == 1)
			freeStr(aaaabz);
		else if ((*((int*)aaaabz+1)) == 1)
			freeIter(aaaabz);
		else
			x3free(aaaabz);
	}
	aaaabz = NULL;
}
if (lst!= NULL) {
	(*(int *)lst)--;
	if ((*(int *)lst) < 0)
		printf("lst ref count is smaller than 0\n");
	if ((*(int *)lst) == 0) {
		if ((*((int*)lst+2)) == 1)
			freeStr(lst);
		else if ((*((int*)lst+1)) == 1)
			freeIter(lst);
		else
			x3free(lst);
	}
	lst = NULL;
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
	if ((*(int *)aaaaca) < 0)
		printf("aaaaca ref count is smaller than 0\n");
	if ((*(int *)aaaaca) == 0) {
		if ((*((int*)aaaaca+2)) == 1)
			freeStr(aaaaca);
		else if ((*((int*)aaaaca+1)) == 1)
			freeIter(aaaaca);
		else
			x3free(aaaaca);
	}
	aaaaca = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaat = NULL;
		aaaaat = (Iterable *)v;
		if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
void * aaaacb = NULL;
aaaacb = v;
		v = aaaaat->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaacb!= NULL) {
	(*(int *)aaaacb)--;
	if ((*(int *)aaaacb) < 0)
		printf("aaaacb ref count is smaller than 0\n");
	if ((*(int *)aaaacb) == 0) {
		if ((*((int*)aaaacb+2)) == 1)
			freeStr(aaaacb);
		else if ((*((int*)aaaacb+1)) == 1)
			freeIter(aaaacb);
		else
			x3free(aaaacb);
	}
	aaaacb = NULL;
}
		






Integer* aaaacc;
aaaacc  = (Integer*) x3malloc(sizeof(Integer));
aaaacc->nrefs = 0;
aaaacc->value=((Integer*)sum)->value + ((Integer*)v)->value;
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
	if ((*(int *)aaaacd) == 0) {
		if ((*((int*)aaaacd+2)) == 1)
			freeStr(aaaacd);
		else if ((*((int*)aaaacd+1)) == 1)
			freeIter(aaaacd);
		else
			x3free(aaaacd);
	}
	aaaacd = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0) {
		if ((*((int*)v+2)) == 1)
			freeStr(v);
		else if ((*((int*)v+1)) == 1)
			freeIter(v);
		else
			x3free(v);
	}
	v = NULL;
}




void* aaaace;
aaaace = iterGetNext((void*) aaaaat);
void * aaaacf = NULL;
aaaacf = v;
v = aaaace;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacf!= NULL) {
	(*(int *)aaaacf)--;
	if ((*(int *)aaaacf) < 0)
		printf("aaaacf ref count is smaller than 0\n");
	if ((*(int *)aaaacf) == 0) {
		if ((*((int*)aaaacf+2)) == 1)
			freeStr(aaaacf);
		else if ((*((int*)aaaacf+1)) == 1)
			freeIter(aaaacf);
		else
			x3free(aaaacf);
	}
	aaaacf = NULL;
}
if (aaaaat!= NULL) {
	(*(int *)aaaaat)--;
	if ((*(int *)aaaaat) < 0)
		printf("aaaaat ref count is smaller than 0\n");
	if ((*(int *)aaaaat) == 0) {
		if ((*((int*)aaaaat+2)) == 1)
			freeStr(aaaaat);
		else if ((*((int*)aaaaat+1)) == 1)
			freeIter(aaaaat);
		else
			x3free(aaaaat);
	}
	aaaaat = NULL;
}
	}
if (sum!= NULL) {
	(*(int *)sum)--;
	if ((*(int *)sum) < 0)
		printf("sum ref count is smaller than 0\n");
	if ((*(int *)sum) == 0) {
		if ((*((int*)sum+2)) == 1)
			freeStr(sum);
		else if ((*((int*)sum+1)) == 1)
			freeIter(sum);
		else
			x3free(sum);
	}
	sum = NULL;
}
if (v!= NULL) {
	(*(int *)v)--;
	if ((*(int *)v) < 0)
		printf("v ref count is smaller than 0\n");
	if ((*(int *)v) == 0) {
		if ((*((int*)v+2)) == 1)
			freeStr(v);
		else if ((*((int*)v+1)) == 1)
			freeIter(v);
		else
			x3free(v);
	}
	v = NULL;
}






String* aaaacg;
aaaacg = (String *) x3malloc(sizeof(String));
(aaaacg->isIter) = 0;
aaaacg->value = (char*) x3malloc(sizeof("20"));
(aaaacg->nrefs) = 0;
(aaaacg->isStr) = 1;
aaaacg->len = sizeof("20") - 1;
mystrcpy(aaaacg->value, "20");
void * aaaach = NULL;
aaaach = aaaaba;
aaaaba = aaaacg;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
if (aaaach!= NULL) {
	(*(int *)aaaach)--;
	if ((*(int *)aaaach) < 0)
		printf("aaaach ref count is smaller than 0\n");
	if ((*(int *)aaaach) == 0) {
		if ((*((int*)aaaach+2)) == 1)
			freeStr(aaaach);
		else if ((*((int*)aaaach+1)) == 1)
			freeIter(aaaach);
		else
			x3free(aaaach);
	}
	aaaach = NULL;
}



Iterable* aaaaci;
aaaaci = (Iterable*) x3malloc(sizeof(Iterable));
aaaaci->isIter = 1;
aaaaci->nrefs = 1;
aaaaci->value = aaaaba;
aaaaci->additional = NULL;
aaaaci->next = NULL;
aaaaci->concat = NULL;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
aaaaci->nrefs = 0;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	if ((*(int *)aaaaba) == 0) {
		if ((*((int*)aaaaba+2)) == 1)
			freeStr(aaaaba);
		else if ((*((int*)aaaaba+1)) == 1)
			freeIter(aaaaba);
		else
			x3free(aaaaba);
	}
	aaaaba = NULL;
}
return aaaaci;
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
