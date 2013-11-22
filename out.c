#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * aaaaac = NULL;
void * aaaaad = NULL;
void * a = NULL;
void * aaaaae = NULL;
void * aaaaaf = NULL;
void * b = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * c = NULL;
void * aaaaai = NULL;
void * aaaaaj = NULL;
void * d = NULL;
void * aaaaak = NULL;






Integer* aaaaal;
aaaaal = (Integer*) x3malloc(sizeof(Integer));
(aaaaal->nrefs) = 1;
aaaaal->value = 2;
void * aaaaam = NULL;
aaaaam = aaaaac;
aaaaac = aaaaal;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
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



Integer* aaaaan;
aaaaan = (Integer*) x3malloc(sizeof(Integer));
(aaaaan->nrefs) = 1;
aaaaan->value = 4;
void * aaaaao = NULL;
aaaaao = aaaaad;
aaaaad = aaaaan;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
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




Integer* aaaaap;
aaaaap  = (Integer*) x3malloc(sizeof(Integer));
aaaaap->nrefs = 0;
aaaaap->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
void * aaaaaq = NULL;
aaaaaq = a;
a = aaaaap;
if (a!= NULL) {
	(*(int *)a)++;
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






Integer* aaaaar;
aaaaar = (Integer*) x3malloc(sizeof(Integer));
(aaaaar->nrefs) = 1;
aaaaar->value = 2;
void * aaaaas = NULL;
aaaaas = aaaaae;
aaaaae = aaaaar;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) == 0)
		x3free(aaaaas);
	aaaaas = NULL;
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
	aaaaas = NULL;
}



Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 1;
aaaaat->value = 4;
void * aaaaau = NULL;
aaaaau = aaaaaf;
aaaaaf = aaaaat;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
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
aaaaav  = (Integer*) x3malloc(sizeof(Integer));
aaaaav->nrefs = 0;
aaaaav->value=((Integer*)aaaaae)->value + ((Integer*)aaaaaf)->value;
void * aaaaaw = NULL;
aaaaaw = b;
b = aaaaav;
if (b!= NULL) {
	(*(int *)b)++;
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






void * aaaaax = NULL;
aaaaax = aaaaag;
aaaaag = a;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaax!= NULL) {
	(*(int *)aaaaax)--;
	if ((*(int *)aaaaax) == 0)
		x3free(aaaaax);
	aaaaax = NULL;
	if ((*(int *)aaaaax) < 0)
		printf("aaaaax ref count is smaller than 0\n");
	aaaaax = NULL;
}



void * aaaaay = NULL;
aaaaay = aaaaah;
aaaaah = b;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
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




Integer* aaaaaz;
aaaaaz  = (Integer*) x3malloc(sizeof(Integer));
aaaaaz->nrefs = 0;
aaaaaz->value=((Integer*)aaaaag)->value + ((Integer*)aaaaah)->value;
void * aaaaba = NULL;
aaaaba = c;
c = aaaaaz;
if (c!= NULL) {
	(*(int *)c)++;
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
if (c!= NULL) {
	(*(int *)c)--;
	if ((*(int *)c) == 0)
		x3free(c);
	c = NULL;
	if ((*(int *)c) < 0)
		printf("c ref count is smaller than 0\n");
	c = NULL;
}






void * aaaabb = NULL;
aaaabb = aaaaai;
aaaaai = a;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabb!= NULL) {
	(*(int *)aaaabb)--;
	if ((*(int *)aaaabb) == 0)
		x3free(aaaabb);
	aaaabb = NULL;
	if ((*(int *)aaaabb) < 0)
		printf("aaaabb ref count is smaller than 0\n");
	aaaabb = NULL;
}
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0\n");
	a = NULL;
}



void * aaaabc = NULL;
aaaabc = aaaaaj;
aaaaaj = b;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
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
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0\n");
	b = NULL;
}




Integer* aaaabd;
aaaabd  = (Integer*) x3malloc(sizeof(Integer));
aaaabd->nrefs = 0;
aaaabd->value=((Integer*)aaaaai)->value + ((Integer*)aaaaaj)->value;
void * aaaabe = NULL;
aaaabe = d;
d = aaaabd;
if (d!= NULL) {
	(*(int *)d)++;
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
if (d!= NULL) {
	(*(int *)d)--;
	if ((*(int *)d) == 0)
		x3free(d);
	d = NULL;
	if ((*(int *)d) < 0)
		printf("d ref count is smaller than 0\n");
	d = NULL;
}






String* aaaabf;
aaaabf = (String *) x3malloc(sizeof(String));
(aaaabf->isIter) = 0;
aaaabf->value = (char*) x3malloc(sizeof("lala"));
(aaaabf->nrefs) = 1;
aaaabf->len = sizeof("lala") - 1;
mystrcpy(aaaabf->value, "lala");
void * aaaabg = NULL;
aaaabg = aaaaak;
aaaaak = aaaabf;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
if (aaaabg!= NULL) {
	(*(int *)aaaabg)--;
	if ((*(int *)aaaabg) == 0)
		x3free(aaaabg);
	aaaabg = NULL;
	if ((*(int *)aaaabg) < 0)
		printf("aaaabg ref count is smaller than 0\n");
	aaaabg = NULL;
}



Iterable* aaaabh;
aaaabh = (Iterable*) x3malloc(sizeof(Iterable));
aaaabh->isIter = 1;
aaaabh->nrefs = 0;
aaaabh->value = aaaaak;
aaaabh->additional = NULL;
aaaabh->next = NULL;
aaaabh->concat = NULL;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
if (aaaabh!= NULL) {
(*(int *)aaaabh)--;
}
return aaaabh;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
