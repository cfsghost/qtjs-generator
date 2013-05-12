#pragma once

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


namespace cpgf {

template <typename From>
struct IsConvertible <From, ::QChar, typename GEnableIfResult<
    GOrResult<
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>
    >
    >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible <From, ::QByteArray, typename GEnableIfResult<
    GOrResult<
        IsSameType<From, bool>,
        IsSameType<From, int>,
        IsSameType<From, unsigned int>,
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>
    >
    >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename To>
struct IsConvertible < const ::QByteArray, To, typename GEnableIfResult<
  GOrResult<
    GOrResult<
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
    >,
    GOrResult<
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
    >
  >
  >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};


template <typename To>
struct IsConvertible < ::QByteArray, To, typename GEnableIfResult<
  GOrResult<
    GOrResult<
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
    >,
    GOrResult<
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
    >
  >
  >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename To>
struct IsConvertible < ::QByteArray &, To, typename GEnableIfResult<
  GOrResult<
    GOrResult<
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
    >,
    GOrResult<
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
    >
  >
  >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};


template <typename To>
struct IsConvertible < const ::QByteArray &, To, typename GEnableIfResult<
  GOrResult<
    GOrResult<
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
    >,
    GOrResult<
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
    >
  >
  >::Result
> {
    G_STATIC_CONSTANT(bool, Result = false);
};


}

