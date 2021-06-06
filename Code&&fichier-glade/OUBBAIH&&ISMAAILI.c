//SAID OUBBAIH
//ATIMA ZAHRA ISMAALII
//SMI4 G3B
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>


/*********************code gtk****************/
GtkBuilder *builder;
  //menu principal
  GtkWidget *window, *butt1, *butt2, *butt3, *butt4;
  //location
  GtkWidget *a, *a1,*a2,*a3,*a4, *a5, *a6;
  /*gestion voiture*/
       //window:
    GtkWidget *b, *b1, *b2, *b3, *b4, *b5;
    /*gestion client*/
       //window:
    GtkWidget *c, *c1, *c2,*c3, *c4, *c5;
        /**vusial contrat**/
    GtkWidget *VC;
    /*button*/
    GtkWidget *buttvc;
    /*entries*/
    GtkWidget *E1;
    GtkWidget *E2;
    GtkWidget *E3;
    GtkWidget *E4;
    GtkWidget *E5;
    GtkWidget *E6;
    GtkWidget *E7;
    GtkWidget *E8;
    GtkWidget *E9;
    GtkWidget *E10;

    /*********window affich********/
    GtkWidget *AFV, *AFC,  *fin, *buttafv1, *buttafv2, *buttafc1, *buttafc2, *OKF; *L1, *L2, *L3, *L4,*L5, *L6, *L7, *L8,*L9, *L10, *L11, *L12,*L13, *L14, *L15, *L16, *LF;
    /**fin**


    /*********AJOUTER VOITURE ET CLIENT***********/
    //window
     GtkWidget *AJV, *AJC;
    /*button*/
    GtkWidget *buttajv, *buttajc,/*entrys*/ *E11, *E12, *E13, *E14, *E15, *E16, *E17, *E18, *E19, *E20, *E21, *E22, *E23;

    /**fin**/
    /*recherch*/GtkWidget *rch, *ERCH, *buttrch, *anullrch, *LRCH;
    /*supprimer*/GtkWidget *suppr, *buttsuppr, *anullsuppr, *lsuppr;

typedef struct Voiture{

     int IdVoiture;
    char Marque[15];
    char NomVoiture[15];
    char Coulor[7];
    int NbPlaces;
    int PrixJour;
    char EnLocation[3];

}Voiture;

typedef struct Date{

    int jj;

    int mm;

    int aa;
}Date;


typedef struct Contrat{

    float NumContrat;
    int IdVoiture;
    int IdClient;
    Date Debut;
    Date Fin;
    int Cout;

}Contrat;
typedef struct Client{

    int IdClient;
    char Nom[20];
    char Prenom[20];
    int Cin;
    char Adresse[20];
    int Telephone;
}Client;





Client lliste, *cl;
Voiture liste, *v;
Contrat llliste, *cn;
int i, m, k;
float numc;







int Teste1(int a){



int p=-1;

FILE *fichier;
fichier=fopen("aw.txt","r");

    do{
fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

        if(a==liste.IdVoiture)

 p=1;




    }
       while(!feof(fichier));
fclose(fichier);
        return p;


}



void oklouer(){
 gtk_widget_destroy(fin);
 ajc();
 }

void anl(GtkWidget *win){
    gtk_widget_destroy(win);
    }



void destroy(GtkWidget *win){
    gtk_widget_destroy(win);
    }

void nxt(){


m++;

    char a[20], b[20], *c, *d, *e, f[20], j[20], *h;
builder=gtk_builder_new_from_file("Unsaved 4.glade");
if(m<k){


 sprintf(a," Voiture n: %d.", m+1);

   sprintf(b,"%d",v[m].IdVoiture);


   sprintf(f,"%d",v[m].NbPlaces);

   sprintf(j,"%d DH",v[m].PrixJour);

   gtk_label_set_text(GTK_LABEL(L1),a);

   gtk_label_set_text (L2,b);

   gtk_label_set_text (L3,v[m].Marque);
   gtk_label_set_text (L4,v[m].NomVoiture);
   gtk_label_set_text (L5,v[m].Coulor);
   gtk_label_set_text (L6,f);
   gtk_label_set_text (L7,j);
   gtk_label_set_text (L8,v[m].EnLocation);

   gtk_widget_show_all(AFV);




       }
else {
        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AFV);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Fin d'affichage ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);


}


}


void Liste_Des_Voitures(){
i=m=0;
char a[20], b[20], *c, *d, *e, f[20], j[20], *h;
builder=gtk_builder_new_from_file("Unsaved 4.glade");
AFV=gtk_builder_get_object(builder,"AFV");
buttafv1=gtk_builder_get_object(builder,"buttafv1");
buttafv2=gtk_builder_get_object(builder,"buttafv2");
L1=gtk_builder_get_object(builder,"L1");
gtk_label_set_text(GTK_LABEL(L1),"a");
L2=gtk_builder_get_object(builder,"L2");
L3=gtk_builder_get_object(builder,"L3");
L4=gtk_builder_get_object(builder,"L4");
L5=gtk_builder_get_object(builder,"L5");
L6=gtk_builder_get_object(builder,"L6");
L7=gtk_builder_get_object(builder,"L7");
L8=gtk_builder_get_object(builder,"L8");



FILE *fichier;
fichier=fopen("aw.txt","r");
if(fichier==NULL){
     builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Aucun Voiture.. ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
} else {

i=0;
v=(Voiture*)malloc(i*sizeof(Voiture));
if(fichier==NULL)
       exit(1);

do{

   i++;

v=realloc(v, i*sizeof(Voiture));


fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&v[i-1].IdVoiture,v[i-1].Marque,v[i-1].NomVoiture,v[i-1].Coulor,&v[i-1].NbPlaces,&v[i-1].PrixJour,v[i-1].EnLocation);




    }while(!feof(fichier));
       k=i;
    fclose(fichier);

sprintf(a," Voiture n: %d.", 0);


   sprintf(b,"%d",v[0].IdVoiture);

   sprintf(f,"%d",v[0].NbPlaces);

   sprintf(j,"%d DH",v[0].PrixJour);


   gtk_label_set_text(GTK_LABEL(L1),a);

gtk_label_set_text (L2,b);

gtk_label_set_text (L3,v[0].Marque);
gtk_label_set_text (L4,v[0].NomVoiture);
gtk_label_set_text (L5,v[0].Coulor);
gtk_label_set_text (L6,f);
gtk_label_set_text (L7,j);
gtk_label_set_text (L8,v[0].EnLocation);

gtk_widget_show_all(AFV);


int k=5;

        g_signal_connect_swapped (buttafv2, "clicked", G_CALLBACK (nxt), NULL);
        g_signal_connect_swapped (buttafv1, "clicked", G_CALLBACK (anl), (AFV));



}
}









