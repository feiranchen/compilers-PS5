#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * i = NULL;
void * a = NULL;
void * aaaaad = NULL;
void * aaaaae = NULL;
void * b = NULL;
void * c = NULL;
void * d = NULL;
void * aaaaap = NULL;
void * aaaaaq = NULL;
void * e = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;
void * f = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;
void * g = NULL;
void * aaaabf = NULL;






Integer* aaaabg;
aaaabg = (Integer*) x3malloc(sizeof(Integer));
(aaaabg->nrefs) = 0;
aaaabg->value = 2;
void * aaaabh = NULL;
aaaabh = i;
i = aaaabg;
if (i!= NULL) {
	(*(int *)i)++;
}
if (aaaabh!= NULL) {
	(*(int *)aaaabh)--;
	if ((*(int *)aaaabh) < 0)
		printf("aaaabh ref count is smaller than 0\n");
	if ((*(int *)aaaabh) == 0)
		x3free(aaaabh);
	aaaabh = NULL;
}






void * aaaabi = NULL;
aaaabi = a;
a = i;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaabi!= NULL) {
	(*(int *)aaaabi)--;
	if ((*(int *)aaaabi) < 0)
		printf("aaaabi ref count is smaller than 0\n");
	if ((*(int *)aaaabi) == 0)
		x3free(aaaabi);
	aaaabi = NULL;
}






void * aaaabj = NULL;
aaaabj = aaaaad;
aaaaad = a;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
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
aaaabk->value = 1;
void * aaaabl = NULL;
aaaabl = aaaaae;
aaaaae = aaaabk;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaabl!= NULL) {
	(*(int *)aaaabl)--;
	if ((*(int *)aaaabl) < 0)
		printf("aaaabl ref count is smaller than 0\n");
	if ((*(int *)aaaabl) == 0)
		x3free(aaaabl);
	aaaabl = NULL;
}




Integer* aaaabm;
aaaabm  = (Integer*) x3malloc(sizeof(Integer));
aaaabm->nrefs = 0;
aaaabm->value=((Integer*)aaaaad)->value + ((Integer*)aaaaae)->value;
void * aaaabn = NULL;
aaaabn = b;
b = aaaabm;
if (b!= NULL) {
	(*(int *)b)++;
}
if (aaaabn!= NULL) {
	(*(int *)aaaabn)--;
	if ((*(int *)aaaabn) < 0)
		printf("aaaabn ref count is smaller than 0\n");
	if ((*(int *)aaaabn) == 0)
		x3free(aaaabn);
	aaaabn = NULL;
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0\n");
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	aaaaad = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
}






Boolean* aaaabo;
aaaabo = (Boolean *) x3malloc(sizeof(Boolean));
(aaaabo->nrefs) = 0;
aaaabo->value = 0;
void * aaaabp = NULL;
aaaabp = c;
c = aaaabo;
if (c!= NULL) {
	(*(int *)c)++;
}
if (aaaabp!= NULL) {
	(*(int *)aaaabp)--;
	if ((*(int *)aaaabp) < 0)
		printf("aaaabp ref count is smaller than 0\n");
	if ((*(int *)aaaabp) == 0)
		x3free(aaaabp);
	aaaabp = NULL;
}






if ( ((Boolean *)c)->value) {
if (c!= NULL) {
	(*(int *)c)--;
	if ((*(int *)c) < 0)
		printf("c ref count is smaller than 0\n");
	if ((*(int *)c) == 0)
		x3free(c);
	c = NULL;
}



void * aaaaah = NULL;
void * aaaaai = NULL;






void * aaaabq = NULL;
aaaabq = aaaaah;
aaaaah = a;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaabq!= NULL) {
	(*(int *)aaaabq)--;
	if ((*(int *)aaaabq) < 0)
		printf("aaaabq ref count is smaller than 0\n");
	if ((*(int *)aaaabq) == 0)
		x3free(aaaabq);
	aaaabq = NULL;
}
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0\n");
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
}



void * aaaabr = NULL;
aaaabr = aaaaai;
aaaaai = b;
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
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0\n");
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
}




