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






void * aaaaar = NULL;
aaaaar = aaaaae;
aaaaae = aaaaac;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
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



void * aaaaas = NULL;
aaaaas = aaaaaf;
aaaaaf = aaaaad;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
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
aaaaat  = (Integer*) x3malloc(sizeof(Integer));
aaaaat->nrefs = 0;
aaaaat->value=((Integer*)aaaaae)->value + ((Integer*)aaaaaf)->value;
void * aaaaau = NULL;
aaaaau = b;
b = aaaaat;
if (b!= NULL) {
	(*(int *)b)++;
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






void * aaaaav = NULL;
aaaaav = aaaaag;
aaaaag = a;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaav!= NULL) {
	(*(int *)aaaaav)--;
	if ((*(int *)aaaaav) == 0)
		x3free(aaaaav);
	aaaaav = NULL;
	if ((*(int *)aaaaav) < 0)
		printf("aaaaav ref count is smaller than 0\n");
	aaaaav = NULL;
}



void * aaaaaw = NULL;
aaaaaw = aaaaah;
aaaaah = b;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
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
aaaaax->value=((Integer*)aaaaag)->value + ((Integer*)aaaaah)->value;
void * aaaaay = NULL;
aaaaay = c;
c = aaaaax;
if (c!= NULL) {
	(*(int *)c)++;
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






void * aaaaaz = NULL;
aaaaaz = aaaaai;
aaaaai = a;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)--;
	if ((*(int *)aaaaaz) == 0)
		x3free(aaaaaz);
	aaaaaz = NULL;
	if ((*(int *)aaaaaz) < 0)
		printf("aaaaaz ref count is smaller than 0\n");
	aaaaaz = NULL;
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



void * aaaaba = NULL;
aaaaba = aaaaaj;
aaaaaj = b;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
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
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0\n");
	b = NULL;
}




Integer* aaaabb;
aaaabb  = (Integer*) x3malloc(sizeof(Integer));
aaaabb->nrefs = 0;
aaaabb->value=((Integer*)aaaaai)->value + ((Integer*)aaaaaj)->value;
void * aaaabc = NULL;
aaaabc = d;
d = aaaabb;
if (d!= NULL) {
	(*(int *)d)++;
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






String* aaaabd;
aaaabd = (String *) x3malloc(sizeof(String));
(aaaabd->isIter) = 0;
aaaabd->value = (char*) x3malloc(sizeof("lala"));
(aaaabd->nrefs) = 1;
aaaabd->len = sizeof("lala") - 1;
mystrcpy(aaaabd->value, "lala");
void * aaaabe = NULL;
aaaabe = aaaaak;
aaaaak = aaaabd;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
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



Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 0;
aaaabf->value = aaaaak;
aaaabf->additional = NULL;
aaaabf->next = NULL;
aaaabf->concat = NULL;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
if (aaaabf!= NULL) {
(*(int *)aaaabf)--;
}
return aaaabf;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