void Ajouter(){

    int idv;



 FILE *fichier;

 char *j, *b,*c, *d, *h, *aa, *aaa;
       int a, e, f;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
   h=gtk_entry_get_text(GTK_ENTRY(E11));
   sscanf(h,"%d",&a);

   b=gtk_entry_get_text(GTK_ENTRY(E12));

   c=gtk_entry_get_text(GTK_ENTRY(E13));

   d=gtk_entry_get_text(GTK_ENTRY(E14));

   aa=gtk_entry_get_text(GTK_ENTRY(E15));
    sscanf(aa,"%d",&e);

    aaa=gtk_entry_get_text(GTK_ENTRY(E16));
    sscanf(aaa,"%d",&f);

    j=gtk_entry_get_text(GTK_ENTRY(E17));



    fichier=fopen("aw.txt","a");


if(Teste1(a)==1){
        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AFV);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Cette voiture est deja existe \n'cette ID est deja existe'");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);





}else{
       liste.IdVoiture=a;

       strcpy(liste.Marque,b);


       strcpy(liste.NomVoiture,c);

       strcpy(liste.Coulor,d);


       liste.NbPlaces=e;

       liste.PrixJour=f;
       strcpy(liste.EnLocation,j);
       fprintf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

   }
        fclose(fichier);

gtk_widget_destroy(AJV);



}


void ajv(){
 builder=gtk_builder_new_from_file("Unsaved 4.glade");
AJV=gtk_builder_get_object(builder,"AJV");
buttajv=gtk_builder_get_object(builder,"buttajv");
g_signal_connect_swapped (buttajv, "clicked", G_CALLBACK (Ajouter), NULL);

E11=gtk_builder_get_object(builder,"E11");
E12=gtk_builder_get_object(builder,"E12");
E13=gtk_builder_get_object(builder,"E13");
E14=gtk_builder_get_object(builder,"E14");
E15=gtk_builder_get_object(builder,"E15");
E16=gtk_builder_get_object(builder,"E16");
E17=gtk_builder_get_object(builder,"E17");
gtk_widget_show_all(AJV);
}









void Modifier(int b){


    int idm;
    idm=b;
    printf("idm");

    FILE *fichier,*fichier1;

    printf("entrer id de voiture que vous avez modifier:\n");
char *j, *z,*c, *d, *h, *aa, *aaa;
       int a, e, f;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
   h=gtk_entry_get_text(GTK_ENTRY(E11));
   sscanf(h,"%d",&a);

   z=gtk_entry_get_text(GTK_ENTRY(E12));

   c=gtk_entry_get_text(GTK_ENTRY(E13));

   d=gtk_entry_get_text(GTK_ENTRY(E14));

   aa=gtk_entry_get_text(GTK_ENTRY(E15));
    sscanf(aa,"%d",&e);

    aaa=gtk_entry_get_text(GTK_ENTRY(E16));
    sscanf(aaa,"%d",&f);

    j=gtk_entry_get_text(GTK_ENTRY(E17));




fichier=fopen("aw.txt","r");
       fichier1=fopen("ww111.txt","a");
       do{

fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

if(idm==liste.IdVoiture){

       liste.IdVoiture=a;

       strcpy(liste.Marque,z);


       strcpy(liste.NomVoiture,c);

       strcpy(liste.Coulor,d);


       liste.NbPlaces=e;

       liste.PrixJour=f;
       strcpy(liste.EnLocation,j);

            }



           fprintf(fichier1,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

       }while(!feof(fichier));
  fclose(fichier);
    fclose(fichier1);
        remove("aw.txt");
        rename("ww111.txt","aw.txt");
      gtk_widget_destroy(AJV);
    }
void modf1(){
     char *a;
    int b;
a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%d",&b);

    if(Teste1(b)==1){
        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);
        AJV=gtk_builder_get_object(builder,"AJV");

buttajv=gtk_builder_get_object(builder,"buttajv");
gtk_button_set_label (buttajv,"Modifier");
g_signal_connect_swapped (buttajv, "clicked", G_CALLBACK (Modifier), b);

E11=gtk_builder_get_object(builder,"E11");
E12=gtk_builder_get_object(builder,"E12");
E13=gtk_builder_get_object(builder,"E13");
E14=gtk_builder_get_object(builder,"E14");
E15=gtk_builder_get_object(builder,"E15");
E16=gtk_builder_get_object(builder,"E16");
E17=gtk_builder_get_object(builder,"E17");
gtk_widget_show_all(AJV);
        } else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Ce voiture n'existe pas..\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }

}

void modf(){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de voiture que vous avez modifier:\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect (buttrch, "clicked", G_CALLBACK (modf1), NULL);
        g_signal_connect (anullrch, "clicked", G_CALLBACK (anl), rch);
}











void Supprimer(int b){

    int ids, i=0,t=4;
    char *a;


gtk_widget_destroy(rch);
        FILE *fichier;
        FILE *fichier1;

        ids= b;





    fichier=fopen("aw.txt","r");
    fichier1=fopen("ww111.txt","a");


       do{
    fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);
        if(ids!=liste.IdVoiture)

    {fprintf(fichier1,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

        }


       }while(!feof(fichier));
    fclose(fichier);
 fclose(fichier1);
        remove("aw.txt");
rename("ww111.txt","aw.txt");

        builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Vous Ã©tes Supprimer LE Voiture \n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
    }



void supr(){
    char *a;
    int b;
a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%d",&b);

    if(Teste1(b)==1){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        suppr=gtk_builder_get_object(builder,"suppr");
        buttsuppr=gtk_builder_get_object(builder,"buttsuppr");
        anullsuppr=gtk_builder_get_object(builder,"anullsuppr");
        lsuppr=gtk_builder_get_object(builder,"lsuppr");
        printf("%d",b);


        gtk_label_set_text (lsuppr,"vous voullez vraiment Supprimer");
        g_signal_connect_swapped (buttsuppr, "clicked", G_CALLBACK (Supprimer), b);
        g_signal_connect_swapped (anullsuppr, "clicked", G_CALLBACK (anl), suppr);
        gtk_widget_show_all(suppr);

    }else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Cette voiture n'existe pas\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }
    }
    void supp(){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de voiture que vous avez supprimer:\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (supr), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (anl), rch);
}


