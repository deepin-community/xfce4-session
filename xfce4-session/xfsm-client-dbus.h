/*
 * Generated by gdbus-codegen 2.62.4 from xfsm-client-dbus.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __XFSM_CLIENT_DBUS_H__
#define __XFSM_CLIENT_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.xfce.Session.Client */

#define XFSM_DBUS_TYPE_CLIENT (xfsm_dbus_client_get_type ())
#define XFSM_DBUS_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFSM_DBUS_TYPE_CLIENT, XfsmDbusClient))
#define XFSM_DBUS_IS_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFSM_DBUS_TYPE_CLIENT))
#define XFSM_DBUS_CLIENT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), XFSM_DBUS_TYPE_CLIENT, XfsmDbusClientIface))

struct _XfsmDbusClient;
typedef struct _XfsmDbusClient XfsmDbusClient;
typedef struct _XfsmDbusClientIface XfsmDbusClientIface;

struct _XfsmDbusClientIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_delete_sm_properties) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_names);

  gboolean (*handle_end_session_response) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_is_ok,
    const gchar *arg_reason);

  gboolean (*handle_get_all_sm_properties) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_id) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_sm_properties) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_names);

  gboolean (*handle_get_state) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_sm_properties) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_properties);

  gboolean (*handle_terminate) (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

  void (*cancel_end_session) (
    XfsmDbusClient *object);

  void (*end_session) (
    XfsmDbusClient *object,
    guint arg_flags);

  void (*query_end_session) (
    XfsmDbusClient *object,
    guint arg_flags);

  void (*sm_property_changed) (
    XfsmDbusClient *object,
    const gchar *arg_name,
    GVariant *arg_value);

  void (*sm_property_deleted) (
    XfsmDbusClient *object,
    const gchar *arg_name);

  void (*state_changed) (
    XfsmDbusClient *object,
    guint arg_old_state,
    guint arg_new_state);

  void (*stop) (
    XfsmDbusClient *object);

};

GType xfsm_dbus_client_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *xfsm_dbus_client_interface_info (void);
guint xfsm_dbus_client_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void xfsm_dbus_client_complete_get_id (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    const gchar *id);

void xfsm_dbus_client_complete_get_state (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    guint state);

void xfsm_dbus_client_complete_get_all_sm_properties (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    GVariant *properties);

void xfsm_dbus_client_complete_get_sm_properties (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation,
    GVariant *values);

