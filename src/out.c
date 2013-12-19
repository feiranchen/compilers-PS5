#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* expensive_(void *n_);
Iterable* input_= NULL;
int initialized_pqr = 0;

void* expensive_(void *n_) {
if (n_!= NULL) {
	(*(int *)n_)++;
}



void * aaaaac = NULL;
void * aaaaad = NULL;
void * aaaaae = NULL;






Integer* aaaacc;
aaaacc = (Integer*) x3malloc(sizeof(Integer));
aaaacc->nrefs = 0;
aaaacc->isStr = 0;
aaaacc->isIter = 0;
aaaacc->value = 0;
void * aaaacd = NULL;
aaaacd = aaaaad;
aaaaad = aaaacc;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
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




Boolean* aaaace = (Boolean*) x3malloc(sizeof(Boolean));
aaaace->nrefs = 0;
aaaace->isStr = 0;
aaaace->isIter = 0;
aaaace->value = ((Integer*) n_)->value <= ((Integer*) aaaaad)->value;
void * aaaacf = NULL;
aaaacf = aaaaae;
aaaaae = aaaace;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
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



if (aaaaad!= NULL) {
(*(int *)aaaaad)--;
}
return aaaaad;
}
else {
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



void * aaaaai = NULL;
void * aaaaaj = NULL;
void * aaaaak = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaao = NULL;



Integer* aaaacg;
aaaacg = (Integer*) x3malloc(sizeof(Integer));
aaaacg->nrefs = 0;
aaaacg->isStr = 0;
aaaacg->isIter = 0;
aaaacg->value = 1;
void * aaaach = NULL;
aaaach = aaaaaj;
aaaaaj = aaaacg;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
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




Integer* aaaaci;
aaaaci  = (Integer*) x3malloc(sizeof(Integer));
aaaaci->nrefs = 0;
aaaaci->isIter = 0;
aaaaci->isStr = 0;
aaaaci->value=((Integer*)n_)->value - ((Integer*)aaaaaj)->value;
void * aaaacj = NULL;
aaaacj = aaaaak;
aaaaak = aaaaci;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
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



Integer* aaaack;
aaaack = (Integer*) x3malloc(sizeof(Integer));
aaaack->nrefs = 0;
aaaack->isStr = 0;
aaaack->isIter = 0;
aaaack->value = 2;
void * aaaacl = NULL;
aaaacl = aaaaam;
aaaaam = aaaack;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
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




Integer* aaaacm;
aaaacm  = (Integer*) x3malloc(sizeof(Integer));
aaaacm->nrefs = 0;
aaaacm->isIter = 0;
aaaacm->isStr = 0;
aaaacm->value=((Integer*)n_)->value - ((Integer*)aaaaam)->value;
void * aaaacn = NULL;
aaaacn = aaaaan;
aaaaan = aaaacm;
if (aaaaan!= NULL) {
	(*(int *)aaaaan)++;
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
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
	if ((*(int *)aaaaam) == 0) {
		if ((*((int*)aaaaam+2)) == 1)
			freeStr(aaaaam);
		else if ((*((int*)aaaaam+1)) == 1)
			freeIter(aaaaam);
		else
			x3free(aaaaam);
	}
	aaaaam = NULL;
}




void* aaaaco;
aaaaco = expensive_((void*) aaaaak);
void * aaaacp = NULL;
aaaacp = aaaaag;
aaaaag = aaaaco;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
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




void* aaaacq;
aaaacq = expensive_((void*) aaaaan);
void * aaaacr = NULL;
aaaacr = aaaaah;
aaaaah = aaaacq;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
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




Integer* aaaacs;
aaaacs  = (Integer*) x3malloc(sizeof(Integer));
aaaacs->nrefs = 0;
aaaacs->isStr = 0;
aaaacs->isIter = 0;
aaaacs->value=((Integer*)aaaaag)->value + ((Integer*)aaaaah)->value;
void * aaaact = NULL;
aaaact = aaaaao;
aaaaao = aaaacs;
if (aaaaao!= NULL) {
	(*(int *)aaaaao)++;
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



if (aaaaao!= NULL) {
(*(int *)aaaaao)--;
}
return aaaaao;
}
}


