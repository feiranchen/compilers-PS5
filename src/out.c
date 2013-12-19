#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* isEmpty_(void *n_);
void* build_(void *n_);
void* remove_(void *s_);
void* clone_(void *n_);
void* sameLength_(void *left_ , void *right_);
void* stepper_(void *n_ , void *m_);
Iterable* input_= NULL;
int initialized_pqr = 0;
void* isEmpty_(void *n_) {
incRef(n_);



void * x_ = NULL;
void * aaaaag = NULL;






void * aaaacr = NULL;
aaaacr = x_;
x_ = n_;
incRef(x_);
decRef(aaaacr);
decRef(n_);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaacs = NULL;
aaaacs = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaacs);
		}
	}
	while (x_!=NULL) {
Iterable * aaaaac = NULL;
		aaaaac = (Iterable *)x_;
		incRef(aaaaac);
void * aaaact = NULL;
aaaact = x_;
		x_ = aaaaac->value;
		incRef(x_);
		decRef(aaaact);
decRef(x_);
decRef(aaaaac);
		


void * aaaaae = NULL;
void * aaaaaf = NULL;
void * aaaaad = NULL;



void * aaaacu = NULL;
aaaacu = aaaaae;
aaaaae = NULL;
incRef(aaaaae);
decRef(aaaacu);



Iterable* aaaacv;
aaaacv = (Iterable*) x3malloc(sizeof(Iterable));
aaaacv->isStr = 0;
aaaacv->isIter = 1;
aaaacv->nrefs = 1;
aaaacv->value = aaaaae;
aaaacv->additional = NULL;
aaaacv->next = NULL;
aaaacv->concat = NULL;
incRef(aaaaae);
aaaacv->nrefs = 0;
void * aaaacw = NULL;
aaaacw = aaaaaf;
aaaaaf = aaaacv;
incRef(aaaaaf);
decRef(aaaacw);
decRef(aaaaae);



if (aaaaaf!= NULL) {
(*(int *)aaaaaf)--;
}
return aaaaaf;



void * aaaacx = NULL;
aaaacx = aaaaad;
aaaaad = aaaaac;
incRef(aaaaad);
decRef(aaaacx);
decRef(aaaaad);




void* aaaacy;
aaaacy = iterGetNext((void*) aaaaad);
void * aaaacz = NULL;
aaaacz = x_;
x_ = aaaacy;
incRef(x_);
decRef(aaaacz);
decRef(x_);
	}
decRef(x_);






void * aaaada = NULL;
aaaada = aaaaag;
aaaaag = NULL;
incRef(aaaaag);
decRef(aaaada);



if (aaaaag!= NULL) {
(*(int *)aaaaag)--;
}
return aaaaag;
}
void* build_(void *n_) {
incRef(n_);



void * aaaaah = NULL;
void * b_ = NULL;
void * x_ = NULL;






void * aaaadb = NULL;
aaaadb = aaaaah;
aaaaah = NULL;
incRef(aaaaah);
decRef(aaaadb);



Iterable* aaaadc;
aaaadc = (Iterable*) x3malloc(sizeof(Iterable));
aaaadc->isStr = 0;
aaaadc->isIter = 1;
aaaadc->nrefs = 1;
aaaadc->value = aaaaah;
aaaadc->additional = NULL;
aaaadc->next = NULL;
aaaadc->concat = NULL;
incRef(aaaaah);
aaaadc->nrefs = 0;
void * aaaadd = NULL;
aaaadd = b_;
b_ = aaaadc;
incRef(b_);
decRef(aaaadd);
decRef(aaaaah);



void * aaaaai = NULL;




void* aaaade;
aaaade = isEmpty_((void*) n_);
void * aaaadf = NULL;
aaaadf = x_;
x_ = aaaade;
incRef(x_);
decRef(aaaadf);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaadg = NULL;
aaaadg = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaadg);
		}
	}
	while (x_!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)x_;
		incRef(aaaaaj);
void * aaaadh = NULL;
aaaadh = x_;
		x_ = aaaaaj->value;
		incRef(x_);
		decRef(aaaadh);
decRef(x_);
		


void * aaaaam = NULL;
void * a_ = NULL;
void * i_ = NULL;



