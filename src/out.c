#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* build_(void *n_);
void* remove_(void *s_);
void* empty_(void *s_);
Iterable* input_= NULL;
int initialized_pqr = 0;

void* build_(void *n_) {
if (n_!= NULL) {
	(*(int *)n_)++;
}



void * aaaaad = NULL;
void * aaaaae = NULL;
void * aaaaac = NULL;



Integer* aaaabp;
aaaabp = (Integer*) x3malloc(sizeof(Integer));
aaaabp->nrefs = 0;
aaaabp->isStr = 0;
aaaabp->isIter = 0;
aaaabp->value = 0;
void * aaaabq = NULL;
aaaabq = aaaaad;
aaaaad = aaaabp;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
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




Boolean* aaaabr = (Boolean*) x3malloc(sizeof(Boolean));
aaaabr->nrefs = 0;
aaaabr->isStr = 0;
aaaabr->isIter = 0;
aaaabr->value = ((Integer*) n_)->value <= ((Integer*) aaaaad)->value;
void * aaaabs = NULL;
aaaabs = aaaaae;
aaaaae = aaaabr;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
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



if ( ((Boolean *)aaaaae)->value) {
if (n_!= NULL) {
	(*(int *)n_)--;
	if ((*(int *)n_) < 0)
		printf("n_ ref count is smaller than 0\n");
	if ((*(int *)n_) == 0) {
		if ((*((int*)n_+2)) == 1)
			freeStr(n_);
		else if ((*((int*)n_+1)) == 1)
			freeIter(n_);
		else
			x3free(n_);
	}
	n_ = NULL;
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



void * aaaaaf = NULL;



String* aaaabt;
aaaabt = (String *) x3malloc(sizeof(String));
aaaabt->isIter = 0;
aaaabt->value = (char*) x3malloc(sizeof(""));
aaaabt->nrefs = 0;
aaaabt->isStr = 1;
aaaabt->len = sizeof("") - 1;
mystrcpy(aaaabt->value, "");
void * aaaabu = NULL;
aaaabu = aaaaaf;
aaaaaf = aaaabt;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
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



if (aaaaaf!= NULL) {
(*(int *)aaaaaf)--;
}
return aaaaaf;
}
else {
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



void * aaaaaj = NULL;
void * aaaaak = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaai = NULL;



Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
aaaabv->nrefs = 0;
aaaabv->isStr = 0;
aaaabv->isIter = 0;
aaaabv->value = 1;
void * aaaabw = NULL;
aaaabw = aaaaaj;
aaaaaj = aaaabv;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
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




Integer* aaaabx;
aaaabx  = (Integer*) x3malloc(sizeof(Integer));
aaaabx->nrefs = 0;
aaaabx->isIter = 0;
aaaabx->isStr = 0;
aaaabx->value=((Integer*)n_)->value - ((Integer*)aaaaaj)->value;
void * aaaaby = NULL;
aaaaby = aaaaak;
aaaaak = aaaabx;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
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
if (n_!= NULL) {
	(*(int *)n_)--;
	if ((*(int *)n_) < 0)
		printf("n_ ref count is smaller than 0\n");
	if ((*(int *)n_) == 0) {
		if ((*((int*)n_+2)) == 1)
			freeStr(n_);
		else if ((*((int*)n_+1)) == 1)
			freeIter(n_);
		else
			x3free(n_);
	}
	n_ = NULL;
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



String* aaaabz;
aaaabz = (String *) x3malloc(sizeof(String));
aaaabz->isIter = 0;
aaaabz->value = (char*) x3malloc(sizeof(" "));
aaaabz->nrefs = 0;
aaaabz->isStr = 1;
aaaabz->len = sizeof(" ") - 1;
mystrcpy(aaaabz->value, " ");
void * aaaaca = NULL;
aaaaca = aaaaag;
aaaaag = aaaabz;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
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




void* aaaacb;
aaaacb = build_((void*) aaaaak);
void * aaaacc = NULL;
aaaacc = aaaaah;
aaaaah = aaaacb;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
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
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0\n");
	if ((*(int *)aaaaak) == 0) {
		if ((*((int*)aaaaak+2)) == 1)
			freeStr(aaaaak);
		else if ((*((int*)aaaaak+1)) == 1)
			freeIter(aaaaak);
		else
			x3free(aaaaak);
	}
	aaaaak = NULL;
}



void *aaaace;
aaaace = aaaaag;
if (aaaace!=NULL) {
(*((int *)aaaace))++;
if ((*((int *)aaaaag+1)) == 0) {
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
aaaace = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
if (aaaace!= NULL) {
	(*(int *)aaaace)++;
}
}
}
void *aaaacf;
aaaacf = aaaaah;
if (aaaacf!=NULL) {
(*((int *)aaaacf))++;
if ((*((int *)aaaaah+1)) == 0) {
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
aaaacf = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
if (aaaacf!= NULL) {
	(*(int *)aaaacf)++;
}
}
}
Iterable* aaaacd;
aaaacd = concatenate((Iterable*)aaaace, (Iterable*) aaaacf);
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
void * aaaacg = NULL;
aaaacg = aaaaal;
aaaaal = aaaacd;
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
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




	if (aaaaal!=NULL) {
		if ((*((int *)(aaaaal+1))) == 0) {
void * aaaaci = NULL;
aaaaci = aaaaal;
			aaaaal = strToIter( ((String *)aaaaal)->value, ((String *)aaaaal)->len);
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
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
void* aaaach;
aaaach = concatChars((Iterable*)aaaaal);
void * aaaacj = NULL;
aaaacj = aaaaam;
aaaaam = aaaach;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
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



if (aaaaam!= NULL) {
(*(int *)aaaaam)--;
}
return aaaaam;
}
}
void* remove_(void *s_) {
if (s_!= NULL) {
	(*(int *)s_)++;
}



void * r_ = NULL;
void * b_ = NULL;
void * c_ = NULL;






String* aaaack;
aaaack = (String *) x3malloc(sizeof(String));
aaaack->isIter = 0;
aaaack->value = (char*) x3malloc(sizeof(""));
aaaack->nrefs = 0;
aaaack->isStr = 1;
aaaack->len = sizeof("") - 1;
mystrcpy(aaaack->value, "");
void * aaaacl = NULL;
aaaacl = r_;
r_ = aaaack;
if (r_!= NULL) {
	(*(int *)r_)++;
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






Boolean* aaaacm;
aaaacm = (Boolean *) x3malloc(sizeof(Boolean));
aaaacm->nrefs = 0;
aaaacm->isStr = 0;
aaaacm->isIter = 0;
aaaacm->value = 0;
void * aaaacn = NULL;
aaaacn = b_;
b_ = aaaacm;
if (b_!= NULL) {
	(*(int *)b_)++;
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






void * aaaaco = NULL;
aaaaco = c_;
c_ = s_;
if (c_!= NULL) {
	(*(int *)c_)++;
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
if (s_!= NULL) {
	(*(int *)s_)--;
	if ((*(int *)s_) < 0)
		printf("s_ ref count is smaller than 0\n");
	if ((*(int *)s_) == 0) {
		if ((*((int*)s_+2)) == 1)
			freeStr(s_);
		else if ((*((int*)s_+1)) == 1)
			freeIter(s_);
		else
			x3free(s_);
	}
	s_ = NULL;
}
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaacp = NULL;
aaaacp = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaacp!= NULL) {
	(*(int *)aaaacp)--;
	if ((*(int *)aaaacp) < 0)
		printf("aaaacp ref count is smaller than 0\n");
	if ((*(int *)aaaacp) == 0) {
		if ((*((int*)aaaacp+2)) == 1)
			freeStr(aaaacp);
		else if ((*((int*)aaaacp+1)) == 1)
			freeIter(aaaacp);
		else
			x3free(aaaacp);
	}
	aaaacp = NULL;
}
		}
	}
	while (c_!=NULL) {
Iterable * aaaaan = NULL;
		aaaaan = (Iterable *)c_;
		if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
}
void * aaaacq = NULL;
aaaacq = c_;
		c_ = aaaaan->value;
		if (c_!= NULL) {
	(*(int *)c_)++;
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
		


void * aaaaap = NULL;



if ( ((Boolean *)b_)->value) {



void * aaaaar = NULL;
void * aaaaat = NULL;
void * aaaaas = NULL;
void * aaaaaq = NULL;



Iterable* aaaacr;
aaaacr = (Iterable*) x3malloc(sizeof(Iterable));
aaaacr->isStr = 0;
aaaacr->isIter = 1;
aaaacr->nrefs = 1;
aaaacr->value = c_;
aaaacr->additional = NULL;
aaaacr->next = NULL;
aaaacr->concat = NULL;
if (c_!= NULL) {
	(*(int *)c_)++;
}
aaaacr->nrefs = 0;
void * aaaacs = NULL;
aaaacs = aaaaar;
aaaaar = aaaacr;
if (aaaaar!= NULL) {
	(*(int *)aaaaar)++;
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
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}



void *aaaacu;
aaaacu = r_;
if (aaaacu!=NULL) {
(*((int *)aaaacu))++;
if ((*((int *)r_+1)) == 0) {
if (aaaacu!= NULL) {
	(*(int *)aaaacu)--;
	if ((*(int *)aaaacu) < 0)
		printf("aaaacu ref count is smaller than 0\n");
	if ((*(int *)aaaacu) == 0) {
		if ((*((int*)aaaacu+2)) == 1)
			freeStr(aaaacu);
		else if ((*((int*)aaaacu+1)) == 1)
			freeIter(aaaacu);
		else
			x3free(aaaacu);
	}
	aaaacu = NULL;
}
aaaacu = strToIter( ((String *)r_)->value, ((String *)r_)->len);
if (aaaacu!= NULL) {
	(*(int *)aaaacu)++;
}
}
}
void *aaaacv;
aaaacv = aaaaar;
if (aaaacv!=NULL) {
(*((int *)aaaacv))++;
if ((*((int *)aaaaar+1)) == 0) {
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
aaaacv = strToIter( ((String *)aaaaar)->value, ((String *)aaaaar)->len);
if (aaaacv!= NULL) {
	(*(int *)aaaacv)++;
}
}
}
Iterable* aaaact;
aaaact = concatenate((Iterable*)aaaacu, (Iterable*) aaaacv);
if (aaaacu!= NULL) {
	(*(int *)aaaacu)--;
	if ((*(int *)aaaacu) < 0)
		printf("aaaacu ref count is smaller than 0\n");
	if ((*(int *)aaaacu) == 0) {
		if ((*((int*)aaaacu+2)) == 1)
			freeStr(aaaacu);
		else if ((*((int*)aaaacu+1)) == 1)
			freeIter(aaaacu);
		else
			x3free(aaaacu);
	}
	aaaacu = NULL;
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
void * aaaacw = NULL;
aaaacw = aaaaat;
aaaaat = aaaact;
if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
if (aaaacw!= NULL) {
	(*(int *)aaaacw)--;
	if ((*(int *)aaaacw) < 0)
		printf("aaaacw ref count is smaller than 0\n");
	if ((*(int *)aaaacw) == 0) {
		if ((*((int*)aaaacw+2)) == 1)
			freeStr(aaaacw);
		else if ((*((int*)aaaacw+1)) == 1)
			freeIter(aaaacw);
		else
			x3free(aaaacw);
	}
	aaaacw = NULL;
}
if (r_!= NULL) {
	(*(int *)r_)--;
	if ((*(int *)r_) < 0)
		printf("r_ ref count is smaller than 0\n");
	if ((*(int *)r_) == 0) {
		if ((*((int*)r_+2)) == 1)
			freeStr(r_);
		else if ((*((int*)r_+1)) == 1)
			freeIter(r_);
		else
			x3free(r_);
	}
	r_ = NULL;
}
if (aaaaar!= NULL) {
	(*(int *)aaaaar)--;
	if ((*(int *)aaaaar) < 0)
		printf("aaaaar ref count is smaller than 0\n");
	if ((*(int *)aaaaar) == 0) {
		if ((*((int*)aaaaar+2)) == 1)
			freeStr(aaaaar);
		else if ((*((int*)aaaaar+1)) == 1)
			freeIter(aaaaar);
		else
			x3free(aaaaar);
	}
	aaaaar = NULL;
}




	if (aaaaat!=NULL) {
		if ((*((int *)(aaaaat+1))) == 0) {
void * aaaacy = NULL;
aaaacy = aaaaat;
			aaaaat = strToIter( ((String *)aaaaat)->value, ((String *)aaaaat)->len);
if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
if (aaaacy!= NULL) {
	(*(int *)aaaacy)--;
	if ((*(int *)aaaacy) < 0)
		printf("aaaacy ref count is smaller than 0\n");
	if ((*(int *)aaaacy) == 0) {
		if ((*((int*)aaaacy+2)) == 1)
			freeStr(aaaacy);
		else if ((*((int*)aaaacy+1)) == 1)
			freeIter(aaaacy);
		else
			x3free(aaaacy);
	}
	aaaacy = NULL;
}
		}
	}
void* aaaacx;
aaaacx = concatChars((Iterable*)aaaaat);
void * aaaacz = NULL;
aaaacz = r_;
r_ = aaaacx;
if (r_!= NULL) {
	(*(int *)r_)++;
}
if (aaaacz!= NULL) {
	(*(int *)aaaacz)--;
	if ((*(int *)aaaacz) < 0)
		printf("aaaacz ref count is smaller than 0\n");
	if ((*(int *)aaaacz) == 0) {
		if ((*((int*)aaaacz+2)) == 1)
			freeStr(aaaacz);
		else if ((*((int*)aaaacz+1)) == 1)
			freeIter(aaaacz);
		else
			x3free(aaaacz);
	}
	aaaacz = NULL;
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
else {
if (b_!= NULL) {
	(*(int *)b_)--;
	if ((*(int *)b_) < 0)
		printf("b_ ref count is smaller than 0\n");
	if ((*(int *)b_) == 0) {
		if ((*((int*)b_+2)) == 1)
			freeStr(b_);
		else if ((*((int*)b_+1)) == 1)
			freeIter(b_);
		else
			x3free(b_);
	}
	b_ = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}






Boolean* aaaada;
aaaada = (Boolean *) x3malloc(sizeof(Boolean));
aaaada->nrefs = 0;
aaaada->isStr = 0;
aaaada->isIter = 0;
aaaada->value = 1;
void * aaaadb = NULL;
aaaadb = b_;
b_ = aaaada;
if (b_!= NULL) {
	(*(int *)b_)++;
}
if (aaaadb!= NULL) {
	(*(int *)aaaadb)--;
	if ((*(int *)aaaadb) < 0)
		printf("aaaadb ref count is smaller than 0\n");
	if ((*(int *)aaaadb) == 0) {
		if ((*((int*)aaaadb+2)) == 1)
			freeStr(aaaadb);
		else if ((*((int*)aaaadb+1)) == 1)
			freeIter(aaaadb);
		else
			x3free(aaaadb);
	}
	aaaadb = NULL;
}
}
void * aaaaao = NULL;




void* aaaadc;
aaaadc = iterGetNext((void*) aaaaan);
void * aaaadd = NULL;
aaaadd = c_;
c_ = aaaadc;
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaadd!= NULL) {
	(*(int *)aaaadd)--;
	if ((*(int *)aaaadd) < 0)
		printf("aaaadd ref count is smaller than 0\n");
	if ((*(int *)aaaadd) == 0) {
		if ((*((int*)aaaadd+2)) == 1)
			freeStr(aaaadd);
		else if ((*((int*)aaaadd+1)) == 1)
			freeIter(aaaadd);
		else
			x3free(aaaadd);
	}
	aaaadd = NULL;
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
if (b_!= NULL) {
	(*(int *)b_)--;
	if ((*(int *)b_) < 0)
		printf("b_ ref count is smaller than 0\n");
	if ((*(int *)b_) == 0) {
		if ((*((int*)b_+2)) == 1)
			freeStr(b_);
		else if ((*((int*)b_+1)) == 1)
			freeIter(b_);
		else
			x3free(b_);
	}
	b_ = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}



void * aaaaau = NULL;



if (r_!= NULL) {
(*(int *)r_)--;
}
return r_;
}
void* empty_(void *s_) {
if (s_!= NULL) {
	(*(int *)s_)++;
}



void * c_ = NULL;
void * aaaabg = NULL;



void * aaaaav = NULL;




void* aaaade;
aaaade = remove_((void*) s_);
void * aaaadf = NULL;
aaaadf = c_;
c_ = aaaade;
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaadf!= NULL) {
	(*(int *)aaaadf)--;
	if ((*(int *)aaaadf) < 0)
		printf("aaaadf ref count is smaller than 0\n");
	if ((*(int *)aaaadf) == 0) {
		if ((*((int*)aaaadf+2)) == 1)
			freeStr(aaaadf);
		else if ((*((int*)aaaadf+1)) == 1)
			freeIter(aaaadf);
		else
			x3free(aaaadf);
	}
	aaaadf = NULL;
}
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaadg = NULL;
aaaadg = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaadg!= NULL) {
	(*(int *)aaaadg)--;
	if ((*(int *)aaaadg) < 0)
		printf("aaaadg ref count is smaller than 0\n");
	if ((*(int *)aaaadg) == 0) {
		if ((*((int*)aaaadg+2)) == 1)
			freeStr(aaaadg);
		else if ((*((int*)aaaadg+1)) == 1)
			freeIter(aaaadg);
		else
			x3free(aaaadg);
	}
	aaaadg = NULL;
}
		}
	}
	while (c_!=NULL) {
Iterable * aaaaaw = NULL;
		aaaaaw = (Iterable *)c_;
		if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)++;
}
void * aaaadh = NULL;
aaaadh = c_;
		c_ = aaaaaw->value;
		if (c_!= NULL) {
	(*(int *)c_)++;
}
		if (aaaadh!= NULL) {
	(*(int *)aaaadh)--;
	if ((*(int *)aaaadh) < 0)
		printf("aaaadh ref count is smaller than 0\n");
	if ((*(int *)aaaadh) == 0) {
		if ((*((int*)aaaadh+2)) == 1)
			freeStr(aaaadh);
		else if ((*((int*)aaaadh+1)) == 1)
			freeIter(aaaadh);
		else
			x3free(aaaadh);
	}
	aaaadh = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
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
		


void * aaaaaz = NULL;
void * a_ = NULL;
void * aaaabe = NULL;
void * aaaabf = NULL;
void * aaaaax = NULL;



void * aaaaay = NULL;




void* aaaadi;
aaaadi = remove_((void*) s_);
void * aaaadj = NULL;
aaaadj = aaaaaz;
aaaaaz = aaaadi;
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)++;
}
if (aaaadj!= NULL) {
	(*(int *)aaaadj)--;
	if ((*(int *)aaaadj) < 0)
		printf("aaaadj ref count is smaller than 0\n");
	if ((*(int *)aaaadj) == 0) {
		if ((*((int*)aaaadj+2)) == 1)
			freeStr(aaaadj);
		else if ((*((int*)aaaadj+1)) == 1)
			freeIter(aaaadj);
		else
			x3free(aaaadj);
	}
	aaaadj = NULL;
}
if (s_!= NULL) {
	(*(int *)s_)--;
	if ((*(int *)s_) < 0)
		printf("s_ ref count is smaller than 0\n");
	if ((*(int *)s_) == 0) {
		if ((*((int*)s_+2)) == 1)
			freeStr(s_);
		else if ((*((int*)s_+1)) == 1)
			freeIter(s_);
		else
			x3free(s_);
	}
	s_ = NULL;
}




void* aaaadk;
aaaadk = empty_((void*) aaaaaz);
void * aaaadl = NULL;
aaaadl = a_;
a_ = aaaadk;
if (a_!= NULL) {
	(*(int *)a_)++;
}
if (aaaadl!= NULL) {
	(*(int *)aaaadl)--;
	if ((*(int *)aaaadl) < 0)
		printf("aaaadl ref count is smaller than 0\n");
	if ((*(int *)aaaadl) == 0) {
		if ((*((int*)aaaadl+2)) == 1)
			freeStr(aaaadl);
		else if ((*((int*)aaaadl+1)) == 1)
			freeIter(aaaadl);
		else
			x3free(aaaadl);
	}
	aaaadl = NULL;
}
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)--;
	if ((*(int *)aaaaaz) < 0)
		printf("aaaaaz ref count is smaller than 0\n");
	if ((*(int *)aaaaaz) == 0) {
		if ((*((int*)aaaaaz+2)) == 1)
			freeStr(aaaaaz);
		else if ((*((int*)aaaaaz+1)) == 1)
			freeIter(aaaaaz);
		else
			x3free(aaaaaz);
	}
	aaaaaz = NULL;
}



