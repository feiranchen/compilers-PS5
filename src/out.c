#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * out = NULL;
void * aaaaae = NULL;
void * aaaaac = NULL;
void * aaaaad = NULL;
void * i = NULL;
void * aaaaaj = NULL;
void * aaaaak = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;






Integer* aaaaan;
aaaaan = (Integer*) x3malloc(sizeof(Integer));
(aaaaan->nrefs) = 0;
aaaaan->value = 67;
void * aaaaao = NULL;
aaaaao = out;
out = aaaaan;
incRef(out);
decRef(aaaaao);






Integer* aaaaap;
aaaaap = (Integer*) x3malloc(sizeof(Integer));
(aaaaap->nrefs) = 0;
aaaaap->value = 10000;
void * aaaaaq = NULL;
aaaaaq = aaaaae;
aaaaae = aaaaap;
incRef(aaaaae);
decRef(aaaaaq);




Integer* aaaaar;
aaaaar  = (Integer*) x3malloc(sizeof(Integer));
aaaaar->nrefs = 0;
aaaaar->value=-(((Integer*)aaaaae)->value);
void * aaaaas = NULL;
aaaaas = aaaaac;
aaaaac = aaaaar;
incRef(aaaaac);
decRef(aaaaas);
decRef(aaaaae);



Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 0;
aaaaat->value = 10000;
void * aaaaau = NULL;
aaaaau = aaaaad;
aaaaad = aaaaat;
incRef(aaaaad);
decRef(aaaaau);



Iterable* aaaaav;
aaaaav = (Iterable*) x3malloc(sizeof(Iterable));
aaaaav->isIter = 1;
aaaaav->nrefs = 0;
aaaaav->value = aaaaac;
aaaaav->additional = aaaaad;
aaaaav->next = &Integer_through;
aaaaav->concat = NULL;
incRef(aaaaac);
incRef(aaaaad);
void * aaaaaw = NULL;
aaaaaw = i;
i = checkIter(aaaaav);
incRef(i);
decRef(aaaaaw);
decRef(aaaaac);
decRef(aaaaad);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaaax = NULL;
aaaaax = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaaax);
		}
	}
	while (i!=NULL) {
Iterable * aaaaaf = NULL;
		aaaaaf = (Iterable *)i;
		incRef(aaaaaf);
void * aaaaay = NULL;
aaaaay = i;
		i = aaaaaf->value;
		incRef(i);
		decRef(aaaaay);
		


void * aaaaah = NULL;
void * aaaaai = NULL;
void * aaaaag = NULL;






void * aaaaaz = NULL;
aaaaaz = aaaaah;
aaaaah = out;
incRef(aaaaah);
decRef(aaaaaz);
decRef(out);



void * aaaaba = NULL;
aaaaba = aaaaai;
aaaaai = i;
incRef(aaaaai);
decRef(aaaaba);
decRef(i);




Integer* aaaabb;
aaaabb  = (Integer*) x3malloc(sizeof(Integer));
aaaabb->nrefs = 0;
aaaabb->value=((Integer*)aaaaah)->value + ((Integer*)aaaaai)->value;
void * aaaabc = NULL;
aaaabc = out;
out = aaaabb;
incRef(out);
decRef(aaaabc);
decRef(aaaaah);
decRef(aaaaai);



void * aaaabd = NULL;
aaaabd = aaaaag;
aaaaag = aaaaaf;
incRef(aaaaag);
decRef(aaaabd);
decRef(aaaaaf);




void* aaaabe;
aaaabe = iterGetNext((void*) aaaaag);
void * aaaabf = NULL;
aaaabf = i;
i = aaaabe;
incRef(i);
decRef(aaaabf);
decRef(aaaaag);
	}
decRef(i);






void * aaaabg = NULL;
aaaabg = aaaaaj;
aaaaaj = out;
incRef(aaaaaj);
decRef(aaaabg);
decRef(out);




Character* aaaabh;
aaaabh = (Character*) x3malloc(sizeof(Character));
aaaabh->value = unichar (((Integer*)aaaaaj)->value);
void * aaaabi = NULL;
aaaabi = aaaaak;
aaaaak = aaaabh;
incRef(aaaaak);
decRef(aaaabi);
decRef(aaaaaj);



Iterable* aaaabj;
aaaabj = (Iterable*) x3malloc(sizeof(Iterable));
aaaabj->isIter = 1;
aaaabj->nrefs = 1;
aaaabj->value = aaaaak;
aaaabj->additional = NULL;
aaaabj->next = NULL;
aaaabj->concat = NULL;
incRef(aaaaak);
aaaabj->nrefs = 0;
void * aaaabk = NULL;
aaaabk = aaaaal;
aaaaal = aaaabj;
incRef(aaaaal);
decRef(aaaabk);
decRef(aaaaak);




void* aaaabl;
aaaabl = concatChars((Iterable*)aaaaal);
void * aaaabm = NULL;
aaaabm = aaaaam;
aaaaam = aaaabl;
incRef(aaaaam);
decRef(aaaabm);
decRef(aaaaal);



Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 1;
aaaabn->value = aaaaam;
aaaabn->additional = NULL;
aaaabn->next = NULL;
aaaabn->concat = NULL;
incRef(aaaaam);
aaaabn->nrefs = 0;
decRef(aaaaam);
return aaaabn;
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