void * aaaaal = NULL;




void* aaaadi;
aaaadi = remove_((void*) n_);
void * aaaadj = NULL;
aaaadj = aaaaam;
aaaaam = aaaadi;
incRef(aaaaam);
decRef(aaaadj);




void* aaaadk;
aaaadk = build_((void*) aaaaam);
void * aaaadl = NULL;
aaaadl = a_;
a_ = aaaadk;
incRef(a_);
decRef(aaaadl);
decRef(aaaaam);






void * aaaadm = NULL;
aaaadm = i_;
i_ = n_;
incRef(i_);
decRef(aaaadm);
	if (i_!=NULL) {
		if ((*((int *)(i_+1))) == 0) {
void * aaaadn = NULL;
aaaadn = i_;
			i_ = strToIter( ((String *)i_)->value, ((String *)i_)->len);
incRef(i_);
decRef(aaaadn);
		}
	}
	while (i_!=NULL) {
Iterable * aaaaan = NULL;
		aaaaan = (Iterable *)i_;
		incRef(aaaaan);
void * aaaado = NULL;
aaaado = i_;
		i_ = aaaaan->value;
		incRef(i_);
		decRef(aaaado);
decRef(i_);
		


void * aaaaap = NULL;
void * aaaaaq = NULL;



void *aaaadq;
aaaadq = b_;
if (aaaadq!=NULL) {
(*((int *)aaaadq))++;
if ((*((int *)b_+1)) == 0) {
decRef(aaaadq);
aaaadq = strToIter( ((String *)b_)->value, ((String *)b_)->len);
incRef(aaaadq);
}
}
void *aaaadr;
aaaadr = a_;
if (aaaadr!=NULL) {
(*((int *)aaaadr))++;
if ((*((int *)a_+1)) == 0) {
decRef(aaaadr);
aaaadr = strToIter( ((String *)a_)->value, ((String *)a_)->len);
incRef(aaaadr);
}
}
Iterable* aaaadp;
aaaadp = concatenate((Iterable*)aaaadq, (Iterable*) aaaadr);
decRef(aaaadq);
decRef(aaaadr);
void * aaaads = NULL;
aaaads = b_;
b_ = aaaadp;
incRef(b_);
decRef(aaaads);
void * aaaaao = NULL;




void* aaaadt;
aaaadt = iterGetNext((void*) aaaaan);
void * aaaadu = NULL;
aaaadu = i_;
i_ = aaaadt;
incRef(i_);
decRef(aaaadu);
decRef(aaaaan);
	}
decRef(a_);
decRef(i_);
void * aaaaak = NULL;




void* aaaadv;
aaaadv = iterGetNext((void*) aaaaaj);
void * aaaadw = NULL;
aaaadw = x_;
x_ = aaaadv;
incRef(x_);
decRef(aaaadw);
decRef(aaaaaj);
	}
decRef(n_);
decRef(x_);



void * aaaaar = NULL;



