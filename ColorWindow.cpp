/*
 * Copyright 2009, Ilio Catallo, Stefano Celentano, Eleonora Ciceri, all rights reserved
 * Distribuited under the terms of the GPL v2 license
 * 
 * Authors:
 *
 *			Ilio Catallo
 *			Eleonora Ciceri
 * 
 * Last revision: Ilio Catallo, 8th April 2009
 *
 * Description: TODO
 */

#include "ColorWindow.h"


// Costruttore
// Me la crea tenendo la dimensione del rettangolo BRect
ColorWindow :: ColorWindow (BRect frame, BHandler *handler)
		: BWindow (frame, "Change the background color", B_TITLED_WINDOW,B_NOT_RESIZABLE) {
	
	frame.OffsetTo(B_ORIGIN);
	fColorView = new ColorView (frame, "ColorView",handler);
	AddChild(fColorView);
	
	Show();
}

// Funzione attivata quando chiudo la finestra
bool ColorWindow :: QuitRequested() {
	return (true);
}