// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: hit.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 11000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


CAPNP_BEGIN_HEADER

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9082a6567e4a8bf5);
CAPNP_DECLARE_SCHEMA(a37f657dc27bfaaa);
CAPNP_DECLARE_SCHEMA(ae354d4f3839ae79);

}  // namespace schemas
}  // namespace capnp


struct Signal {
  Signal() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9082a6567e4a8bf5, 6, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Filterbank {
  Filterbank() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a37f657dc27bfaaa, 9, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Hit {
  Hit() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ae354d4f3839ae79, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Signal::Reader {
public:
  typedef Signal Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline double getFrequency() const;

  inline  ::int32_t getIndex() const;

  inline  ::int32_t getDriftSteps() const;

  inline double getDriftRate() const;

  inline float getSnr() const;

  inline  ::int32_t getCoarseChannel() const;

  inline  ::int32_t getBeam() const;

  inline  ::int32_t getNumTimesteps() const;

  inline float getPower() const;

  inline float getIncoherentPower() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Signal::Builder {
public:
  typedef Signal Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline double getFrequency();
  inline void setFrequency(double value);

  inline  ::int32_t getIndex();
  inline void setIndex( ::int32_t value);

  inline  ::int32_t getDriftSteps();
  inline void setDriftSteps( ::int32_t value);

  inline double getDriftRate();
  inline void setDriftRate(double value);

  inline float getSnr();
  inline void setSnr(float value);

  inline  ::int32_t getCoarseChannel();
  inline void setCoarseChannel( ::int32_t value);

  inline  ::int32_t getBeam();
  inline void setBeam( ::int32_t value);

  inline  ::int32_t getNumTimesteps();
  inline void setNumTimesteps( ::int32_t value);

  inline float getPower();
  inline void setPower(float value);

  inline float getIncoherentPower();
  inline void setIncoherentPower(float value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Signal::Pipeline {
public:
  typedef Signal Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Filterbank::Reader {
public:
  typedef Filterbank Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasSourceName() const;
  inline  ::capnp::Text::Reader getSourceName() const;

  inline double getFch1() const;

  inline double getFoff() const;

  inline double getTstart() const;

  inline double getTsamp() const;

  inline double getRa() const;

  inline double getDec() const;

  inline  ::int32_t getTelescopeId() const;

  inline  ::int32_t getNumTimesteps() const;

  inline  ::int32_t getNumChannels() const;

  inline bool hasData() const;
  inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Reader getData() const;

  inline  ::int32_t getCoarseChannel() const;

  inline  ::int32_t getStartChannel() const;

  inline  ::int32_t getBeam() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Filterbank::Builder {
public:
  typedef Filterbank Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSourceName();
  inline  ::capnp::Text::Builder getSourceName();
  inline void setSourceName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initSourceName(unsigned int size);
  inline void adoptSourceName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownSourceName();

  inline double getFch1();
  inline void setFch1(double value);

  inline double getFoff();
  inline void setFoff(double value);

  inline double getTstart();
  inline void setTstart(double value);

  inline double getTsamp();
  inline void setTsamp(double value);

  inline double getRa();
  inline void setRa(double value);

  inline double getDec();
  inline void setDec(double value);

  inline  ::int32_t getTelescopeId();
  inline void setTelescopeId( ::int32_t value);

  inline  ::int32_t getNumTimesteps();
  inline void setNumTimesteps( ::int32_t value);

  inline  ::int32_t getNumChannels();
  inline void setNumChannels( ::int32_t value);

  inline bool hasData();
  inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Builder getData();
  inline void setData( ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setData(::kj::ArrayPtr<const float> value);
  inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>> disownData();

  inline  ::int32_t getCoarseChannel();
  inline void setCoarseChannel( ::int32_t value);

  inline  ::int32_t getStartChannel();
  inline void setStartChannel( ::int32_t value);

  inline  ::int32_t getBeam();
  inline void setBeam( ::int32_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Filterbank::Pipeline {
public:
  typedef Filterbank Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Hit::Reader {
public:
  typedef Hit Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasSignal() const;
  inline  ::Signal::Reader getSignal() const;

  inline bool hasFilterbank() const;
  inline  ::Filterbank::Reader getFilterbank() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Hit::Builder {
public:
  typedef Hit Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSignal();
  inline  ::Signal::Builder getSignal();
  inline void setSignal( ::Signal::Reader value);
  inline  ::Signal::Builder initSignal();
  inline void adoptSignal(::capnp::Orphan< ::Signal>&& value);
  inline ::capnp::Orphan< ::Signal> disownSignal();

  inline bool hasFilterbank();
  inline  ::Filterbank::Builder getFilterbank();
  inline void setFilterbank( ::Filterbank::Reader value);
  inline  ::Filterbank::Builder initFilterbank();
  inline void adoptFilterbank(::capnp::Orphan< ::Filterbank>&& value);
  inline ::capnp::Orphan< ::Filterbank> disownFilterbank();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Hit::Pipeline {
public:
  typedef Hit Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::Signal::Pipeline getSignal();
  inline  ::Filterbank::Pipeline getFilterbank();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline double Signal::Reader::getFrequency() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double Signal::Builder::getFrequency() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setFrequency(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Signal::Reader::getIndex() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Signal::Builder::getIndex() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setIndex( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Signal::Reader::getDriftSteps() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Signal::Builder::getDriftSteps() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setDriftSteps( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline double Signal::Reader::getDriftRate() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline double Signal::Builder::getDriftRate() {
  return _builder.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setDriftRate(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline float Signal::Reader::getSnr() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline float Signal::Builder::getSnr() {
  return _builder.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setSnr(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Signal::Reader::getCoarseChannel() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Signal::Builder::getCoarseChannel() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setCoarseChannel( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Signal::Reader::getBeam() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Signal::Builder::getBeam() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setBeam( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Signal::Reader::getNumTimesteps() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Signal::Builder::getNumTimesteps() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setNumTimesteps( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS, value);
}

inline float Signal::Reader::getPower() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline float Signal::Builder::getPower() {
  return _builder.getDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setPower(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline float Signal::Reader::getIncoherentPower() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}

inline float Signal::Builder::getIncoherentPower() {
  return _builder.getDataField<float>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}
inline void Signal::Builder::setIncoherentPower(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS, value);
}

inline bool Filterbank::Reader::hasSourceName() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Filterbank::Builder::hasSourceName() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Filterbank::Reader::getSourceName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Filterbank::Builder::getSourceName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Filterbank::Builder::setSourceName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Filterbank::Builder::initSourceName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Filterbank::Builder::adoptSourceName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Filterbank::Builder::disownSourceName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline double Filterbank::Reader::getFch1() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getFch1() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setFch1(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline double Filterbank::Reader::getFoff() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getFoff() {
  return _builder.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setFoff(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline double Filterbank::Reader::getTstart() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getTstart() {
  return _builder.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setTstart(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline double Filterbank::Reader::getTsamp() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getTsamp() {
  return _builder.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setTsamp(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline double Filterbank::Reader::getRa() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getRa() {
  return _builder.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setRa(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline double Filterbank::Reader::getDec() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline double Filterbank::Builder::getDec() {
  return _builder.getDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setDec(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Filterbank::Reader::getTelescopeId() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getTelescopeId() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setTelescopeId( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Filterbank::Reader::getNumTimesteps() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getNumTimesteps() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setNumTimesteps( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Filterbank::Reader::getNumChannels() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<14>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getNumChannels() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<14>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setNumChannels( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<14>() * ::capnp::ELEMENTS, value);
}

inline bool Filterbank::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Filterbank::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Reader Filterbank::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Builder Filterbank::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Filterbank::Builder::setData( ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void Filterbank::Builder::setData(::kj::ArrayPtr<const float> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>::Builder Filterbank::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Filterbank::Builder::adoptData(
    ::capnp::Orphan< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>> Filterbank::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline  ::int32_t Filterbank::Reader::getCoarseChannel() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getCoarseChannel() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setCoarseChannel( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Filterbank::Reader::getStartChannel() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getStartChannel() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setStartChannel( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Filterbank::Reader::getBeam() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<17>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Filterbank::Builder::getBeam() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<17>() * ::capnp::ELEMENTS);
}
inline void Filterbank::Builder::setBeam( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<17>() * ::capnp::ELEMENTS, value);
}

inline bool Hit::Reader::hasSignal() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Hit::Builder::hasSignal() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::Signal::Reader Hit::Reader::getSignal() const {
  return ::capnp::_::PointerHelpers< ::Signal>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::Signal::Builder Hit::Builder::getSignal() {
  return ::capnp::_::PointerHelpers< ::Signal>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::Signal::Pipeline Hit::Pipeline::getSignal() {
  return  ::Signal::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Hit::Builder::setSignal( ::Signal::Reader value) {
  ::capnp::_::PointerHelpers< ::Signal>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::Signal::Builder Hit::Builder::initSignal() {
  return ::capnp::_::PointerHelpers< ::Signal>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Hit::Builder::adoptSignal(
    ::capnp::Orphan< ::Signal>&& value) {
  ::capnp::_::PointerHelpers< ::Signal>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Signal> Hit::Builder::disownSignal() {
  return ::capnp::_::PointerHelpers< ::Signal>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Hit::Reader::hasFilterbank() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Hit::Builder::hasFilterbank() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::Filterbank::Reader Hit::Reader::getFilterbank() const {
  return ::capnp::_::PointerHelpers< ::Filterbank>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::Filterbank::Builder Hit::Builder::getFilterbank() {
  return ::capnp::_::PointerHelpers< ::Filterbank>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::Filterbank::Pipeline Hit::Pipeline::getFilterbank() {
  return  ::Filterbank::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void Hit::Builder::setFilterbank( ::Filterbank::Reader value) {
  ::capnp::_::PointerHelpers< ::Filterbank>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::Filterbank::Builder Hit::Builder::initFilterbank() {
  return ::capnp::_::PointerHelpers< ::Filterbank>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Hit::Builder::adoptFilterbank(
    ::capnp::Orphan< ::Filterbank>&& value) {
  ::capnp::_::PointerHelpers< ::Filterbank>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Filterbank> Hit::Builder::disownFilterbank() {
  return ::capnp::_::PointerHelpers< ::Filterbank>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}


CAPNP_END_HEADER

