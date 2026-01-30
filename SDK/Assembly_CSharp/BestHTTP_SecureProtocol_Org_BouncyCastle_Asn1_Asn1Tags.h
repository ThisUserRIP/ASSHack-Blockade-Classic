#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct Asn1Tags : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Boolean;
			int32_t Integer;
			int32_t BitString;
			int32_t OctetString;
			int32_t Null;
			int32_t ObjectIdentifier;
			int32_t External;
			int32_t Enumerated;
			int32_t Sequence;
			int32_t SequenceOf;
			int32_t Set;
			int32_t SetOf;
			int32_t NumericString;
			int32_t PrintableString;
			int32_t T61String;
			int32_t VideotexString;
			int32_t IA5String;
			int32_t UtcTime;
			int32_t GeneralizedTime;
			int32_t GraphicString;
			int32_t VisibleString;
			int32_t GeneralString;
			int32_t UniversalString;
			int32_t BmpString;
			int32_t Utf8String;
			int32_t Constructed;
			int32_t Application;
			int32_t Tagged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