int Teste2(int a){

    int p=-1;



FILE *fichier;
fichier=fopen("Cl.txt","r");

    do{
fscanf(fichier,"%d\t%s\t%s\t%d%s\t%d\n",&lliste.IdClient,lliste.Nom,lliste.Prenom,&lliste.Cin,lliste.Adresse,&lliste.Telephone);

        if(a==lliste.IdClient)

 p=1;




    }
       while(!feof(fichier));
fclose(fichier);
        return p;


}


void nxt2(){


m++;


    char a[20], b[20], *c, *d, *e, f[20], j[20], *h;
builder=gtk_builder_new_from_file("Unsaved 4.glade");
if(m<k){


 sprintf(a," Client : n%d.", m+1);


   sprintf(b,"%d",cl[m].IdClient);

   sprintf(f,"%d",cl[m].Cin);

   sprintf(j,"+212%d.",cl[m].Telephone);


   gtk_label_set_text(GTK_LABEL(L9),a);

   gtk_label_set_text (L10,b);

   gtk_label_set_text (L11,cl[m].Nom);
   gtk_label_set_text (L12,cl[m].Prenom);
   gtk_label_set_text (L13,f);
   gtk_label_set_text (L14,cl[m].Adresse);
   gtk_label_set_text (L15,j);


   gtk_widget_show_all(AFC);




       }
else {
        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AFC);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Fin d'affichage.. ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);


}


}




void Liste_Des_Clients(){i=m=0;
char a[20], b[20], *c, *d, *e, f[20], j[20], *h;
builder=gtk_builder_new_from_file("Unsaved 4.glade");
AFC=gtk_builder_get_object(builder,"AFC");
buttafc1=gtk_builder_get_object(builder,"buttafc1");
buttafc2=gtk_builder_get_object(builder,"buttafc2");
L9=gtk_builder_get_object(builder,"L9");
gtk_label_set_text(GTK_LABEL(L1),"a");
L10=gtk_builder_get_object(builder,"L10");
L11=gtk_builder_get_object(builder,"L11");
L12=gtk_builder_get_object(builder,"L12");
L13=gtk_builder_get_object(builder,"L13");
L14=gtk_builder_get_object(builder,"L14");
L15=gtk_builder_get_object(builder,"L15");


i=0;
cl=(Voiture*)malloc(i*sizeof(Voiture));
FILE *fichier;


fichier=fopen("Cl.txt","r");
if(fichier==NULL){
     builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Oucan client.. ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
} else{

   int t=0;


   do{

   i++;

cl=realloc(cl, i*sizeof(Client));


fscanf(fichier,"%d\t%s\t%s\t%d%s\t%d\n",&cl[i-1].IdClient,cl[i-1].Nom,cl[i-1].Prenom, &cl[i-1].Cin,cl[i-1].Adresse,&cl[i-1].Telephone);




    }while(!feof(fichier));
       k=i;
    fclose(fichier);

sprintf(a," Cient : n%d.", 1);

   sprintf(b,"%d",cl[0].IdClient);

   sprintf(f,"%d",cl[0].Cin);

   sprintf(j,"+212%d ",cl[0].Telephone);

   gtk_label_set_text(GTK_LABEL(L9),a);

gtk_label_set_text (L10,b);

gtk_label_set_text (L11,cl[0].Nom);
gtk_label_set_text (L12,cl[0].Prenom);
gtk_label_set_text (L13,f);
gtk_label_set_text (L14,cl[0].Adresse);
gtk_label_set_text (L15,j);


gtk_widget_show_all(AFC);




        g_signal_connect_swapped (buttafc2, "clicked", G_CALLBACK (nxt2), NULL);
        g_signal_connect_swapped (buttafc1, "clicked", G_CALLBACK (anl), NULL);

}

}









void Ajouter_Des_Clients(){






FILE *fichier;

char *j, *b,*c, *e, *h, *aa, *aaa;
       int a, d, f;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
   h=gtk_entry_get_text(GTK_ENTRY(E18));
   sscanf(h,"%d",&a);

   b=gtk_entry_get_text(GTK_ENTRY(E19));

   c=gtk_entry_get_text(GTK_ENTRY(E20));

   e=gtk_entry_get_text(GTK_ENTRY(E22));

   aa=gtk_entry_get_text(GTK_ENTRY(E21));
    sscanf(aa,"%d",&d);

    aaa=gtk_entry_get_text(GTK_ENTRY(E23));
    sscanf(aaa,"%d",&f);




    fichier=fopen("Cl.txt","a");

    if(Teste2(a)==1){
    builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AJC);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"ce client est déja existe!!!\ncette ID est deja existe");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);


   }
   else{
       lliste.IdClient=a;

       strcpy(lliste.Nom,b);

       strcpy(lliste.Prenom,c);

       strcpy(lliste.Adresse,e);

       lliste.Cin=d;

     lliste.Telephone=f;


fprintf(fichier,"%d\t%s\t%s\t%d\t%s\t%d\n",lliste.IdClient,lliste.Nom,lliste.Prenom,lliste.Cin,lliste.Adresse,lliste.Telephone);
     fclose(fichier);
     builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AJC);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"l'information de client que je fait ajoute");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
   }





}



void ajc(){
 builder=gtk_builder_new_from_file("Unsaved 4.glade");
AJC=gtk_builder_get_object(builder,"AJC");
buttajc=gtk_builder_get_object(builder,"buttajc");
g_signal_connect_swapped (buttajc, "clicked", G_CALLBACK (Ajouter_Des_Clients), NULL);

E18=gtk_builder_get_object(builder,"E18");
E19=gtk_builder_get_object(builder,"E19");
E20=gtk_builder_get_object(builder,"E20");
E21=gtk_builder_get_object(builder,"E21");
E22=gtk_builder_get_object(builder,"E22");
E23=gtk_builder_get_object(builder,"E23");

gtk_widget_show_all(AJC);
}