Integer* aaaabs;
aaaabs  = (Integer*) x3malloc(sizeof(Integer));
aaaabs->nrefs = 0;
aaaabs->value=((Integer*)aaaaah)->value + ((Integer*)aaaaai)->value;
void * aaaabt = NULL;
aaaabt = d;
d = aaaabs;
if (d!= NULL) {
	(*(int *)d)++;
}
if (aaaabt!= NULL) {
	(*(int *)aaaabt)--;
	if ((*(int *)aaaabt) < 0)
		printf("aaaabt ref count is smaller than 0\n");
	if ((*(int *)aaaabt) == 0)
		x3free(aaaabt);
	aaaabt = NULL;
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0\n");
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	aaaaah = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
}
if (d!= NULL) {
	(*(int *)d)--;
	if ((*(int *)d) < 0)
		printf("d ref count is smaller than 0\n");
	if ((*(int *)d) == 0)
		x3free(d);
	d = NULL;
}






Integer* aaaabu;
aaaabu = (Integer*) x3malloc(sizeof(Integer));
(aaaabu->nrefs) = 0;
aaaabu->value = 0;
void * aaaabv = NULL;
aaaabv = a;
a = aaaabu;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaabv!= NULL) {
	(*(int *)aaaabv)--;
	if ((*(int *)aaaabv) < 0)
		printf("aaaabv ref count is smaller than 0\n");
	if ((*(int *)aaaabv) == 0)
		x3free(aaaabv);
	aaaabv = NULL;
}
}
else {
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0\n");
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
}
if (c!= NULL) {
	(*(int *)c)--;
	if ((*(int *)c) < 0)
		printf("c ref count is smaller than 0\n");
	if ((*(int *)c) == 0)
		x3free(c);
	c = NULL;
}



void * aaaaal = NULL;
void * aaaaam = NULL;






Integer* aaaabw;
aaaabw = (Integer*) x3malloc(sizeof(Integer));
(aaaabw->nrefs) = 0;
aaaabw->value = 3;
void * aaaabx = NULL;
aaaabx = a;
a = aaaabw;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaabx!= NULL) {
	(*(int *)aaaabx)--;
	if ((*(int *)aaaabx) < 0)
		printf("aaaabx ref count is smaller than 0\n");
	if ((*(int *)aaaabx) == 0)
		x3free(aaaabx);
	aaaabx = NULL;
}






void * aaaaby = NULL;
aaaaby = aaaaal;
aaaaal = i;
if (aaaaal!= NULL) {
	(*(int *)aaaaal)++;
}
if (aaaaby!= NULL) {
	(*(int *)aaaaby)--;
	if ((*(int *)aaaaby) < 0)
		printf("aaaaby ref count is smaller than 0\n");
	if ((*(int *)aaaaby) == 0)
		x3free(aaaaby);
	aaaaby = NULL;
}



void * aaaabz = NULL;
aaaabz = aaaaam;
aaaaam = b;
if (aaaaam!= NULL) {
	(*(int *)aaaaam)++;
}
if (aaaabz!= NULL) {
	(*(int *)aaaabz)--;
	if ((*(int *)aaaabz) < 0)
		printf("aaaabz ref count is smaller than 0\n");
	if ((*(int *)aaaabz) == 0)
		x3free(aaaabz);
	aaaabz = NULL;
}
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0\n");
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
}




Integer* aaaaca;
aaaaca  = (Integer*) x3malloc(sizeof(Integer));
aaaaca->nrefs = 0;
aaaaca->value=((Integer*)aaaaal)->value + ((Integer*)aaaaam)->value;
void * aaaacb = NULL;
aaaacb = d;
d = aaaaca;
if (d!= NULL) {
	(*(int *)d)++;
}
if (aaaacb!= NULL) {
	(*(int *)aaaacb)--;
	if ((*(int *)aaaacb) < 0)
		printf("aaaacb ref count is smaller than 0\n");
	if ((*(int *)aaaacb) == 0)
		x3free(aaaacb);
	aaaacb = NULL;
}
if (aaaaal!= NULL) {
	(*(int *)aaaaal)--;
	if ((*(int *)aaaaal) < 0)
		printf("aaaaal ref count is smaller than 0\n");
	if ((*(int *)aaaaal) == 0)
		x3free(aaaaal);
	aaaaal = NULL;
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	aaaaam = NULL;
}
if (d!= NULL) {
	(*(int *)d)--;
	if ((*(int *)d) < 0)
		printf("d ref count is smaller than 0\n");
	if ((*(int *)d) == 0)
		x3free(d);
	d = NULL;
}
}