if (b_!= NULL) {
(*(int *)b_)--;
}
return b_;
}
void* remove_(void *s_) {
incRef(s_);



void * r_ = NULL;
void * b_ = NULL;
void * c_ = NULL;






void * aaaadx = NULL;
aaaadx = r_;
r_ = NULL;
incRef(r_);
decRef(aaaadx);






Boolean* aaaady;
aaaady = (Boolean *) x3malloc(sizeof(Boolean));
aaaady->nrefs = 0;
aaaady->isStr = 0;
aaaady->isIter = 0;
aaaady->value = 0;
void * aaaadz = NULL;
aaaadz = b_;
b_ = aaaady;
incRef(b_);
decRef(aaaadz);






void * aaaaea = NULL;
aaaaea = c_;
c_ = s_;
incRef(c_);
decRef(aaaaea);
decRef(s_);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaaeb = NULL;
aaaaeb = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaaeb);
		}
	}
	while (c_!=NULL) {
Iterable * aaaaas = NULL;
		aaaaas = (Iterable *)c_;
		incRef(aaaaas);
void * aaaaec = NULL;
aaaaec = c_;
		c_ = aaaaas->value;
		incRef(c_);
		decRef(aaaaec);
		


void * aaaaau = NULL;



if ( ((Boolean *)b_)->value) {



void * aaaaav = NULL;
void * aaaaax = NULL;



Iterable* aaaaed;
aaaaed = (Iterable*) x3malloc(sizeof(Iterable));
aaaaed->isStr = 0;
aaaaed->isIter = 1;
aaaaed->nrefs = 1;
aaaaed->value = c_;
aaaaed->additional = NULL;
aaaaed->next = NULL;
aaaaed->concat = NULL;
incRef(c_);
aaaaed->nrefs = 0;
void * aaaaee = NULL;
aaaaee = aaaaav;
aaaaav = aaaaed;
incRef(aaaaav);
decRef(aaaaee);
decRef(c_);
void * aaaaaw = NULL;



void *aaaaeg;
aaaaeg = aaaaav;
if (aaaaeg!=NULL) {
(*((int *)aaaaeg))++;
if ((*((int *)aaaaav+1)) == 0) {
decRef(aaaaeg);
aaaaeg = strToIter( ((String *)aaaaav)->value, ((String *)aaaaav)->len);
incRef(aaaaeg);
}
}
void *aaaaeh;
aaaaeh = r_;
if (aaaaeh!=NULL) {
(*((int *)aaaaeh))++;
if ((*((int *)r_+1)) == 0) {
decRef(aaaaeh);
aaaaeh = strToIter( ((String *)r_)->value, ((String *)r_)->len);
incRef(aaaaeh);
}
}
Iterable* aaaaef;
aaaaef = concatenate((Iterable*)aaaaeg, (Iterable*) aaaaeh);
decRef(aaaaeg);
decRef(aaaaeh);
void * aaaaei = NULL;
aaaaei = r_;
r_ = aaaaef;
incRef(r_);
decRef(aaaaei);
decRef(aaaaav);
}
else {
decRef(b_);
decRef(c_);






Boolean* aaaaej;
aaaaej = (Boolean *) x3malloc(sizeof(Boolean));
aaaaej->nrefs = 0;
aaaaej->isStr = 0;
aaaaej->isIter = 0;
aaaaej->value = 1;
void * aaaaek = NULL;
aaaaek = b_;
b_ = aaaaej;
incRef(b_);
decRef(aaaaek);
}
void * aaaaat = NULL;




void* aaaael;
aaaael = iterGetNext((void*) aaaaas);
void * aaaaem = NULL;
aaaaem = c_;
c_ = aaaael;
incRef(c_);
decRef(aaaaem);
decRef(aaaaas);
	}
decRef(b_);
decRef(c_);



void * aaaaay = NULL;



if (r_!= NULL) {
(*(int *)r_)--;
}
return r_;
}
void* clone_(void *n_) {
incRef(n_);



void * ret_ = NULL;
void * x_ = NULL;






void * aaaaen = NULL;
aaaaen = ret_;
ret_ = NULL;
incRef(ret_);
decRef(aaaaen);






void * aaaaeo = NULL;
aaaaeo = x_;
x_ = n_;
incRef(x_);
decRef(aaaaeo);
decRef(n_);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaaep = NULL;
aaaaep = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaaep);
		}
	}
	while (x_!=NULL) {
Iterable * aaaaaz = NULL;
		aaaaaz = (Iterable *)x_;
		incRef(aaaaaz);
void * aaaaeq = NULL;
aaaaeq = x_;
		x_ = aaaaaz->value;
		incRef(x_);
		decRef(aaaaeq);
		


void * aaaabb = NULL;



void * aaaabd = NULL;



Iterable* aaaaer;
aaaaer = (Iterable*) x3malloc(sizeof(Iterable));
aaaaer->isStr = 0;
aaaaer->isIter = 1;
aaaaer->nrefs = 1;
aaaaer->value = x_;
aaaaer->additional = NULL;
aaaaer->next = NULL;
aaaaer->concat = NULL;
incRef(x_);
aaaaer->nrefs = 0;
void * aaaaes = NULL;
aaaaes = aaaabb;
aaaabb = aaaaer;
incRef(aaaabb);
decRef(aaaaes);
decRef(x_);
void * aaaabc = NULL;



void *aaaaeu;
aaaaeu = aaaabb;
if (aaaaeu!=NULL) {
(*((int *)aaaaeu))++;
if ((*((int *)aaaabb+1)) == 0) {
decRef(aaaaeu);
aaaaeu = strToIter( ((String *)aaaabb)->value, ((String *)aaaabb)->len);
incRef(aaaaeu);
}
}
void *aaaaev;
aaaaev = ret_;
if (aaaaev!=NULL) {
(*((int *)aaaaev))++;
if ((*((int *)ret_+1)) == 0) {
decRef(aaaaev);
aaaaev = strToIter( ((String *)ret_)->value, ((String *)ret_)->len);
incRef(aaaaev);
}
}
Iterable* aaaaet;
aaaaet = concatenate((Iterable*)aaaaeu, (Iterable*) aaaaev);
decRef(aaaaeu);
decRef(aaaaev);
void * aaaaew = NULL;
aaaaew = ret_;
ret_ = aaaaet;
incRef(ret_);
decRef(aaaaew);
decRef(aaaabb);
void * aaaaba = NULL;




void* aaaaex;
aaaaex = iterGetNext((void*) aaaaaz);
void * aaaaey = NULL;
aaaaey = x_;
x_ = aaaaex;
incRef(x_);
decRef(aaaaey);
decRef(aaaaaz);
	}
