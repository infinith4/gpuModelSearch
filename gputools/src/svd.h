extern "C" {
void rSvd(const char ** jobu, const char ** jobv, const int * m, const int * n,
	float * a, const int * lda, float * s, float * u, const int * ldu,
	float * vt, const int * ldvt);
}