void * aaaacc = NULL;
aaaacc = aaaaap;
aaaaap = a;
if (aaaaap!= NULL) {
	(*(int *)aaaaap)++;
}
if (aaaacc!= NULL) {
	(*(int *)aaaacc)--;
	if ((*(int *)aaaacc) < 0)
		printf("aaaacc ref count is smaller than 0\n");
	if ((*(int *)aaaacc) == 0)
		x3free(aaaacc);
	aaaacc = NULL;
}



Integer* aaaacd;
aaaacd = (Integer*) x3malloc(sizeof(Integer));
(aaaacd->nrefs) = 0;
aaaacd->value = 3;
void * aaaace = NULL;
aaaace = aaaaaq;
aaaaaq = aaaacd;
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)++;
}
if (aaaace!= NULL) {
	(*(int *)aaaace)--;
	if ((*(int *)aaaace) < 0)
		printf("aaaace ref count is smaller than 0\n");
	if ((*(int *)aaaace) == 0)
		x3free(aaaace);
	aaaace = NULL;
}




Integer* aaaacf;
aaaacf  = (Integer*) x3malloc(sizeof(Integer));
aaaacf->nrefs = 0;
aaaacf->value=((Integer*)aaaaap)->value * ((Integer*)aaaaaq)->value;
void * aaaacg = NULL;
aaaacg = e;
e = aaaacf;
if (e!= NULL) {
	(*(int *)e)++;
}
if (aaaacg!= NULL) {
	(*(int *)aaaacg)--;
	if ((*(int *)aaaacg) < 0)
		printf("aaaacg ref count is smaller than 0\n");
	if ((*(int *)aaaacg) == 0)
		x3free(aaaacg);
	aaaacg = NULL;
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0\n");
	if ((*(int *)aaaaap) == 0)
		x3free(aaaaap);
	aaaaap = NULL;
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	aaaaaq = NULL;
}






void * aaaach = NULL;
aaaach = aaaaas;
aaaaas = a;
if (aaaaas!= NULL) {
	(*(int *)aaaaas)++;
}
if (aaaach!= NULL) {
	(*(int *)aaaach)--;
	if ((*(int *)aaaach) < 0)
		printf("aaaach ref count is smaller than 0\n");
	if ((*(int *)aaaach) == 0)
		x3free(aaaach);
	aaaach = NULL;
}
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0\n");
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
}



Integer* aaaaci;
aaaaci = (Integer*) x3malloc(sizeof(Integer));
(aaaaci->nrefs) = 0;
aaaaci->value = 3;
void * aaaacj = NULL;
aaaacj = aaaaat;
aaaaat = aaaaci;
if (aaaaat!= NULL) {
	(*(int *)aaaaat)++;
}
if (aaaacj!= NULL) {
	(*(int *)aaaacj)--;
	if ((*(int *)aaaacj) < 0)
		printf("aaaacj ref count is smaller than 0\n");
	if ((*(int *)aaaacj) == 0)
		x3free(aaaacj);
	aaaacj = NULL;
}




