// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RamerDouglasPeucker
Rcpp::DataFrame RamerDouglasPeucker(Rcpp::NumericVector x, Rcpp::NumericVector y, double epsilon, bool keepIndex);
RcppExport SEXP _RDP_RamerDouglasPeucker(SEXP xSEXP, SEXP ySEXP, SEXP epsilonSEXP, SEXP keepIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type keepIndex(keepIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(RamerDouglasPeucker(x, y, epsilon, keepIndex));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RDP_RamerDouglasPeucker", (DL_FUNC) &_RDP_RamerDouglasPeucker, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RDP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
