/* { dg-do compile } */
/* { dg-options "-O2 -msse2 -march=k8" } */
/* { dg-require-effective-target sse2 } */
/* { dg-final { scan-assembler-not "cvtss2sd" } } */
extern double fabs (double);
float a,b;
main()
{
	a=fabs(b)+1.0;
}
