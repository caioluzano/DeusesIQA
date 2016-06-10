#include <gtk/gtk.h>
#include <stdlib.h>
#include "novo.h"

void entry_reset(GtkButton *buttonReset, GObject *object_entry){
    GtkEntry *data_entry1 = g_object_get_data (object_entry, "entry1");
    GtkEntry *data_entry2 = g_object_get_data (object_entry, "entry2");
    GtkEntry *data_entry3 = g_object_get_data (object_entry, "entry3");
    GtkEntry *data_entry4 = g_object_get_data (object_entry, "entry4");
    GtkEntry *data_entry5 = g_object_get_data (object_entry, "entry5");
    GtkEntry *data_entry6 = g_object_get_data (object_entry, "entry6");
    GtkEntry *data_entry7 = g_object_get_data (object_entry, "entry7");
    GtkEntry *data_entry8 = g_object_get_data (object_entry, "entry8");
    GtkEntry *data_entry9 = g_object_get_data (object_entry, "entry9");

    gtk_entry_set_text(GTK_ENTRY(data_entry1), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry2), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry3), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry4), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry5), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry6), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry7), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry8), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry9), "");
}

double btn_click (GtkButton *button, GObject *object_entry) {

    GtkEntry *data_entry1 = g_object_get_data (object_entry, "entry1");
    GtkEntry *data_entry2 = g_object_get_data (object_entry, "entry2");
    GtkEntry *data_entry3 = g_object_get_data (object_entry, "entry3");
    GtkEntry *data_entry4 = g_object_get_data (object_entry, "entry4");
    GtkEntry *data_entry5 = g_object_get_data (object_entry, "entry5");
    GtkEntry *data_entry6 = g_object_get_data (object_entry, "entry6");
    GtkEntry *data_entry7 = g_object_get_data (object_entry, "entry7");
    GtkEntry *data_entry8 = g_object_get_data (object_entry, "entry8");
    GtkEntry *data_entry9 = g_object_get_data (object_entry, "entry9");

    const char *get_data_entry1 = gtk_entry_get_text (data_entry1);
    const char *get_data_entry2 = gtk_entry_get_text (data_entry2);
    const char *get_data_entry3 = gtk_entry_get_text (data_entry3);
    const char *get_data_entry4 = gtk_entry_get_text (data_entry4);
    const char *get_data_entry5 = gtk_entry_get_text (data_entry5);
    const char *get_data_entry6 = gtk_entry_get_text (data_entry6);
    const char *get_data_entry7 = gtk_entry_get_text (data_entry7);
    const char *get_data_entry8 = gtk_entry_get_text (data_entry8);
    const char *get_data_entry9 = gtk_entry_get_text (data_entry9);

    double q1 = atof(get_data_entry1);
    double q2 = atof(get_data_entry2);
    double q3 = atof(get_data_entry3);
    double q4 = atof(get_data_entry4);
    double q5 = atof(get_data_entry5);
    double q6 = atof(get_data_entry6);
    double q7 = atof(get_data_entry7);
    double q8 = atof(get_data_entry8);
    double q9 = atof(get_data_entry9);
    
    double result = iqa(q1, q2, q3, q4, q5, q6, q7, q8, q9);

    return result;
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *label1, *label2, *label3, *label4, *label5, *label6, *label7, *label8, *label9, *spcLabel, *resultLabel, *qLabel;
    GtkWidget *entry1, *entry2, *entry3, *entry4, *entry5, *entry6, *entry7, *entry8, *entry9;
    GtkWidget *button, *buttonReset;

    GObject *object_entry;

    //Window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

    //Label
    label1 = gtk_label_new("Coliformes Fecais (NMP/100ml)");
    label2 = gtk_label_new("pH (unidades de ph)");
    label3 = gtk_label_new("DBO (mg/L)");
    label4 = gtk_label_new("Nitrogenio Total (mg/L)");
    label5 = gtk_label_new("Fosforo total (mg/L)");
    label6 = gtk_label_new("Temperatura");
    label7 = gtk_label_new("Turbidez (UNT)");
    label8 = gtk_label_new("Solidos totais mg/L");
    label9 = gtk_label_new("OD (%% saturacao)");
    spcLabel = gtk_label_new("");

    //Entry
    entry1 = gtk_entry_new();
    entry2 = gtk_entry_new();
    entry3 = gtk_entry_new();
    entry4 = gtk_entry_new();
    entry5 = gtk_entry_new();
    entry6 = gtk_entry_new();
    entry7 = gtk_entry_new();
    entry8 = gtk_entry_new();
    entry9 = gtk_entry_new();

    //Button
    button = gtk_button_new_with_mnemonic("_Calcular");
    g_object_set_data(G_OBJECT(button), "entry1", entry1);
    g_object_set_data(G_OBJECT(button), "entry2", entry2);
    g_object_set_data(G_OBJECT(button), "entry3", entry3);
    g_object_set_data(G_OBJECT(button), "entry4", entry4);
    g_object_set_data(G_OBJECT(button), "entry5", entry5);
    g_object_set_data(G_OBJECT(button), "entry6", entry6);
    g_object_set_data(G_OBJECT(button), "entry7", entry7);
    g_object_set_data(G_OBJECT(button), "entry8", entry8);
    g_object_set_data(G_OBJECT(button), "entry9", entry9);
    g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(btn_click), button);

    //Button Reset
    buttonReset = gtk_button_new_with_mnemonic("_Reset");
    g_object_set_data(G_OBJECT(buttonReset), "entry1", entry1);
    g_object_set_data(G_OBJECT(buttonReset), "entry2", entry2);
    g_object_set_data(G_OBJECT(buttonReset), "entry3", entry3);
    g_object_set_data(G_OBJECT(buttonReset), "entry4", entry4);
    g_object_set_data(G_OBJECT(buttonReset), "entry5", entry5);
    g_object_set_data(G_OBJECT(buttonReset), "entry6", entry6);
    g_object_set_data(G_OBJECT(buttonReset), "entry7", entry7);
    g_object_set_data(G_OBJECT(buttonReset), "entry8", entry8);
    g_object_set_data(G_OBJECT(buttonReset), "entry9", entry9);
    g_signal_connect(GTK_BUTTON(buttonReset), "clicked", G_CALLBACK(entry_reset), buttonReset);

    //Grid
    grid = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid), 20);
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_attach(GTK_GRID(grid), spcLabel, 0, 9, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label1, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry1, 2, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label2, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry2, 2, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label3, 1, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry3, 2, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label4, 1, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry4, 2, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label5, 1, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry5, 2, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label6, 1, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry6, 2, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label7, 1, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry7, 2, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label8, 1, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry8, 2, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label9, 1, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry9, 2, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button, 2, 9, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), buttonReset, 1, 9, 1, 1);

    gtk_container_add(GTK_CONTAINER(window), grid);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
