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
	if ((*(int *)aaaabh) == 0) {
		if ((*((int*)aaaabh+2)) == 1)
			freeStr(aaaabh);
		else if ((*((int*)aaaabh+1)) == 1)
			freeIter(aaaabh);
		else
			x3free(aaaabh);
	}
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
	if ((*(int *)aaaabj) == 0) {
		if ((*((int*)aaaabj+2)) == 1)
			freeStr(aaaabj);
		else if ((*((int*)aaaabj+1)) == 1)
			freeIter(aaaabj);
		else
			x3free(aaaabj);
	}
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
	if ((*(int *)aaaabl) == 0) {
		if ((*((int*)aaaabl+2)) == 1)
			freeStr(aaaabl);
		else if ((*((int*)aaaabl+1)) == 1)
			freeIter(aaaabl);
		else
			x3free(aaaabl);
	}
	aaaabl = NULL;
}



Iterable* aaaabp;
aaaabp = (Iterable*) x3malloc(sizeof(Iterable));
aaaabp->isIter = 1;
aaaabp->nrefs = 1;
aaaabp->value = aaaaah;
aaaabp->additional = NULL;
aaaabp->next = NULL;
aaaabp->concat = NULL;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 1;
aaaabo->value = aaaaag;
aaaabo->additional = aaaabp;
aaaabo->next = NULL;
aaaabo->concat = NULL;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 1;
aaaabn->value = aaaaad;
aaaabn->additional = aaaabo;
aaaabn->next = NULL;
aaaabn->concat = NULL;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
Iterable* aaaabm;
aaaabm = (Iterable*) x3malloc(sizeof(Iterable));
aaaabm->isIter = 1;
aaaabm->nrefs = 1;
aaaabm->value = aaaaae;
aaaabm->additional = aaaabn;
aaaabm->next = NULL;
aaaabm->concat = NULL;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
aaaabm->nrefs = 0;
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
	if ((*(int *)aaaabq) == 0) {
		if ((*((int*)aaaabq+2)) == 1)
			freeStr(aaaabq);
		else if ((*((int*)aaaabq+1)) == 1)
			freeIter(aaaabq);
		else
			x3free(aaaabq);
	}
	aaaabq = NULL;
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
aaaabs = aaaaaj;
aaaaaj = aaaaah;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
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
aaaace = aaaaan;
aaaaan = aaaaal;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
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
	if ((*(int *)aaaaci) == 0) {
		if ((*((int*)aaaaci+2)) == 1)
			freeStr(aaaaci);
		else if ((*((int*)aaaaci+1)) == 1)
			freeIter(aaaaci);
		else
			x3free(aaaaci);
	}
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
aaaaco = aaaaav;
aaaaav = aaaaat;
if (aaaaav!= NULL) {
	(*(int *)aaaaav)++;
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
	if ((*(int *)aaaacs) == 0) {
		if ((*((int*)aaaacs+2)) == 1)
			freeStr(aaaacs);
		else if ((*((int*)aaaacs+1)) == 1)
			freeIter(aaaacs);
		else
			x3free(aaaacs);
	}
	aaaacs = NULL;
}



Iterable* aaaact;
aaaact = (Iterable*) x3malloc(sizeof(Iterable));
aaaact->isIter = 1;
aaaact->nrefs = 1;
aaaact->value = aaaaba;
aaaact->additional = NULL;
aaaact->next = NULL;
aaaact->concat = NULL;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
aaaact->nrefs = 0;
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
return aaaact;
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