void * aaaaba = NULL;
void * aaaabb = NULL;
void * b_ = NULL;



void * aaaabc = NULL;
void * aaaabd = NULL;



void *aaaadn;
aaaadn = a_;
if (aaaadn!=NULL) {
(*((int *)aaaadn))++;
if ((*((int *)a_+1)) == 0) {
if (aaaadn!= NULL) {
	(*(int *)aaaadn)--;
	if ((*(int *)aaaadn) < 0)
		printf("aaaadn ref count is smaller than 0\n");
	if ((*(int *)aaaadn) == 0) {
		if ((*((int*)aaaadn+2)) == 1)
			freeStr(aaaadn);
		else if ((*((int*)aaaadn+1)) == 1)
			freeIter(aaaadn);
		else
			x3free(aaaadn);
	}
	aaaadn = NULL;
}
aaaadn = strToIter( ((String *)a_)->value, ((String *)a_)->len);
if (aaaadn!= NULL) {
	(*(int *)aaaadn)++;
}
}
}
void *aaaado;
aaaado = a_;
if (aaaado!=NULL) {
(*((int *)aaaado))++;
if ((*((int *)a_+1)) == 0) {
if (aaaado!= NULL) {
	(*(int *)aaaado)--;
	if ((*(int *)aaaado) < 0)
		printf("aaaado ref count is smaller than 0\n");
	if ((*(int *)aaaado) == 0) {
		if ((*((int*)aaaado+2)) == 1)
			freeStr(aaaado);
		else if ((*((int*)aaaado+1)) == 1)
			freeIter(aaaado);
		else
			x3free(aaaado);
	}
	aaaado = NULL;
}
aaaado = strToIter( ((String *)a_)->value, ((String *)a_)->len);
if (aaaado!= NULL) {
	(*(int *)aaaado)++;
}
}
}
Iterable* aaaadm;
aaaadm = concatenate((Iterable*)aaaadn, (Iterable*) aaaado);
if (aaaadn!= NULL) {
	(*(int *)aaaadn)--;
	if ((*(int *)aaaadn) < 0)
		printf("aaaadn ref count is smaller than 0\n");
	if ((*(int *)aaaadn) == 0) {
		if ((*((int*)aaaadn+2)) == 1)
			freeStr(aaaadn);
		else if ((*((int*)aaaadn+1)) == 1)
			freeIter(aaaadn);
		else
			x3free(aaaadn);
	}
	aaaadn = NULL;
}
if (aaaado!= NULL) {
	(*(int *)aaaado)--;
	if ((*(int *)aaaado) < 0)
		printf("aaaado ref count is smaller than 0\n");
	if ((*(int *)aaaado) == 0) {
		if ((*((int*)aaaado+2)) == 1)
			freeStr(aaaado);
		else if ((*((int*)aaaado+1)) == 1)
			freeIter(aaaado);
		else
			x3free(aaaado);
	}
	aaaado = NULL;
}
void * aaaadp = NULL;
aaaadp = aaaabe;
aaaabe = aaaadm;
if (aaaabe!= NULL) {
	(*(int *)aaaabe)++;
}
if (aaaadp!= NULL) {
	(*(int *)aaaadp)--;
	if ((*(int *)aaaadp) < 0)
		printf("aaaadp ref count is smaller than 0\n");
	if ((*(int *)aaaadp) == 0) {
		if ((*((int*)aaaadp+2)) == 1)
			freeStr(aaaadp);
		else if ((*((int*)aaaadp+1)) == 1)
			freeIter(aaaadp);
		else
			x3free(aaaadp);
	}
	aaaadp = NULL;
}
if (a_!= NULL) {
	(*(int *)a_)--;
	if ((*(int *)a_) < 0)
		printf("a_ ref count is smaller than 0\n");
	if ((*(int *)a_) == 0) {
		if ((*((int*)a_+2)) == 1)
			freeStr(a_);
		else if ((*((int*)a_+1)) == 1)
			freeIter(a_);
		else
			x3free(a_);
	}
	a_ = NULL;
}




	if (aaaabe!=NULL) {
		if ((*((int *)(aaaabe+1))) == 0) {
void * aaaadr = NULL;
aaaadr = aaaabe;
			aaaabe = strToIter( ((String *)aaaabe)->value, ((String *)aaaabe)->len);
if (aaaabe!= NULL) {
	(*(int *)aaaabe)++;
}
if (aaaadr!= NULL) {
	(*(int *)aaaadr)--;
	if ((*(int *)aaaadr) < 0)
		printf("aaaadr ref count is smaller than 0\n");
	if ((*(int *)aaaadr) == 0) {
		if ((*((int*)aaaadr+2)) == 1)
			freeStr(aaaadr);
		else if ((*((int*)aaaadr+1)) == 1)
			freeIter(aaaadr);
		else
			x3free(aaaadr);
	}
	aaaadr = NULL;
}
		}
	}