void Modifier_Des_Clients(int idc){





FILE *fichier,*fichier1;



    char *j, *b,*c, *e, *h, *aa, *aaa;
       int a, d, f;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
   h=gtk_entry_get_text(GTK_ENTRY(E18));
   sscanf(h,"%d",&a);

   b=gtk_entry_get_text(GTK_ENTRY(E19));

   c=gtk_entry_get_text(GTK_ENTRY(E20));

   e=gtk_entry_get_text(GTK_ENTRY(E22));

   aa=gtk_entry_get_text(GTK_ENTRY(E21));
    sscanf(aa,"%d",&d);

    aaa=gtk_entry_get_text(GTK_ENTRY(E23));
    sscanf(aaa,"%d",&f);


            fichier=fopen("Cl.txt","r");
                   fichier1=fopen("Cll.txt","a");
        do{
        fscanf(fichier,"%d\t%s\t%s\t%d\t%s\t%d\n",&lliste.IdClient,lliste.Nom,lliste.Prenom,&lliste.Cin,lliste.Adresse,&lliste.Telephone);
        if(idc==lliste.IdClient){



          lliste.IdClient=a;

       strcpy(lliste.Nom,b);

       strcpy(lliste.Prenom,c);

       strcpy(lliste.Adresse,e);

       lliste.Cin=d;

     lliste.Telephone=f;





        }





           fprintf(fichier1,"%d\t%s\t%s\t%d\t%s\t%d\n",lliste.IdClient,lliste.Nom,lliste.Prenom,lliste.Cin,lliste.Adresse,lliste.Telephone);


        }while(!feof(fichier));
        fclose(fichier);
        fclose(fichier1);
                remove("Cl.txt");
        rename("Cll.txt","Cl.txt");

}

void modfc1(){
     char *a;
    int b;
a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%d",&b);
    gtk_widget_destroy(rch);

    if(Teste2(b)==1){
       builder=gtk_builder_new_from_file("Unsaved 4.glade");
AJC=gtk_builder_get_object(builder,"AJC");
buttajc=gtk_builder_get_object(builder,"buttajc");
gtk_button_set_label(buttajc,"Modifier");
g_signal_connect_swapped (buttajc, "clicked", G_CALLBACK (Modifier_Des_Clients), b);

E18=gtk_builder_get_object(builder,"E18");
E19=gtk_builder_get_object(builder,"E19");
E20=gtk_builder_get_object(builder,"E20");
E21=gtk_builder_get_object(builder,"E21");
E22=gtk_builder_get_object(builder,"E22");
E23=gtk_builder_get_object(builder,"E23");

gtk_widget_show_all(AJC);
        } else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Cette Client n'exest pas\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }

}

void modfc(){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de Client que vous avez modifier:\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (modfc1), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (destroy), rch);
}












void Supprimer_Des_Clients(int isd){





FILE *fichier;
FILE *fichier1;

    fichier=fopen("Cl.txt","r");
    fichier1=fopen("Cll.txt","a");


    do{
        fscanf(fichier,"%d\t%s\t%s\t%d\t%s\t%d\n",&lliste.IdClient,lliste.Nom,lliste.Prenom,&lliste.Cin,lliste.Adresse,&lliste.Telephone);

        if(isd!=lliste.IdClient){
            fprintf(fichier1,"%d\t%s\t%s\t%d\t%s\t%d\n",lliste.IdClient,lliste.Nom,lliste.Prenom,lliste.Cin,lliste.Adresse,lliste.Telephone);

        }


    }while(!feof(fichier));
        fclose(fichier);
    fclose(fichier1);
        remove("Cl.txt");
rename("Cll.txt","Cl.txt");

                builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(suppr);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"vous éte supprimer Client\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);


}

void suprc(){
    char *a;
    int b;
a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%d",&b);

    if(Teste2(b)==1){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        suppr=gtk_builder_get_object(builder,"suppr");
        buttsuppr=gtk_builder_get_object(builder,"buttsuppr");
        anullsuppr=gtk_builder_get_object(builder,"anullsuppr");
        lsuppr=gtk_builder_get_object(builder,"lsuppr");



        gtk_label_set_text (lsuppr,"vous voullez vraiment Supprimer?");
        g_signal_connect_swapped (buttsuppr, "clicked", G_CALLBACK (Supprimer_Des_Clients), b);
        g_signal_connect_swapped (anullsuppr, "clicked", G_CALLBACK (anl), suppr);
        gtk_widget_show_all(suppr);

    }else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Cette Client n'exest pas\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }
    }




void suppc(){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de Client que vous avez supprimer:\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (suprc), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (anl), rch);
}









int Teste3(float a){

    int p=-1;

FILE *fichier;
fichier=fopen("Cont.txt","r");

    do{
fscanf(fichier,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&llliste.NumContrat,&llliste.IdVoiture,&llliste.IdClient,&llliste.Debut.jj,&llliste.Debut.mm,&llliste.Debut.aa,&llliste.Fin.jj,&llliste.Fin.mm,&llliste.Fin.aa,&llliste.Cout);

        if(a==llliste.NumContrat)

 p=1;




    }
       while(!feof(fichier));
fclose(fichier);
        return p;


}



