Integer* aaaack;
aaaack  = (Integer*) x3malloc(sizeof(Integer));
aaaack->nrefs = 0;
aaaack->value=((Integer*)aaaaas)->value * ((Integer*)aaaaat)->value;
void * aaaacl = NULL;
aaaacl = f;
f = aaaack;
if (f!= NULL) {
	(*(int *)f)++;
}
if (aaaacl!= NULL) {
	(*(int *)aaaacl)--;
	if ((*(int *)aaaacl) < 0)
		printf("aaaacl ref count is smaller than 0\n");
	if ((*(int *)aaaacl) == 0)
		x3free(aaaacl);
	aaaacl = NULL;
}
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
	if ((*(int *)aaaaas) == 0)
		x3free(aaaaas);
	aaaaas = NULL;
}
if (aaaaat!= NULL) {
	(*(int *)aaaaat)--;
	if ((*(int *)aaaaat) < 0)
		printf("aaaaat ref count is smaller than 0\n");
	if ((*(int *)aaaaat) == 0)
		x3free(aaaaat);
	aaaaat = NULL;
}






void * aaaacm = NULL;
aaaacm = aaaaav;
aaaaav = i;
if (aaaaav!= NULL) {
	(*(int *)aaaaav)++;
}
if (aaaacm!= NULL) {
	(*(int *)aaaacm)--;
	if ((*(int *)aaaacm) < 0)
		printf("aaaacm ref count is smaller than 0\n");
	if ((*(int *)aaaacm) == 0)
		x3free(aaaacm);
	aaaacm = NULL;
}
if (i!= NULL) {
	(*(int *)i)--;
	if ((*(int *)i) < 0)
		printf("i ref count is smaller than 0\n");
	if ((*(int *)i) == 0)
		x3free(i);
	i = NULL;
}



Integer* aaaacn;
aaaacn = (Integer*) x3malloc(sizeof(Integer));
(aaaacn->nrefs) = 0;
aaaacn->value = 2;
void * aaaaco = NULL;
aaaaco = aaaaaw;
aaaaaw = aaaacn;
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)++;
}
if (aaaaco!= NULL) {
	(*(int *)aaaaco)--;
	if ((*(int *)aaaaco) < 0)
		printf("aaaaco ref count is smaller than 0\n");
	if ((*(int *)aaaaco) == 0)
		x3free(aaaaco);
	aaaaco = NULL;
}




Integer* aaaacp;
aaaacp  = (Integer*) x3malloc(sizeof(Integer));
aaaacp->nrefs = 0;
aaaacp->value=((Integer*)aaaaav)->value * ((Integer*)aaaaaw)->value;
void * aaaacq = NULL;
aaaacq = i;
i = aaaacp;
if (i!= NULL) {
	(*(int *)i)++;
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
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0\n");
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	aaaaaw = NULL;
}






void * aaaacr = NULL;
aaaacr = aaaaba;
aaaaba = e;
if (aaaaba!= NULL) {
	(*(int *)aaaaba)++;
}
if (aaaacr!= NULL) {
	(*(int *)aaaacr)--;
	if ((*(int *)aaaacr) < 0)
		printf("aaaacr ref count is smaller than 0\n");
	if ((*(int *)aaaacr) == 0)
		x3free(aaaacr);
	aaaacr = NULL;
}
if (e!= NULL) {
	(*(int *)e)--;
	if ((*(int *)e) < 0)
		printf("e ref count is smaller than 0\n");
	if ((*(int *)e) == 0)
		x3free(e);
	e = NULL;
}



void * aaaacs = NULL;
aaaacs = aaaabb;
aaaabb = f;
if (aaaabb!= NULL) {
	(*(int *)aaaabb)++;
}
if (aaaacs!= NULL) {
	(*(int *)aaaacs)--;
	if ((*(int *)aaaacs) < 0)
		printf("aaaacs ref count is smaller than 0\n");
	if ((*(int *)aaaacs) == 0)
		x3free(aaaacs);
	aaaacs = NULL;
}
if (f!= NULL) {
	(*(int *)f)--;
	if ((*(int *)f) < 0)
		printf("f ref count is smaller than 0\n");
	if ((*(int *)f) == 0)
		x3free(f);
	f = NULL;
}