decRef(x_);



void * aaaabe = NULL;



if (ret_!= NULL) {
(*(int *)ret_)--;
}
return ret_;
}
void* sameLength_(void *left_ , void *right_) {
incRef(left_);
incRef(right_);



void * x_ = NULL;






void * aaaaez = NULL;
aaaaez = x_;
x_ = left_;
incRef(x_);
decRef(aaaaez);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaafa = NULL;
aaaafa = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaafa);
		}
	}
	while (x_!=NULL) {
Iterable * aaaabf = NULL;
		aaaabf = (Iterable *)x_;
		incRef(aaaabf);
void * aaaafb = NULL;
aaaafb = x_;
		x_ = aaaabf->value;
		incRef(x_);
		decRef(aaaafb);
decRef(x_);
decRef(aaaabf);
		


void * y_ = NULL;
void * aaaabg = NULL;






void * aaaafc = NULL;
aaaafc = y_;
y_ = right_;
incRef(y_);
decRef(aaaafc);
	if (y_!=NULL) {
		if ((*((int *)(y_+1))) == 0) {
void * aaaafd = NULL;
aaaafd = y_;
			y_ = strToIter( ((String *)y_)->value, ((String *)y_)->len);
incRef(y_);
decRef(aaaafd);
		}
	}
	while (y_!=NULL) {
Iterable * aaaabh = NULL;
		aaaabh = (Iterable *)y_;
		incRef(aaaabh);
void * aaaafe = NULL;
aaaafe = y_;
		y_ = aaaabh->value;
		incRef(y_);
		decRef(aaaafe);
decRef(y_);
decRef(aaaabh);
		


void * aaaabk = NULL;
void * aaaabm = NULL;
void * aaaabn = NULL;
void * aaaabi = NULL;
void * aaaabj = NULL;




void* aaaaff;
aaaaff = remove_((void*) left_);
void * aaaafg = NULL;
aaaafg = aaaabk;
aaaabk = aaaaff;
incRef(aaaabk);
decRef(aaaafg);
decRef(left_);
void * aaaabl = NULL;




void* aaaafh;
aaaafh = remove_((void*) right_);
void * aaaafi = NULL;
aaaafi = aaaabm;
aaaabm = aaaafh;
incRef(aaaabm);
decRef(aaaafi);
decRef(right_);




void* aaaafj;
aaaafj = sameLength_((void*) aaaabk, (void*) aaaabm);
void * aaaafk = NULL;
aaaafk = aaaabn;
aaaabn = aaaafj;
incRef(aaaabn);
decRef(aaaafk);
decRef(aaaabk);
decRef(aaaabm);



if (aaaabn!= NULL) {
(*(int *)aaaabn)--;
}
return aaaabn;



void * aaaafl = NULL;
aaaafl = aaaabi;
aaaabi = aaaabh;
incRef(aaaabi);
decRef(aaaafl);
decRef(aaaabi);




void* aaaafm;
aaaafm = iterGetNext((void*) aaaabi);
void * aaaafn = NULL;
aaaafn = y_;
y_ = aaaafm;
incRef(y_);
decRef(aaaafn);
decRef(y_);
	}
decRef(right_);
decRef(y_);



void * aaaabo = NULL;



if (left_!= NULL) {
(*(int *)left_)--;
}
return left_;



void * aaaafo = NULL;
aaaafo = aaaabg;
aaaabg = aaaabf;
incRef(aaaabg);
decRef(aaaafo);
decRef(aaaabg);




void* aaaafp;
aaaafp = iterGetNext((void*) aaaabg);
void * aaaafq = NULL;
aaaafq = x_;
x_ = aaaafp;
incRef(x_);
decRef(aaaafq);
decRef(x_);
	}