void Visualiser()
{
    int isd=1;
    float c;
do{

    char *aa, *bb, *cc, *dd, *ee, *ff, *jjj, *hh, *ii, *gg;
       int b, C, d, e, f, j, h, i, g;
       float a;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
   aa=gtk_entry_get_text(GTK_ENTRY(E1));
   sscanf(aa,"%f",&a);

   bb=gtk_entry_get_text(GTK_ENTRY(E2));
   sscanf(bb,"%d",&b);

   cc=gtk_entry_get_text(GTK_ENTRY(E3));
   sscanf(cc,"%d",&C);

   dd=gtk_entry_get_text(GTK_ENTRY(E4));
   sscanf(dd,"%d",&d);

   ee=gtk_entry_get_text(GTK_ENTRY(E5));
    sscanf(ee,"%d",&e);

    ff=gtk_entry_get_text(GTK_ENTRY(E6));
    sscanf(ff,"%d",&f);

    jjj=gtk_entry_get_text(GTK_ENTRY(E7));
    sscanf(jjj,"%d",&j);

    hh=gtk_entry_get_text(GTK_ENTRY(E8));
    sscanf(hh,"%d",&h);

    ii=gtk_entry_get_text(GTK_ENTRY(E9));
    sscanf(ii,"%d",&i);

    gg=gtk_entry_get_text(GTK_ENTRY(E10));
    sscanf(gg,"%d",&g);



FILE *fichier;
FILE *fichier1;

    FILE *fichier2;
        fichier1=fopen("Cont.txt","a");
        fichier=fopen("aw.txt","r");
        fichier2=fopen("Cl.txt","r");




       if(Teste3(a)==1)
        {  builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(VC);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Cette contrat est déja existe!!!\ncette ID est deja existe");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
        break;

          }
        else{
             llliste.NumContrat=a;

    llliste.IdVoiture=b;
    if (Teste1(llliste.IdVoiture)!=1) {
            builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nVeuillez saisire le bon Id de voiture");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
        break;
}


    llliste.IdClient=C;
        if(Teste2(llliste.IdClient)!=1){
             builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nVeuillez saisire le bon Id de client");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
        break;
        }


    llliste.Debut.jj=d;
    llliste.Debut.mm=e;
    llliste.Debut.aa=f;


        if(llliste.Debut.aa<0||llliste.Debut.aa>2022)
        {
         builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Année exact en DebutSvp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;}
        else if(llliste.Debut.mm<1||llliste.Debut.mm>12){

             builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nEntrer Le Mois Exact en Debut Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Debut.mm==1||llliste.Debut.mm==3||llliste.Debut.mm==5||llliste.Debut.mm==7||llliste.Debut.mm==8||llliste.Debut.mm==10||llliste.Debut.mm==12)&&(llliste.Debut.jj<0||llliste.Debut.jj>31)){

             builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en Debut Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }


        else if((llliste.Debut.mm==4||llliste.Debut.mm==6||llliste.Debut.mm==9||llliste.Debut.mm==11)&&(llliste.Debut.jj<0||llliste.Debut.jj>30)){

            builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en Debut Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Debut.aa%4)!=0&&llliste.Debut.mm==2&&llliste.Debut.jj>28){
builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en Debut Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Debut.aa%4)==0&&llliste.Debut.mm==2&&llliste.Debut.jj>29){

         builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en Debut Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }








    llliste.Fin.jj=j;
    llliste.Fin.mm=h;
    llliste.Fin.aa=i;


        if(llliste.Fin.aa<0||llliste.Fin.aa>2020)
        {
        builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Année exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;}
        else if(llliste.Fin.mm<1||llliste.Fin.mm>12){
builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Mois exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Fin.mm==1||llliste.Fin.mm==3||llliste.Fin.mm==5||llliste.Fin.mm==7||llliste.Fin.mm==8||llliste.Fin.mm==10||llliste.Fin.mm==12)&&(llliste.Fin.jj<0||llliste.Fin.jj>31)){
builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }


        else if((llliste.Fin.mm==4||llliste.Fin.mm==6||llliste.Fin.mm==9||llliste.Fin.mm==11)&&(llliste.Fin.jj<0||llliste.Fin.jj>30)){

      builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Fin.aa%4)!=0&&llliste.Fin.mm==2&&llliste.Fin.jj>28){

          builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }

        else if((llliste.Fin.aa%4)==0&&llliste.Fin.mm==2&&llliste.Fin.jj>29){

            builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nentrer Le Jour exact en fin Svp!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }
        if(llliste.Fin.aa<llliste.Debut.aa)
        {
        builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nDate False!!!!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
            break;
        }
            else if(llliste.Fin.aa==llliste.Debut.aa)
            {

                if(llliste.Fin.mm<llliste.Debut.mm)
              { builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nDate False!!!!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                           break;
                       }

                else if(llliste.Fin.mm==llliste.Debut.mm)

                {
                    if(llliste.Fin.jj<llliste.Debut.jj)
                                 { builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Erreur!!!\nDate False!!!!");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                                             break;
                                         }

                }





            }




       llliste.Cout=g;

    fprintf(fichier1,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",llliste.NumContrat,llliste.IdVoiture,llliste.IdClient,llliste.Debut.jj,llliste.Debut.mm,llliste.Debut.aa,llliste.Fin.jj,llliste.Fin.mm,llliste.Fin.aa,llliste.Cout);
        }
    fclose(fichier);
    fclose(fichier1);
        fclose(fichier2);
        anl(VC);
        isd=2;
}while(isd!=2);




}



void vis(){
 builder=gtk_builder_new_from_file("Unsaved 4.glade");
VC=gtk_builder_get_object(builder,"VC");
buttvc=gtk_builder_get_object(builder,"buttvc");
g_signal_connect_swapped (buttvc, "clicked", G_CALLBACK (Visualiser), NULL);

E1=gtk_builder_get_object(builder,"E1");
E2=gtk_builder_get_object(builder,"E2");
E3=gtk_builder_get_object(builder,"E3");
E4=gtk_builder_get_object(builder,"E4");
E5=gtk_builder_get_object(builder,"E5");
E6=gtk_builder_get_object(builder,"E6");
E7=gtk_builder_get_object(builder,"E7");
E8=gtk_builder_get_object(builder,"E8");
E9=gtk_builder_get_object(builder,"E9");
E10=gtk_builder_get_object(builder,"E10");

gtk_widget_show_all(VC);
}





