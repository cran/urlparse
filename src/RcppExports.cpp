// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// url_encoder
CharacterVector url_encoder(CharacterVector urls, CharacterVector safe);
RcppExport SEXP _urlparse_url_encoder(SEXP urlsSEXP, SEXP safeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type safe(safeSEXP);
    rcpp_result_gen = Rcpp::wrap(url_encoder(urls, safe));
    return rcpp_result_gen;
END_RCPP
}
// url_decoder
CharacterVector url_decoder(CharacterVector urls);
RcppExport SEXP _urlparse_url_decoder(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_decoder(urls));
    return rcpp_result_gen;
END_RCPP
}
// url_parse
Rcpp::List url_parse(const std::string& url);
RcppExport SEXP _urlparse_url_parse(SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(url_parse(url));
    return rcpp_result_gen;
END_RCPP
}
// url_parse_v2
Rcpp::List url_parse_v2(std::vector<std::string> url);
RcppExport SEXP _urlparse_url_parse_v2(SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(url_parse_v2(url));
    return rcpp_result_gen;
END_RCPP
}
// url_build
std::string url_build(const Rcpp::List& url_components);
RcppExport SEXP _urlparse_url_build(SEXP url_componentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type url_components(url_componentsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_build(url_components));
    return rcpp_result_gen;
END_RCPP
}
// url_modify
std::string url_modify(const std::string& url, Nullable<std::string> scheme, Nullable<std::string> user, Nullable<std::string> password, Nullable<std::string> host, Nullable<RObject> port, Nullable<std::string> path, Nullable<RObject> query, Nullable<std::string> fragment);
RcppExport SEXP _urlparse_url_modify(SEXP urlSEXP, SEXP schemeSEXP, SEXP userSEXP, SEXP passwordSEXP, SEXP hostSEXP, SEXP portSEXP, SEXP pathSEXP, SEXP querySEXP, SEXP fragmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type scheme(schemeSEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type password(passwordSEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type host(hostSEXP);
    Rcpp::traits::input_parameter< Nullable<RObject> >::type port(portSEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Nullable<RObject> >::type query(querySEXP);
    Rcpp::traits::input_parameter< Nullable<std::string> >::type fragment(fragmentSEXP);
    rcpp_result_gen = Rcpp::wrap(url_modify(url, scheme, user, password, host, port, path, query, fragment));
    return rcpp_result_gen;
END_RCPP
}
// set_scheme
std::string set_scheme(const std::string& url, const std::string& scheme);
RcppExport SEXP _urlparse_set_scheme(SEXP urlSEXP, SEXP schemeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type scheme(schemeSEXP);
    rcpp_result_gen = Rcpp::wrap(set_scheme(url, scheme));
    return rcpp_result_gen;
END_RCPP
}
// set_user
std::string set_user(const std::string& url, const std::string& user);
RcppExport SEXP _urlparse_set_user(SEXP urlSEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type user(userSEXP);
    rcpp_result_gen = Rcpp::wrap(set_user(url, user));
    return rcpp_result_gen;
END_RCPP
}
// set_password
std::string set_password(const std::string& url, const std::string& password);
RcppExport SEXP _urlparse_set_password(SEXP urlSEXP, SEXP passwordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type password(passwordSEXP);
    rcpp_result_gen = Rcpp::wrap(set_password(url, password));
    return rcpp_result_gen;
END_RCPP
}
// set_host
std::string set_host(const std::string& url, const std::string& host);
RcppExport SEXP _urlparse_set_host(SEXP urlSEXP, SEXP hostSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type host(hostSEXP);
    rcpp_result_gen = Rcpp::wrap(set_host(url, host));
    return rcpp_result_gen;
END_RCPP
}
// set_port
std::string set_port(const std::string& url, RObject port);
RcppExport SEXP _urlparse_set_port(SEXP urlSEXP, SEXP portSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< RObject >::type port(portSEXP);
    rcpp_result_gen = Rcpp::wrap(set_port(url, port));
    return rcpp_result_gen;
END_RCPP
}
// set_path
std::string set_path(const std::string& url, const std::string& path);
RcppExport SEXP _urlparse_set_path(SEXP urlSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(set_path(url, path));
    return rcpp_result_gen;
END_RCPP
}
// set_query
std::string set_query(const std::string& url, RObject query);
RcppExport SEXP _urlparse_set_query(SEXP urlSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< RObject >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(set_query(url, query));
    return rcpp_result_gen;
END_RCPP
}
// set_fragment
std::string set_fragment(const std::string& url, const std::string& fragment);
RcppExport SEXP _urlparse_set_fragment(SEXP urlSEXP, SEXP fragmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type fragment(fragmentSEXP);
    rcpp_result_gen = Rcpp::wrap(set_fragment(url, fragment));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_urlparse_url_encoder", (DL_FUNC) &_urlparse_url_encoder, 2},
    {"_urlparse_url_decoder", (DL_FUNC) &_urlparse_url_decoder, 1},
    {"_urlparse_url_parse", (DL_FUNC) &_urlparse_url_parse, 1},
    {"_urlparse_url_parse_v2", (DL_FUNC) &_urlparse_url_parse_v2, 1},
    {"_urlparse_url_build", (DL_FUNC) &_urlparse_url_build, 1},
    {"_urlparse_url_modify", (DL_FUNC) &_urlparse_url_modify, 9},
    {"_urlparse_set_scheme", (DL_FUNC) &_urlparse_set_scheme, 2},
    {"_urlparse_set_user", (DL_FUNC) &_urlparse_set_user, 2},
    {"_urlparse_set_password", (DL_FUNC) &_urlparse_set_password, 2},
    {"_urlparse_set_host", (DL_FUNC) &_urlparse_set_host, 2},
    {"_urlparse_set_port", (DL_FUNC) &_urlparse_set_port, 2},
    {"_urlparse_set_path", (DL_FUNC) &_urlparse_set_path, 2},
    {"_urlparse_set_query", (DL_FUNC) &_urlparse_set_query, 2},
    {"_urlparse_set_fragment", (DL_FUNC) &_urlparse_set_fragment, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_urlparse(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
