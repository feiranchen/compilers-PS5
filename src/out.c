#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* getinput() {



void * aaaaae = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;






String* aaaaak;
aaaaak = (String *) x3malloc(sizeof(String));
(aaaaak->isIter) = 0;
aaaaak->value = (char*) x3malloc(sizeof("Print this one before reading, too."));
(aaaaak->nrefs) = 0;
(aaaaak->isStr) = 1;
aaaaak->len = sizeof("Print this one before reading, too.") - 1;
mystrcpy(aaaaak->value, "Print this one before reading, too.");
void * aaaaal = NULL;
aaaaal = aaaaae;
aaaaae = aaaaak;
incRef(aaaaae);
decRef(aaaaal);



Iterable* aaaaam;
aaaaam = (Iterable*) x3malloc(sizeof(Iterable));
aaaaam->isIter = 1;
aaaaam->nrefs = 1;
aaaaam->value = aaaaae;
aaaaam->additional = NULL;
aaaaam->next = NULL;
aaaaam->concat = NULL;
incRef(aaaaae);
aaaaam->nrefs = 0;
void * aaaaan = NULL;
aaaaan = aaaaac;
aaaaac = aaaaam;
incRef(aaaaac);
decRef(aaaaan);
decRef(aaaaae);



int aaaaao;
String* aaaaab= NULL;
aaaaao = next_line_len();
if(aaaaao == 0) {
	input = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaaao * sizeof(char));
	aaaaab->len = aaaaao;
	read_line(aaaaab->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 1;
	input->value = aaaaab;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaaap = NULL;
aaaaap = aaaaad;
aaaaad = input;
incRef(aaaaad);
decRef(aaaaap);



void *aaaaar;
aaaaar = aaaaac;
if (aaaaar!=NULL) {
(*((int *)aaaaar))++;
if ((*((int *)aaaaac+1)) == 0) {
decRef(aaaaar);
aaaaar = strToIter( ((String *)aaaaac)->value, ((String *)aaaaac)->len);
}
}
void *aaaaas;
aaaaas = aaaaad;
if (aaaaas!=NULL) {
(*((int *)aaaaas))++;
if ((*((int *)aaaaad+1)) == 0) {
decRef(aaaaas);
aaaaas = strToIter( ((String *)aaaaad)->value, ((String *)aaaaad)->len);
}
}
Iterable* aaaaaq;
aaaaaq = concatenate((Iterable*)aaaaar, (Iterable*) aaaaas);
decRef(aaaaar);
decRef(aaaaas);
decRef(aaaaac);
decRef(aaaaad);
return aaaaaq;
}


void* our_main()
{
void * aaaaaj = NULL;
void * aaaaah = NULL;
void * aaaaai = NULL;
void * aaaaaf = NULL;
void * aaaaag = NULL;






String* aaaaat;
aaaaat = (String *) x3malloc(sizeof(String));
(aaaaat->isIter) = 0;
aaaaat->value = (char*) x3malloc(sizeof("Print this line before reading the input."));
(aaaaat->nrefs) = 0;
(aaaaat->isStr) = 1;
aaaaat->len = sizeof("Print this line before reading the input.") - 1;
mystrcpy(aaaaat->value, "Print this line before reading the input.");
void * aaaaau = NULL;
aaaaau = aaaaaj;
aaaaaj = aaaaat;
incRef(aaaaaj);
decRef(aaaaau);



Iterable* aaaaav;
aaaaav = (Iterable*) x3malloc(sizeof(Iterable));
aaaaav->isIter = 1;
aaaaav->nrefs = 1;
aaaaav->value = aaaaaj;
aaaaav->additional = NULL;
aaaaav->next = NULL;
aaaaav->concat = NULL;
incRef(aaaaaj);
aaaaav->nrefs = 0;
void * aaaaaw = NULL;
aaaaaw = aaaaah;
aaaaah = aaaaav;
incRef(aaaaah);
decRef(aaaaaw);
decRef(aaaaaj);




void* aaaaax;
aaaaax = getinput();
void * aaaaay = NULL;
aaaaay = aaaaai;
aaaaai = aaaaax;
incRef(aaaaai);
decRef(aaaaay);



void *aaaaba;
aaaaba = aaaaah;
if (aaaaba!=NULL) {
(*((int *)aaaaba))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaaba);
aaaaba = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
}
}
void *aaaabb;
aaaabb = aaaaai;
if (aaaabb!=NULL) {
(*((int *)aaaabb))++;
if ((*((int *)aaaaai+1)) == 0) {
decRef(aaaabb);
aaaabb = strToIter( ((String *)aaaaai)->value, ((String *)aaaaai)->len);
}
}
Iterable* aaaaaz;
aaaaaz = concatenate((Iterable*)aaaaba, (Iterable*) aaaabb);
decRef(aaaaba);
decRef(aaaabb);
void * aaaabc = NULL;
aaaabc = aaaaaf;
aaaaaf = aaaaaz;
incRef(aaaaaf);
decRef(aaaabc);
decRef(aaaaah);
decRef(aaaaai);



void * aaaabe = NULL;
aaaabe = aaaaag;
aaaaag = input;
incRef(aaaaag);
decRef(aaaabe);
decRef(input);



void *aaaabg;
aaaabg = aaaaaf;
if (aaaabg!=NULL) {
(*((int *)aaaabg))++;
if ((*((int *)aaaaaf+1)) == 0) {
decRef(aaaabg);
aaaabg = strToIter( ((String *)aaaaaf)->value, ((String *)aaaaaf)->len);
}
}
void *aaaabh;
aaaabh = aaaaag;
if (aaaabh!=NULL) {
(*((int *)aaaabh))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaabh);
aaaabh = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
}
}
Iterable* aaaabf;
aaaabf = concatenate((Iterable*)aaaabg, (Iterable*) aaaabh);
decRef(aaaabg);
decRef(aaaabh);
decRef(aaaaaf);
decRef(aaaaag);
return aaaabf;
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
