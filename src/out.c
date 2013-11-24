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



Integer* aaaabh;
aaaabh = (Integer*) x3malloc(sizeof(Integer));
(aaaabh->nrefs) = 0;
aaaabh->value = 2;
void * aaaabi = NULL;
aaaabi = aaaaaf;
aaaaaf = aaaabh;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
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
aaaabj->value = 3;
void * aaaabk = NULL;
aaaabk = aaaaag;
aaaaag = aaaabj;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
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



Integer* aaaabl;
aaaabl = (Integer*) x3malloc(sizeof(Integer));
(aaaabl->nrefs) = 0;
aaaabl->value = 4;
void * aaaabm = NULL;
aaaabm = aaaaah;
aaaaah = aaaabl;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabm!= NULL) {
	(*(int *)aaaabm)--;
	if ((*(int *)aaaabm) < 0)
		printf("aaaabm ref count is smaller than 0\n");
	if ((*(int *)aaaabm) == 0) {
		if ((*((int*)aaaabm+2)) == 1)
			freeStr(aaaabm);
		else if ((*((int*)aaaabm+1)) == 1)
			freeIter(aaaabm);
		else
			x3free(aaaabm);
	}
	aaaabm = NULL;
}



Iterable* aaaabq;
aaaabq = (Iterable*) x3malloc(sizeof(Iterable));
aaaabq->isIter = 1;
aaaabq->nrefs = 1;
aaaabq->value = aaaaah;
aaaabq->additional = NULL;
aaaabq->next = NULL;
aaaabq->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabp;
aaaabp = (Iterable*) x3malloc(sizeof(Iterable));
aaaabp->isIter = 1;
aaaabp->nrefs = 1;
aaaabp->value = aaaaag;
aaaabp->additional = aaaabq;
aaaabp->next = NULL;
aaaabp->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 1;
aaaabo->value = aaaaaf;
aaaabo->additional = aaaabp;
aaaabo->next = NULL;
aaaabo->concat = NULL;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 1;
aaaabn->value = aaaaae;
aaaabn->additional = aaaabo;
aaaabn->next = NULL;
aaaabn->concat = NULL;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
aaaabn->nrefs = 0;
void * aaaabr = NULL;
aaaabr = lst;
lst = aaaabn;
if (lst!= NULL) {
	(*(int *)lst)++;
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
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
	if ((*(int *)aaaaaf) == 0) {
		if ((*((int*)aaaaaf+2)) == 1)
			freeStr(aaaaaf);
		else if ((*((int*)aaaaaf+1)) == 1)
			freeIter(aaaaaf);
		else
			x3free(aaaaaf);
	}
	aaaaaf = NULL;
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






Integer* aaaabs;
aaaabs = (Integer*) x3malloc(sizeof(Integer));
(aaaabs->nrefs) = 0;
aaaabs->value = 1;
void * aaaabt = NULL;
aaaabt = aaaaai;
aaaaai = aaaabs;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
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



Integer* aaaabu;
aaaabu = (Integer*) x3malloc(sizeof(Integer));
(aaaabu->nrefs) = 0;
aaaabu->value = 4;
void * aaaabv = NULL;
aaaabv = aaaaaj;
aaaaaj = aaaabu;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaabv!= NULL) {
	(*(int *)aaaabv)--;
	if ((*(int *)aaaabv) < 0)
		printf("aaaabv ref count is smaller than 0\n");
	if ((*(int *)aaaabv) == 0) {
		if ((*((int*)aaaabv+2)) == 1)
			freeStr(aaaabv);
		else if ((*((int*)aaaabv+1)) == 1)
			freeIter(aaaabv);
		else
			x3free(aaaabv);
	}
	aaaabv = NULL;
}



