//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.6

// ignore_for_file: unused_import

import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'severity.g.dart';

class Severity extends EnumClass {

  /// Severity of the message.
  @BuiltValueEnumConst(wireName: r'INFO')
  static const Severity INFO = _$INFO;
  /// Severity of the message.
  @BuiltValueEnumConst(wireName: r'WARNING')
  static const Severity WARNING = _$WARNING;
  /// Severity of the message.
  @BuiltValueEnumConst(wireName: r'ERROR')
  static const Severity ERROR = _$ERROR;

  static Serializer<Severity> get serializer => _$severitySerializer;

  const Severity._(String name): super(name);

  static BuiltSet<Severity> get values => _$values;
  static Severity valueOf(String name) => _$valueOf(name);
}

/// Optionally, enum_class can generate a mixin to go with your enum for use
/// with Angular. It exposes your enum constants as getters. So, if you mix it
/// in to your Dart component class, the values become available to the
/// corresponding Angular template.
///
/// Trigger mixin generation by writing a line like this one next to your enum.
abstract class SeverityMixin = Object with _$SeverityMixin;