void* aaaadq;
aaaadq = concatChars((Iterable*)aaaabe);
void * aaaads = NULL;
aaaads = aaaabf;
aaaabf = aaaadq;
if (aaaabf!= NULL) {
	(*(int *)aaaabf)++;
}
if (aaaads!= NULL) {
	(*(int *)aaaads)--;
	if ((*(int *)aaaads) < 0)
		printf("aaaads ref count is smaller than 0\n");
	if ((*(int *)aaaads) == 0) {
		if ((*((int*)aaaads+2)) == 1)
			freeStr(aaaads);
		else if ((*((int*)aaaads+1)) == 1)
			freeIter(aaaads);
		else
			x3free(aaaads);
	}
	aaaads = NULL;
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



if (aaaabf!= NULL) {
(*(int *)aaaabf)--;
}
return aaaabf;



void * aaaadt = NULL;
aaaadt = aaaaax;
aaaaax = aaaaaw;
if (aaaaax!= NULL) {
	(*(int *)aaaaax)++;
}
if (aaaadt!= NULL) {
	(*(int *)aaaadt)--;
	if ((*(int *)aaaadt) < 0)
		printf("aaaadt ref count is smaller than 0\n");
	if ((*(int *)aaaadt) == 0) {
		if ((*((int*)aaaadt+2)) == 1)
			freeStr(aaaadt);
		else if ((*((int*)aaaadt+1)) == 1)
			freeIter(aaaadt);
		else
			x3free(aaaadt);
	}
	aaaadt = NULL;
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




void* aaaadu;
aaaadu = iterGetNext((void*) aaaaax);
void * aaaadv = NULL;
aaaadv = c_;
c_ = aaaadu;
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaadv!= NULL) {
	(*(int *)aaaadv)--;
	if ((*(int *)aaaadv) < 0)
		printf("aaaadv ref count is smaller than 0\n");
	if ((*(int *)aaaadv) == 0) {
		if ((*((int*)aaaadv+2)) == 1)
			freeStr(aaaadv);
		else if ((*((int*)aaaadv+1)) == 1)
			freeIter(aaaadv);
		else
			x3free(aaaadv);
	}
	aaaadv = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}
	}