void Modifier_Contrat(){


    char *aa, *bb, *cc, *dd, *ee, *ff, *jjj, *hh, *ii, *gg;
       int b, C, d, e, f, j, h, i, g;
       float a;
   builder=gtk_builder_new_from_file("Unsaved 4.glade");
     destroy(rch);
   aa=gtk_entry_get_text(GTK_ENTRY(E1));
   sscanf(aa,"%f",&a);

   bb=gtk_entry_get_text(GTK_ENTRY(E2));
   sscanf(bb,"%d",&b);

   cc=gtk_entry_get_text(GTK_ENTRY(E3));
   sscanf(cc,"%d",&C);

   dd=gtk_entry_get_text(GTK_ENTRY(E4));
   sscanf(dd,"%d",&d);

   ee=gtk_entry_get_text(GTK_ENTRY(E5));
    sscanf(ee,"%d",&e);

    ff=gtk_entry_get_text(GTK_ENTRY(E6));
    sscanf(ff,"%d",&f);

    jjj=gtk_entry_get_text(GTK_ENTRY(E7));
    sscanf(jjj,"%d",&j);

    hh=gtk_entry_get_text(GTK_ENTRY(E8));
    sscanf(hh,"%d",&h);

    ii=gtk_entry_get_text(GTK_ENTRY(E9));
    sscanf(ii,"%d",&i);

    gg=gtk_entry_get_text(GTK_ENTRY(E10));
    sscanf(gg,"%d",&g);




    float idc;
    FILE *fichier;
    FILE *fichier1;
    FILE *fichier2;
    FILE *fichier3;
    fichier2=fopen("Cont.txt","r");
    fichier3=fopen("Clll.txt","a");
    fichier=fopen("aw.txt","r");
    fichier1=fopen("Cl.txt","r");


    do{



        fscanf(fichier2,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&llliste.NumContrat,&llliste.IdVoiture,&llliste.IdClient,&llliste.Debut.jj,&llliste.Debut.mm,&llliste.Debut.aa,&llliste.Fin.jj,&llliste.Fin.mm,&llliste.Fin.aa,&llliste.Cout);

        if(a==llliste.NumContrat){



           llliste.NumContrat=a;
            fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

            llliste.IdVoiture=liste.IdVoiture;



            fscanf(fichier1,"%d\t%s\t%s\t%d\t%s\t%d\n",&lliste.IdClient,lliste.Nom,lliste.Prenom,&lliste.Cin,lliste.Adresse,&lliste.Telephone);

            llliste.IdClient=lliste.IdClient;

              llliste.Debut.jj=d;
              llliste.Debut.mm=e;
              llliste.Debut.aa=f;


                if(llliste.Debut.aa<0||llliste.Debut.aa>2020)
                {
                builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer AnnÃ©e exact Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;}
                else if(llliste.Debut.mm<1||llliste.Debut.mm>12){
                       builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nEntrer Le Mois Exact Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }

                else if((llliste.Debut.mm==1||llliste.Debut.mm==3||llliste.Debut.mm==5||llliste.Debut.mm==7||llliste.Debut.mm==8||llliste.Debut.mm==10||llliste.Debut.mm==12)&&(llliste.Debut.jj<0||llliste.Debut.jj>31)){




                      builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer Le Jour exact en Debut Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }


                else if((llliste.Debut.mm==4||llliste.Debut.mm==6||llliste.Debut.mm==9||llliste.Debut.mm==11)&&(llliste.Debut.jj<0||llliste.Debut.jj>30)){

                            builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer Le Jour exact en Debut Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }

                else if((llliste.Debut.aa%4)!=0&&llliste.Debut.mm==2&&llliste.Debut.jj>28){

                           builder=gtk_builder_new_from_file("Unsaved 4.glade");
                fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer Le Jour exact en Debut Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }

                else if((llliste.Debut.aa%4)==0&&llliste.Debut.mm==2&&llliste.Debut.jj>29){

                            builder=gtk_builder_new_from_file("Unsaved 4.glade");
        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer Le Jour exact en Debut Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }



           llliste.Fin.jj=j;
           llliste.Fin.mm=h;
           llliste.Fin.aa=i;


                if(llliste.Fin.aa<0||llliste.Fin.aa>2020)
                {
                        builder=gtk_builder_new_from_file("Unsaved 4.glade");

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nentrer AnnÃ©e exact en fin Svp!!n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;}
                else if(llliste.Fin.mm<1||llliste.Fin.mm>12){

                            builder=gtk_builder_new_from_file("Unsaved 4.glade");
               fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\Entrer Le Mois Exact en fain Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }

                else if((llliste.Fin.mm==1||llliste.Fin.mm==3||llliste.Fin.mm==5||llliste.Fin.mm==7||llliste.Fin.mm==8||llliste.Fin.mm==10||llliste.Fin.mm==12)&&(llliste.Fin.jj<0||llliste.Fin.jj>31)){
                   builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\Entrer Le Jeur Exact en fain Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }


                else if((llliste.Fin.mm==4||llliste.Fin.mm==6||llliste.Fin.mm==9||llliste.Fin.mm==11)&&(llliste.Fin.jj<0||llliste.Fin.jj>30)){
     builder=gtk_builder_new_from_file("Unsaved 4.glade");

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\Entrer Le Jeur Exact en fain Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }

                else if((llliste.Fin.aa%4)!=0&&llliste.Fin.mm==2&&llliste.Fin.jj>28){

     builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\Entrer Le Jeur Exact en fain Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);                    break;
                }

                else if((llliste.Fin.aa%4)==0&&llliste.Fin.mm==2&&llliste.Fin.jj>29){

     builder=gtk_builder_new_from_file("Unsaved 4.glade");

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\Entrer Le Jeur Exact en fain Svp!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);                    break;
                }
                if(llliste.Fin.aa<llliste.Debut.aa)
                {
                     builder=gtk_builder_new_from_file("Unsaved 4.glade");
                fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nDate False!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                    break;
                }
                    else if(llliste.Fin.aa==llliste.Debut.aa)
                    {

                        if(llliste.Fin.mm<llliste.Debut.mm)
                      {                builder=gtk_builder_new_from_file("Unsaved 4.glade");

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nDate False!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                                   break;
                               }

                        else if(llliste.Fin.mm==llliste.Debut.mm)

                        {
                            if(llliste.Fin.jj<llliste.Debut.jj)
                                         {                builder=gtk_builder_new_from_file("Unsaved 4.glade");


        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nDate False!!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
                                                     break;
                                                 }

                        }





                    }
                    llliste.Cout=g;

                    destroy(VC);



        }





           fprintf(fichier3,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",llliste.NumContrat,llliste.IdVoiture,llliste.IdClient,llliste.Debut.jj,llliste.Debut.mm,llliste.Debut.aa,llliste.Fin.jj,llliste.Fin.mm,llliste.Fin.aa,llliste.Cout);


        }while(!feof(fichier)&&!feof(fichier1)&&!feof(fichier2));

        fclose(fichier);
        fclose(fichier1);
     fclose(fichier2);
    fclose(fichier3);
                remove("Cont.txt");
        rename("Clll.txt","Cont.txt");

    }




void Modifier_Contrat2(){
    a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%f",&numc);

    if(Teste3(numc)==1){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

builder=gtk_builder_new_from_file("Unsaved 4.glade");
VC=gtk_builder_get_object(builder,"VC");
buttvc=gtk_builder_get_object(builder,"buttvc");
g_signal_connect_swapped (buttvc, "clicked", G_CALLBACK (Modifier_Contrat), NULL);

E1=gtk_builder_get_object(builder,"E1");
E2=gtk_builder_get_object(builder,"E2");
E3=gtk_builder_get_object(builder,"E3");
E4=gtk_builder_get_object(builder,"E4");
E5=gtk_builder_get_object(builder,"E5");
E6=gtk_builder_get_object(builder,"E6");
E7=gtk_builder_get_object(builder,"E7");
E8=gtk_builder_get_object(builder,"E8");
E9=gtk_builder_get_object(builder,"E9");
E10=gtk_builder_get_object(builder,"E10");

gtk_widget_show_all(VC);
    }else {
         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\n Ceclient n'existe pas\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }

}

void Modifier_Contrat1(){
builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer num de contrat que vous :\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");

        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (Modifier_Contrat2), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (destroy), rch);
 gtk_widget_show_all(rch);
}