Integer* aaaact;
aaaact  = (Integer*) x3malloc(sizeof(Integer));
aaaact->nrefs = 0;
aaaact->value=((Integer*)aaaaba)->value + ((Integer*)aaaabb)->value;
void * aaaacu = NULL;
aaaacu = aaaaay;
aaaaay = aaaact;
if (aaaaay!= NULL) {
	(*(int *)aaaaay)++;
}
if (aaaacu!= NULL) {
	(*(int *)aaaacu)--;
	if ((*(int *)aaaacu) < 0)
		printf("aaaacu ref count is smaller than 0\n");
	if ((*(int *)aaaacu) == 0)
		x3free(aaaacu);
	aaaacu = NULL;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	aaaaba = NULL;
}
if (aaaabb!= NULL) {
	(*(int *)aaaabb)--;
	if ((*(int *)aaaabb) < 0)
		printf("aaaabb ref count is smaller than 0\n");
	if ((*(int *)aaaabb) == 0)
		x3free(aaaabb);
	aaaabb = NULL;
}



void * aaaacv = NULL;
aaaacv = aaaaaz;
aaaaaz = i;
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)++;
}
if (aaaacv!= NULL) {
	(*(int *)aaaacv)--;
	if ((*(int *)aaaacv) < 0)
		printf("aaaacv ref count is smaller than 0\n");
	if ((*(int *)aaaacv) == 0)
		x3free(aaaacv);
	aaaacv = NULL;
}
if (i!= NULL) {
	(*(int *)i)--;
	if ((*(int *)i) < 0)
		printf("i ref count is smaller than 0\n");
	if ((*(int *)i) == 0)
		x3free(i);
	i = NULL;
}




Integer* aaaacw;
aaaacw  = (Integer*) x3malloc(sizeof(Integer));
aaaacw->nrefs = 0;
aaaacw->value=((Integer*)aaaaay)->value + ((Integer*)aaaaaz)->value;
void * aaaacx = NULL;
aaaacx = g;
g = aaaacw;
if (g!= NULL) {
	(*(int *)g)++;
}
if (aaaacx!= NULL) {
	(*(int *)aaaacx)--;
	if ((*(int *)aaaacx) < 0)
		printf("aaaacx ref count is smaller than 0\n");
	if ((*(int *)aaaacx) == 0)
		x3free(aaaacx);
	aaaacx = NULL;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	aaaaay = NULL;
}
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)--;
	if ((*(int *)aaaaaz) < 0)
		printf("aaaaaz ref count is smaller than 0\n");
	if ((*(int *)aaaaaz) == 0)
		x3free(aaaaaz);
	aaaaaz = NULL;
}
if (g!= NULL) {
	(*(int *)g)--;
	if ((*(int *)g) < 0)
		printf("g ref count is smaller than 0\n");
	if ((*(int *)g) == 0)
		x3free(g);
	g = NULL;
}






String* aaaacy;
aaaacy = (String *) x3malloc(sizeof(String));
(aaaacy->isIter) = 0;
aaaacy->value = (char*) x3malloc(sizeof("gfea"));
(aaaacy->nrefs) = 0;
(aaaacy->isStr) = 1;
aaaacy->len = sizeof("gfea") - 1;
mystrcpy(aaaacy->value, "gfea");
void * aaaacz = NULL;
aaaacz = aaaabf;
aaaabf = aaaacy;
if (aaaabf!= NULL) {
	(*(int *)aaaabf)++;
}
if (aaaacz!= NULL) {
	(*(int *)aaaacz)--;
	if ((*(int *)aaaacz) < 0)
		printf("aaaacz ref count is smaller than 0\n");
	if ((*(int *)aaaacz) == 0)
		x3free(aaaacz);
	aaaacz = NULL;
}



Iterable* aaaada;
aaaada = (Iterable*) x3malloc(sizeof(Iterable));
aaaada->isIter = 1;
aaaada->nrefs = 0;
aaaada->value = aaaabf;
aaaada->additional = NULL;
aaaada->next = NULL;
aaaada->concat = NULL;
if (aaaabf!= NULL) {
	(*(int *)aaaabf)++;
}
if (aaaabf!= NULL) {
	(*(int *)aaaabf)--;
	if ((*(int *)aaaabf) < 0)
		printf("aaaabf ref count is smaller than 0\n");
	if ((*(int *)aaaabf) == 0)
		freeStr(aaaabf);
	aaaabf = NULL;
}
return aaaada;
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