if (s_!= NULL) {
	(*(int *)s_)--;
	if ((*(int *)s_) < 0)
		printf("s_ ref count is smaller than 0\n");
	if ((*(int *)s_) == 0) {
		if ((*((int*)s_+2)) == 1)
			freeStr(s_);
		else if ((*((int*)s_+1)) == 1)
			freeIter(s_);
		else
			x3free(s_);
	}
	s_ = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}






String* aaaadw;
aaaadw = (String *) x3malloc(sizeof(String));
aaaadw->isIter = 0;
aaaadw->value = (char*) x3malloc(sizeof(""));
aaaadw->nrefs = 0;
aaaadw->isStr = 1;
aaaadw->len = sizeof("") - 1;
mystrcpy(aaaadw->value, "");
void * aaaadx = NULL;
aaaadx = aaaabg;
aaaabg = aaaadw;
if (aaaabg!= NULL) {
	(*(int *)aaaabg)++;
}
if (aaaadx!= NULL) {
	(*(int *)aaaadx)--;
	if ((*(int *)aaaadx) < 0)
		printf("aaaadx ref count is smaller than 0\n");
	if ((*(int *)aaaadx) == 0) {
		if ((*((int*)aaaadx+2)) == 1)
			freeStr(aaaadx);
		else if ((*((int*)aaaadx+1)) == 1)
			freeIter(aaaadx);
		else
			x3free(aaaadx);
	}
	aaaadx = NULL;
}