Iterable* aaaabw;
aaaabw = (Iterable*) x3malloc(sizeof(Iterable));
aaaabw->isIter = 1;
aaaabw->nrefs = 0;
aaaabw->value = aaaaai;
aaaabw->additional = aaaaaj;
aaaabw->next = &Integer_through;
aaaabw->concat = NULL;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
void * aaaabx = NULL;
aaaabx = lst2;
lst2 = checkIter(aaaabw);
if (lst2!= NULL) {
	(*(int *)lst2)++;
}
if (aaaabx!= NULL) {
	(*(int *)aaaabx)--;
	if ((*(int *)aaaabx) < 0)
		printf("aaaabx ref count is smaller than 0\n");
	if ((*(int *)aaaabx) == 0) {
		if ((*((int*)aaaabx+2)) == 1)
			freeStr(aaaabx);
		else if ((*((int*)aaaabx+1)) == 1)
			freeIter(aaaabx);
		else
			x3free(aaaabx);
	}
	aaaabx = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	if ((*(int *)aaaaai) == 0) {
		if ((*((int*)aaaaai+2)) == 1)
			freeStr(aaaaai);
		else if ((*((int*)aaaaai+1)) == 1)
			freeIter(aaaaai);
		else
			x3free(aaaaai);
	}
	aaaaai = NULL;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
	if ((*(int *)aaaaaj) == 0) {
		if ((*((int*)aaaaaj+2)) == 1)
			freeStr(aaaaaj);
		else if ((*((int*)aaaaaj+1)) == 1)
			freeIter(aaaaaj);
		else
			x3free(aaaaaj);
	}
	aaaaaj = NULL;
}
if (lst2!= NULL) {
	(*(int *)lst2)--;
	if ((*(int *)lst2) < 0)
		printf("lst2 ref count is smaller than 0\n");
	if ((*(int *)lst2) == 0) {
		if ((*((int*)lst2+2)) == 1)
			freeStr(lst2);
		else if ((*((int*)lst2+1)) == 1)
			freeIter(lst2);
		else
			x3free(lst2);
	}
	lst2 = NULL;
}






Integer* aaaaby;
aaaaby = (Integer*) x3malloc(sizeof(Integer));
(aaaaby->nrefs) = 0;
aaaaby->value = 0;
void * aaaabz = NULL;
aaaabz = sum;
sum = aaaaby;
if (sum!= NULL) {
	(*(int *)sum)++;
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






void * aaaaca = NULL;
aaaaca = v;
v = lst;
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
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaacb = NULL;
aaaacb = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
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
		}
	}
	while (v!=NULL) {
Iterable * aaaaal = NULL;
		aaaaal = (Iterable *)v;
		if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
void * aaaacc = NULL;
aaaacc = v;
		v = aaaaal->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaacc!= NULL) {
	(*(int *)aaaacc)--;
	if ((*(int *)aaaacc) < 0)
		printf("aaaacc ref count is smaller than 0\n");
	if ((*(int *)aaaacc) == 0) {
		if ((*((int*)aaaacc+2)) == 1)
			freeStr(aaaacc);
		else if ((*((int*)aaaacc+1)) == 1)
			freeIter(aaaacc);
		else
			x3free(aaaacc);
	}
	aaaacc = NULL;
}
		


void * aaaaao = NULL;
void * aaaaap = NULL;
void * aaaaan = NULL;






void * aaaacd = NULL;
aaaacd = aaaaao;
aaaaao = sum;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
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



void * aaaace = NULL;
aaaace = aaaaap;
aaaaap = v;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
}
if (aaaace!= NULL) {
	(*(int *)aaaace)--;
	if ((*(int *)aaaace) < 0)
		printf("aaaace ref count is smaller than 0\n");
	if ((*(int *)aaaace) == 0) {
		if ((*((int*)aaaace+2)) == 1)
			freeStr(aaaace);
		else if ((*((int*)aaaace+1)) == 1)
			freeIter(aaaace);
		else
			x3free(aaaace);
	}
	aaaace = NULL;
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




Integer* aaaacf;
aaaacf  = (Integer*) x3malloc(sizeof(Integer));
aaaacf->nrefs = 0;
aaaacf->value=((Integer*)aaaaao)->value + ((Integer*)aaaaap)->value;
void * aaaacg = NULL;
aaaacg = sum;
sum = aaaacf;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaacg!= NULL) {
	(*(int *)aaaacg)--;
	if ((*(int *)aaaacg) < 0)
		printf("aaaacg ref count is smaller than 0\n");
	if ((*(int *)aaaacg) == 0) {
		if ((*((int*)aaaacg+2)) == 1)
			freeStr(aaaacg);
		else if ((*((int*)aaaacg+1)) == 1)
			freeIter(aaaacg);
		else
			x3free(aaaacg);
	}
	aaaacg = NULL;
}
if (aaaaao!= NULL) {
	(*(int *)aaaaao)--;
	if ((*(int *)aaaaao) < 0)
		printf("aaaaao ref count is smaller than 0\n");
	if ((*(int *)aaaaao) == 0) {
		if ((*((int*)aaaaao+2)) == 1)
			freeStr(aaaaao);
		else if ((*((int*)aaaaao+1)) == 1)
			freeIter(aaaaao);
		else
			x3free(aaaaao);
	}
	aaaaao = NULL;
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0\n");
	if ((*(int *)aaaaap) == 0) {
		if ((*((int*)aaaaap+2)) == 1)
			freeStr(aaaaap);
		else if ((*((int*)aaaaap+1)) == 1)
			freeIter(aaaaap);
		else
			x3free(aaaaap);
	}
	aaaaap = NULL;
}