decRef(left_);
decRef(x_);



void * aaaabp = NULL;



if (right_!= NULL) {
(*(int *)right_)--;
}
return right_;
}
void* stepper_(void *n_ , void *m_) {
incRef(n_);
incRef(m_);



void * iter_ = NULL;
void * x_ = NULL;
void * aaaaca = NULL;
void * aaaaby = NULL;
void * aaaacb = NULL;
void * aaaacc = NULL;



void * aaaabq = NULL;




void* aaaafr;
aaaafr = clone_((void*) n_);
void * aaaafs = NULL;
aaaafs = iter_;
iter_ = aaaafr;
incRef(iter_);
decRef(aaaafs);



void * aaaabr = NULL;
void * aaaabs = NULL;




void* aaaaft;
aaaaft = sameLength_((void*) iter_, (void*) m_);
void * aaaafu = NULL;
aaaafu = x_;
x_ = aaaaft;
incRef(x_);
decRef(aaaafu);
decRef(iter_);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaafv = NULL;
aaaafv = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaafv);
		}
	}
	while (x_!=NULL) {
Iterable * aaaabt = NULL;
		aaaabt = (Iterable *)x_;
		incRef(aaaabt);
void * aaaafw = NULL;
aaaafw = x_;
		x_ = aaaabt->value;
		incRef(x_);
		decRef(aaaafw);
decRef(n_);
decRef(m_);
decRef(x_);
decRef(aaaabt);
		


void * aaaabv = NULL;
void * aaaabw = NULL;
void * aaaabu = NULL;



void * aaaafx = NULL;
aaaafx = aaaabv;
aaaabv = NULL;
incRef(aaaabv);
decRef(aaaafx);



Iterable* aaaafy;
aaaafy = (Iterable*) x3malloc(sizeof(Iterable));
aaaafy->isStr = 0;
aaaafy->isIter = 1;
aaaafy->nrefs = 1;
aaaafy->value = aaaabv;
aaaafy->additional = NULL;
aaaafy->next = NULL;
aaaafy->concat = NULL;
incRef(aaaabv);
aaaafy->nrefs = 0;
void * aaaafz = NULL;
aaaafz = aaaabw;
aaaabw = aaaafy;
incRef(aaaabw);
decRef(aaaafz);
decRef(aaaabv);



if (aaaabw!= NULL) {
(*(int *)aaaabw)--;
}
return aaaabw;



void * aaaaga = NULL;
aaaaga = aaaabu;
aaaabu = aaaabt;
incRef(aaaabu);
decRef(aaaaga);
decRef(aaaabu);




void* aaaagb;
aaaagb = iterGetNext((void*) aaaabu);
void * aaaagc = NULL;
aaaagc = x_;
x_ = aaaagb;
incRef(x_);
decRef(aaaagc);
decRef(x_);
	}
decRef(x_);



void * aaaabx = NULL;



void * aaaagd = NULL;
aaaagd = aaaaca;
aaaaca = NULL;
incRef(aaaaca);
decRef(aaaagd);



Iterable* aaaage;
aaaage = (Iterable*) x3malloc(sizeof(Iterable));
aaaage->isStr = 0;
aaaage->isIter = 1;
aaaage->nrefs = 1;
aaaage->value = aaaaca;
aaaage->additional = NULL;
aaaage->next = NULL;
aaaage->concat = NULL;
incRef(aaaaca);
aaaage->nrefs = 0;
void * aaaagf = NULL;
aaaagf = aaaaby;
aaaaby = aaaage;
incRef(aaaaby);
decRef(aaaagf);
decRef(aaaaca);
void * aaaabz = NULL;



