#ifndef GLIBCFS_IGNORE_INCOMPLETE

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SM_INTER_H_RPCGEN
#define _SM_INTER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SM_MAXSTRLEN 1024

struct sm_name {
	char *mon_name;
};
typedef struct sm_name sm_name;

struct my_id {
	char *my_name;
	int my_prog;
	int my_vers;
	int my_proc;
};
typedef struct my_id my_id;

struct mon_id {
	char *mon_name;
	struct my_id my_id;
};
typedef struct mon_id mon_id;

struct mon {
	struct mon_id mon_id;
	char priv[16];
};
typedef struct mon mon;

struct sm_stat {
	int state;
};
typedef struct sm_stat sm_stat;

enum res {
	stat_succ = 0,
	stat_fail = 1,
};
typedef enum res res;

struct sm_stat_res {
	res res_stat;
	int state;
};
typedef struct sm_stat_res sm_stat_res;

struct status {
	char *mon_name;
	int state;
	char priv[16];
};
typedef struct status status;

#define SM_PROG 100024
#define SM_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SM_STAT 1
extern  struct sm_stat_res * sm_stat_1(struct sm_name *, CLIENT *);
extern  struct sm_stat_res * sm_stat_1_svc(struct sm_name *, struct svc_req *);
#define SM_MON 2
extern  struct sm_stat_res * sm_mon_1(struct mon *, CLIENT *);
extern  struct sm_stat_res * sm_mon_1_svc(struct mon *, struct svc_req *);
#define SM_UNMON 3
extern  struct sm_stat * sm_unmon_1(struct mon_id *, CLIENT *);
extern  struct sm_stat * sm_unmon_1_svc(struct mon_id *, struct svc_req *);
#define SM_UNMON_ALL 4
extern  struct sm_stat * sm_unmon_all_1(struct my_id *, CLIENT *);
extern  struct sm_stat * sm_unmon_all_1_svc(struct my_id *, struct svc_req *);
#define SM_SIMU_CRASH 5
extern  void * sm_simu_crash_1(void *, CLIENT *);
extern  void * sm_simu_crash_1_svc(void *, struct svc_req *);
extern int sm_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SM_STAT 1
extern  struct sm_stat_res * sm_stat_1();
extern  struct sm_stat_res * sm_stat_1_svc();
#define SM_MON 2
extern  struct sm_stat_res * sm_mon_1();
extern  struct sm_stat_res * sm_mon_1_svc();
#define SM_UNMON 3
extern  struct sm_stat * sm_unmon_1();
extern  struct sm_stat * sm_unmon_1_svc();
#define SM_UNMON_ALL 4
extern  struct sm_stat * sm_unmon_all_1();
extern  struct sm_stat * sm_unmon_all_1_svc();
#define SM_SIMU_CRASH 5
extern  void * sm_simu_crash_1();
extern  void * sm_simu_crash_1_svc();
extern int sm_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_sm_name (XDR *, sm_name*);
extern  bool_t xdr_my_id (XDR *, my_id*);
extern  bool_t xdr_mon_id (XDR *, mon_id*);
extern  bool_t xdr_mon (XDR *, mon*);
extern  bool_t xdr_sm_stat (XDR *, sm_stat*);
extern  bool_t xdr_res (XDR *, res*);
extern  bool_t xdr_sm_stat_res (XDR *, sm_stat_res*);
extern  bool_t xdr_status (XDR *, status*);

#else /* K&R C */
extern bool_t xdr_sm_name ();
extern bool_t xdr_my_id ();
extern bool_t xdr_mon_id ();
extern bool_t xdr_mon ();
extern bool_t xdr_sm_stat ();
extern bool_t xdr_res ();
extern bool_t xdr_sm_stat_res ();
extern bool_t xdr_status ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SM_INTER_H_RPCGEN */

#endif