void* our_main()
{
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaap = NULL;
void * aaaaaq = NULL;
void * aaaaat = NULL;
void * fib_ = NULL;
void * fibb_ = NULL;
void * i_ = NULL;
void * aaaabc = NULL;
void * sum_ = NULL;
void * aaaabd = NULL;
void * aaaabe = NULL;
void * aaaabf = NULL;
void * aaaabg = NULL;
void * aaaabv = NULL;
void * aaaabw = NULL;
void * aaaabt = NULL;
void * aaaabu = NULL;
void * aaaabr = NULL;
void * aaaabs = NULL;
void * aaaabx = NULL;
void * aaaaca = NULL;
void * aaaacb = NULL;






Integer* aaaacu;
aaaacu = (Integer*) x3malloc(sizeof(Integer));
aaaacu->nrefs = 0;
aaaacu->isStr = 0;
aaaacu->isIter = 0;
aaaacu->value = 10;
void * aaaacv = NULL;
aaaacv = aaaaar;
aaaaar = aaaacu;
if (aaaaar!= NULL) {
	(*(int *)aaaaar)++;
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



Integer* aaaacw;
aaaacw = (Integer*) x3malloc(sizeof(Integer));
aaaacw->nrefs = 0;
aaaacw->isStr = 0;
aaaacw->isIter = 0;
aaaacw->value = 9;
void * aaaacx = NULL;
aaaacx = aaaaas;
aaaaas = aaaacw;
if (aaaaas!= NULL) {
	(*(int *)aaaaas)++;
}
if (aaaacx!= NULL) {
	(*(int *)aaaacx)--;
	if ((*(int *)aaaacx) < 0)
		printf("aaaacx ref count is smaller than 0\n");
	if ((*(int *)aaaacx) == 0) {
		if ((*((int*)aaaacx+2)) == 1)
			freeStr(aaaacx);
		else if ((*((int*)aaaacx+1)) == 1)
			freeIter(aaaacx);
		else
			x3free(aaaacx);
	}
	aaaacx = NULL;
}




void* aaaacy;
aaaacy = expensive_((void*) aaaaar);
void * aaaacz = NULL;
aaaacz = aaaaap;
aaaaap = aaaacy;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
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




void* aaaada;
aaaada = expensive_((void*) aaaaas);
void * aaaadb = NULL;
aaaadb = aaaaaq;
aaaaaq = aaaada;
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)++;
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
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
	if ((*(int *)aaaaas) == 0) {
		if ((*((int*)aaaaas+2)) == 1)
			freeStr(aaaaas);
		else if ((*((int*)aaaaas+1)) == 1)
			freeIter(aaaaas);
		else
			x3free(aaaaas);
	}
	aaaaas = NULL;
}




Boolean* aaaadc = (Boolean*) x3malloc(sizeof(Boolean));
aaaadc->nrefs = 0;
aaaadc->isStr = 0;
aaaadc->isIter = 0;
aaaadc->value = ((Integer*) aaaaap)->value > ((Integer*) aaaaaq)->value;
void * aaaadd = NULL;
aaaadd = aaaaat;
aaaaat = aaaadc;
if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
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
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
	if ((*(int *)aaaaaq) == 0) {
		if ((*((int*)aaaaaq+2)) == 1)
			freeStr(aaaaaq);
		else if ((*((int*)aaaaaq+1)) == 1)
			freeIter(aaaaaq);
		else
			x3free(aaaaaq);
	}
	aaaaaq = NULL;
}