void * aaaach = NULL;
aaaach = aaaaan;
aaaaan = aaaaal;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
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




void* aaaaci;
aaaaci = iterGetNext((void*) aaaaan);
void * aaaacj = NULL;
aaaacj = v;
v = aaaaci;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacj!= NULL) {
	(*(int *)aaaacj)--;
	if ((*(int *)aaaacj) < 0)
		printf("aaaacj ref count is smaller than 0\n");
	if ((*(int *)aaaacj) == 0) {
		if ((*((int*)aaaacj+2)) == 1)
			freeStr(aaaacj);
		else if ((*((int*)aaaacj+1)) == 1)
			freeIter(aaaacj);
		else
			x3free(aaaacj);
	}
	aaaacj = NULL;
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0\n");
	if ((*(int *)aaaaan) == 0) {
		if ((*((int*)aaaaan+2)) == 1)
			freeStr(aaaaan);
		else if ((*((int*)aaaaan+1)) == 1)
			freeIter(aaaaan);
		else
			x3free(aaaaan);
	}
	aaaaan = NULL;
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






void * aaaack = NULL;
aaaack = v;
v = lst;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaack!= NULL) {
	(*(int *)aaaack)--;
	if ((*(int *)aaaack) < 0)
		printf("aaaack ref count is smaller than 0\n");
	if ((*(int *)aaaack) == 0) {
		if ((*((int*)aaaack+2)) == 1)
			freeStr(aaaack);
		else if ((*((int*)aaaack+1)) == 1)
			freeIter(aaaack);
		else
			x3free(aaaack);
	}
	aaaack = NULL;
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
void * aaaacl = NULL;
aaaacl = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaacl!= NULL) {
	(*(int *)aaaacl)--;
	if ((*(int *)aaaacl) < 0)
		printf("aaaacl ref count is smaller than 0\n");
	if ((*(int *)aaaacl) == 0) {
		if ((*((int*)aaaacl+2)) == 1)
			freeStr(aaaacl);
		else if ((*((int*)aaaacl+1)) == 1)
			freeIter(aaaacl);
		else
			x3free(aaaacl);
	}
	aaaacl = NULL;
}
		}
	}
	while (v!=NULL) {
Iterable * aaaaat = NULL;
		aaaaat = (Iterable *)v;
		if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
void * aaaacm = NULL;
aaaacm = v;
		v = aaaaat->value;
		if (v!= NULL) {
	(*(int *)v)++;
}
		if (aaaacm!= NULL) {
	(*(int *)aaaacm)--;
	if ((*(int *)aaaacm) < 0)
		printf("aaaacm ref count is smaller than 0\n");
	if ((*(int *)aaaacm) == 0) {
		if ((*((int*)aaaacm+2)) == 1)
			freeStr(aaaacm);
		else if ((*((int*)aaaacm+1)) == 1)
			freeIter(aaaacm);
		else
			x3free(aaaacm);
	}
	aaaacm = NULL;
}
		


void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaav = NULL;



void * aaaacn = NULL;
aaaacn = aaaaaw;
aaaaaw = sum;
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)++;
}
if (aaaacn!= NULL) {
	(*(int *)aaaacn)--;
	if ((*(int *)aaaacn) < 0)
		printf("aaaacn ref count is smaller than 0\n");
	if ((*(int *)aaaacn) == 0) {
		if ((*((int*)aaaacn+2)) == 1)
			freeStr(aaaacn);
		else if ((*((int*)aaaacn+1)) == 1)
			freeIter(aaaacn);
		else
			x3free(aaaacn);
	}
	aaaacn = NULL;
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



void * aaaaco = NULL;
aaaaco = aaaaax;
aaaaax = v;
if (aaaaax!= NULL) {
	(*(int *)aaaaax)++;
}
if (aaaaco!= NULL) {
	(*(int *)aaaaco)--;
	if ((*(int *)aaaaco) < 0)
		printf("aaaaco ref count is smaller than 0\n");
	if ((*(int *)aaaaco) == 0) {
		if ((*((int*)aaaaco+2)) == 1)
			freeStr(aaaaco);
		else if ((*((int*)aaaaco+1)) == 1)
			freeIter(aaaaco);
		else
			x3free(aaaaco);
	}
	aaaaco = NULL;
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




Integer* aaaacp;
aaaacp  = (Integer*) x3malloc(sizeof(Integer));
aaaacp->nrefs = 0;
aaaacp->value=((Integer*)aaaaaw)->value + ((Integer*)aaaaax)->value;
void * aaaacq = NULL;
aaaacq = sum;
sum = aaaacp;
if (sum!= NULL) {
	(*(int *)sum)++;
}
if (aaaacq!= NULL) {
	(*(int *)aaaacq)--;
	if ((*(int *)aaaacq) < 0)
		printf("aaaacq ref count is smaller than 0\n");
	if ((*(int *)aaaacq) == 0) {
		if ((*((int*)aaaacq+2)) == 1)
			freeStr(aaaacq);
		else if ((*((int*)aaaacq+1)) == 1)
			freeIter(aaaacq);
		else
			x3free(aaaacq);
	}
	aaaacq = NULL;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
	if ((*(int *)aaaaaw) == 0) {
		if ((*((int*)aaaaaw+2)) == 1)
			freeStr(aaaaaw);
		else if ((*((int*)aaaaaw+1)) == 1)
			freeIter(aaaaaw);
		else
			x3free(aaaaaw);
	}
	aaaaaw = NULL;
}
if (aaaaax!= NULL) {
	(*(int *)aaaaax)--;
	if ((*(int *)aaaaax) < 0)
		printf("aaaaax ref count is smaller than 0\n");
	if ((*(int *)aaaaax) == 0) {
		if ((*((int*)aaaaax+2)) == 1)
			freeStr(aaaaax);
		else if ((*((int*)aaaaax+1)) == 1)
			freeIter(aaaaax);
		else
			x3free(aaaaax);
	}
	aaaaax = NULL;
}



void * aaaacr = NULL;
aaaacr = aaaaav;
aaaaav = aaaaat;
if (aaaaav!= NULL) {
	(*(int *)aaaaav)++;
}
if (aaaacr!= NULL) {
	(*(int *)aaaacr)--;
	if ((*(int *)aaaacr) < 0)
		printf("aaaacr ref count is smaller than 0\n");
	if ((*(int *)aaaacr) == 0) {
		if ((*((int*)aaaacr+2)) == 1)
			freeStr(aaaacr);
		else if ((*((int*)aaaacr+1)) == 1)
			freeIter(aaaacr);
		else
			x3free(aaaacr);
	}
	aaaacr = NULL;
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




void* aaaacs;
aaaacs = iterGetNext((void*) aaaaav);
void * aaaact = NULL;
aaaact = v;
v = aaaacs;
if (v!= NULL) {
	(*(int *)v)++;
}
if (aaaact!= NULL) {
	(*(int *)aaaact)--;
	if ((*(int *)aaaact) < 0)
		printf("aaaact ref count is smaller than 0\n");
	if ((*(int *)aaaact) == 0) {
		if ((*((int*)aaaact+2)) == 1)
			freeStr(aaaact);
		else if ((*((int*)aaaact+1)) == 1)
			freeIter(aaaact);
		else
			x3free(aaaact);
	}
	aaaact = NULL;
}
if (aaaaav!= NULL) {
	(*(int *)aaaaav)--;
	if ((*(int *)aaaaav) < 0)
		printf("aaaaav ref count is smaller than 0\n");
	if ((*(int *)aaaaav) == 0) {
		if ((*((int*)aaaaav+2)) == 1)
			freeStr(aaaaav);
		else if ((*((int*)aaaaav+1)) == 1)
			freeIter(aaaaav);
		else
			x3free(aaaaav);
	}
	aaaaav = NULL;
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






String* aaaacu;
aaaacu = (String *) x3malloc(sizeof(String));
(aaaacu->isIter) = 0;
aaaacu->value = (char*) x3malloc(sizeof("20"));
(aaaacu->nrefs) = 0;
(aaaacu->isStr) = 1;
aaaacu->len = sizeof("20") - 1;
mystrcpy(aaaacu->value, "20");
void * aaaacv = NULL;
aaaacv = aaaaba;
aaaaba = aaaacu;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
if (aaaacv!= NULL) {
	(*(int *)aaaacv)--;
	if ((*(int *)aaaacv) < 0)
		printf("aaaacv ref count is smaller than 0\n");
	if ((*(int *)aaaacv) == 0) {
		if ((*((int*)aaaacv+2)) == 1)
			freeStr(aaaacv);
		else if ((*((int*)aaaacv+1)) == 1)
			freeIter(aaaacv);
		else
			x3free(aaaacv);
	}
	aaaacv = NULL;
}



Iterable* aaaacw;
aaaacw = (Iterable*) x3malloc(sizeof(Iterable));
aaaacw->isIter = 1;
aaaacw->nrefs = 1;
aaaacw->value = aaaaba;
aaaacw->additional = NULL;
aaaacw->next = NULL;
aaaacw->concat = NULL;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
aaaacw->nrefs = 0;
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
return aaaacw;
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
