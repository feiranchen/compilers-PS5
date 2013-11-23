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
(aaaaal->nrefs) = 0;
aaaaal->value = 2;
Integer aaaaac;
void * aaaaam = NULL;
aaaaam = aaaaac;
aaaaac = aaaaal;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0\n");
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	aaaaam = NULL;
}



Integer* aaaaan;
aaaaan = (Integer*) x3malloc(sizeof(Integer));
(aaaaan->nrefs) = 0;
aaaaan->value = 4;
Integer aaaaad;
void * aaaaao = NULL;
aaaaao = aaaaad;
aaaaad = aaaaan;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaao!= NULL) {
	(*(int *)aaaaao)--;
	if ((*(int *)aaaaao) < 0)
		printf("aaaaao ref count is smaller than 0\n");
	if ((*(int *)aaaaao) == 0)
		x3free(aaaaao);
	aaaaao = NULL;
}




Integer* aaaaap;
aaaaap  = (Integer*) x3malloc(sizeof(Integer));
aaaaap->nrefs = 0;
aaaaap->value=((Integer*)aaaaac)->value + ((Integer*)aaaaad)->value;
Integer a;
void * aaaaaq = NULL;
aaaaaq = a;
a = aaaaap;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0\n");
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	aaaaaq = NULL;
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
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0\n");
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
}






Integer aaaaae;
void * aaaaar = NULL;
aaaaar = aaaaae;
aaaaae = aaaaac;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaar!= NULL) {
	(*(int *)aaaaar)--;
	if ((*(int *)aaaaar) < 0)
		printf("aaaaar ref count is smaller than 0\n");
	if ((*(int *)aaaaar) == 0)
		x3free(aaaaar);
	aaaaar = NULL;
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0\n");
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
}



Integer aaaaaf;
void * aaaaas = NULL;
aaaaas = aaaaaf;
aaaaaf = aaaaad;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaas!= NULL) {
	(*(int *)aaaaas)--;
	if ((*(int *)aaaaas) < 0)
		printf("aaaaas ref count is smaller than 0\n");
	if ((*(int *)aaaaas) == 0)
		x3free(aaaaas);
	aaaaas = NULL;
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0\n");
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	aaaaaf = NULL;
}



Integer b;
void * aaaaat = NULL;
aaaaat = b;
b = a;
if (b!= NULL) {
	(*(int *)b)++;
}
if (aaaaat!= NULL) {
	(*(int *)aaaaat)--;
	if ((*(int *)aaaaat) < 0)
		printf("aaaaat ref count is smaller than 0\n");
	if ((*(int *)aaaaat) == 0)
		x3free(aaaaat);
	aaaaat = NULL;
}
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0\n");
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
}






void * aaaaau = NULL;
aaaaau = aaaaag;
aaaaag = a;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0\n");
	if ((*(int *)aaaaau) == 0)
		x3free(aaaaau);
	aaaaau = NULL;
}



void * aaaaav = NULL;
aaaaav = aaaaah;
aaaaah = a;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaaav!= NULL) {
	(*(int *)aaaaav)--;
	if ((*(int *)aaaaav) < 0)
		printf("aaaaav ref count is smaller than 0\n");
	if ((*(int *)aaaaav) == 0)
		x3free(aaaaav);
	aaaaav = NULL;
}




Integer* aaaaaw;
aaaaaw  = (Integer*) x3malloc(sizeof(Integer));
aaaaaw->nrefs = 0;
aaaaaw->value=((Integer*)a)->value + ((Integer*)a)->value;
Integer c;
void * aaaaax = NULL;
aaaaax = c;
c = aaaaaw;
if (c!= NULL) {
	(*(int *)c)++;
}
if (aaaaax!= NULL) {
	(*(int *)aaaaax)--;
	if ((*(int *)aaaaax) < 0)
		printf("aaaaax ref count is smaller than 0\n");
	if ((*(int *)aaaaax) == 0)
		x3free(aaaaax);
	aaaaax = NULL;
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
if (c!= NULL) {
	(*(int *)c)--;
	if ((*(int *)c) < 0)
		printf("c ref count is smaller than 0\n");
	if ((*(int *)c) == 0)
		x3free(c);
	c = NULL;
}






void * aaaaay = NULL;
aaaaay = aaaaai;
aaaaai = a;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0\n");
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	aaaaay = NULL;
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0\n");
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
}



void * aaaaaz = NULL;
aaaaaz = aaaaaj;
aaaaaj = a;
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)++;
}
if (aaaaaz!= NULL) {
	(*(int *)aaaaaz)--;
	if ((*(int *)aaaaaz) < 0)
		printf("aaaaaz ref count is smaller than 0\n");
	if ((*(int *)aaaaaz) == 0)
		x3free(aaaaaz);
	aaaaaz = NULL;
}
if (aaaaaj!= NULL) {
	(*(int *)aaaaaj)--;
	if ((*(int *)aaaaaj) < 0)
		printf("aaaaaj ref count is smaller than 0\n");
	if ((*(int *)aaaaaj) == 0)
		x3free(aaaaaj);
	aaaaaj = NULL;
}



Integer d;
void * aaaaba = NULL;
aaaaba = d;
d = c;
if (d!= NULL) {
	(*(int *)d)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0\n");
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	aaaaba = NULL;
}
if (d!= NULL) {
	(*(int *)d)--;
	if ((*(int *)d) < 0)
		printf("d ref count is smaller than 0\n");
	if ((*(int *)d) == 0)
		x3free(d);
	d = NULL;
}






String* aaaabb;
aaaabb = (String *) x3malloc(sizeof(String));
(aaaabb->isIter) = 0;
aaaabb->value = (char*) x3malloc(sizeof("lala"));
(aaaabb->nrefs) = 0;
aaaabb->len = sizeof("lala") - 1;
mystrcpy(aaaabb->value, "lala");
void * aaaabc = NULL;
aaaabc = aaaaak;
aaaaak = aaaabb;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
if (aaaabc!= NULL) {
	(*(int *)aaaabc)--;
	if ((*(int *)aaaabc) < 0)
		printf("aaaabc ref count is smaller than 0\n");
	if ((*(int *)aaaabc) == 0)
		x3free(aaaabc);
	aaaabc = NULL;
}



Iterable* aaaabd;
aaaabd = (Iterable*) x3malloc(sizeof(Iterable));
aaaabd->isIter = 1;
aaaabd->nrefs = 0;
aaaabd->value = aaaaak;
aaaabd->additional = NULL;
aaaabd->next = NULL;
aaaabd->concat = NULL;
if (aaaaak!= NULL) {
	(*(int *)aaaaak)++;
}
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0\n");
	if ((*(int *)aaaaak) == 0)
		freeStr(aaaaak);
	aaaaak = NULL;
}
return aaaabd;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