void *aaaagh;
aaaagh = aaaaby;
if (aaaagh!=NULL) {
(*((int *)aaaagh))++;
if ((*((int *)aaaaby+1)) == 0) {
decRef(aaaagh);
aaaagh = strToIter( ((String *)aaaaby)->value, ((String *)aaaaby)->len);
incRef(aaaagh);
}
}
void *aaaagi;
aaaagi = m_;
if (aaaagi!=NULL) {
(*((int *)aaaagi))++;
if ((*((int *)m_+1)) == 0) {
decRef(aaaagi);
aaaagi = strToIter( ((String *)m_)->value, ((String *)m_)->len);
incRef(aaaagi);
}
}
Iterable* aaaagg;
aaaagg = concatenate((Iterable*)aaaagh, (Iterable*) aaaagi);
decRef(aaaagh);
decRef(aaaagi);
void * aaaagj = NULL;
aaaagj = aaaacb;
aaaacb = aaaagg;
incRef(aaaacb);
decRef(aaaagj);
decRef(aaaaby);
decRef(m_);




void* aaaagk;
aaaagk = stepper_((void*) n_, (void*) aaaacb);
void * aaaagl = NULL;
aaaagl = aaaacc;
aaaacc = aaaagk;
incRef(aaaacc);
decRef(aaaagl);
decRef(n_);
decRef(aaaacb);



if (aaaacc!= NULL) {
(*(int *)aaaacc)--;
}
return aaaacc;
}