void Louer(int idc){


    char *bb;
    int b;
    FILE *fichier;
    FILE *fichier1;
    FILE *fichier3;

    bb=gtk_entry_get_text(GTK_ENTRY(ERCH));

    sscanf(bb,"%d",&b);

    if(Teste1(b)==1){

            if(liste.EnLocation[0]=='N'|| liste.EnLocation[0]=='n'){
                 printf("\n gggg");

  fichier=fopen("aw.txt","r");
        fichier3=fopen("Contt.txt","a");

         do{

             fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

             if(liste.IdVoiture==b/*&&strcmp(liste.Marque,d)==0&&strcmp(liste.NomVoiture,e)==0&&strcmp(liste.Coulor,f)==0&&liste.NbPlaces==g&&liste.PrixJour==h&&strcmp(liste.EnLocation,"non")==0*/)
             {



                         liste.EnLocation[0]='o';
                         liste.EnLocation[1]='u';
                         liste.EnLocation[2]='i';

             } fprintf(fichier3,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

         }while(!feof(fichier));
         fclose(fichier);
         fclose(fichier3);

         remove("aw.txt");
         rename("Contt.txt","aw.txt");

          vis();

        }
        else{

 builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"le voiture en location...");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);
}} else {
 builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"n'existe pas.. ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);}





    }



louer2(){
    char *aa;
    int a;
destroy(rch);
    aa=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(aa,"%d",&a);

    if(Teste2(a)==1){
builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de Voiture que vous :\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");

        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (Louer), a);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (anl), rch);
        gtk_widget_show_all(rch);
    } else {
        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(AFV);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Ce client n'exist pas..\Ajouter client ");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (oklouer), NULL);
        gtk_widget_show_all(fin);

    }
}






void louer1(){
builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de Client que vous :\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");

        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (louer2), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (destroy),rch);
        gtk_widget_show_all(rch);
}





















void Retourner(int a){

  char *bb;
  int *b;
    FILE *fichier2,*fichier4,*fichier,*fichier5;



    fichier2=fopen("Cont.txt","r");
    fichier4=fopen("Clk.txt","a");

    do{

        fscanf(fichier2,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&llliste.NumContrat,&llliste.IdVoiture,&llliste.IdClient,&llliste.Debut.jj,&llliste.Debut.mm,&llliste.Debut.aa,&llliste.Fin.jj,&llliste.Fin.mm,&llliste.Fin.aa,&llliste.Cout);

        if(a!=llliste.IdVoiture){

        fprintf(fichier4,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",llliste.NumContrat,llliste.IdVoiture,llliste.IdClient,llliste.Debut.jj,llliste.Debut.mm,llliste.Debut.aa,llliste.Fin.jj,llliste.Fin.mm,llliste.Fin.aa,llliste.Cout);
        }


    }while(!feof(fichier2));
    fclose(fichier2);
    fclose(fichier4);
    remove("Cont.txt");
    rename("Clk.txt","Cont.txt");



    fichier=fopen("aw.txt","r");
    fichier5=fopen("Clkk.txt","a");

           do{

    fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

    if(a==liste.IdVoiture){


                                            liste.EnLocation[0]='n';
                                            liste.EnLocation[1]='o';
                                            liste.EnLocation[2]='n';
                }



               fprintf(fichier5,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

           }while(!feof(fichier));
      fclose(fichier);
        fclose(fichier5);
            remove("aw.txt");
            rename("Clkk.txt","aw.txt");
               builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(suppr);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nOpération terminée!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);






}
void Retourner2(){
    char *a;
    int b;
a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%d",&b);

    if(Teste1(b)==1){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        suppr=gtk_builder_get_object(builder,"suppr");
        buttsuppr=gtk_builder_get_object(builder,"buttsuppr");
        anullsuppr=gtk_builder_get_object(builder,"anullsuppr");
        lsuppr=gtk_builder_get_object(builder,"lsuppr");



        gtk_label_set_text (lsuppr,"\nvous voullez vraiment RETURNER c est voiture!!!");

        g_signal_connect_swapped (buttsuppr, "clicked", G_CALLBACK (Retourner),b);
        g_signal_connect_swapped (anullsuppr, "clicked", G_CALLBACK (anl), suppr);
        gtk_widget_show_all(suppr);

    }else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"\nCette voiture n'existe pas!!\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }
}


void Retourner1(){
builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer id de voiture  :\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (Retourner2), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (anl), rch);
}

