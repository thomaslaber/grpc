// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// grpc_version
CharacterVector grpc_version();
RcppExport SEXP _grpc_grpc_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(grpc_version());
    return rcpp_result_gen;
END_RCPP
}
// run
List run(List target);
RcppExport SEXP _grpc_run(SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type target(targetSEXP);
    rcpp_result_gen = Rcpp::wrap(run(target));
    return rcpp_result_gen;
END_RCPP
}
