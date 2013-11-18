#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * a = NULL;
void * b = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * aaaaai = NULL;






Integer* aaaaaj;
aaaaaj = (Integer*) x3malloc(sizeof(Integer));
(aaaaaj->nrefs) = 1;
aaaaaj->value = 5;
void * aaaaak = NULL;
aaaaak = a;
a = aaaaaj;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaaak!= NULL) {
	(*(int *)aaaaak)--;
	if ((*(int *)aaaaak) == 0)
		x3free(aaaaak);
	aaaaak = NULL;
	if ((*(int *)aaaaak) < 0)
		printf("aaaaak ref count is smaller than 0
");
}
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0
");
}






Integer* aaaaal;
aaaaal = (Integer*) x3malloc(sizeof(Integer));
(aaaaal->nrefs) = 1;
aaaaal->value = 3;
void * aaaaam = NULL;
aaaaam = b;
b = aaaaal;
if (b!= NULL) {
	(*(int *)b)++;
}
if (aaaaam!= NULL) {
	(*(int *)aaaaam)--;
	if ((*(int *)aaaaam) == 0)
		x3free(aaaaam);
	aaaaam = NULL;
	if ((*(int *)aaaaam) < 0)
		printf("aaaaam ref count is smaller than 0
");
}
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0
");
}