if (aaaabg!= NULL) {
(*(int *)aaaabg)--;
}
return aaaabg;
}


void* our_main()
{
void * aaaabh = NULL;
void * aaaabi = NULL;
void * c_ = NULL;
void * aaaabn = NULL;
void * aaaabo = NULL;






Integer* aaaady;
aaaady = (Integer*) x3malloc(sizeof(Integer));
aaaady->nrefs = 0;
aaaady->isStr = 0;
aaaady->isIter = 0;
aaaady->value = 23;
void * aaaadz = NULL;
aaaadz = aaaabh;
aaaabh = aaaady;
if (aaaabh!= NULL) {
	(*(int *)aaaabh)++;
}
if (aaaadz!= NULL) {
	(*(int *)aaaadz)--;
	if ((*(int *)aaaadz) < 0)
		printf("aaaadz ref count is smaller than 0\n");
	if ((*(int *)aaaadz) == 0) {
		if ((*((int*)aaaadz+2)) == 1)
			freeStr(aaaadz);
		else if ((*((int*)aaaadz+1)) == 1)
			freeIter(aaaadz);
		else
			x3free(aaaadz);
	}
	aaaadz = NULL;
}




void* aaaaea;
aaaaea = build_((void*) aaaabh);
void * aaaaeb = NULL;
aaaaeb = aaaabi;
aaaabi = aaaaea;
if (aaaabi!= NULL) {
	(*(int *)aaaabi)++;
}
if (aaaaeb!= NULL) {
	(*(int *)aaaaeb)--;
	if ((*(int *)aaaaeb) < 0)
		printf("aaaaeb ref count is smaller than 0\n");
	if ((*(int *)aaaaeb) == 0) {
		if ((*((int*)aaaaeb+2)) == 1)
			freeStr(aaaaeb);
		else if ((*((int*)aaaaeb+1)) == 1)
			freeIter(aaaaeb);
		else
			x3free(aaaaeb);
	}
	aaaaeb = NULL;
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




void* aaaaec;
aaaaec = empty_((void*) aaaabi);
void * aaaaed = NULL;
aaaaed = c_;
c_ = aaaaec;
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaaed!= NULL) {
	(*(int *)aaaaed)--;
	if ((*(int *)aaaaed) < 0)
		printf("aaaaed ref count is smaller than 0\n");
	if ((*(int *)aaaaed) == 0) {
		if ((*((int*)aaaaed+2)) == 1)
			freeStr(aaaaed);
		else if ((*((int*)aaaaed+1)) == 1)
			freeIter(aaaaed);
		else
			x3free(aaaaed);
	}
	aaaaed = NULL;
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
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaaee = NULL;
aaaaee = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaaee!= NULL) {
	(*(int *)aaaaee)--;
	if ((*(int *)aaaaee) < 0)
		printf("aaaaee ref count is smaller than 0\n");
	if ((*(int *)aaaaee) == 0) {
		if ((*((int*)aaaaee+2)) == 1)
			freeStr(aaaaee);
		else if ((*((int*)aaaaee+1)) == 1)
			freeIter(aaaaee);
		else
			x3free(aaaaee);
	}
	aaaaee = NULL;
}
		}
	}
	while (c_!=NULL) {
Iterable * aaaabj = NULL;
		aaaabj = (Iterable *)c_;
		if (aaaabj!= NULL) {
	(*(int *)aaaabj)++;
}
void * aaaaef = NULL;
aaaaef = c_;
		c_ = aaaabj->value;
		if (c_!= NULL) {
	(*(int *)c_)++;
}
		if (aaaaef!= NULL) {
	(*(int *)aaaaef)--;
	if ((*(int *)aaaaef) < 0)
		printf("aaaaef ref count is smaller than 0\n");
	if ((*(int *)aaaaef) == 0) {
		if ((*((int*)aaaaef+2)) == 1)
			freeStr(aaaaef);
		else if ((*((int*)aaaaef+1)) == 1)
			freeIter(aaaaef);
		else
			x3free(aaaaef);
	}
	aaaaef = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
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
		


void * aaaabl = NULL;
void * aaaabm = NULL;
void * aaaabk = NULL;



String* aaaaeg;
aaaaeg = (String *) x3malloc(sizeof(String));
aaaaeg->isIter = 0;
aaaaeg->value = (char*) x3malloc(sizeof("No"));
aaaaeg->nrefs = 0;
aaaaeg->isStr = 1;
aaaaeg->len = sizeof("No") - 1;
mystrcpy(aaaaeg->value, "No");
void * aaaaeh = NULL;
aaaaeh = aaaabl;
aaaabl = aaaaeg;
if (aaaabl!= NULL) {
	(*(int *)aaaabl)++;
}
if (aaaaeh!= NULL) {
	(*(int *)aaaaeh)--;
	if ((*(int *)aaaaeh) < 0)
		printf("aaaaeh ref count is smaller than 0\n");
	if ((*(int *)aaaaeh) == 0) {
		if ((*((int*)aaaaeh+2)) == 1)
			freeStr(aaaaeh);
		else if ((*((int*)aaaaeh+1)) == 1)
			freeIter(aaaaeh);
		else
			x3free(aaaaeh);
	}
	aaaaeh = NULL;
}



Iterable* aaaaei;
aaaaei = (Iterable*) x3malloc(sizeof(Iterable));
aaaaei->isStr = 0;
aaaaei->isIter = 1;
aaaaei->nrefs = 1;
aaaaei->value = aaaabl;
aaaaei->additional = NULL;
aaaaei->next = NULL;
aaaaei->concat = NULL;
if (aaaabl!= NULL) {
	(*(int *)aaaabl)++;
}
aaaaei->nrefs = 0;
void * aaaaej = NULL;
aaaaej = aaaabm;
aaaabm = aaaaei;
if (aaaabm!= NULL) {
	(*(int *)aaaabm)++;
}
if (aaaaej!= NULL) {
	(*(int *)aaaaej)--;
	if ((*(int *)aaaaej) < 0)
		printf("aaaaej ref count is smaller than 0\n");
	if ((*(int *)aaaaej) == 0) {
		if ((*((int*)aaaaej+2)) == 1)
			freeStr(aaaaej);
		else if ((*((int*)aaaaej+1)) == 1)
			freeIter(aaaaej);
		else
			x3free(aaaaej);
	}
	aaaaej = NULL;
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



if (aaaabm!= NULL) {
(*(int *)aaaabm)--;
}
return aaaabm;



void * aaaaek = NULL;
aaaaek = aaaabk;
aaaabk = aaaabj;
if (aaaabk!= NULL) {
	(*(int *)aaaabk)++;
}
if (aaaaek!= NULL) {
	(*(int *)aaaaek)--;
	if ((*(int *)aaaaek) < 0)
		printf("aaaaek ref count is smaller than 0\n");
	if ((*(int *)aaaaek) == 0) {
		if ((*((int*)aaaaek+2)) == 1)
			freeStr(aaaaek);
		else if ((*((int*)aaaaek+1)) == 1)
			freeIter(aaaaek);
		else
			x3free(aaaaek);
	}
	aaaaek = NULL;
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




void* aaaael;
aaaael = iterGetNext((void*) aaaabk);
void * aaaaem = NULL;
aaaaem = c_;
c_ = aaaael;
if (c_!= NULL) {
	(*(int *)c_)++;
}
if (aaaaem!= NULL) {
	(*(int *)aaaaem)--;
	if ((*(int *)aaaaem) < 0)
		printf("aaaaem ref count is smaller than 0\n");
	if ((*(int *)aaaaem) == 0) {
		if ((*((int*)aaaaem+2)) == 1)
			freeStr(aaaaem);
		else if ((*((int*)aaaaem+1)) == 1)
			freeIter(aaaaem);
		else
			x3free(aaaaem);
	}
	aaaaem = NULL;
}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}
	}
if (c_!= NULL) {
	(*(int *)c_)--;
	if ((*(int *)c_) < 0)
		printf("c_ ref count is smaller than 0\n");
	if ((*(int *)c_) == 0) {
		if ((*((int*)c_+2)) == 1)
			freeStr(c_);
		else if ((*((int*)c_+1)) == 1)
			freeIter(c_);
		else
			x3free(c_);
	}
	c_ = NULL;
}






String* aaaaen;
aaaaen = (String *) x3malloc(sizeof(String));
aaaaen->isIter = 0;
aaaaen->value = (char*) x3malloc(sizeof("Yes"));
aaaaen->nrefs = 0;
aaaaen->isStr = 1;
aaaaen->len = sizeof("Yes") - 1;
mystrcpy(aaaaen->value, "Yes");
void * aaaaeo = NULL;
aaaaeo = aaaabn;
aaaabn = aaaaen;
if (aaaabn!= NULL) {
	(*(int *)aaaabn)++;
}
if (aaaaeo!= NULL) {
	(*(int *)aaaaeo)--;
	if ((*(int *)aaaaeo) < 0)
		printf("aaaaeo ref count is smaller than 0\n");
	if ((*(int *)aaaaeo) == 0) {
		if ((*((int*)aaaaeo+2)) == 1)
			freeStr(aaaaeo);
		else if ((*((int*)aaaaeo+1)) == 1)
			freeIter(aaaaeo);
		else
			x3free(aaaaeo);
	}
	aaaaeo = NULL;
}



Iterable* aaaaep;
aaaaep = (Iterable*) x3malloc(sizeof(Iterable));
aaaaep->isStr = 0;
aaaaep->isIter = 1;
aaaaep->nrefs = 1;
aaaaep->value = aaaabn;
aaaaep->additional = NULL;
aaaaep->next = NULL;
aaaaep->concat = NULL;
if (aaaabn!= NULL) {
	(*(int *)aaaabn)++;
}
aaaaep->nrefs = 0;
void * aaaaeq = NULL;
aaaaeq = aaaabo;
aaaabo = aaaaep;
if (aaaabo!= NULL) {
	(*(int *)aaaabo)++;
}
if (aaaaeq!= NULL) {
	(*(int *)aaaaeq)--;
	if ((*(int *)aaaaeq) < 0)
		printf("aaaaeq ref count is smaller than 0\n");
	if ((*(int *)aaaaeq) == 0) {
		if ((*((int*)aaaaeq+2)) == 1)
			freeStr(aaaaeq);
		else if ((*((int*)aaaaeq+1)) == 1)
			freeIter(aaaaeq);
		else
			x3free(aaaaeq);
	}
	aaaaeq = NULL;
}
if (aaaabn!= NULL) {
	(*(int *)aaaabn)--;
	if ((*(int *)aaaabn) < 0)
		printf("aaaabn ref count is smaller than 0\n");
	if ((*(int *)aaaabn) == 0) {
		if ((*((int*)aaaabn+2)) == 1)
			freeStr(aaaabn);
		else if ((*((int*)aaaabn+1)) == 1)
			freeIter(aaaabn);
		else
			x3free(aaaabn);
	}
	aaaabn = NULL;
}



if (aaaabo!= NULL) {
(*(int *)aaaabo)--;
}
return aaaabo;
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
