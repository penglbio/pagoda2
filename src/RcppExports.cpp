// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/pagoda2.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// WriteListToBinary
void WriteListToBinary(List expL, std::string outfile, bool verbose);
RcppExport SEXP _pagoda2_WriteListToBinary(SEXP expLSEXP, SEXP outfileSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type expL(expLSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    WriteListToBinary(expL, outfile, verbose);
    return R_NilValue;
END_RCPP
}
// non0LogColLmS
int non0LogColLmS(SEXP sY, const arma::mat& X, const arma::vec& ldepth, const int maxCells, int ncores);
RcppExport SEXP _pagoda2_non0LogColLmS(SEXP sYSEXP, SEXP XSEXP, SEXP ldepthSEXP, SEXP maxCellsSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ldepth(ldepthSEXP);
    Rcpp::traits::input_parameter< const int >::type maxCells(maxCellsSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(non0LogColLmS(sY, X, ldepth, maxCells, ncores));
    return rcpp_result_gen;
END_RCPP
}
// colMeanVarS
Rcpp::DataFrame colMeanVarS(SEXP sY, SEXP rowSel, int ncores);
RcppExport SEXP _pagoda2_colMeanVarS(SEXP sYSEXP, SEXP rowSelSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(colMeanVarS(sY, rowSel, ncores));
    return rcpp_result_gen;
END_RCPP
}
// colSumByFac
arma::mat colSumByFac(SEXP sY, SEXP rowSel);
RcppExport SEXP _pagoda2_colSumByFac(SEXP sYSEXP, SEXP rowSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumByFac(sY, rowSel));
    return rcpp_result_gen;
END_RCPP
}
// inplaceColMult
int inplaceColMult(SEXP sY, const arma::vec& mult, SEXP rowSel, int ncores);
RcppExport SEXP _pagoda2_inplaceColMult(SEXP sYSEXP, SEXP multSEXP, SEXP rowSelSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mult(multSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(inplaceColMult(sY, mult, rowSel, ncores));
    return rcpp_result_gen;
END_RCPP
}
// inplaceWinsorizeSparseCols
int inplaceWinsorizeSparseCols(SEXP sY, const int n, int ncores);
RcppExport SEXP _pagoda2_inplaceWinsorizeSparseCols(SEXP sYSEXP, SEXP nSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(inplaceWinsorizeSparseCols(sY, n, ncores));
    return rcpp_result_gen;
END_RCPP
}
// jsDist
arma::mat jsDist(const arma::mat& m);
RcppExport SEXP _pagoda2_jsDist(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(jsDist(m));
    return rcpp_result_gen;
END_RCPP
}
// orderColumnRows
arma::ivec orderColumnRows(const arma::ivec& p, arma::ivec& i);
RcppExport SEXP _pagoda2_orderColumnRows(SEXP pSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(orderColumnRows(p, i));
    return rcpp_result_gen;
END_RCPP
}
// smatColVecCorr
arma::vec smatColVecCorr(SEXP sY, SEXP sv, bool parallel);
RcppExport SEXP _pagoda2_smatColVecCorr(SEXP sYSEXP, SEXP svSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sv(svSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(smatColVecCorr(sY, sv, parallel));
    return rcpp_result_gen;
END_RCPP
}
// arma_mat_cor
arma::mat arma_mat_cor(const arma::mat& m);
RcppExport SEXP _pagoda2_arma_mat_cor(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_mat_cor(m));
    return rcpp_result_gen;
END_RCPP
}
// n2Knn
arma::sp_mat n2Knn(const NumericMatrix& m, int k, int nThreads, bool verbose, string indexType, int M, int MaxM0);
RcppExport SEXP _pagoda2_n2Knn(SEXP mSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP verboseSEXP, SEXP indexTypeSEXP, SEXP MSEXP, SEXP MaxM0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< string >::type indexType(indexTypeSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type MaxM0(MaxM0SEXP);
    rcpp_result_gen = Rcpp::wrap(n2Knn(m, k, nThreads, verbose, indexType, M, MaxM0));
    return rcpp_result_gen;
END_RCPP
}
// matWCorr
SEXP matWCorr(SEXP Mat, SEXP Matw);
RcppExport SEXP _pagoda2_matWCorr(SEXP MatSEXP, SEXP MatwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Matw(MatwSEXP);
    rcpp_result_gen = Rcpp::wrap(matWCorr(Mat, Matw));
    return rcpp_result_gen;
END_RCPP
}
// winsorizeMatrix
SEXP winsorizeMatrix(SEXP Mat, SEXP Trim);
RcppExport SEXP _pagoda2_winsorizeMatrix(SEXP MatSEXP, SEXP TrimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Trim(TrimSEXP);
    rcpp_result_gen = Rcpp::wrap(winsorizeMatrix(Mat, Trim));
    return rcpp_result_gen;
END_RCPP
}
// plSemicompleteCor2
SEXP plSemicompleteCor2(SEXP Pl);
RcppExport SEXP _pagoda2_plSemicompleteCor2(SEXP PlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Pl(PlSEXP);
    rcpp_result_gen = Rcpp::wrap(plSemicompleteCor2(Pl));
    return rcpp_result_gen;
END_RCPP
}
// avg_rank
Rcpp::NumericVector avg_rank(Rcpp::NumericVector x);
RcppExport SEXP _pagoda2_avg_rank(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(avg_rank(x));
    return rcpp_result_gen;
END_RCPP
}
// sparse_matrix_column_ranks
S4 sparse_matrix_column_ranks(const SEXP sY);
RcppExport SEXP _pagoda2_sparse_matrix_column_ranks(SEXP sYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type sY(sYSEXP);
    rcpp_result_gen = Rcpp::wrap(sparse_matrix_column_ranks(sY));
    return rcpp_result_gen;
END_RCPP
}
// nearbyPointsGreedyCluster
IntegerVector nearbyPointsGreedyCluster(NumericVector p, double windowSize);
RcppExport SEXP _pagoda2_nearbyPointsGreedyCluster(SEXP pSEXP, SEXP windowSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type windowSize(windowSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(nearbyPointsGreedyCluster(p, windowSize));
    return rcpp_result_gen;
END_RCPP
}
// closestNPointsToSegments
List closestNPointsToSegments(NumericVector s, NumericVector e, NumericVector p, IntegerVector tss, int N);
RcppExport SEXP _pagoda2_closestNPointsToSegments(SEXP sSEXP, SEXP eSEXP, SEXP pSEXP, SEXP tssSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type e(eSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type tss(tssSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(closestNPointsToSegments(s, e, p, tss, N));
    return rcpp_result_gen;
END_RCPP
}
// closestNSegmentsToPoints
List closestNSegmentsToPoints(NumericVector s, NumericVector e, NumericVector p, IntegerVector tss, int N);
RcppExport SEXP _pagoda2_closestNSegmentsToPoints(SEXP sSEXP, SEXP eSEXP, SEXP pSEXP, SEXP tssSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type e(eSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type tss(tssSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(closestNSegmentsToPoints(s, e, p, tss, N));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pagoda2_WriteListToBinary", (DL_FUNC) &_pagoda2_WriteListToBinary, 3},
    {"_pagoda2_non0LogColLmS", (DL_FUNC) &_pagoda2_non0LogColLmS, 5},
    {"_pagoda2_colMeanVarS", (DL_FUNC) &_pagoda2_colMeanVarS, 3},
    {"_pagoda2_colSumByFac", (DL_FUNC) &_pagoda2_colSumByFac, 2},
    {"_pagoda2_inplaceColMult", (DL_FUNC) &_pagoda2_inplaceColMult, 4},
    {"_pagoda2_inplaceWinsorizeSparseCols", (DL_FUNC) &_pagoda2_inplaceWinsorizeSparseCols, 3},
    {"_pagoda2_jsDist", (DL_FUNC) &_pagoda2_jsDist, 1},
    {"_pagoda2_orderColumnRows", (DL_FUNC) &_pagoda2_orderColumnRows, 2},
    {"_pagoda2_smatColVecCorr", (DL_FUNC) &_pagoda2_smatColVecCorr, 3},
    {"_pagoda2_arma_mat_cor", (DL_FUNC) &_pagoda2_arma_mat_cor, 1},
    {"_pagoda2_n2Knn", (DL_FUNC) &_pagoda2_n2Knn, 7},
    {"_pagoda2_matWCorr", (DL_FUNC) &_pagoda2_matWCorr, 2},
    {"_pagoda2_winsorizeMatrix", (DL_FUNC) &_pagoda2_winsorizeMatrix, 2},
    {"_pagoda2_plSemicompleteCor2", (DL_FUNC) &_pagoda2_plSemicompleteCor2, 1},
    {"_pagoda2_avg_rank", (DL_FUNC) &_pagoda2_avg_rank, 1},
    {"_pagoda2_sparse_matrix_column_ranks", (DL_FUNC) &_pagoda2_sparse_matrix_column_ranks, 1},
    {"_pagoda2_nearbyPointsGreedyCluster", (DL_FUNC) &_pagoda2_nearbyPointsGreedyCluster, 2},
    {"_pagoda2_closestNPointsToSegments", (DL_FUNC) &_pagoda2_closestNPointsToSegments, 5},
    {"_pagoda2_closestNSegmentsToPoints", (DL_FUNC) &_pagoda2_closestNSegmentsToPoints, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_pagoda2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
