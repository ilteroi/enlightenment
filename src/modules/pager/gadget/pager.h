#ifndef PAGER_H
#define PAGER_H

#include "e.h"
#include "config_descriptor.h"

E_API void *e_modapi_gadget_init(E_Module *m);
E_API int   e_modapi_gadget_shutdown(E_Module *m);
E_API int   e_modapi_gadget_save(E_Module *m);

EINTERN Evas_Object    *pager_create(Evas_Object *parent, int *id, E_Gadget_Site_Orient orient);
EINTERN Evas_Object    *config_pager(E_Zone *zone);
EINTERN void           pager_init(void);
EINTERN void           _pager_cb_config_gadget_updated(void);
EINTERN void           _pager_cb_config_updated(void);

extern Config          *pager_config;
extern E_Module        *gmodule;
extern Evas_Object     *cfg_dialog;
extern Eina_List       *ginstances, *ghandlers;
/**
 * @addtogroup Optional_Gadgets
 * @{
 *
 * @defgroup Module_Pager Virtual Desktop Pager
 *
 * Shows the grid of virtual desktops and allows changing between
 * them.
 *
 * @}
 */
#endif
