// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hash_without_intercept
IntegerVector hash_without_intercept(CharacterVector src);
RcppExport SEXP FeatureHashing_hash_without_intercept(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = hash_without_intercept(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rehash_inplace
SEXP rehash_inplace(S4 m, IntegerVector Rmapping, int hash_size);
RcppExport SEXP FeatureHashing_rehash_inplace(SEXP mSEXP, SEXP RmappingSEXP, SEXP hash_sizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type Rmapping(RmappingSEXP );
        Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP );
        SEXP __result = rehash_inplace(m, Rmapping, hash_size);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
