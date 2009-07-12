#ifndef GLIBCFS_IGNORE_INCOMPLETE

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPRAY_H_RPCGEN
#define _SPRAY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SPRAYMAX 8845

struct spraytimeval {
	u_int sec;
	u_int usec;
};
typedef struct spraytimeval spraytimeval;

struct spraycumul {
	u_int counter;
	spraytimeval clock;
};
typedef struct spraycumul spraycumul;

typedef struct {
	u_int sprayarr_len;
	char *sprayarr_val;
} sprayarr;

#define SPRAYPROG 100012
#define SPRAYVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SPRAYPROC_SPRAY 1
extern  void * sprayproc_spray_1(sprayarr *, CLIENT *);
extern  void * sprayproc_spray_1_svc(sprayarr *, struct svc_req *);
#define SPRAYPROC_GET 2
extern  spraycumul * sprayproc_get_1(void *, CLIENT *);
extern  spraycumul * sprayproc_get_1_svc(void *, struct svc_req *);
#define SPRAYPROC_CLEAR 3
extern  void * sprayproc_clear_1(void *, CLIENT *);
extern  void * sprayproc_clear_1_svc(void *, struct svc_req *);
extern int sprayprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SPRAYPROC_SPRAY 1
extern  void * sprayproc_spray_1();
extern  void * sprayproc_spray_1_svc();
#define SPRAYPROC_GET 2
extern  spraycumul * sprayproc_get_1();
extern  spraycumul * sprayproc_get_1_svc();
#define SPRAYPROC_CLEAR 3
extern  void * sprayproc_clear_1();
extern  void * sprayproc_clear_1_svc();
extern int sprayprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_spraytimeval (XDR *, spraytimeval*);
extern  bool_t xdr_spraycumul (XDR *, spraycumul*);
extern  bool_t xdr_sprayarr (XDR *, sprayarr*);

#else /* K&R C */
extern bool_t xdr_spraytimeval ();
extern bool_t xdr_spraycumul ();
extern bool_t xdr_sprayarr ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SPRAY_H_RPCGEN */

#endif
