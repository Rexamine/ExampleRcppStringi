// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// test_dup
CharacterVector test_dup(CharacterVector x, IntegerVector i);
RcppExport SEXP _ExampleRcppStringi_test_dup(SEXP xSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dup(x, i));
    return rcpp_result_gen;
END_RCPP
}
// test_paste
CharacterVector test_paste(CharacterVector x);
RcppExport SEXP _ExampleRcppStringi_test_paste(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(test_paste(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ExampleRcppStringi_test_dup", (DL_FUNC) &_ExampleRcppStringi_test_dup, 2},
    {"_ExampleRcppStringi_test_paste", (DL_FUNC) &_ExampleRcppStringi_test_paste, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ExampleRcppStringi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
