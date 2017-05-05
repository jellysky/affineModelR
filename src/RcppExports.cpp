// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/affineModelR.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// affineCFevalCpp
arma::cube affineCFevalCpp(const arma::cube coeffs, const arma::mat stateMat, const bool retLog);
RcppExport SEXP affineModelR_affineCFevalCpp(SEXP coeffsSEXP, SEXP stateMatSEXP, SEXP retLogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type stateMat(stateMatSEXP);
    Rcpp::traits::input_parameter< const bool >::type retLog(retLogSEXP);
    rcpp_result_gen = Rcpp::wrap(affineCFevalCpp(coeffs, stateMat, retLog));
    return rcpp_result_gen;
END_RCPP
}
// affineCFderivsEvalCpp
arma::cube affineCFderivsEvalCpp(const arma::cube coeffs, const arma::mat stateMat);
RcppExport SEXP affineModelR_affineCFderivsEvalCpp(SEXP coeffsSEXP, SEXP stateMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type stateMat(stateMatSEXP);
    rcpp_result_gen = Rcpp::wrap(affineCFderivsEvalCpp(coeffs, stateMat));
    return rcpp_result_gen;
END_RCPP
}
// affineSimulateCpp
List affineSimulateCpp(SEXP TT_, SEXP BB_, SEXP parList_, SEXP dt_, SEXP initVals_, SEXP genPtr_, SEXP retainIndex_);
RcppExport SEXP affineModelR_affineSimulateCpp(SEXP TT_SEXP, SEXP BB_SEXP, SEXP parList_SEXP, SEXP dt_SEXP, SEXP initVals_SEXP, SEXP genPtr_SEXP, SEXP retainIndex_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type TT_(TT_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB_(BB_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type parList_(parList_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type dt_(dt_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type initVals_(initVals_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type genPtr_(genPtr_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type retainIndex_(retainIndex_SEXP);
    rcpp_result_gen = Rcpp::wrap(affineSimulateCpp(TT_, BB_, parList_, dt_, initVals_, genPtr_, retainIndex_));
    return rcpp_result_gen;
END_RCPP
}
// generate_expNormJump
arma::vec generate_expNormJump(Rcpp::List jmpPar);
RcppExport SEXP affineModelR_generate_expNormJump(SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_expNormJump(jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// generate_kouExpJump
arma::vec generate_kouExpJump(Rcpp::List jmpPar);
RcppExport SEXP affineModelR_generate_kouExpJump(SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_kouExpJump(jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// generate_JT2010_cojump
arma::vec generate_JT2010_cojump(Rcpp::List jmpPar);
RcppExport SEXP affineModelR_generate_JT2010_cojump(SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_JT2010_cojump(jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// generate_JT2010_cojump_voljump
arma::vec generate_JT2010_cojump_voljump(Rcpp::List jmpPar);
RcppExport SEXP affineModelR_generate_JT2010_cojump_voljump(SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_JT2010_cojump_voljump(jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// generate_1sidedExp
arma::vec generate_1sidedExp(Rcpp::List jmpPar);
RcppExport SEXP affineModelR_generate_1sidedExp(SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_1sidedExp(jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransform
std::complex<double> jumpTransform(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransform(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransform(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransformD1
arma::cx_mat jumpTransformD1(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransformD1(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransformD1(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransformD2
arma::cx_mat jumpTransformD2(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransformD2(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransformD2(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransformD3
arma::cx_mat jumpTransformD3(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransformD3(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransformD3(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// kouExpTransform
std::complex<double> kouExpTransform(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_kouExpTransform(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(kouExpTransform(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// kouExpTransformD1
arma::cx_mat kouExpTransformD1(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_kouExpTransformD1(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(kouExpTransformD1(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// kouExpTransformD2
arma::cx_mat kouExpTransformD2(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_kouExpTransformD2(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(kouExpTransformD2(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// kouExpTransformD3
arma::cx_mat kouExpTransformD3(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_kouExpTransformD3(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(kouExpTransformD3(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jt2010_transform_CJ
std::complex<double> jt2010_transform_CJ(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jt2010_transform_CJ(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jt2010_transform_CJ(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jt2010_transform_CJ_VJ
std::complex<double> jt2010_transform_CJ_VJ(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jt2010_transform_CJ_VJ(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jt2010_transform_CJ_VJ(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransform_1sidedExp
std::complex<double> jumpTransform_1sidedExp(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransform_1sidedExp(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransform_1sidedExp(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// jumpTransform_1sidedExp_2
std::complex<double> jumpTransform_1sidedExp_2(const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_jumpTransform_1sidedExp_2(SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(jumpTransform_1sidedExp_2(beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// makePositiveDefinite
arma::mat makePositiveDefinite(arma::mat& semiDefMat, double relEig);
RcppExport SEXP affineModelR_makePositiveDefinite(SEXP semiDefMatSEXP, SEXP relEigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type semiDefMat(semiDefMatSEXP);
    Rcpp::traits::input_parameter< double >::type relEig(relEigSEXP);
    rcpp_result_gen = Rcpp::wrap(makePositiveDefinite(semiDefMat, relEig));
    return rcpp_result_gen;
END_RCPP
}
// getPointerToGenerator
SEXP getPointerToGenerator(std::string fstr);
RcppExport SEXP affineModelR_getPointerToGenerator(SEXP fstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fstr(fstrSEXP);
    rcpp_result_gen = Rcpp::wrap(getPointerToGenerator(fstr));
    return rcpp_result_gen;
END_RCPP
}
// getPointerToJumpTransform
SEXP getPointerToJumpTransform(std::string fstr);
RcppExport SEXP affineModelR_getPointerToJumpTransform(SEXP fstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fstr(fstrSEXP);
    rcpp_result_gen = Rcpp::wrap(getPointerToJumpTransform(fstr));
    return rcpp_result_gen;
END_RCPP
}
// evaluateGenerator
arma::vec evaluateGenerator(SEXP genPtr_, Rcpp::List jmpPar);
RcppExport SEXP affineModelR_evaluateGenerator(SEXP genPtr_SEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type genPtr_(genPtr_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluateGenerator(genPtr_, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
// evaluateTransform
std::complex<double> evaluateTransform(SEXP genPtr_, const arma::cx_colvec beta, const Rcpp::List jmpPar);
RcppExport SEXP affineModelR_evaluateTransform(SEXP genPtr_SEXP, SEXP betaSEXP, SEXP jmpParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type genPtr_(genPtr_SEXP);
    Rcpp::traits::input_parameter< const arma::cx_colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type jmpPar(jmpParSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluateTransform(genPtr_, beta, jmpPar));
    return rcpp_result_gen;
END_RCPP
}
