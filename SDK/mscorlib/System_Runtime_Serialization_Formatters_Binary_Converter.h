#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_TypeCode.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct Converter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t primitiveTypeEnumLength;
			IL2CPP::Array<mscorlib::System::Type*>* typeA;
			IL2CPP::Array<mscorlib::System::Type*>* arrayTypeA;
			IL2CPP::Array<mscorlib::System::String*>* valueA;
			IL2CPP::Array<mscorlib::System::TypeCode>* typeCodeA;
			IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>* codeA;
			mscorlib::System::Type* typeofISerializable;
			mscorlib::System::Type* typeofString;
			mscorlib::System::Type* typeofConverter;
			mscorlib::System::Type* typeofBoolean;
			mscorlib::System::Type* typeofByte;
			mscorlib::System::Type* typeofChar;
			mscorlib::System::Type* typeofDecimal;
			mscorlib::System::Type* typeofDouble;
			mscorlib::System::Type* typeofInt16;
			mscorlib::System::Type* typeofInt32;
			mscorlib::System::Type* typeofInt64;
			mscorlib::System::Type* typeofSByte;
			mscorlib::System::Type* typeofSingle;
			mscorlib::System::Type* typeofTimeSpan;
			mscorlib::System::Type* typeofDateTime;
			mscorlib::System::Type* typeofUInt16;
			mscorlib::System::Type* typeofUInt32;
			mscorlib::System::Type* typeofUInt64;
			mscorlib::System::Type* typeofObject;
			mscorlib::System::Type* typeofSystemVoid;
			mscorlib::System::Reflection::Assembly* urtAssembly;
			mscorlib::System::String* urtAssemblyString;
			mscorlib::System::Type* typeofTypeArray;
			mscorlib::System::Type* typeofObjectArray;
			mscorlib::System::Type* typeofStringArray;
			mscorlib::System::Type* typeofBooleanArray;
			mscorlib::System::Type* typeofByteArray;
			mscorlib::System::Type* typeofCharArray;
			mscorlib::System::Type* typeofDecimalArray;
			mscorlib::System::Type* typeofDoubleArray;
			mscorlib::System::Type* typeofInt16Array;
			mscorlib::System::Type* typeofInt32Array;
			mscorlib::System::Type* typeofInt64Array;
			mscorlib::System::Type* typeofSByteArray;
			mscorlib::System::Type* typeofSingleArray;
			mscorlib::System::Type* typeofTimeSpanArray;
			mscorlib::System::Type* typeofDateTimeArray;
			mscorlib::System::Type* typeofUInt16Array;
			mscorlib::System::Type* typeofUInt32Array;
			mscorlib::System::Type* typeofUInt64Array;
			mscorlib::System::Type* typeofMarshalByRefObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(mscorlib::System::Type* type);
		static bool IsWriteAsByteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static int32_t TypeLength(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static mscorlib::System::Type* ToArrayType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static void InitTypeA();
		static void InitArrayTypeA();
		static mscorlib::System::Type* ToType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static mscorlib::System::Array* CreatePrimitiveArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, int32_t length);
		static bool IsPrimitiveArray(mscorlib::System::Type* type, mscorlib::System::Object& typeInformation);
		static void InitValueA();
		static mscorlib::System::String* ToComType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static void InitTypeCodeA();
		static mscorlib::System::TypeCode ToTypeCode(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static void InitCodeA();
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(mscorlib::System::TypeCode typeCode);
		static mscorlib::System::Object* FromString(mscorlib::System::String* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		static void _cctor();
	};
}

