#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

<<<<<<< HEAD
typedef struct {
		void* (*print)(void* this);
			} ConstantPrinterTable;
typedef struct {
	int  nref;
	ConstantPrinterTable* ConstantPrinter_Tbl;
		} ConstantPrinter;
void* init_ConstantPrinter(void* subclass){}
void* new_ConstantPrinter() {
ConstantPrinter* aaaaaa=x3malloc(sizeof(ConstantPrinter));
init_ConstantPrinter(aaaaaa);
aaaaaa->ConstantPrinter_Tbl=x3malloc(sizeof(ConstantPrinterTable)); 
		return aaaaaa; 
}
void* ConstantPrinter_print(void* this) {






String* aaaaab;
aaaaab = (String *) x3malloc(sizeof(String));
(aaaaab->isIter) = 0;
aaaaab->value = (char*) x3malloc(sizeof("Constant"));
(aaaaab->nrefs) = 0;
(aaaaab->isStr) = 1;
aaaaab->len = sizeof("Constant") - 1;
mystrcpy(aaaaab->value, "Constant");
Iterable* aaaaac;
aaaaac = (Iterable*) x3malloc(sizeof(Iterable));
aaaaac->isIter = 1;
aaaaac->nrefs = 1;
aaaaac->value = aaaaab;
aaaaac->additional = NULL;
aaaaac->next = NULL;
aaaaac->concat = NULL;
incRef(aaaaab);
aaaaac->nrefs = 0;
return aaaaac;
}
typedef struct {
		void* (*print)(void* this);
			} DoublerTable;
typedef struct {
	int  nref;
	DoublerTable* Doubler_Tbl;
	void* s;
		} Doubler;
void* init_Doubler(void* subclass){}
void* new_Doubler(void* s) {
Doubler* aaaaad=x3malloc(sizeof(Doubler));
init_Doubler(aaaaad);
aaaaad->Doubler_Tbl=x3malloc(sizeof(DoublerTable)); 
		return aaaaad; 
}
void* Doubler_print(void* this) {
void* s=((Doubler*)this)->s;






Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 1;
aaaaah->value = s;
aaaaah->additional = NULL;
aaaaah->next = NULL;
aaaaah->concat = NULL;
incRef(s);
aaaaah->nrefs = 0;
Iterable* aaaaag;
aaaaag = (Iterable*) x3malloc(sizeof(Iterable));
aaaaag->isIter = 1;
aaaaag->nrefs = 1;
aaaaag->value = s;
aaaaag->additional = NULL;
aaaaag->next = NULL;
aaaaag->concat = NULL;
incRef(s);
aaaaag->nrefs = 0;
void *aaaaaj;
aaaaaj = aaaaag;
if (aaaaaj!=NULL) {
(*((int *)aaaaaj))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaaaj);
aaaaaj = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
}
}
void *aaaaak;
aaaaak = aaaaah;
if (aaaaak!=NULL) {
(*((int *)aaaaak))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaaak);
aaaaak = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
}
}
Iterable* aaaaai;
aaaaai = concatenate((Iterable*)aaaaaj, (Iterable*) aaaaak);
decRef(aaaaaj);
decRef(aaaaak);
decRef(aaaaag);
decRef(aaaaah);
return aaaaai;
}