void* our_main()
{
void * aaaacd = NULL;
void * aaaaci = NULL;
void * aaaacj = NULL;
void * x_ = NULL;
void * aaaacp = NULL;
void * aaaacq = NULL;






void * aaaagm = NULL;
aaaagm = aaaacd;
aaaacd = NULL;
incRef(aaaacd);
decRef(aaaagm);
void * aaaace = NULL;
void * aaaacf = NULL;
void * aaaacg = NULL;
void * aaaach = NULL;



Iterable* aaaagr;
aaaagr = (Iterable*) x3malloc(sizeof(Iterable));
aaaagr->isStr = 0;
aaaagr->isIter = 1;
aaaagr->nrefs = 1;
aaaagr->value = aaaacd;
aaaagr->additional = NULL;
aaaagr->next = NULL;
aaaagr->concat = NULL;
incRef(aaaacd);
Iterable* aaaagq;
aaaagq = (Iterable*) x3malloc(sizeof(Iterable));
aaaagq->isStr = 0;
aaaagq->isIter = 1;
aaaagq->nrefs = 1;
aaaagq->value = aaaacd;
aaaagq->additional = aaaagr;
aaaagq->next = NULL;
aaaagq->concat = NULL;
incRef(aaaacd);
Iterable* aaaagp;
aaaagp = (Iterable*) x3malloc(sizeof(Iterable));
aaaagp->isStr = 0;
aaaagp->isIter = 1;
aaaagp->nrefs = 1;
aaaagp->value = aaaacd;
aaaagp->additional = aaaagq;
aaaagp->next = NULL;
aaaagp->concat = NULL;
incRef(aaaacd);
Iterable* aaaago;
aaaago = (Iterable*) x3malloc(sizeof(Iterable));
aaaago->isStr = 0;
aaaago->isIter = 1;
aaaago->nrefs = 1;
aaaago->value = aaaacd;
aaaago->additional = aaaagp;
aaaago->next = NULL;
aaaago->concat = NULL;
incRef(aaaacd);
Iterable* aaaagn;
aaaagn = (Iterable*) x3malloc(sizeof(Iterable));
aaaagn->isStr = 0;
aaaagn->isIter = 1;
aaaagn->nrefs = 1;
aaaagn->value = aaaacd;
aaaagn->additional = aaaago;
aaaagn->next = NULL;
aaaagn->concat = NULL;
incRef(aaaacd);
aaaagn->nrefs = 0;
void * aaaags = NULL;
aaaags = aaaaci;
aaaaci = aaaagn;
incRef(aaaaci);
decRef(aaaags);




void* aaaagt;
aaaagt = build_((void*) aaaaci);
void * aaaagu = NULL;
aaaagu = aaaacj;
aaaacj = aaaagt;
incRef(aaaacj);
decRef(aaaagu);
decRef(aaaaci);
void * aaaack = NULL;




void* aaaagv;
aaaagv = stepper_((void*) aaaacj, (void*) aaaacd);
void * aaaagw = NULL;
aaaagw = x_;
x_ = aaaagv;
incRef(x_);
decRef(aaaagw);
decRef(aaaacj);
decRef(aaaacd);
	if (x_!=NULL) {
		if ((*((int *)(x_+1))) == 0) {
void * aaaagx = NULL;
aaaagx = x_;
			x_ = strToIter( ((String *)x_)->value, ((String *)x_)->len);
incRef(x_);
decRef(aaaagx);
		}
	}
	while (x_!=NULL) {
Iterable * aaaacl = NULL;
		aaaacl = (Iterable *)x_;
		incRef(aaaacl);
void * aaaagy = NULL;
aaaagy = x_;
		x_ = aaaacl->value;
		incRef(x_);
		decRef(aaaagy);
decRef(x_);
decRef(aaaacl);
		


void * aaaacn = NULL;
void * aaaaco = NULL;
void * aaaacm = NULL;



String* aaaagz;
aaaagz = (String *) x3malloc(sizeof(String));
aaaagz->isIter = 0;
aaaagz->value = (char*) x3malloc(sizeof("Yes"));
aaaagz->nrefs = 0;
aaaagz->isStr = 1;
aaaagz->len = sizeof("Yes") - 1;
mystrcpy(aaaagz->value, "Yes");
void * aaaaha = NULL;
aaaaha = aaaacn;
aaaacn = aaaagz;
incRef(aaaacn);
decRef(aaaaha);



Iterable* aaaahb;
aaaahb = (Iterable*) x3malloc(sizeof(Iterable));
aaaahb->isStr = 0;
aaaahb->isIter = 1;
aaaahb->nrefs = 1;
aaaahb->value = aaaacn;
aaaahb->additional = NULL;
aaaahb->next = NULL;
aaaahb->concat = NULL;
incRef(aaaacn);
aaaahb->nrefs = 0;
void * aaaahc = NULL;
aaaahc = aaaaco;
aaaaco = aaaahb;
incRef(aaaaco);
decRef(aaaahc);
decRef(aaaacn);



if (aaaaco!= NULL) {
(*(int *)aaaaco)--;
}
return aaaaco;



void * aaaahd = NULL;
aaaahd = aaaacm;
aaaacm = aaaacl;
incRef(aaaacm);
decRef(aaaahd);
decRef(aaaacm);




void* aaaahe;
aaaahe = iterGetNext((void*) aaaacm);
void * aaaahf = NULL;
aaaahf = x_;
x_ = aaaahe;
incRef(x_);
decRef(aaaahf);
decRef(x_);
	}
decRef(x_);






String* aaaahg;
aaaahg = (String *) x3malloc(sizeof(String));
aaaahg->isIter = 0;
aaaahg->value = (char*) x3malloc(sizeof("No"));
aaaahg->nrefs = 0;
aaaahg->isStr = 1;
aaaahg->len = sizeof("No") - 1;
mystrcpy(aaaahg->value, "No");
void * aaaahh = NULL;
aaaahh = aaaacp;
aaaacp = aaaahg;
incRef(aaaacp);
decRef(aaaahh);



Iterable* aaaahi;
aaaahi = (Iterable*) x3malloc(sizeof(Iterable));
aaaahi->isStr = 0;
aaaahi->isIter = 1;
aaaahi->nrefs = 1;
aaaahi->value = aaaacp;
aaaahi->additional = NULL;
aaaahi->next = NULL;
aaaahi->concat = NULL;
incRef(aaaacp);
aaaahi->nrefs = 0;
void * aaaahj = NULL;
aaaahj = aaaacq;
aaaacq = aaaahi;
incRef(aaaacq);
decRef(aaaahj);
decRef(aaaacp);



if (aaaacq!= NULL) {
(*(int *)aaaacq)--;
}
return aaaacq;
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
