// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_testRcppInterfaceExporter_RCPPEXPORTS_H_GEN_
#define RCPP_testRcppInterfaceExporter_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace testRcppInterfaceExporter {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("testRcppInterfaceExporter", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("testRcppInterfaceExporter", "_testRcppInterfaceExporter_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in testRcppInterfaceExporter");
            }
        }
    }

    inline SEXP test_cpp_interface(SEXP x, bool fast = false) {
        typedef SEXP(*Ptr_test_cpp_interface)(SEXP,SEXP);
        static Ptr_test_cpp_interface p_test_cpp_interface = NULL;
        if (p_test_cpp_interface == NULL) {
            validateSignature("SEXP(*test_cpp_interface)(SEXP,bool)");
            p_test_cpp_interface = (Ptr_test_cpp_interface)R_GetCCallable("testRcppInterfaceExporter", "_testRcppInterfaceExporter_test_cpp_interface");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_test_cpp_interface(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(fast)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

}

#endif // RCPP_testRcppInterfaceExporter_RCPPEXPORTS_H_GEN_