void xfsm_dbus_client_complete_set_sm_properties (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

void xfsm_dbus_client_complete_delete_sm_properties (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

void xfsm_dbus_client_complete_terminate (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);

void xfsm_dbus_client_complete_end_session_response (
    XfsmDbusClient *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void xfsm_dbus_client_emit_state_changed (
    XfsmDbusClient *object,
    guint arg_old_state,
    guint arg_new_state);

void xfsm_dbus_client_emit_sm_property_changed (
    XfsmDbusClient *object,
    const gchar *arg_name,
    GVariant *arg_value);

void xfsm_dbus_client_emit_sm_property_deleted (
    XfsmDbusClient *object,
    const gchar *arg_name);

void xfsm_dbus_client_emit_query_end_session (
    XfsmDbusClient *object,
    guint arg_flags);

void xfsm_dbus_client_emit_end_session (
    XfsmDbusClient *object,
    guint arg_flags);

void xfsm_dbus_client_emit_cancel_end_session (
    XfsmDbusClient *object);

void xfsm_dbus_client_emit_stop (
    XfsmDbusClient *object);



/* D-Bus method calls: */
void xfsm_dbus_client_call_get_id (
    XfsmDbusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_get_id_finish (
    XfsmDbusClient *proxy,
    gchar **out_id,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_get_id_sync (
    XfsmDbusClient *proxy,
    gchar **out_id,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_get_state (
    XfsmDbusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_get_state_finish (
    XfsmDbusClient *proxy,
    guint *out_state,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_get_state_sync (
    XfsmDbusClient *proxy,
    guint *out_state,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_get_all_sm_properties (
    XfsmDbusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_get_all_sm_properties_finish (
    XfsmDbusClient *proxy,
    GVariant **out_properties,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_get_all_sm_properties_sync (
    XfsmDbusClient *proxy,
    GVariant **out_properties,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_get_sm_properties (
    XfsmDbusClient *proxy,
    const gchar *const *arg_names,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_get_sm_properties_finish (
    XfsmDbusClient *proxy,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_get_sm_properties_sync (
    XfsmDbusClient *proxy,
    const gchar *const *arg_names,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_set_sm_properties (
    XfsmDbusClient *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_set_sm_properties_finish (
    XfsmDbusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_set_sm_properties_sync (
    XfsmDbusClient *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_delete_sm_properties (
    XfsmDbusClient *proxy,
    const gchar *const *arg_names,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_delete_sm_properties_finish (
    XfsmDbusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_delete_sm_properties_sync (
    XfsmDbusClient *proxy,
    const gchar *const *arg_names,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_terminate (
    XfsmDbusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_terminate_finish (
    XfsmDbusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_terminate_sync (
    XfsmDbusClient *proxy,
    GCancellable *cancellable,
    GError **error);

void xfsm_dbus_client_call_end_session_response (
    XfsmDbusClient *proxy,
    gboolean arg_is_ok,
    const gchar *arg_reason,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfsm_dbus_client_call_end_session_response_finish (
    XfsmDbusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfsm_dbus_client_call_end_session_response_sync (
    XfsmDbusClient *proxy,
    gboolean arg_is_ok,
    const gchar *arg_reason,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define XFSM_DBUS_TYPE_CLIENT_PROXY (xfsm_dbus_client_proxy_get_type ())
#define XFSM_DBUS_CLIENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFSM_DBUS_TYPE_CLIENT_PROXY, XfsmDbusClientProxy))
#define XFSM_DBUS_CLIENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFSM_DBUS_TYPE_CLIENT_PROXY, XfsmDbusClientProxyClass))
#define XFSM_DBUS_CLIENT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFSM_DBUS_TYPE_CLIENT_PROXY, XfsmDbusClientProxyClass))
#define XFSM_DBUS_IS_CLIENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFSM_DBUS_TYPE_CLIENT_PROXY))
#define XFSM_DBUS_IS_CLIENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFSM_DBUS_TYPE_CLIENT_PROXY))

typedef struct _XfsmDbusClientProxy XfsmDbusClientProxy;
typedef struct _XfsmDbusClientProxyClass XfsmDbusClientProxyClass;
typedef struct _XfsmDbusClientProxyPrivate XfsmDbusClientProxyPrivate;

struct _XfsmDbusClientProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  XfsmDbusClientProxyPrivate *priv;
};

struct _XfsmDbusClientProxyClass
{
  GDBusProxyClass parent_class;
};

GType xfsm_dbus_client_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfsmDbusClientProxy, g_object_unref)
#endif

void xfsm_dbus_client_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfsmDbusClient *xfsm_dbus_client_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
XfsmDbusClient *xfsm_dbus_client_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void xfsm_dbus_client_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfsmDbusClient *xfsm_dbus_client_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
XfsmDbusClient *xfsm_dbus_client_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define XFSM_DBUS_TYPE_CLIENT_SKELETON (xfsm_dbus_client_skeleton_get_type ())
#define XFSM_DBUS_CLIENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFSM_DBUS_TYPE_CLIENT_SKELETON, XfsmDbusClientSkeleton))
#define XFSM_DBUS_CLIENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFSM_DBUS_TYPE_CLIENT_SKELETON, XfsmDbusClientSkeletonClass))
#define XFSM_DBUS_CLIENT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFSM_DBUS_TYPE_CLIENT_SKELETON, XfsmDbusClientSkeletonClass))
#define XFSM_DBUS_IS_CLIENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFSM_DBUS_TYPE_CLIENT_SKELETON))
#define XFSM_DBUS_IS_CLIENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFSM_DBUS_TYPE_CLIENT_SKELETON))

typedef struct _XfsmDbusClientSkeleton XfsmDbusClientSkeleton;
typedef struct _XfsmDbusClientSkeletonClass XfsmDbusClientSkeletonClass;
typedef struct _XfsmDbusClientSkeletonPrivate XfsmDbusClientSkeletonPrivate;

struct _XfsmDbusClientSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  XfsmDbusClientSkeletonPrivate *priv;
};

struct _XfsmDbusClientSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType xfsm_dbus_client_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfsmDbusClientSkeleton, g_object_unref)
#endif

XfsmDbusClient *xfsm_dbus_client_skeleton_new (void);


G_END_DECLS

#endif /* __XFSM_CLIENT_DBUS_H__ */
