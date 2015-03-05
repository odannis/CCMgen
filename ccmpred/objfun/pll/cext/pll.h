#ifndef PLL_H
#define PLL_H

#define N_ALPHA 21
#define N_ALPHA_PAD 32

#define x1_index(j,a) (a) * (ncol) + j
#define V(j,a) x1[x1_index(j,a)]
#define G1(j,a) g1[x1_index(j,a)]
#define L1(j,a) l1[x1_index(j,a)]

#define x2_index(b,k,a,j) (((b) * ncol + (k)) * (N_ALPHA_PAD) + (a)) * ncol + j
#define W(b,k,a,j) x2[x2_index(b,k,a,j)]
#define G2(b,k,a,j) g2[x2_index(b,k,a,j)]
#define G2L(b,k,a,j) g2l[x2_index(b,k,a,j)]
#define L2(b,k,a,j) l2[x2_index(b,k,a,j)]

#define msa_index(i,j) (i) * ncol + j
#define X(i,j) msa[msa_index(i,j)]

#define pc_index(a,s) (a) * ncol + (s)
#define PC(a,s) precomp[pc_index(a,s)]
#define PCN(a,s) precomp_norm[pc_index(a,s)]

#endif