if ( ((Boolean *)aaaaat)->value) {
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



void * aaaaau = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;






Integer* aaaade;
aaaade = (Integer*) x3malloc(sizeof(Integer));
aaaade->nrefs = 0;
aaaade->isStr = 0;
aaaade->isIter = 0;
aaaade->value = 40;
void * aaaadf = NULL;
aaaadf = aaaaau;
aaaaau = aaaade;
if (aaaaau!= NULL) {
	(*(int *)aaaaau)++;
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




void* aaaadg;
aaaadg = expensive_((void*) aaaaau);
void * aaaadh = NULL;
aaaadh = fib_;
fib_ = aaaadg;
if (fib_!= NULL) {
	(*(int *)fib_)++;
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
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0\n");
	if ((*(int *)aaaaau) == 0) {
		if ((*((int*)aaaaau+2)) == 1)
			freeStr(aaaaau);
		else if ((*((int*)aaaaau+1)) == 1)
			freeIter(aaaaau);
		else
			x3free(aaaaau);
	}
	aaaaau = NULL;
}






Integer* aaaadi;
aaaadi = (Integer*) x3malloc(sizeof(Integer));
aaaadi->nrefs = 0;
aaaadi->isStr = 0;
aaaadi->isIter = 0;
aaaadi->value = 39;
void * aaaadj = NULL;
aaaadj = aaaaaw;
aaaaaw = aaaadi;
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)++;
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




void* aaaadk;
aaaadk = expensive_((void*) aaaaaw);
void * aaaadl = NULL;
aaaadl = fibb_;
fibb_ = aaaadk;
if (fibb_!= NULL) {
	(*(int *)fibb_)++;
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
}
else {
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



void * aaaaay = NULL;
void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;






Integer* aaaadm;
aaaadm = (Integer*) x3malloc(sizeof(Integer));
aaaadm->nrefs = 0;
aaaadm->isStr = 0;
aaaadm->isIter = 0;
aaaadm->value = 40;
void * aaaadn = NULL;
aaaadn = aaaaay;
aaaaay = aaaadm;
if (aaaaay!= NULL) {
	(*(int *)aaaaay)++;
}
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




void* aaaado;
aaaado = expensive_((void*) aaaaay);
void * aaaadp = NULL;
aaaadp = fib_;
fib_ = aaaado;
if (fib_!= NULL) {
	(*(int *)fib_)++;
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
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
	if ((*(int *)aaaaay) == 0) {
		if ((*((int*)aaaaay+2)) == 1)
			freeStr(aaaaay);
		else if ((*((int*)aaaaay+1)) == 1)
			freeIter(aaaaay);
		else
			x3free(aaaaay);
	}
	aaaaay = NULL;
}






Integer* aaaadq;
aaaadq = (Integer*) x3malloc(sizeof(Integer));
aaaadq->nrefs = 0;
aaaadq->isStr = 0;
aaaadq->isIter = 0;
aaaadq->value = 39;
void * aaaadr = NULL;
aaaadr = aaaaba;
aaaaba = aaaadq;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
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




void* aaaads;
aaaads = expensive_((void*) aaaaba);
void * aaaadt = NULL;
aaaadt = fibb_;
fibb_ = aaaads;
if (fibb_!= NULL) {
	(*(int *)fibb_)++;
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
}






Integer* aaaadu;
aaaadu = (Integer*) x3malloc(sizeof(Integer));
aaaadu->nrefs = 0;
aaaadu->isStr = 0;
aaaadu->isIter = 0;
aaaadu->value = 0;
void * aaaadv = NULL;
aaaadv = i_;
i_ = aaaadu;
if (i_!= NULL) {
	(*(int *)i_)++;
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






void * aaaadw = NULL;
aaaadw = sum_;
sum_ = i_;
if (sum_!= NULL) {
	(*(int *)sum_)++;
}
if (aaaadw!= NULL) {
	(*(int *)aaaadw)--;
	if ((*(int *)aaaadw) < 0)
		printf("aaaadw ref count is smaller than 0\n");
	if ((*(int *)aaaadw) == 0) {
		if ((*((int*)aaaadw+2)) == 1)
			freeStr(aaaadw);
		else if ((*((int*)aaaadw+1)) == 1)
			freeIter(aaaadw);
		else
			x3free(aaaadw);
	}
	aaaadw = NULL;
}






Integer* aaaadx;
aaaadx = (Integer*) x3malloc(sizeof(Integer));
aaaadx->nrefs = 0;
aaaadx->isStr = 0;
aaaadx->isIter = 0;
aaaadx->value = 1000;
void * aaaady = NULL;
aaaady = aaaabf;
aaaabf = aaaadx;
if (aaaabf!= NULL) {
	(*(int *)aaaabf)++;
}
if (aaaady!= NULL) {
	(*(int *)aaaady)--;
	if ((*(int *)aaaady) < 0)
		printf("aaaady ref count is smaller than 0\n");
	if ((*(int *)aaaady) == 0) {
		if ((*((int*)aaaady+2)) == 1)
			freeStr(aaaady);
		else if ((*((int*)aaaady+1)) == 1)
			freeIter(aaaady);
		else
			x3free(aaaady);
	}
	aaaady = NULL;
}




Boolean* aaaadz = (Boolean*) x3malloc(sizeof(Boolean));
aaaadz->nrefs = 0;
aaaadz->isStr = 0;
aaaadz->isIter = 0;
aaaadz->value = ((Integer*) i_)->value < ((Integer*) aaaabf)->value;
void * aaaaea = NULL;
aaaaea = aaaabg;
aaaabg = aaaadz;
if (aaaabg!= NULL) {
	(*(int *)aaaabg)++;
}
if (aaaaea!= NULL) {
	(*(int *)aaaaea)--;
	if ((*(int *)aaaaea) < 0)
		printf("aaaaea ref count is smaller than 0\n");
	if ((*(int *)aaaaea) == 0) {
		if ((*((int*)aaaaea+2)) == 1)
			freeStr(aaaaea);
		else if ((*((int*)aaaaea+1)) == 1)
			freeIter(aaaaea);
		else
			x3free(aaaaea);
	}
	aaaaea = NULL;
}
if (aaaabf!= NULL) {
	(*(int *)aaaabf)--;
	if ((*(int *)aaaabf) < 0)
		printf("aaaabf ref count is smaller than 0\n");
	if ((*(int *)aaaabf) == 0) {
		if ((*((int*)aaaabf+2)) == 1)
			freeStr(aaaabf);
		else if ((*((int*)aaaabf+1)) == 1)
			freeIter(aaaabf);
		else
			x3free(aaaabf);
	}
	aaaabf = NULL;
}



while (((Boolean *)aaaabg)->value) {
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



void * aaaabh = NULL;
void * aaaabi = NULL;
void * aaaabj = NULL;
void * aaaabo = NULL;
void * aaaabp = NULL;
void * aaaabm = NULL;
void * aaaabn = NULL;
void * aaaabk = NULL;
void * aaaabl = NULL;
void * aaaabq = NULL;






Integer* aaaaeb;
aaaaeb = (Integer*) x3malloc(sizeof(Integer));
aaaaeb->nrefs = 0;
aaaaeb->isStr = 0;
aaaaeb->isIter = 0;
aaaaeb->value = 1;
void * aaaaec = NULL;
aaaaec = aaaabi;
aaaabi = aaaaeb;
if (aaaabi!= NULL) {
	(*(int *)aaaabi)++;
}
if (aaaaec!= NULL) {
	(*(int *)aaaaec)--;
	if ((*(int *)aaaaec) < 0)
		printf("aaaaec ref count is smaller than 0\n");
	if ((*(int *)aaaaec) == 0) {
		if ((*((int*)aaaaec+2)) == 1)
			freeStr(aaaaec);
		else if ((*((int*)aaaaec+1)) == 1)
			freeIter(aaaaec);
		else
			x3free(aaaaec);
	}
	aaaaec = NULL;
}




Integer* aaaaed;
aaaaed  = (Integer*) x3malloc(sizeof(Integer));
aaaaed->nrefs = 0;
aaaaed->isStr = 0;
aaaaed->isIter = 0;
aaaaed->value=((Integer*)i_)->value + ((Integer*)aaaabi)->value;
void * aaaaee = NULL;
aaaaee = i_;
i_ = aaaaed;
if (i_!= NULL) {
	(*(int *)i_)++;
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







Integer* aaaaef;
aaaaef  = (Integer*) x3malloc(sizeof(Integer));
aaaaef->nrefs = 0;
aaaaef->isIter = 0;
aaaaef->isStr = 0;
aaaaef->value=((Integer*)fib_)->value - ((Integer*)fibb_)->value;
void * aaaaeg = NULL;
aaaaeg = aaaabk;
aaaabk = aaaaef;
if (aaaabk!= NULL) {
	(*(int *)aaaabk)++;
}
if (aaaaeg!= NULL) {
	(*(int *)aaaaeg)--;
	if ((*(int *)aaaaeg) < 0)
		printf("aaaaeg ref count is smaller than 0\n");
	if ((*(int *)aaaaeg) == 0) {
		if ((*((int*)aaaaeg+2)) == 1)
			freeStr(aaaaeg);
		else if ((*((int*)aaaaeg+1)) == 1)
			freeIter(aaaaeg);
		else
			x3free(aaaaeg);
	}
	aaaaeg = NULL;
}




Integer* aaaaeh;
aaaaeh  = (Integer*) x3malloc(sizeof(Integer));
aaaaeh->nrefs = 0;
aaaaeh->isStr = 0;
aaaaeh->isIter = 0;
aaaaeh->value=((Integer*)aaaabk)->value + ((Integer*)sum_)->value;
void * aaaaei = NULL;
aaaaei = sum_;
sum_ = aaaaeh;
if (sum_!= NULL) {
	(*(int *)sum_)++;
}
if (aaaaei!= NULL) {
	(*(int *)aaaaei)--;
	if ((*(int *)aaaaei) < 0)
		printf("aaaaei ref count is smaller than 0\n");
	if ((*(int *)aaaaei) == 0) {
		if ((*((int*)aaaaei+2)) == 1)
			freeStr(aaaaei);
		else if ((*((int*)aaaaei+1)) == 1)
			freeIter(aaaaei);
		else
			x3free(aaaaei);
	}
	aaaaei = NULL;
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



Integer* aaaaej;
aaaaej = (Integer*) x3malloc(sizeof(Integer));
aaaaej->nrefs = 0;
aaaaej->isStr = 0;
aaaaej->isIter = 0;
aaaaej->value = 1000;
void * aaaaek = NULL;
aaaaek = aaaabf;
aaaabf = aaaaej;
if (aaaabf!= NULL) {
	(*(int *)aaaabf)++;
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




Boolean* aaaadz = (Boolean*) x3malloc(sizeof(Boolean));
aaaadz->nrefs = 0;
aaaadz->isStr = 0;
aaaadz->isIter = 0;
aaaadz->value = ((Integer*) i_)->value < ((Integer*) aaaabf)->value;

Boolean* aaaael = (Boolean*) x3malloc(sizeof(Boolean));
aaaael->nrefs = 0;
aaaael->isStr = 0;
aaaael->isIter = 0;
aaaael->value = ((Integer*) i_)->value < ((Integer*) aaaabf)->value;
void * aaaaem = NULL;
aaaaem = aaaabg;
aaaabg = aaaael;
if (aaaabg!= NULL) {
	(*(int *)aaaabg)++;
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
if (aaaabf!= NULL) {
	(*(int *)aaaabf)--;
	if ((*(int *)aaaabf) < 0)
		printf("aaaabf ref count is smaller than 0\n");
	if ((*(int *)aaaabf) == 0) {
		if ((*((int*)aaaabf+2)) == 1)
			freeStr(aaaabf);
		else if ((*((int*)aaaabf+1)) == 1)
			freeIter(aaaabf);
		else
			x3free(aaaabf);
	}
	aaaabf = NULL;
}
}
if (i_!= NULL) {
	(*(int *)i_)--;
	if ((*(int *)i_) < 0)
		printf("i_ ref count is smaller than 0\n");
	if ((*(int *)i_) == 0) {
		if ((*((int*)i_+2)) == 1)
			freeStr(i_);
		else if ((*((int*)i_+1)) == 1)
			freeIter(i_);
		else
			x3free(i_);
	}
	i_ = NULL;
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







Integer* aaaaen;
aaaaen  = (Integer*) x3malloc(sizeof(Integer));
aaaaen->nrefs = 0;
aaaaen->isIter = 0;
aaaaen->isStr = 0;
aaaaen->value=((Integer*)fib_)->value - ((Integer*)fibb_)->value;
void * aaaaeo = NULL;
aaaaeo = aaaabt;
aaaabt = aaaaen;
if (aaaabt!= NULL) {
	(*(int *)aaaabt)++;
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
if (fib_!= NULL) {
	(*(int *)fib_)--;
	if ((*(int *)fib_) < 0)
		printf("fib_ ref count is smaller than 0\n");
	if ((*(int *)fib_) == 0) {
		if ((*((int*)fib_+2)) == 1)
			freeStr(fib_);
		else if ((*((int*)fib_+1)) == 1)
			freeIter(fib_);
		else
			x3free(fib_);
	}
	fib_ = NULL;
}
if (fibb_!= NULL) {
	(*(int *)fibb_)--;
	if ((*(int *)fibb_) < 0)
		printf("fibb_ ref count is smaller than 0\n");
	if ((*(int *)fibb_) == 0) {
		if ((*((int*)fibb_+2)) == 1)
			freeStr(fibb_);
		else if ((*((int*)fibb_+1)) == 1)
			freeIter(fibb_);
		else
			x3free(fibb_);
	}
	fibb_ = NULL;
}



Integer* aaaaep;
aaaaep = (Integer*) x3malloc(sizeof(Integer));
aaaaep->nrefs = 0;
aaaaep->isStr = 0;
aaaaep->isIter = 0;
aaaaep->value = 1000;
void * aaaaeq = NULL;
aaaaeq = aaaabu;
aaaabu = aaaaep;
if (aaaabu!= NULL) {
	(*(int *)aaaabu)++;
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




Integer* aaaaer;
aaaaer  = (Integer*) x3malloc(sizeof(Integer));
aaaaer->nrefs = 0;
aaaaer->isStr = 0;
aaaaer->isIter = 0;
aaaaer->value=((Integer*)aaaabt)->value * ((Integer*)aaaabu)->value;
void * aaaaes = NULL;
aaaaes = aaaabs;
aaaabs = aaaaer;
if (aaaabs!= NULL) {
	(*(int *)aaaabs)++;
}
if (aaaaes!= NULL) {
	(*(int *)aaaaes)--;
	if ((*(int *)aaaaes) < 0)
		printf("aaaaes ref count is smaller than 0\n");
	if ((*(int *)aaaaes) == 0) {
		if ((*((int*)aaaaes+2)) == 1)
			freeStr(aaaaes);
		else if ((*((int*)aaaaes+1)) == 1)
			freeIter(aaaaes);
		else
			x3free(aaaaes);
	}
	aaaaes = NULL;
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




Boolean* aaaaet = (Boolean*) x3malloc(sizeof(Boolean));
aaaaet->nrefs = 0;
aaaaet->isIter = 0;
aaaaet->isStr = 0;
aaaaet->value = ((Integer*) sum_)->value == ((Integer*) aaaabs)->value;
void * aaaaeu = NULL;
aaaaeu = aaaabx;
aaaabx = aaaaet;
if (aaaabx!= NULL) {
	(*(int *)aaaabx)++;
}
if (aaaaeu!= NULL) {
	(*(int *)aaaaeu)--;
	if ((*(int *)aaaaeu) < 0)
		printf("aaaaeu ref count is smaller than 0\n");
	if ((*(int *)aaaaeu) == 0) {
		if ((*((int*)aaaaeu+2)) == 1)
			freeStr(aaaaeu);
		else if ((*((int*)aaaaeu+1)) == 1)
			freeIter(aaaaeu);
		else
			x3free(aaaaeu);
	}
	aaaaeu = NULL;
}
if (sum_!= NULL) {
	(*(int *)sum_)--;
	if ((*(int *)sum_) < 0)
		printf("sum_ ref count is smaller than 0\n");
	if ((*(int *)sum_) == 0) {
		if ((*((int*)sum_+2)) == 1)
			freeStr(sum_);
		else if ((*((int*)sum_+1)) == 1)
			freeIter(sum_);
		else
			x3free(sum_);
	}
	sum_ = NULL;
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



if ( ((Boolean *)aaaabx)->value) {
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



void * aaaaby = NULL;
void * aaaabz = NULL;



String* aaaaev;
aaaaev = (String *) x3malloc(sizeof(String));
aaaaev->isIter = 0;
aaaaev->value = (char*) x3malloc(sizeof("Yes"));
aaaaev->nrefs = 0;
aaaaev->isStr = 1;
aaaaev->len = sizeof("Yes") - 1;
mystrcpy(aaaaev->value, "Yes");
void * aaaaew = NULL;
aaaaew = aaaaby;
aaaaby = aaaaev;
if (aaaaby!= NULL) {
	(*(int *)aaaaby)++;
}
if (aaaaew!= NULL) {
	(*(int *)aaaaew)--;
	if ((*(int *)aaaaew) < 0)
		printf("aaaaew ref count is smaller than 0\n");
	if ((*(int *)aaaaew) == 0) {
		if ((*((int*)aaaaew+2)) == 1)
			freeStr(aaaaew);
		else if ((*((int*)aaaaew+1)) == 1)
			freeIter(aaaaew);
		else
			x3free(aaaaew);
	}
	aaaaew = NULL;
}



Iterable* aaaaex;
aaaaex = (Iterable*) x3malloc(sizeof(Iterable));
aaaaex->isStr = 0;
aaaaex->isIter = 1;
aaaaex->nrefs = 1;
aaaaex->value = aaaaby;
aaaaex->additional = NULL;
aaaaex->next = NULL;
aaaaex->concat = NULL;
if (aaaaby!= NULL) {
	(*(int *)aaaaby)++;
}
aaaaex->nrefs = 0;
void * aaaaey = NULL;
aaaaey = aaaabz;
aaaabz = aaaaex;
if (aaaabz!= NULL) {
	(*(int *)aaaabz)++;
}
if (aaaaey!= NULL) {
	(*(int *)aaaaey)--;
	if ((*(int *)aaaaey) < 0)
		printf("aaaaey ref count is smaller than 0\n");
	if ((*(int *)aaaaey) == 0) {
		if ((*((int*)aaaaey+2)) == 1)
			freeStr(aaaaey);
		else if ((*((int*)aaaaey+1)) == 1)
			freeIter(aaaaey);
		else
			x3free(aaaaey);
	}
	aaaaey = NULL;
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



if (aaaabz!= NULL) {
(*(int *)aaaabz)--;
}
return aaaabz;
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






String* aaaaez;
aaaaez = (String *) x3malloc(sizeof(String));
aaaaez->isIter = 0;
aaaaez->value = (char*) x3malloc(sizeof("No"));
aaaaez->nrefs = 0;
aaaaez->isStr = 1;
aaaaez->len = sizeof("No") - 1;
mystrcpy(aaaaez->value, "No");
void * aaaafa = NULL;
aaaafa = aaaaca;
aaaaca = aaaaez;
if (aaaaca!= NULL) {
	(*(int *)aaaaca)++;
}
if (aaaafa!= NULL) {
	(*(int *)aaaafa)--;
	if ((*(int *)aaaafa) < 0)
		printf("aaaafa ref count is smaller than 0\n");
	if ((*(int *)aaaafa) == 0) {
		if ((*((int*)aaaafa+2)) == 1)
			freeStr(aaaafa);
		else if ((*((int*)aaaafa+1)) == 1)
			freeIter(aaaafa);
		else
			x3free(aaaafa);
	}
	aaaafa = NULL;
}



Iterable* aaaafb;
aaaafb = (Iterable*) x3malloc(sizeof(Iterable));
aaaafb->isStr = 0;
aaaafb->isIter = 1;
aaaafb->nrefs = 1;
aaaafb->value = aaaaca;
aaaafb->additional = NULL;
aaaafb->next = NULL;
aaaafb->concat = NULL;
if (aaaaca!= NULL) {
	(*(int *)aaaaca)++;
}
aaaafb->nrefs = 0;
void * aaaafc = NULL;
aaaafc = aaaacb;
aaaacb = aaaafb;
if (aaaacb!= NULL) {
	(*(int *)aaaacb)++;
}
if (aaaafc!= NULL) {
	(*(int *)aaaafc)--;
	if ((*(int *)aaaafc) < 0)
		printf("aaaafc ref count is smaller than 0\n");
	if ((*(int *)aaaafc) == 0) {
		if ((*((int*)aaaafc+2)) == 1)
			freeStr(aaaafc);
		else if ((*((int*)aaaafc+1)) == 1)
			freeIter(aaaafc);
		else
			x3free(aaaafc);
	}
	aaaafc = NULL;
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



if (aaaacb!= NULL) {
(*(int *)aaaacb)--;
}
return aaaacb;
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