void* our_main()
{
void * ps = NULL;
void * c = NULL;
void * i = NULL;
void * out = NULL;
void * p = NULL;






void * aaaabb = NULL;
aaaabb = ps;
ps = NULL;
incRef(ps);
decRef(aaaabb);






Integer* aaaabc;
aaaabc = (Integer*) x3malloc(sizeof(Integer));
(aaaabc->nrefs) = 0;
aaaabc->value = 0;
void * aaaabd = NULL;
aaaabd = c;
c = aaaabc;
incRef(c);
decRef(aaaabd);






int aaaabe;
Iterable* input= NULL;
String* aaaaaf= NULL;
aaaabe = next_line_len();
if(aaaabe == 0) {
	input = NULL;
}
else {
	aaaaaf = (String*) x3malloc(sizeof(String));
	aaaaaf->isIter = 0;
	aaaaaf->nrefs = 1;
	aaaaaf->isStr = 1;
	aaaaaf->value = (char*) x3malloc(aaaabe * sizeof(char));
	aaaaaf->len = aaaabe;
	read_line(aaaaaf->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 1;
	input->value = aaaaaf;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaabf = NULL;
aaaabf = i;
i = input;
incRef(i);
decRef(aaaabf);
decRef(input);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaabg = NULL;
aaaabg = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaabg);
		}
	}
	while (i!=NULL) {
Iterable * aaaaal = NULL;
		aaaaal = (Iterable *)i;
		incRef(aaaaal);
void * aaaabh = NULL;
aaaabh = i;
		i = aaaaal->value;
		incRef(i);
		decRef(aaaabh);
		


void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaap = NULL;
void * aaaaam = NULL;






void * aaaabi = NULL;
aaaabi = aaaaan;
aaaaan = c;
incRef(aaaaan);
decRef(aaaabi);
decRef(c);



Integer* aaaabj;
aaaabj = (Integer*) x3malloc(sizeof(Integer));
(aaaabj->nrefs) = 0;
aaaabj->value = 0;
void * aaaabk = NULL;
aaaabk = aaaaao;
aaaaao = aaaabj;
incRef(aaaaao);
decRef(aaaabk);




Boolean* aaaabl = (Boolean*) x3malloc(sizeof(Boolean));
aaaabl->nrefs = 0;
aaaabl->value = ((Integer*) aaaaan)->value == ((Integer*) aaaaao)->value;
void * aaaabm = NULL;
aaaabm = aaaaap;
aaaaap = aaaabl;
incRef(aaaaap);
decRef(aaaabm);
decRef(aaaaan);
decRef(aaaaao);



if ( ((Boolean *)aaaaap)->value) {
decRef(i);
decRef(aaaaap);



void * aaaaas = NULL;
void * aaaaaq = NULL;
void * aaaaar = NULL;






ConstantPrinter* aaaabn;
aaaabn = (ConstantPrinter*) x3malloc(sizeof(ConstantPrinter));
aaaabn->nrefs = 0; 
aaaabn = new_ConstantPrinter ();
void * aaaabo = NULL;
aaaabo = aaaaas;
aaaaas = aaaabn;
incRef(aaaaas);
decRef(aaaabo);



void * aaaabp = NULL;
aaaabp = aaaaaq;
aaaaaq = ps;
incRef(aaaaaq);
decRef(aaaabp);
decRef(ps);



Iterable* aaaabq;
aaaabq = (Iterable*) x3malloc(sizeof(Iterable));
aaaabq->isIter = 1;
aaaabq->nrefs = 1;
aaaabq->value = aaaaas;
aaaabq->additional = NULL;
aaaabq->next = NULL;
aaaabq->concat = NULL;
incRef(aaaaas);
aaaabq->nrefs = 0;
void * aaaabr = NULL;
aaaabr = aaaaar;
aaaaar = aaaabq;
incRef(aaaaar);
decRef(aaaabr);
decRef(aaaaas);



void *aaaabt;
aaaabt = aaaaaq;
if (aaaabt!=NULL) {
(*((int *)aaaabt))++;
if ((*((int *)aaaaaq+1)) == 0) {
decRef(aaaabt);
aaaabt = strToIter( ((String *)aaaaaq)->value, ((String *)aaaaaq)->len);
}
}
void *aaaabu;
aaaabu = aaaaar;
if (aaaabu!=NULL) {
(*((int *)aaaabu))++;
if ((*((int *)aaaaar+1)) == 0) {
decRef(aaaabu);
aaaabu = strToIter( ((String *)aaaaar)->value, ((String *)aaaaar)->len);
}
}
Iterable* aaaabs;
aaaabs = concatenate((Iterable*)aaaabt, (Iterable*) aaaabu);
decRef(aaaabt);
decRef(aaaabu);
void * aaaabv = NULL;
aaaabv = ps;
ps = aaaabs;
incRef(ps);
decRef(aaaabv);
decRef(aaaaaq);
decRef(aaaaar);






Integer* aaaabw;
aaaabw = (Integer*) x3malloc(sizeof(Integer));
(aaaabw->nrefs) = 0;
aaaabw->value = 1;
void * aaaabx = NULL;
aaaabx = c;
c = aaaabw;
incRef(c);
decRef(aaaabx);
}
else {
decRef(aaaaap);



void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
=======
Iterable* input_= NULL;
int initialized_pqr = 0;
void* id_(void *t_) {
incRef(t_);



void * aaaaac = NULL;



void * aaaaaz = NULL;
aaaaaz = aaaaac;
aaaaac = t_;
incRef(aaaaac);
decRef(aaaaaz);
decRef(t_);



if (aaaaac!= NULL) {
(*(int *)aaaaac)--;
}
return aaaaac;
}
void* singleton_(void *t_) {
incRef(t_);



void * aaaaad = NULL;
void * aaaaae = NULL;



void * aaaaba = NULL;
aaaaba = aaaaad;
aaaaad = t_;
incRef(aaaaad);
decRef(aaaaba);
decRef(t_);



Iterable* aaaabb;
aaaabb = (Iterable*) x3malloc(sizeof(Iterable));
aaaabb->isStr = 0;
aaaabb->isIter = 1;
aaaabb->nrefs = 1;
aaaabb->value = aaaaad;
aaaabb->additional = NULL;
aaaabb->next = NULL;
aaaabb->concat = NULL;
incRef(aaaaad);
aaaabb->nrefs = 0;
void * aaaabc = NULL;
aaaabc = aaaaae;
aaaaae = aaaabb;
incRef(aaaaae);
decRef(aaaabc);
decRef(aaaaad);



if (aaaaae!= NULL) {
(*(int *)aaaaae)--;
}
return aaaaae;
}
void* test_(void *t_) {
incRef(t_);



void * aaaaaf = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;



void * aaaabd = NULL;
aaaabd = aaaaaf;
aaaaaf = t_;
incRef(aaaaaf);
decRef(aaaabd);
decRef(t_);




void* aaaabe;
aaaabe = singleton_((void*) aaaaaf);
void * aaaabf = NULL;
aaaabf = aaaaag;
aaaaag = aaaabe;
incRef(aaaaag);
decRef(aaaabf);
decRef(aaaaaf);




void* aaaabg;
aaaabg = id_((void*) aaaaag);
void * aaaabh = NULL;
aaaabh = aaaaah;
aaaaah = aaaabg;
incRef(aaaaah);
decRef(aaaabh);
decRef(aaaaag);



if (aaaaah!= NULL) {
(*(int *)aaaaah)--;
}
return aaaaah;
}
void* output_(void *t_ , void *b_) {
incRef(t_);
incRef(b_);



void * aaaaai = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;



void * ret_ = NULL;






void * aaaabi = NULL;
aaaabi = aaaaai;
aaaaai = b_;
incRef(aaaaai);
decRef(aaaabi);
decRef(b_);



if ( ((Boolean *)aaaaai)->value) {
decRef(aaaaai);



void * aaaaaj = NULL;
void * aaaaak = NULL;






String* aaaabj;
aaaabj = (String *) x3malloc(sizeof(String));
aaaabj->isIter = 0;
aaaabj->value = (char*) x3malloc(sizeof("Yes."));
aaaabj->nrefs = 0;
aaaabj->isStr = 1;
aaaabj->len = sizeof("Yes.") - 1;
mystrcpy(aaaabj->value, "Yes.");
void * aaaabk = NULL;
aaaabk = aaaaaj;
aaaaaj = aaaabj;
incRef(aaaaaj);
decRef(aaaabk);




void* aaaabl;
aaaabl = singleton_((void*) aaaaaj);
void * aaaabm = NULL;
aaaabm = aaaaak;
aaaaak = aaaabl;
incRef(aaaaak);
decRef(aaaabm);
decRef(aaaaaj);



if (aaaaak!= NULL) {
(*(int *)aaaaak)--;
}
return aaaaak;
}
else {
decRef(aaaaai);

>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46


void * ret_ = NULL;




void * aaaaby = NULL;
aaaaby = aaaaav;
aaaaav = i;
incRef(aaaaav);
decRef(aaaaby);
decRef(i);


<<<<<<< HEAD
=======
String* aaaabn;
aaaabn = (String *) x3malloc(sizeof(String));
aaaabn->isIter = 0;
aaaabn->value = (char*) x3malloc(sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU..."));
aaaabn->nrefs = 0;
aaaabn->isStr = 1;
aaaabn->len = sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...") - 1;
mystrcpy(aaaabn->value, "FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...");
void * aaaabo = NULL;
aaaabo = ret_;
ret_ = aaaabn;
incRef(ret_);
decRef(aaaabo);
}
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46

Doubler* aaaabz;
aaaabz = (Doubler*) x3malloc(sizeof(Doubler));
aaaabz->nrefs = 0; 
aaaabz = new_Doubler (aaaaav);
void * aaaaca = NULL;
aaaaca = aaaaaw;
aaaaaw = aaaabz;
incRef(aaaaaw);
decRef(aaaaca);
decRef(aaaaav);



void * aaaacb = NULL;
aaaacb = aaaaat;
aaaaat = ps;
incRef(aaaaat);
decRef(aaaacb);
decRef(ps);


<<<<<<< HEAD

Iterable* aaaacc;
aaaacc = (Iterable*) x3malloc(sizeof(Iterable));
aaaacc->isIter = 1;
aaaacc->nrefs = 1;
aaaacc->value = aaaaaw;
aaaacc->additional = NULL;
aaaacc->next = NULL;
aaaacc->concat = NULL;
incRef(aaaaaw);
aaaacc->nrefs = 0;
void * aaaacd = NULL;
aaaacd = aaaaau;
aaaaau = aaaacc;
incRef(aaaaau);
decRef(aaaacd);
decRef(aaaaaw);
=======
void * aaaabp = NULL;
aaaabp = aaaaal;
aaaaal = ret_;
incRef(aaaaal);
decRef(aaaabp);
decRef(ret_);



Iterable* aaaabq;
aaaabq = (Iterable*) x3malloc(sizeof(Iterable));
aaaabq->isStr = 0;
aaaabq->isIter = 1;
aaaabq->nrefs = 1;
aaaabq->value = aaaaal;
aaaabq->additional = NULL;
aaaabq->next = NULL;
aaaabq->concat = NULL;
incRef(aaaaal);
aaaabq->nrefs = 0;
void * aaaabr = NULL;
aaaabr = aaaaam;
aaaaam = aaaabq;
incRef(aaaaam);
decRef(aaaabr);
decRef(aaaaal);



if (aaaaam!= NULL) {
(*(int *)aaaaam)--;
}
return aaaaam;
}
void* charoutput_(void *char_) {
incRef(char_);



void * bool_ = NULL;
void * aaaaan = NULL;
void * c_ = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
void * aaaaav = NULL;






Boolean* aaaabs;
aaaabs = (Boolean *) x3malloc(sizeof(Boolean));
aaaabs->nrefs = 0;
aaaabs->isStr = 0;
aaaabs->isIter = 0;
aaaabs->value = 0;
void * aaaabt = NULL;
aaaabt = bool_;
bool_ = aaaabs;
incRef(bool_);
decRef(aaaabt);






void * aaaabu = NULL;
aaaabu = aaaaan;
aaaaan = char_;
incRef(aaaaan);
decRef(aaaabu);




void* aaaabv;
aaaabv = test_((void*) aaaaan);
void * aaaabw = NULL;
aaaabw = c_;
c_ = aaaabv;
incRef(c_);
decRef(aaaabw);
decRef(aaaaan);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaabx = NULL;
aaaabx = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaabx);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaao = NULL;
		aaaaao = (Iterable *)c_;
		incRef(aaaaao);
void * aaaaby = NULL;
aaaaby = c_;
		c_ = aaaaao->value;
		incRef(c_);
		decRef(aaaaby);
		


void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaap = NULL;
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46



void *aaaacf;
aaaacf = aaaaat;
if (aaaacf!=NULL) {
(*((int *)aaaacf))++;
if ((*((int *)aaaaat+1)) == 0) {
decRef(aaaacf);
aaaacf = strToIter( ((String *)aaaaat)->value, ((String *)aaaaat)->len);
}
}
void *aaaacg;
aaaacg = aaaaau;
if (aaaacg!=NULL) {
(*((int *)aaaacg))++;
if ((*((int *)aaaaau+1)) == 0) {
decRef(aaaacg);
aaaacg = strToIter( ((String *)aaaaau)->value, ((String *)aaaaau)->len);
}
}
Iterable* aaaace;
aaaace = concatenate((Iterable*)aaaacf, (Iterable*) aaaacg);
decRef(aaaacf);
decRef(aaaacg);
void * aaaach = NULL;
aaaach = ps;
ps = aaaace;
incRef(ps);
decRef(aaaach);
decRef(aaaaat);
decRef(aaaaau);



<<<<<<< HEAD



Integer* aaaaci;
aaaaci = (Integer*) x3malloc(sizeof(Integer));
(aaaaci->nrefs) = 0;
aaaaci->value = 0;
void * aaaacj = NULL;
aaaacj = c;
c = aaaaci;
incRef(c);
decRef(aaaacj);
}
=======
void * aaaabz = NULL;
aaaabz = aaaaaq;
aaaaaq = c_;
incRef(aaaaaq);
decRef(aaaabz);
decRef(c_);



void * aaaaca = NULL;
aaaaca = aaaaar;
aaaaar = char_;
incRef(aaaaar);
decRef(aaaaca);
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46



void * aaaack = NULL;
aaaack = aaaaam;
aaaaam = aaaaal;
incRef(aaaaam);
decRef(aaaack);
decRef(aaaaal);

<<<<<<< HEAD



void* aaaacl;
aaaacl = iterGetNext((void*) aaaaam);
void * aaaacm = NULL;
aaaacm = i;
i = aaaacl;
incRef(i);
decRef(aaaacm);
decRef(aaaaam);
	}
decRef(i);
decRef(c);
=======
Boolean* aaaacb = (Boolean*) x3malloc(sizeof(Boolean));
aaaacb->nrefs = 0;
aaaacb->isIter = 0;
aaaacb->isStr = 0;
aaaacb->value = ((Character*) aaaaaq)->value == ((Character*) aaaaar)->value;
void * aaaacc = NULL;
aaaacc = aaaaas;
aaaaas = aaaacb;
incRef(aaaaas);
decRef(aaaacc);
decRef(aaaaaq);
decRef(aaaaar);



if ( ((Boolean *)aaaaas)->value) {
decRef(bool_);
decRef(aaaaas);


>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46






void * aaaacn = NULL;
aaaacn = out;
out = NULL;
incRef(out);
decRef(aaaacn);

Boolean* aaaacd;
aaaacd = (Boolean *) x3malloc(sizeof(Boolean));
aaaacd->nrefs = 0;
aaaacd->isStr = 0;
aaaacd->isIter = 0;
aaaacd->value = 1;
void * aaaace = NULL;
aaaace = bool_;
bool_ = aaaacd;
incRef(bool_);
decRef(aaaace);
}
decRef(aaaaas);



<<<<<<< HEAD


void * aaaaco = NULL;
aaaaco = p;
p = ps;
incRef(p);
decRef(aaaaco);
decRef(ps);
	if (p!=NULL) {
		if ((*((int *)(p+1))) == 0) {
void * aaaacp = NULL;
aaaacp = p;
			p = strToIter( ((String *)p)->value, ((String *)p)->len);
incRef(p);
decRef(aaaacp);
		}
	}
	while (p!=NULL) {
Iterable * aaaaax = NULL;
		aaaaax = (Iterable *)p;
		incRef(aaaaax);
void * aaaacq = NULL;
aaaacq = p;
		p = aaaaax->value;
		incRef(p);
		decRef(aaaacq);
decRef(p);
		


void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaaay = NULL;
=======
void * aaaacf = NULL;
aaaacf = aaaaap;
aaaaap = aaaaao;
incRef(aaaaap);
decRef(aaaacf);
decRef(aaaaao);




void* aaaacg;
aaaacg = iterGetNext((void*) aaaaap);
void * aaaach = NULL;
aaaach = c_;
c_ = aaaacg;
incRef(c_);
decRef(aaaach);
decRef(aaaaap);
	}
decRef(c_);


>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46




void * aaaaci = NULL;
aaaaci = aaaaat;
aaaaat = char_;
incRef(aaaaat);
decRef(aaaaci);
decRef(char_);


<<<<<<< HEAD
void * aaaacr = NULL;
aaaacr = aaaaaz;
aaaaaz = out;
incRef(aaaaaz);
decRef(aaaacr);
decRef(out);
=======
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46

void * aaaacj = NULL;
aaaacj = aaaaau;
aaaaau = bool_;
incRef(aaaaau);
decRef(aaaacj);
decRef(bool_);



<<<<<<< HEAD
void* thisaaaacs = p;
void* aaaact;
aaaact = (((*)p)->_Tbl)->print(thisaaaacs);
void * aaaacu = NULL;
aaaacu = aaaaba;
aaaaba = aaaact;
incRef(aaaaba);
decRef(aaaacu);
=======
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46

void* aaaack;
aaaack = output_((void*) aaaaat, (void*) aaaaau);
void * aaaacl = NULL;
aaaacl = aaaaav;
aaaaav = aaaack;
incRef(aaaaav);
decRef(aaaacl);
decRef(aaaaat);
decRef(aaaaau);


<<<<<<< HEAD
void *aaaacw;
aaaacw = aaaaaz;
if (aaaacw!=NULL) {
(*((int *)aaaacw))++;
if ((*((int *)aaaaaz+1)) == 0) {
decRef(aaaacw);
aaaacw = strToIter( ((String *)aaaaaz)->value, ((String *)aaaaaz)->len);
}
}
void *aaaacx;
aaaacx = aaaaba;
if (aaaacx!=NULL) {
(*((int *)aaaacx))++;
if ((*((int *)aaaaba+1)) == 0) {
decRef(aaaacx);
aaaacx = strToIter( ((String *)aaaaba)->value, ((String *)aaaaba)->len);
}
}
Iterable* aaaacv;
aaaacv = concatenate((Iterable*)aaaacw, (Iterable*) aaaacx);
decRef(aaaacw);
decRef(aaaacx);
void * aaaacy = NULL;
aaaacy = out;
out = aaaacv;
incRef(out);
decRef(aaaacy);
decRef(aaaaaz);
decRef(aaaaba);
=======
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46

if (aaaaav!= NULL) {
(*(int *)aaaaav)--;
}
return aaaaav;
}