void supprimer_contrat(){

     FILE *fichier2,*fichier4,*fichier,*fichier5;
    int idv=-1;
     fichier2=fopen("Cont.txt","r");
    fichier4=fopen("Clk.txt","a");


    do{

        fscanf(fichier2,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",&llliste.NumContrat,&llliste.IdVoiture,&llliste.IdClient,&llliste.Debut.jj,&llliste.Debut.mm,&llliste.Debut.aa,&llliste.Fin.jj,&llliste.Fin.mm,&llliste.Fin.aa,&llliste.Cout);

        if(numc!=llliste.NumContrat){

        fprintf(fichier4,"%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",llliste.NumContrat,llliste.IdVoiture,llliste.IdClient,llliste.Debut.jj,llliste.Debut.mm,llliste.Debut.aa,llliste.Fin.jj,llliste.Fin.mm,llliste.Fin.aa,llliste.Cout);
        } else  idv=llliste.IdVoiture;


    }while(!feof(fichier2));
    fclose(fichier2);
    fclose(fichier4);
    remove("Cont.txt");
    rename("Clk.txt","Cont.txt");
    fichier=fopen("aw.txt","r");
    fichier5=fopen("Clkk.txt","a");

           do{

    fscanf(fichier,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",&liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,&liste.NbPlaces,&liste.PrixJour,liste.EnLocation);

    if(liste.IdVoiture==idv){


                                            liste.EnLocation[0]='n';
                                            liste.EnLocation[1]='o';
                                            liste.EnLocation[2]='n';
                }



               fprintf(fichier5,"%d\t%s\t%s\t%s\t%d\t%d\t%s\n",liste.IdVoiture,liste.Marque,liste.NomVoiture,liste.Coulor,liste.NbPlaces,liste.PrixJour,liste.EnLocation);

           }while(!feof(fichier));
      fclose(fichier);
        fclose(fichier5);
            remove("aw.txt");
            rename("Clkk.txt","aw.txt");
            builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF," Operation terminée...\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);



}


void supprimer_contrat2(){
 char *a;

a=gtk_entry_get_text(GTK_ENTRY(ERCH));
    sscanf(a,"%f",&numc);

    if(Teste3(numc)==1){

        builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        suppr=gtk_builder_get_object(builder,"suppr");
        buttsuppr=gtk_builder_get_object(builder,"buttsuppr");
        anullsuppr=gtk_builder_get_object(builder,"anullsuppr");
        lsuppr=gtk_builder_get_object(builder,"lsuppr");



        gtk_label_set_text (lsuppr,"\nvous voullez vraiment Supprimer!!!");

        g_signal_connect_swapped (buttsuppr, "clicked", G_CALLBACK (supprimer_contrat),NULL);
        g_signal_connect_swapped (anullsuppr, "clicked", G_CALLBACK (anl), suppr);
        gtk_widget_show_all(suppr);

    }else {

         builder=gtk_builder_new_from_file("Unsaved 4.glade");
        gtk_widget_destroy(rch);

        fin=gtk_builder_get_object(builder,"fin");
        OKF=gtk_builder_get_object(builder,"OKF");
        LF=gtk_builder_get_object(builder,"LF");

        gtk_label_set_text (LF,"Ce contrat n'existe pas..\n");
        g_signal_connect_swapped (OKF, "clicked", G_CALLBACK (destroy), fin);
        gtk_widget_show_all(fin);

    }
    }

void supprimer_contrat1(){
builder=gtk_builder_new_from_file("Unsaved 4.glade");
        rch=gtk_builder_get_object(builder,"rch");
        buttrch=gtk_builder_get_object(builder,"buttrch");
        anullrch=gtk_builder_get_object(builder,"anullrch");
        LRCH=gtk_builder_get_object(builder,"LRCH");
        gtk_label_set_text (LRCH,"entrer num de contrat que vous :\n");
        ERCH=gtk_builder_get_object(builder,"ERCH");
        gtk_widget_show_all(rch);
        g_signal_connect_swapped (buttrch, "clicked", G_CALLBACK (supprimer_contrat2), NULL);
        g_signal_connect_swapped (anullrch, "clicked", G_CALLBACK (anl), rch);
}












void reteura(){
menu_principal();
gtk_widget_destroy(a);
}
void reteurb(){
menu_principal();
gtk_widget_destroy(b);
}
void reteurc(){
menu_principal();
gtk_widget_destroy(c);
}
void quitte(){
    g_signal_connect(G_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_destroy(window);
}






void gestion_client(){
    builder=gtk_builder_new_from_file("Unsaved 4.glade");

    /*********************************gestion client*********************************/
       //window:
    c=gtk_builder_get_object(builder,"c");
       //buttons
    c1=gtk_builder_get_object(builder,"c1");
    g_signal_connect (c1, "clicked", G_CALLBACK (Liste_Des_Clients), NULL);
    c2=gtk_builder_get_object(builder,"c2");
    g_signal_connect (c2, "clicked", G_CALLBACK (ajc), NULL);
    c3=gtk_builder_get_object(builder,"c3");
    g_signal_connect (c3, "clicked", G_CALLBACK (modfc), NULL);
    c4=gtk_builder_get_object(builder,"c4");
    g_signal_connect (c4, "clicked", G_CALLBACK (suppc), NULL);
    c5=gtk_builder_get_object(builder,"c5");
    g_signal_connect (c5, "clicked", G_CALLBACK (reteurc), NULL);
    gtk_widget_show_all(c);
    gtk_widget_destroy(window);
}




void gestion_voiture(){
    builder=gtk_builder_new_from_file("Unsaved 4.glade");


       /*********************************gestion cvoiture*********************************/
       //window:
    b=gtk_builder_get_object(builder,"b");
       //buttons
    b1=gtk_builder_get_object(builder,"b1");
    g_signal_connect (b1, "clicked", G_CALLBACK (Liste_Des_Voitures), NULL);
    b2=gtk_builder_get_object(builder,"b2");
    g_signal_connect (b2, "clicked", G_CALLBACK (ajv), NULL);
    b3=gtk_builder_get_object(builder,"b3");
    g_signal_connect (b3, "clicked", G_CALLBACK (modf), NULL);
    b4=gtk_builder_get_object(builder,"b4");
    g_signal_connect (b4, "clicked", G_CALLBACK (supp), NULL);
    b5=gtk_builder_get_object(builder,"b5");
    g_signal_connect (b5, "clicked", G_CALLBACK (reteurb), NULL);
    gtk_widget_show_all(b);
    gtk_widget_destroy(window);

}


void Location(){
    builder=gtk_builder_new_from_file("Unsaved 4.glade");

    /*********************************location*********************************/
       //window:
    a=gtk_builder_get_object(builder,"a");
       //buttons
    a1=gtk_builder_get_object(builder,"a1");
    g_signal_connect (a1, "clicked", G_CALLBACK (vis), NULL);
    a2=gtk_builder_get_object(builder,"a2");
    g_signal_connect (a2, "clicked", G_CALLBACK (louer1), NULL);
     a3=gtk_builder_get_object(builder,"a3");
    g_signal_connect (a3, "clicked", G_CALLBACK (Retourner1), NULL);
     a4=gtk_builder_get_object(builder,"a4");
    g_signal_connect (a4, "clicked", G_CALLBACK (Modifier_Contrat1), NULL);
     a5=gtk_builder_get_object(builder,"a5");
    g_signal_connect (a5, "clicked", G_CALLBACK (supprimer_contrat1), NULL);
     a6=gtk_builder_get_object(builder,"a6");
    g_signal_connect (a6, "clicked", G_CALLBACK (reteura), NULL);
    gtk_widget_destroy(window);
    gtk_widget_show_all(a);

}



void menu_principal(){
builder=gtk_builder_new_from_file("Unsaved 4.glade");

    /*********************************menu principal*********************************/
       //window:
    window=gtk_builder_get_object(builder,"window!");
       //buttons
    butt1=gtk_builder_get_object(builder,"butt1");
    g_signal_connect (butt1, "clicked", G_CALLBACK (Location), NULL);
    butt2=gtk_builder_get_object(builder,"butt2");
    g_signal_connect (butt2, "clicked", G_CALLBACK (gestion_voiture), NULL);
     butt3=gtk_builder_get_object(builder,"butt3");
    g_signal_connect (butt3, "clicked", G_CALLBACK (gestion_client), NULL);
     butt4=gtk_builder_get_object(builder,"butt4");
    g_signal_connect (butt4, "clicked", G_CALLBACK (quitte), NULL);
    gtk_widget_show_all(window);

}





int main(int argc, char **argv){
    gtk_init(&argc,&argv);



  /*________le fichier glade________*/
    builder=gtk_builder_new_from_file("Unsaved 4.glade");


    menu_principal();
    gtk_main();

return 0;}