void * aaaaan = NULL;
aaaaan = aaaaac;
aaaaac = b;
if (aaaaac!= NULL) {
	(*(int *)aaaaac)++;
}
if (aaaaan!= NULL) {
	(*(int *)aaaaan)--;
	if ((*(int *)aaaaan) == 0)
		x3free(aaaaan);
	aaaaan = NULL;
	if ((*(int *)aaaaan) < 0)
		printf("aaaaan ref count is smaller than 0
");
}
if (aaaaac!= NULL) {
	(*(int *)aaaaac)--;
	if ((*(int *)aaaaac) == 0)
		x3free(aaaaac);
	aaaaac = NULL;
	if ((*(int *)aaaaac) < 0)
		printf("aaaaac ref count is smaller than 0
");
}



Integer* aaaaao;
aaaaao = (Integer*) x3malloc(sizeof(Integer));
(aaaaao->nrefs) = 1;
aaaaao->value = 0;
void * aaaaap = NULL;
aaaaap = aaaaad;
aaaaad = aaaaao;
if (aaaaad!= NULL) {
	(*(int *)aaaaad)++;
}
if (aaaaap!= NULL) {
	(*(int *)aaaaap)--;
	if ((*(int *)aaaaap) == 0)
		x3free(aaaaap);
	aaaaap = NULL;
	if ((*(int *)aaaaap) < 0)
		printf("aaaaap ref count is smaller than 0
");
}
if (aaaaad!= NULL) {
	(*(int *)aaaaad)--;
	if ((*(int *)aaaaad) == 0)
		x3free(aaaaad);
	aaaaad = NULL;
	if ((*(int *)aaaaad) < 0)
		printf("aaaaad ref count is smaller than 0
");
}




while (((Integer*) aaaaac)->value > ((Integer*) aaaaad)->value) {



void * aaaaae = NULL;
void * aaaaaf = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;






void * aaaaaq = NULL;
aaaaaq = aaaaae;
aaaaae = a;
if (aaaaae!= NULL) {
	(*(int *)aaaaae)++;
}
if (aaaaaq!= NULL) {
	(*(int *)aaaaaq)--;
	if ((*(int *)aaaaaq) == 0)
		x3free(aaaaaq);
	aaaaaq = NULL;
	if ((*(int *)aaaaaq) < 0)
		printf("aaaaaq ref count is smaller than 0
");
}
if (aaaaae!= NULL) {
	(*(int *)aaaaae)--;
	if ((*(int *)aaaaae) == 0)
		x3free(aaaaae);
	aaaaae = NULL;
	if ((*(int *)aaaaae) < 0)
		printf("aaaaae ref count is smaller than 0
");
}



void * aaaaar = NULL;
aaaaar = aaaaaf;
aaaaaf = b;
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)++;
}
if (aaaaar!= NULL) {
	(*(int *)aaaaar)--;
	if ((*(int *)aaaaar) == 0)
		x3free(aaaaar);
	aaaaar = NULL;
	if ((*(int *)aaaaar) < 0)
		printf("aaaaar ref count is smaller than 0
");
}
if (aaaaaf!= NULL) {
	(*(int *)aaaaaf)--;
	if ((*(int *)aaaaaf) == 0)
		x3free(aaaaaf);
	aaaaaf = NULL;
	if ((*(int *)aaaaaf) < 0)
		printf("aaaaaf ref count is smaller than 0
");
}




Integer* aaaaas;
aaaaas  = (Integer*) x3malloc(sizeof(Integer));
aaaaas->nrefs = 1;
aaaaas->value=((Integer*)aaaaae)->value + ((Integer*)aaaaaf)->value;
void * aaaaat = NULL;
aaaaat = a;
a = aaaaas;
if (a!= NULL) {
	(*(int *)a)++;
}
if (aaaaat!= NULL) {
	(*(int *)aaaaat)--;
	if ((*(int *)aaaaat) == 0)
		x3free(aaaaat);
	aaaaat = NULL;
	if ((*(int *)aaaaat) < 0)
		printf("aaaaat ref count is smaller than 0
");
}
if (a!= NULL) {
	(*(int *)a)--;
	if ((*(int *)a) == 0)
		x3free(a);
	a = NULL;
	if ((*(int *)a) < 0)
		printf("a ref count is smaller than 0
");
}






void * aaaaau = NULL;
aaaaau = aaaaag;
aaaaag = b;
if (aaaaag!= NULL) {
	(*(int *)aaaaag)++;
}
if (aaaaau!= NULL) {
	(*(int *)aaaaau)--;
	if ((*(int *)aaaaau) == 0)
		x3free(aaaaau);
	aaaaau = NULL;
	if ((*(int *)aaaaau) < 0)
		printf("aaaaau ref count is smaller than 0
");
}
if (aaaaag!= NULL) {
	(*(int *)aaaaag)--;
	if ((*(int *)aaaaag) == 0)
		x3free(aaaaag);
	aaaaag = NULL;
	if ((*(int *)aaaaag) < 0)
		printf("aaaaag ref count is smaller than 0
");
}



Integer* aaaaav;
aaaaav = (Integer*) x3malloc(sizeof(Integer));
(aaaaav->nrefs) = 1;
aaaaav->value = 1;
void * aaaaaw = NULL;
aaaaaw = aaaaah;
aaaaah = aaaaav;
if (aaaaah!= NULL) {
	(*(int *)aaaaah)++;
}
if (aaaaaw!= NULL) {
	(*(int *)aaaaaw)--;
	if ((*(int *)aaaaaw) == 0)
		x3free(aaaaaw);
	aaaaaw = NULL;
	if ((*(int *)aaaaaw) < 0)
		printf("aaaaaw ref count is smaller than 0
");
}
if (aaaaah!= NULL) {
	(*(int *)aaaaah)--;
	if ((*(int *)aaaaah) == 0)
		x3free(aaaaah);
	aaaaah = NULL;
	if ((*(int *)aaaaah) < 0)
		printf("aaaaah ref count is smaller than 0
");
}




Integer* aaaaax;
aaaaax  = (Integer*) x3malloc(sizeof(Integer));
aaaaax->nrefs = 1;
aaaaax->value=((Integer*)aaaaag)->value - ((Integer*)aaaaah)->value;
void * aaaaay = NULL;
aaaaay = b;
b = aaaaax;
if (b!= NULL) {
	(*(int *)b)++;
}
if (aaaaay!= NULL) {
	(*(int *)aaaaay)--;
	if ((*(int *)aaaaay) == 0)
		x3free(aaaaay);
	aaaaay = NULL;
	if ((*(int *)aaaaay) < 0)
		printf("aaaaay ref count is smaller than 0
");
}
if (b!= NULL) {
	(*(int *)b)--;
	if ((*(int *)b) == 0)
		x3free(b);
	b = NULL;
	if ((*(int *)b) < 0)
		printf("b ref count is smaller than 0
");
}
}






String* aaaaaz;
aaaaaz = (String *) x3malloc(sizeof(String));
(aaaaaz->isIter) = 0;
aaaaaz->value = (char*) x3malloc(sizeof("Yippee"));
(aaaaaz->nrefs) = 1;
aaaaaz->len = sizeof("Yippee") - 1;
mystrcpy(aaaaaz->value, "Yippee");
void * aaaaba = NULL;
aaaaba = aaaaai;
aaaaai = aaaaaz;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaaba!= NULL) {
	(*(int *)aaaaba)--;
	if ((*(int *)aaaaba) == 0)
		x3free(aaaaba);
	aaaaba = NULL;
	if ((*(int *)aaaaba) < 0)
		printf("aaaaba ref count is smaller than 0
");
}
if (aaaaai!= NULL) {
	(*(int *)aaaaai)--;
	if ((*(int *)aaaaai) == 0)
		x3free(aaaaai);
	aaaaai = NULL;
	if ((*(int *)aaaaai) < 0)
		printf("aaaaai ref count is smaller than 0
");
}



Iterable* aaaabb;
aaaabb = (Iterable*) x3malloc(sizeof(Iterable));
aaaabb->isIter = 1;
aaaabb->nrefs = 1;
aaaabb->value = aaaaai;
aaaabb->additional = NULL;
aaaabb->next = NULL;
aaaabb->concat = NULL;
if (aaaaai!= NULL) {
	(*(int *)aaaaai)++;
}
if (aaaabb!= NULL) {
(*(int *)aaaabb)--;
}
return aaaabb;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