<<<<<<< HEAD
void * aaaacz = NULL;
aaaacz = aaaaay;
aaaaay = aaaaax;
incRef(aaaaay);
decRef(aaaacz);
decRef(aaaaax);
=======
void* our_main()
{
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46




void* aaaada;
aaaada = iterGetNext((void*) aaaaay);
void * aaaadb = NULL;
aaaadb = p;
p = aaaada;
incRef(p);
decRef(aaaadb);
decRef(aaaaay);
	}
decRef(p);


Integer* aaaacm;
aaaacm = (Integer*) x3malloc(sizeof(Integer));
aaaacm->nrefs = 0;
aaaacm->isStr = 0;
aaaacm->isIter = 0;
aaaacm->value = 66;
void * aaaacn = NULL;
aaaacn = aaaaaw;
aaaaaw = aaaacm;
incRef(aaaaaw);
decRef(aaaacn);




<<<<<<< HEAD
if (out!= NULL) {
(*(int *)out)--;
}
return out;
=======
Character* aaaaco;
aaaaco = (Character*) x3malloc(sizeof(Character));
aaaaco->isStr = 0;
aaaaco->isIter = 0;
aaaaco->value = unichar (((Integer*)aaaaaw)->value);
void * aaaacp = NULL;
aaaacp = aaaaax;
aaaaax = aaaaco;
incRef(aaaaax);
decRef(aaaacp);
decRef(aaaaaw);




void* aaaacq;
aaaacq = charoutput_((void*) aaaaax);
void * aaaacr = NULL;
aaaacr = aaaaay;
aaaaay = aaaacq;
incRef(aaaaay);
decRef(aaaacr);
decRef(aaaaax);



if (aaaaay!= NULL) {
(*(int *)aaaaay)--;
}
return aaaaay;
>>>>>>> df4aff1f2692f7a339178fd9e667c9426ca27b46
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
